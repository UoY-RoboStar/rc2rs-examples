package pre_pkg_main_sim 

interface I_clone_normal_stm0_s_entry_i_t_op_1_softwareOps_clone_normal_stm0_s_entry {
	clone_normal_stm0_s_entry_i_t_op_1 ( )
}

interface req_normal_stm0_s_entry_clocks {
	clock C
}

interface req_normal_stm0_s_entry_platformOps_clone_normal_stm0_s_entry {
	op ( )
}

interface I_req_normal_stm0_s_entry_i_t_clocks {
	clock C
}

interface IOps_platformOps_stm0 {
	op ( )
}

interface I1_inpEvs_stm0 {
	event ev1
}

interface I_clone_normal_stm0_s_entry_softwareOps_stm0 {
	clone_normal_stm0_s_entry ( )
}

interface IctrEvars_stm0 {
	var ev1F : boolean = true
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		uses I1_inpEvs_stm0
		provides IOps_platformOps_stm0
	}

	cref ctrl_ref0 = ctrl0
connection rp0 on ev1 to ctrl_ref0 on ev1 ( _async )
}

controller ctrl0 {
	uses I1_inpEvs_stm0 requires IOps_platformOps_stm0 opref ctrl0_ref_clone_normal_stm0_s_entry = clone_normal_stm0_s_entry
	opref ctrl0_ref_clone_normal_stm0_s_entry_i_t_op_1 = clone_normal_stm0_s_entry_i_t_op_1
	sref stm_ref0 = stm0
	cycleDef cycle == 1
	connection ctrl0 on ev1 to stm_ref0 on ev1
}

stm stm0 {
	uses IctrEvars_stm0 requires I_clone_normal_stm0_s_entry_softwareOps_stm0 clock C
	input context { uses I1_inpEvs_stm0 }
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
			condition not ( true /\ ( ( $ ev1 /\ ev1F ) ) )
			action exec ; ev1F = true
		}
		entry clone_normal_stm0_s_entry ( )
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

operation clone_normal_stm0_s_entry ( ) {
	requires req_normal_stm0_s_entry_clocks requires I_clone_normal_stm0_s_entry_i_t_op_1_softwareOps_clone_normal_stm0_s_entry requires IctrEvars_stm0 initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action clone_normal_stm0_s_entry_i_t_op_1 ( )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action $ op ( )
	}
	input context { }
	output context { requires req_normal_stm0_s_entry_platformOps_clone_normal_stm0_s_entry }
}

operation clone_normal_stm0_s_entry_i_t_op_1 ( ) {
	requires I_req_normal_stm0_s_entry_i_t_clocks requires IctrEvars_stm0 initial i
	final f
	transition t {
		from i
		to f
		action # C
	}
	input context { }
	output context { }
}

