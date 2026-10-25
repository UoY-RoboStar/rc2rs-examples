package pre_pkg_main_sim interface I_clone_op1_1_softwareOps_stm0 {
	clone_op1_1 ( )
}

interface IOps_softwareOps_stm0 {
	op1 ( )
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		
	}

	cref ctrl_ref0 = ctrl0

}

controller ctrl0 {
	opref ctrl0_ref_clone_op1_1 = clone_op1_1
	sref stm_ref0 = stm0
	cycleDef cycle == 1
}

stm stm0 {
	//requires IOps_softwareOps_stm0 
	requires I_clone_op1_1_softwareOps_stm0 var x : int
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
		action clone_op1_1 ( )
	}
}

operation clone_op1_1 ( ) {
	initial i
	state s {
		initial i
		state EmptyCycle {
		}
		transition ts {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not true
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
	}
	input context { }
	output context { }
}

