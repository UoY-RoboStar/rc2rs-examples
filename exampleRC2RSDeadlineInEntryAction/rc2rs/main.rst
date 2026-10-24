package pre_pkg_main_sim 
interface I_clone_deadlineAction_normal_stm0_s_entry_t_1_softwareOps_clone_normal_stm0_s_entry {
	clone_deadlineAction_normal_stm0_s_entry_t_1 ( d : nat )
}

interface req_normal_stm0_s_entry_platformOps_clone_normal_stm0_s_entry {
	move ( )
}

interface I_exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 {
	var exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 : boolean = false
}

interface I_inact_clone_deadlineAction_normal_stm0_s_entry_t_1 {
	var inact_clone_deadlineAction_normal_stm0_s_entry_t_1 : boolean = true
}

interface I_clone_normal_deadlineAction_normal_stm0_s_entry_t_2_softwareOps_clone_deadlineAction_normal_stm0_s_entry_t_1 {
	clone_normal_deadlineAction_normal_stm0_s_entry_t_2 ( )
}

interface I_exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1 {
	var exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1 : boolean = false
}

interface req_normal_stm0_s_entry_t_platformOps_clone_deadlineAction_normal_stm0_s_entry_t_1 {
	move ( )
}

interface I_clone_deadlineCheck_3_softwareOps_clone_deadlineAction_normal_stm0_s_entry_t_1 {
	clone_deadlineCheck_3 ( d : nat )
}

interface I_req_normal_normal_stm0_s_entry_S0_t_localVars_3 {
	var g : boolean = false
}

interface I_clone_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_op_4_softwareOps_clone_normal_deadlineAction_normal_stm0_s_entry_t_2 {
	clone_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_op_4 ( )
}

interface I_req_normal_normal_stm0_s_entry_S0_t_platformOps_clone_normal_deadlineAction_normal_stm0_s_entry_t_2 {
	move ( )
}

interface I_req_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_localVars_4 {
	var g : boolean = false
}

interface I_clone_normal_stm0_s_entry_softwareOps_stm0 {
	clone_normal_stm0_s_entry ( )
}

interface IOps_platformOps_stm0 {
	move ( )
}

interface I_opFinalDuring_clone_deadlineAction_normal_stm0_s_entry_t_1_S0 {
	opFinalDuring_clone_deadlineAction_normal_stm0_s_entry_t_1_S0 ( )
}

interface I_SFinal_clone_deadlineAction_normal_stm0_s_entry_t_1_S0_f_EmptyCycle {
	SFinal_clone_deadlineAction_normal_stm0_s_entry_t_1_S0_f_EmptyCycle ( )
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		provides main::IOps
	}

	cref ctrl_ref0 = ctrl0

}


controller ctrl0 {
	requires main::IOps opref ctrl0_ref_clone_normal_stm0_s_entry = clone_normal_stm0_s_entry
	opref ctrl0_ref_clone_deadlineAction_normal_stm0_s_entry_t_1 = clone_deadlineAction_normal_stm0_s_entry_t_1
	opref ctrl0_ref_clone_normal_deadlineAction_normal_stm0_s_entry_t_2 = clone_normal_deadlineAction_normal_stm0_s_entry_t_2
	opref ctrl0_ref_clone_deadlineCheck_3 = clone_deadlineCheck_3
	opref ctrl0_ref_clone_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_op_4 = clone_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_op_4
	opref ctrl0_ref_opFinalDuring_clone_deadlineAction_normal_stm0_s_entry_t_1_S0 = opFinalDuring_clone_deadlineAction_normal_stm0_s_entry_t_1_S0
	opref ctrl0_ref_SFinal_clone_deadlineAction_normal_stm0_s_entry_t_1_S0_f_EmptyCycle = SFinal_clone_deadlineAction_normal_stm0_s_entry_t_1_S0_f_EmptyCycle
	sref stm_ref0 = stm0
	cycleDef cycle == 1
}

stm stm0 {
	requires I_clone_normal_stm0_s_entry_softwareOps_stm0 var x : int
	input context { }
	output context { requires IOps_platformOps_stm0 }
	cycleDef cycle == 1
	initial i
	state s {
		initial i
		state EmptyCycle {
		}
		transition ts {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_stm0_s_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec
		}
		entry clone_normal_stm0_s_entry ( )
	}
	final f
	transition t {
		from i
		to s
	}
	transition t2 {
		from s
		to f
	}
}

operation clone_normal_stm0_s_entry ( ) {
	requires I_clone_deadlineAction_normal_stm0_s_entry_t_1_softwareOps_clone_normal_stm0_s_entry initial i
	final f
	transition t {
		from i
		to f
		action clone_deadlineAction_normal_stm0_s_entry_t_1 ( 0 )
	}
	input context { }
	output context { requires req_normal_stm0_s_entry_platformOps_clone_normal_stm0_s_entry }
}

operation clone_deadlineAction_normal_stm0_s_entry_t_1 ( d : nat
) {
	uses I_exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 uses I_exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1 
	uses I_inact_clone_deadlineAction_normal_stm0_s_entry_t_1 
	requires I_clone_normal_deadlineAction_normal_stm0_s_entry_t_2_softwareOps_clone_deadlineAction_normal_stm0_s_entry_t_1 
	requires I_clone_deadlineCheck_3_softwareOps_clone_deadlineAction_normal_stm0_s_entry_t_1 
	requires I_opFinalDuring_clone_deadlineAction_normal_stm0_s_entry_t_1_S0 
	requires I_SFinal_clone_deadlineAction_normal_stm0_s_entry_t_1_S0_f_EmptyCycle var g : boolean = false
	initial i
	state S0 {
		initial i
		state S1 {
			initial i
			state EmptyCycle {
			}
			transition tS1 {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not true
				action SFinal_clone_deadlineAction_normal_stm0_s_entry_t_1_S0_f_EmptyCycle ()
			}
		}
		final f
		transition t0 {
			from i
			to S1
		}
		transition t1 {
			from S1
			to f
			action clone_normal_deadlineAction_normal_stm0_s_entry_t_2 ( )
		}
		during clone_deadlineCheck_3 ( d ) ; opFinalDuring_clone_deadlineAction_normal_stm0_s_entry_t_1_S0 ( )
		exit inact_clone_deadlineAction_normal_stm0_s_entry_t_1 = true
	}
	final f
	transition t0 {
		from i
		to S0
	}
	transition t1 {
		from S0
		to f
		condition g
	}
	input context { }
	output context { requires req_normal_stm0_s_entry_t_platformOps_clone_deadlineAction_normal_stm0_s_entry_t_1 }
}

operation clone_normal_deadlineAction_normal_stm0_s_entry_t_2 ( ) {
	requires I_req_normal_normal_stm0_s_entry_S0_t_localVars_3 requires I_clone_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_op_4_softwareOps_clone_normal_deadlineAction_normal_stm0_s_entry_t_2 initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action $ move ( )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_op_4 ( )
	}
	input context { }
	output context { requires I_req_normal_normal_stm0_s_entry_S0_t_platformOps_clone_normal_deadlineAction_normal_stm0_s_entry_t_2 }
}

operation clone_deadlineCheck_3 ( d : nat
) {
	requires I_exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 requires I_exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1 initial i
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
		action exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 = true
	}
	transition tr3 {
		from S2
		to S1
		condition exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1
		action exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1 = false
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

operation clone_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_op_4 ( ) {
	requires I_req_normal_deadlineAction_normal_stm0_s_entry_t_j_2_2_t_2_2_localVars_4 initial i
	final f
	transition t {
		from i
		to f
		action g = true
	}
	input context { }
	output context { }
}

operation opFinalDuring_clone_deadlineAction_normal_stm0_s_entry_t_1_S0 ( ) {
	requires I_exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 requires I_exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1 initial i
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
		action exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1
		action exec_ms_clone_deadlineAction_normal_stm0_s_entry_t_1 = false
	}
	input context { }
	output context { }
}

operation SFinal_clone_deadlineAction_normal_stm0_s_entry_t_1_S0_f_EmptyCycle ( ) {
	requires I_exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 requires I_inact_clone_deadlineAction_normal_stm0_s_entry_t_1 initial i
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
		condition ( inact_clone_deadlineAction_normal_stm0_s_entry_t_1 \/ exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 )
		action exec ; ( if exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 then exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 = false ; exec_ds_clone_deadlineAction_normal_stm0_s_entry_t_1 = true end ; skip )
	}
	input context { }
	output context { }
}

