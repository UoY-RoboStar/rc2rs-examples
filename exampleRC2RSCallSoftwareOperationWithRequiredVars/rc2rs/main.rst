package pre_pkg_main_sim interface Ivars_localVars_1 {
	var x : int
	const y : int
}

interface IOps_softwareOps_stm0 {
	op1 ( )
}

interface I_clone_op1_1_softwareOps_stm0 {
	clone_op1_1 ( )
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
	const y : int
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
	requires Ivars_localVars_1 initial i
	state s0 {
		initial i
		state EmptyCycle {
		}
		transition ts0 {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( x > y )
			action exec
		}
	}
	final f
	transition t0 {
		from i
		to s0
	}
	transition t1 {
		from s0
		to f
		condition x > y
	}
	input context { }
	output context { }
}

