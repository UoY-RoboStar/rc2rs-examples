package pre_pkg_main_sim interface I_clone_deadlineCheck_2_softwareOps_clone_normal_stm0_s_t2_s_f_dop_1 {
	clone_deadlineCheck_2 ( d : nat )
}

interface Iexec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 {
	var exec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 : boolean = false
}

interface Iexec_ds_stm0_s {
	var exec_ds_stm0_s : boolean = false
}

interface Iexec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 {
	var exec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 : boolean = false
}

interface Iexec_ms_stm0_s {
	var exec_ms_stm0_s : boolean = false
}

interface Iinact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 {
	var inact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 : boolean = true
}

interface Iinact_stm0_s {
	var inact_stm0_s : boolean = true
}

interface I_clone_normal_stm0_s_t2_s_f_dop_1_softwareOps_stm0 {
	clone_normal_stm0_s_t2_s_f_dop_1 ( )
}

interface I1_inpEvs_stm0 {
	event ev1 : int
}

interface IctrEvars_stm0 {
	var ev1F : boolean = true
}

interface I_opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 {
	opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 ( )
}

interface I_opFinalDuring_stm0_s {
	opFinalDuring_stm0_s ( )
}

interface I_SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 {
	SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 ( )
}

interface I_SFinal_stm0_s {
	SFinal_stm0_s ( )
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		uses main::I1
	}

	cref ctrl_ref0 = ctrl0
connection rp0 on ev1 to ctrl_ref0 on ev1 ( _async )
}

controller ctrl0 {
	uses main::I1 opref ctrl0_ref_clone_normal_stm0_s_t2_s_f_dop_1 = clone_normal_stm0_s_t2_s_f_dop_1
	opref ctrl0_ref_clone_deadlineCheck_2 = clone_deadlineCheck_2
	opref ctrl0_ref_SFinal_stm0_s = SFinal_stm0_s
	opref ctrl0_ref_SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2
	opref ctrl0_ref_opFinalDuring_stm0_s = opFinalDuring_stm0_s
	opref ctrl0_ref_opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2
	sref stm_ref0 = stm0
	cycleDef cycle == 1
	connection ctrl0 on ev1 to stm_ref0 on ev1
}

stm stm0 {
	uses IctrEvars_stm0 uses Iexec_ds_stm0_s uses Iexec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 uses Iexec_ms_stm0_s uses Iexec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 uses Iinact_stm0_s uses Iinact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires I_clone_normal_stm0_s_t2_s_f_dop_1_softwareOps_stm0 requires I_opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires I_opFinalDuring_stm0_s requires I_SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires I_SFinal_stm0_s var x : int
	input context { uses I1_inpEvs_stm0 }
	output context { }
	cycleDef cycle == 1
	initial i
	state s {
		initial i
		state EmptyCycle {
			entry ( inact_stm0_s = false )//; inact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = false )
		}
		transition ts {
			from i
			to EmptyCycle
		}
		transition tEmptyCycleParFlow_stm0_s_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ ev1 ? x /\ ev1F ) ) )
			action SFinal_stm0_s ( )
		}
		during clone_normal_stm0_s_t2_s_f_dop_1 ( ) ; opFinalDuring_stm0_s ( )
		exit inact_stm0_s = true
	}
	final f
	transition t {
		from i
		to s
	}
	transition t2 {
		from s
		to f
		condition ( $ ev1 ? x /\ ev1F )
		action ev1F = false
	}
}

operation clone_normal_stm0_s_t2_s_f_dop_1 ( ) {
	uses Iexec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 uses Iexec_ds_stm0_s uses Iexec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 uses Iexec_ms_stm0_s uses Iinact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 uses Iinact_stm0_s requires I_clone_deadlineCheck_2_softwareOps_clone_normal_stm0_s_t2_s_f_dop_1 requires IctrEvars_stm0 requires I_opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires I_SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires I_SFinal_stm0_s initial i0
	state S0 {
		initial i0_S0
		state S1 {
			initial i
			state EmptyCycle {
			}
			transition tS1 {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_clone_normal_stm0_s_t2_s_f_dop_1_S0_S1_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( true ) \/ ( true ) )
				action exec ; ev1F = true
			}
		}
		state S2 {
			initial i
			state EmptyCycle {
				entry ( inact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = false ; inact_stm0_s = false )
			}
			transition tS2 {
				from i
				to EmptyCycle
			}
			transition tEmptyCycleParFlow_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				action SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 ( )
			}
			during clone_deadlineCheck_2 ( 0 ) ; opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 ( )
			exit inact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = true
		}
		transition t0 {
			from i0_S0
			to S1
		}
		transition t1 {
			from S1
			to S2
			condition true
		}
		transition t2 {
			from S2
			to S1
			condition not true
		}
	}
	transition t0 {
		from i0
		to S0
	}
	input context { }
	output context { }
}

operation clone_deadlineCheck_2 ( d : nat
) {
	requires Iexec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires Iexec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 initial i
	state S1 {
	}
	state S2 {
	}
	state sStop {
	}
	transition tr1 {
		from i
		to S1
		action # C
	}
	transition tr2 {
		from S1
		to S2
		condition since ( C ) <= 1 - 1
		action exec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = true
	}
	transition tr3 {
		from S2
		to S1
		condition exec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2
		action exec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = false
	}
	transition tr4 {
		from S1
		to sStop
		condition since ( C ) > 1 - 1
	}
	clock C
	input context { }
	output context { }
}

operation opFinalDuring_stm0_s ( ) {
	requires Iexec_ds_stm0_s requires Iexec_ms_stm0_s initial i
	state S0 {
	}
	state S1 {
	}
	transition t {
		from i
		to S0
	}
	transition t1 {
		from S0
		to S1
		action exec_ds_stm0_s = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_stm0_s
		action exec_ms_stm0_s = false
	}
	input context { }
	output context { }
}

operation opFinalDuring_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 ( ) {
	requires Iexec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires Iexec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 initial i
	state S0 {
	}
	state S1 {
	}
	transition t {
		from i
		to S0
	}
	transition t1 {
		from S0
		to S1
		action exec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2
		action exec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = false
	}
	input context { }
	output context { }
}

operation SFinal_stm0_s ( ) {
	requires IctrEvars_stm0 requires Iexec_ds_stm0_s requires Iexec_ms_stm0_s requires Iinact_stm0_s initial i
	state S1 {
	}
	final f
	transition t1 {
		from i
		to S1
	}
	transition t2 {
		from S1
		to f
		condition ( inact_stm0_s \/ exec_ds_stm0_s )
		action exec ; ev1F = true ; ( if exec_ds_stm0_s then exec_ds_stm0_s = false ; exec_ms_stm0_s = true end ; skip )
	}
	input context { }
	output context { }
}

operation SFinal_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 ( ) {
	requires IctrEvars_stm0 requires Iexec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires Iexec_ds_stm0_s requires Iexec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires Iexec_ms_stm0_s requires Iinact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 requires Iinact_stm0_s initial i
	state S1 {
	}
	final f
	transition t1 {
		from i
		to S1
	}
	transition t2 {
		from S1
		to f
		condition ( ( inact_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 \/ exec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 ) /\ ( inact_stm0_s \/ exec_ds_stm0_s ) )
		action exec ; ev1F = true ; ( if exec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 then exec_ds_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = false ; exec_ms_clone_normal_stm0_s_t2_s_f_dop_1_S0_S2 = true end ; ( if exec_ds_stm0_s then exec_ds_stm0_s = false ; exec_ms_stm0_s = true end ; skip ) )
	}
	input context { }
	output context { }
}

