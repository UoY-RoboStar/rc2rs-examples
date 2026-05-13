
# example-sranger
SRanger example with RoboChart and RoboSim (d/p-models).

## RoboChart semantics
A simplified version of the semantics is documented in `RC_simplified.assertions`,
which gets its semantics automatically generated in `csp-gen/timed/RC_simplified_assertions.csp`.
The reason this is written inside an `.assertions` file is because it facilitates
checking that indeed the simplified version is equivalent to that automatically
calcualted by RoboTool. It also contains a version outside a timed section written
in 'pure' tock-CSP.

## RoboSim (d-model) semantics
Similarly to the above, a simplified version of the semantics is documented in
`RS_simplified.rsa`. A version inside and a version outside a timed section
is provided and CSPM assertions are defined that check that they are equivalent
to the semantics automatically calculated by RoboTool.

## RoboWorld
A RoboWorld document compiled by James Baxter is included within the folder
`roboworld`.