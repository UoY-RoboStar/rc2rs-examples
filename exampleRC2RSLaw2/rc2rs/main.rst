package pre_pkg_main_sim interface I1_inpEvs_stm0 {
	event ev1
}

interface IctrEvars_stm0 {
	var ev1F : boolean = true
}

controller ctrl0 {
	uses I1_inpEvs_stm0 sref stm_ref0 = stm0
	connection ctrl0 on ev1 to stm_ref0 on ev1
	cycleDef cycle == 1
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
	uses IctrEvars_stm0 input context { uses I1_inpEvs_stm0 }
	output context { }
	cycleDef cycle == 1
	initial i
	state s {
		initial i0
		state EmptyCycle {
		}
		transition t0 {
			from i0
			to EmptyCycle
		}
		transition tEmptyCycle_stm0_s_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ ev1 /\ ev1F ) ) )
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
		condition ( $ ev1 /\ ev1F )
		action ev1F = false
	}
}

