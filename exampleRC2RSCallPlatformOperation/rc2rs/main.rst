package pre_pkg_main_sim interface IOps_platformOps_stm0 {
	move ( )
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		provides main::IOps
	}
	cref ctrl_ref0 = ctrl0
}

 
controller ctrl0 {
	requires main::IOps sref stm_ref0 = stm0
	cycleDef cycle == 1
}

stm stm0 {
	var x : int
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
	}
	final f
	transition t {
		from i
		to s
	}
	transition t2 {
		from s
		to f
		action $ move ( )
	}
}

