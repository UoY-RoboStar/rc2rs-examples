package pre_pkg_main_sim interface req_normal_stm0_s_t2_op_localVars_1 {
	var x : int
}

interface IctrEvars_stm0 {
	var ev1F : boolean = true
}

interface I_events_normal_stm0_s_t2_op_inpEvs_1 {
	event ev1 : int
}

interface I_clone_normal_stm0_s_t2_op_softwareOps_stm0 {
	clone_normal_stm0_s_t2_op ( )
}

interface I1_inpEvs_stm0 {
	event ev1 : int
}

controller ctrl0 {
	uses I1_inpEvs_stm0 opref ctrl0_ref_clone_normal_stm0_s_t2_op = clone_normal_stm0_s_t2_op
	sref stm_ref0 = stm0
	cycleDef cycle == 1
	connection ctrl0 on ev1 to stm_ref0 on ev1
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		uses I1_inpEvs_stm0
	}

	cref ctrl_ref0 = ctrl0
connection rp0 on ev1 to ctrl_ref0 on ev1 ( _async )
}

stm stm0 {
	uses IctrEvars_stm0 requires I_clone_normal_stm0_s_t2_op_softwareOps_stm0 var x : int
	const n : int
	clock C
	input context { uses I1_inpEvs_stm0 }
	output context { }
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
			condition not ( x > n )
			action exec ; ev1F = true
		}
	}
	final f
	transition t {
		from i
		to s
	}
	transition t2 {
		from s
		to f
		# C
		condition x > n
		action clone_normal_stm0_s_t2_op ( )
	}
}

operation clone_normal_stm0_s_t2_op ( ) {
	requires req_normal_stm0_s_t2_op_localVars_1 requires IctrEvars_stm0 initial i
	junction j
	final f
	transition tr1 {
		from i
		to j
	}
	transition tr2 {
		from j
		to j
		condition not ( $ ev1 /\ ev1F )
		action exec ; ev1F = true
	}
	transition tr3 {
		from j
		to f
		condition ( $ ev1 ? x /\ ev1F )
		action ev1F = false
	}
	input context { uses I_events_normal_stm0_s_t2_op_inpEvs_1 }
	output context { }
}

