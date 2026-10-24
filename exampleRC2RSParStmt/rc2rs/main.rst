package pre_pkg_main_sim interface I_clone_normal_stm0_s_t2_op_t_elseJ__t_elseTA__op_3_softwareOps_clone_normal_stm0_s_t2_op {
	clone_normal_stm0_s_t2_op_t_elseJ__t_elseTA__op_3 ( )
}

interface req_normal_stm0_s_t2_op_localVars_1 {
	var x : int
}

interface req_normal_stm0_s_t2_op_platformOps_clone_normal_stm0_s_t2_op {
	move ( )
}

interface I_clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2_softwareOps_clone_normal_stm0_s_t2_op {
	clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2 ( )
}

interface I_clone_normal_stm0_s_t2_op_softwareOps_stm0 {
	clone_normal_stm0_s_t2_op ( )
}

interface IOps_platformOps_stm0 {
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
	requires main::IOps opref ctrl0_ref_clone_normal_stm0_s_t2_op = clone_normal_stm0_s_t2_op
	opref ctrl0_ref_clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2 = clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2
	opref ctrl0_ref_clone_normal_stm0_s_t2_op_t_elseJ__t_elseTA__op_3 = clone_normal_stm0_s_t2_op_t_elseJ__t_elseTA__op_3
	sref stm_ref0 = stm0
	cycleDef cycle == 1
}

stm stm0 {
	requires I_clone_normal_stm0_s_t2_op_softwareOps_stm0 var x : int
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
		action clone_normal_stm0_s_t2_op ( )
	}
}

operation clone_normal_stm0_s_t2_op ( ) {
	requires req_normal_stm0_s_t2_op_localVars_1 requires I_clone_normal_stm0_s_t2_op_j_2_2_t_2_2_op_2_softwareOps_clone_normal_stm0_s_t2_op requires I_clone_normal_stm0_s_t2_op_t_elseJ__t_elseTA__op_3_softwareOps_clone_normal_stm0_s_t2_op initial i
	junction t_initialJunction_
	junction t_elseJ_
	junction t_thenJ_
	junction j_2_2
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not x > 1
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition x > 1
	}
	transition t_elseTA_ {
		from t_elseJ_
		to j_2_2
		action clone_normal_stm0_s_t2_op_t_elseJ__t_elseTA__op_3 ( )
	}
	transition t_thenTA_ {
		from t_thenJ_
		to j_2_2
		action $ move ( )
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

operation clone_normal_stm0_s_t2_op_t_elseJ__t_elseTA__op_3 ( ) {
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

