package pre_pkg_main_sim 

interface I_events_normal_stm0_s_t2_op_outEvs_1 {
	event ev1
}

interface I_clone_normal_stm0_s_t2_op_softwareOps_stm0 {
	clone_normal_stm0_s_t2_op ( )
}

interface IOps_platformOps_stm0 {
	op ( )
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		uses I_events_normal_stm0_s_t2_op_outEvs_1
		provides IOps_platformOps_stm0
	}

	cref ctrl_ref0 = ctrl0

	connection ctrl_ref0 on ev1 to rp0 on ev1 ( _async )
}

controller ctrl0 {
	uses I_events_normal_stm0_s_t2_op_outEvs_1 requires IOps_platformOps_stm0 opref ctrl0_ref_clone_normal_stm0_s_t2_op = clone_normal_stm0_s_t2_op
	sref stm_ref0 = stm0
	cycleDef cycle == 1
	connection stm_ref0 on ev1 to ctrl0 on ev1
}

stm stm0 {
	requires I_clone_normal_stm0_s_t2_op_softwareOps_stm0 var x : int
	const n : int
	clock C
	input context { }
	output context { requires IOps_platformOps_stm0 event ev1}
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
			action exec
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
	initial i
	final f
	transition t {
		from i
		to f
		action $ ev1
	}
	input context { }
	output context { uses I_events_normal_stm0_s_t2_op_outEvs_1 }
}

