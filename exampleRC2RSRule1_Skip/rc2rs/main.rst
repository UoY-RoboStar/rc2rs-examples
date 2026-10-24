package pre_pkg_main_sim 

interface I_clone_normal_stm0_s_t2_op_softwareOps_stm0 {
	clone_normal_stm0_s_t2_op ( )
}

controller ctrl0 {
	opref ctrl0_ref_clone_normal_stm0_s_t2_op = clone_normal_stm0_s_t2_op
	sref stm_ref0 = stm0
	cycleDef cycle == 1
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
	
	}
	cref ctrl_ref0 = ctrl0
}

stm stm0 {
	requires I_clone_normal_stm0_s_t2_op_softwareOps_stm0 clock C
	input context { }
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
			condition not ( true )
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
		action clone_normal_stm0_s_t2_op ( )
	}
}

operation clone_normal_stm0_s_t2_op ( ) {
	initial i
	final f
	transition t {
		from i
		to f
		action skip
	}
	input context { }
	output context { }
}

