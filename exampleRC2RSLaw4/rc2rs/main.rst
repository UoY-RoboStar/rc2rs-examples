package pre_pkg_main_sim interface I_clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2_softwareOps_clone_normal_stm0_s_t2_op {
	clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2 ( )
}

interface req_normal_stm0_s_t2_op_platformOps_clone_normal_stm0_s_t2_op {
	op ( )
}

interface IctrEvars_stm0 {
	var ev1F : boolean = true
}

interface I_clone_normal_stm0_s_t2_op_softwareOps_stm0 {
	clone_normal_stm0_s_t2_op ( )
}

interface I1_inpEvs_stm0 {
	event ev1
}

interface IOps_platformOps_stm0 {
	op ( )
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
	uses I1_inpEvs_stm0 requires IOps_platformOps_stm0 opref ctrl0_ref_clone_normal_stm0_s_t2_op = clone_normal_stm0_s_t2_op
	opref ctrl0_ref_clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2 = clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2
	sref stm_ref0 = stm0
	cycleDef cycle == 1
	connection ctrl0 on ev1 to stm_ref0 on ev1
}

stm stm0 {
	uses IctrEvars_stm0 requires I_clone_normal_stm0_s_t2_op_softwareOps_stm0 var x : int
	const n : int
	clock C
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
			condition not ( x > n /\ ( ( $ ev1 /\ ev1F ) ) )
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
		# C
		condition x > n /\ ( $ ev1 /\ ev1F )
		action clone_normal_stm0_s_t2_op ( ) ; ev1F = false
	}
}

operation clone_normal_stm0_s_t2_op ( ) {
	requires I_clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2_softwareOps_clone_normal_stm0_s_t2_op requires IctrEvars_stm0 initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action $ op ( )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2 ( )
	}
	input context { }
	output context { requires req_normal_stm0_s_t2_op_platformOps_clone_normal_stm0_s_t2_op }
}

operation clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2 ( ) {
	requires IctrEvars_stm0 initial i
	final f
	transition t {
		from i
		to f
		action skip
	}
	input context { }
	output context { }
}

