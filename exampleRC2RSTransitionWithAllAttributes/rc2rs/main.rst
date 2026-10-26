package pre_pkg_main_sim interface IctrEvars_stm0 {
	var ev1F : boolean = true , ev2F : boolean = true
}

interface I_events_normal_stm0_s_t2_op_inpEvs {
	event ev2 : int
}

interface req_normal_stm0_s_t2_op_localVars {
	var y : int
}

interface I1_inpEvs_stm0 {
	event ev1 : int
	event ev2 : int
}

interface I_clone_normal_stm0_s_t2_op_softwareOps_stm0 {
	clone_normal_stm0_s_t2_op ( )
}

controller ctrl0 {
	uses main::I1 opref ctrl0_ref_clone_normal_stm0_s_t2_op = clone_normal_stm0_s_t2_op
	sref stm_ref0 = stm0
	cycleDef cycle == 1
	connection ctrl0 on ev1 to stm_ref0 on ev1
connection ctrl0 on ev2 to stm_ref0 on ev2
}

stm stm0 {
	uses IctrEvars_stm0 requires I_clone_normal_stm0_s_t2_op_softwareOps_stm0 var x : int , y : int
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
			condition not ( y > 1 /\ x < 1 /\ ( ( $ ev1 ? x /\ ev1F ) ) )
			action exec ; ( ev2F = true ; ev1F = true )
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
		condition y > 1 /\ x < 1 /\ ( $ ev1 ? x /\ ev1F )
		action clone_normal_stm0_s_t2_op ( ) ; ev1F = false
	}
}

operation clone_normal_stm0_s_t2_op ( ) {
	requires req_normal_stm0_s_t2_op_localVars requires IctrEvars_stm0 initial i
	junction j
	final f
	transition tr1 {
		from i
		to j
	}
	transition tr2 {
		from j
		to j
		condition not ( $ ev2 /\ ev2F )
		action exec ; ( ev2F = true ; ev1F = true )
	}
	transition tr3 {
		from j
		to f
		condition ( $ ev2 ? y /\ ev2F )
		action ev2F = false
	}
	input context { uses I_events_normal_stm0_s_t2_op_inpEvs }
	output context { }
}

module mod0 {
	connection rp0 on ev1 to ctrl_ref0 on ev1 ( _async )
	connection rp0 on ev2 to ctrl_ref0 on ev2 ( _async )
	robotic platform rp0 {
		uses main::I1 }

	cref ctrl_ref0 = ctrl0
	cycleDef cycle == 1
}

