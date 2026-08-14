#!/usr/bin/env python3
"""
Usage: stcDriver.py <rtspec_path> <system_under_test_path>
"""
import argparse
import re
import subprocess
import sys
import threading
from pathlib import Path

TRACE_RE = re.compile(r"^t(\d+):\s*(.+)$")
DIVIDER = "---------------------"
OUTPUT_RE = re.compile(r"output ([A-Za-z_][A-Za-z0-9_]*)(?:\(([^)]*)\))?")
TRACE_TIMEOUT = 5.0


"""Turn one CSP event string (e.g. "SimMovement::sm::registerWrite.SimMovement::sm::o_move.-2.-2")
into a plain (action, var, args) triple, e.g. ("registerWrite", "o_move", ["-2", "-2"]).
The "::"-qualified component path before each name is discarded -- only the
last segment (the action/variable name itself) is kept."""
def parse_event(ev):
    ev = ev.strip()
    if ev == "tock":
        return ("tock", None, None)
    parts = ev.split(".")
    action = parts[0].rsplit("::", 1)[-1]
    var = parts[1].rsplit("::", 1)[-1]
    args = parts[2:]
    return (action, var, args)


"""Read a .rtspec file and return {trace_id: [event_triple, ...]} for every
"tN: ev1, ev2, ..." line in it. Lines that don't match that pattern
(the cspm header/footer, comments) are skipped."""
def load_traces(rtspec_path):
    traces = {}
    for line in Path(rtspec_path).read_text().splitlines():
        m = TRACE_RE.match(line.strip())
        if not m:
            continue
        tid, body = m.groups()
        events = [parse_event(e) for e in body.split(",")]
        traces[int(tid)] = events
    return traces


"""Drop a leading prefix (e.g. "i_"/"o_") from a register name, if present."""
def strip_prefix(name, prefix):
    return name[len(prefix):] if name.startswith(prefix) else name


"""Render a bare output name + its argument strings as the text the
console is expected to print, normalising numeric args to %.6f so
"-2" and "-2.000000" compare equal."""
def canonical_token(name, args):
    if not args:
        return name
    formatted = []
    for a in args:
        try:
            formatted.append(f"{float(a):.6f}")
        except ValueError:
            formatted.append(a)
    return f"{name}({','.join(formatted)})"


"""The literal text typed at the console to fire input register 'var'.
args[0] is the true/false flag; any further companion values (args[1:])
are appended dot-separated, e.g. i_neighbourDetected.true.0 -> "neighbourDetected.0"."""
def input_token(var, args):
    name = strip_prefix(var, "i_")
    extra = args[1:]
    return name + "." + ".".join(extra) if extra else name


"""Render a registerWrite/tock event as the text it appears as on stdout."""
def event_token(action, var, args):
    if action == "tock":
        return "tock"
    return canonical_token(strip_prefix(var, "o_"), args)


"""Split a trace into (closed_cycles, open_cycle, fevent_token).

closed_cycles: list of (true_inputs, expected_tokens) for each cycle in
the prefix that is terminated by a 'tock' -- must match exactly.
open_cycle: (true_inputs, expected_tokens) for the trailing, not-yet-
closed cycle that fevent applies to.
true_inputs: list of console tokens to type (one per line) to set the
corresponding input registers true for that cycle.
"""
def split_trace(events):
    fevent = event_token(*events[-1])
    prefix = events[:-1]
    closed_cycles = []
    true_inputs = []
    expected = []
    for action, var, args in prefix:
        if action == "tock":
            closed_cycles.append((true_inputs, expected))
            true_inputs, expected = [], []
            continue
        if action == "registerRead":
            if args and args[0] == "true":
                true_inputs.append(input_token(var, args))
        elif action == "registerWrite":
            expected.append(event_token(action, var, args))
    return closed_cycles, (true_inputs, expected), fevent


"""Read stdout until the next output line or the cycle divider, and
return it as a token ('<name>' / '<name>(args)' / 'tock')."""
def next_token(proc):
    while True:
        line = proc.stdout.readline()
        if line == "":
            raise RuntimeError("program exited unexpectedly")
        m = OUTPUT_RE.search(line)
        if m:
            name, argstr = m.groups()
            args = [a.strip() for a in argstr.split(",")] if argstr else []
            return canonical_token(name, args)
        if DIVIDER in line:
            return "tock"


"""Drive one input cycle at the console: type each input that should be
true this cycle (one per line), then send a blank line to flush the
cycle, just like a human typing at the "Enter an event:" prompt."""
def send_cycle_input(proc, true_inputs):
    for token in true_inputs:
        proc.stdin.write(token + "\n")
    proc.stdin.write("\n")
    proc.stdin.flush()


"""Ask the SUT to shut down cleanly by typing "$end", and drain the one
line of output that produces. Best-effort -- if the process has already
died or the pipe is broken, just give up silently."""
def terminate(proc):
    try:
        proc.stdin.write("$end\n")
        proc.stdin.flush()
        proc.stdout.readline()
    except Exception:
        pass


"""Spawn a fresh SUT process and replay one trace against it, returning
(verdict, detail) where verdict is PASS / FAIL / INCONCLUSIVE and detail
is a list of (label, true_inputs, expected, actual) rows for reporting."""
def run_trace(binary, closed_cycles, open_cycle, fevent):
    # the program fully-buffers stdout when it isn't a tty, so force
    # line-buffering via stdbuf or the prompt/output text never gets flushed
    # until the process exits, deadlocking the read loop below.
    proc = subprocess.Popen(
        ["stdbuf", "-oL", binary],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.DEVNULL,
        text=True,
        bufsize=1,
    )
    # safety net: if the SUT ever hangs (e.g. a deadlock bug), kill it after
    # TRACE_TIMEOUT instead of letting this trace block the whole run forever.
    timer = threading.Timer(TRACE_TIMEOUT, proc.kill)
    timer.start()
    detail = []
    verdict = "INCONCLUSIVE"
    try:
        # 1. Replay every fully-specified cycle from the prefix. Each one
        # must produce its expected outputs and nothing else, exactly, before
        # its tock -- any deviation means the SUT didn't reproduce the
        # prefix, so the trace is INCONCLUSIVE and we stop here.
        for true_inputs, expected in closed_cycles:
            send_cycle_input(proc, true_inputs)
            actual = [next_token(proc)]
            while actual[-1] != "tock":
                actual.append(next_token(proc))
            actual = actual[:-1]  # drop the trailing 'tock' sentinel
            detail.append(("closed cycle", true_inputs, expected, actual))
            if actual != expected:
                terminate(proc)
                timer.cancel()
                return verdict, detail

        # 2. Replay the final, not-yet-closed cycle that the forbidden event
        # (fevent) applies to. First confirm its expected outputs occur, in
        # order, exactly as listed in the prefix.
        true_inputs, expected = open_cycle
        send_cycle_input(proc, true_inputs)
        actual = []
        mismatch = False
        for exp_tok in expected:
            tok = next_token(proc)
            actual.append(tok)
            if tok != exp_tok:
                mismatch = True
                break
        detail.append(("prefix", true_inputs, expected, actual))
        if mismatch:
            # the prefix itself diverged -- can't judge refusal of fevent.
            terminate(proc)
            timer.cancel()
            return verdict, detail

        # 3. The prefix matched exactly, so now check whether the very next
        # thing the SUT does is the forbidden event. If it is -> FAIL (the
        # forbidden behaviour happened). If it's anything else -> PASS (the
        # forbidden behaviour was correctly refused).
        observed = next_token(proc)
        detail.append(("forbidden event check", None, [fevent], [observed]))
        verdict = "FAIL" if observed == fevent else "PASS"

        terminate(proc)
    finally:
        # always clean up the subprocess, even if something above raised.
        timer.cancel()
        try:
            proc.stdin.close()
        except Exception:
            pass
        try:
            proc.wait(timeout=TRACE_TIMEOUT)
        except subprocess.TimeoutExpired:
            proc.kill()
    return verdict, detail


def main():
    # ---- parse the two required command-line arguments ----
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("rtspec", help="path to the .rtspec trace file")
    ap.add_argument("system_under_test", help="path to the compiled program to drive (e.g. .../SRanger/main)")
    args = ap.parse_args()

    # ---- load every trace from the file and run them all, in order ----
    traces = load_traces(args.rtspec)
    ids = sorted(traces)

    counts = {"PASS": 0, "FAIL": 0, "INCONCLUSIVE": 0, "ERROR": 0}
    verdicts = {}
    for tid in ids:
        closed_cycles, open_cycle, fevent = split_trace(traces[tid])
        try:
            verdict, detail = run_trace(args.system_under_test, closed_cycles, open_cycle, fevent)
        except RuntimeError as e:
            # the SUT process died/misbehaved badly enough that no verdict
            # could be reached at all (distinct from INCONCLUSIVE, which
            # means it ran fine but just didn't match the trace).
            print(f"t{tid}: ERROR ({e})")
            counts["ERROR"] += 1
            verdicts[tid] = "ERROR"
            continue
        counts[verdict] += 1
        verdicts[tid] = verdict
        print(f"t{tid}: {verdict}")
        # for anything other than a clean PASS, print exactly what was
        # expected vs. what actually happened, cycle by cycle, so the
        # mismatch is easy to see without re-running anything.
        if verdict != "PASS":
            for label, true_inputs, expected, actual in detail:
                tag = "ok" if expected == actual else "MISMATCH"
                inp = f" inputs={true_inputs}" if true_inputs is not None else ""
                print(f"    {label}{inp} [{tag}]")
                print(f"        expected: {expected}")
                print(f"        actual:   {actual}")

    # ---- print the overall pass/fail/inconclusive/error tally ----
    total = len(ids)
    print(
        f"\n{counts['PASS']} pass, {counts['FAIL']} fail, "
        f"{counts['INCONCLUSIVE']} inconclusive, {counts['ERROR']} error, {total} total"
    )

    # ---- always write a summary file to stc-driver/verdicts/<rtspec-name>-verdict ----
    verdicts_dir = Path(__file__).resolve().parent / "verdicts"
    verdicts_dir.mkdir(exist_ok=True)
    results_file = verdicts_dir / f"{Path(args.rtspec).stem}-verdict"

    lines = [
        f"{counts['PASS']} pass, {counts['FAIL']} fail, "
        f"{counts['INCONCLUSIVE']} inconclusive, {counts['ERROR']} error, {total} total",
        "",
    ]
    for label in ("PASS", "FAIL", "INCONCLUSIVE", "ERROR"):
        tids = sorted(tid for tid, v in verdicts.items() if v == label)
        lines.append(f"{label} ({len(tids)}): {', '.join(f't{t}' for t in tids)}")
    results_file.write_text("\n".join(lines) + "\n")
    print(f"\nwrote summary to {results_file}")

    # non-zero exit code if anything actually failed or errored, so this
    # script can be used as a CI gate.
    sys.exit(1 if counts["FAIL"] or counts["ERROR"] else 0)


if __name__ == "__main__":
    main()
