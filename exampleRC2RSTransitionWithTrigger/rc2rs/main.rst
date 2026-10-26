package pre_pkg_main_sim interface Ievents_inpEvs_stm0 {
	event ev1 : int
}

interface IctrEvars_stm0 {
	var ev1F : boolean = true
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		uses main::Ievents
	}

	cref ctrl_ref0 = ctrl0

connection rp0 on ev1 to ctrl_ref0 on ev1 ( _async )
}

controller ctrl0 {
	uses main::Ievents sref stm_ref0 = stm0
	cycleDef cycle == 1
	connection ctrl0 on ev1 to stm_ref0 on ev1
}

stm stm0 {
	uses IctrEvars_stm0 var x : int
	input context { uses Ievents_inpEvs_stm0 }
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
			condition not ( true /\ ( ( $ ev1 ? x /\ ev1F ) ) )
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
		condition ( $ ev1 ? x /\ ev1F )
		action ev1F = false
	}
}

