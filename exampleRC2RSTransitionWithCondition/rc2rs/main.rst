package pre_pkg_main_sim controller ctrl0 {
	sref stm_ref0 = stm0
	cycleDef cycle == 1
}

stm stm0 {
	var x : int , y : int
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
			condition not ( y > 1 /\ x < 1 )
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
		condition y > 1 /\ x < 1
	}
}

module mod0 {
	robotic platform rp0 {
	}

	cref ctrl_ref0 = ctrl0
	cycleDef cycle == 1
}

