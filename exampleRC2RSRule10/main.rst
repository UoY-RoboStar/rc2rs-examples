package pre_pkg_main_sim_2 
interface req_normal_stm0_S_t2_op_softwareOps_clone_normal_stm0_S_t2_op {
	op ( )
}

interface I_clone_normal_stm0_S_t2_op_j_2_2_t_2_2_op_2_softwareOps_clone_normal_stm0_S_t2_op {
	clone_normal_stm0_S_t2_op_j_2_2_t_2_2_op_2 ( )
}

interface I_clone_op_3_softwareOps_clone_normal_stm0_S_t2_op {
	clone_op_3 ( )
}

interface I_clone_normal_stm0_S_t2_op_softwareOps_stm0 {
	clone_normal_stm0_S_t2_op ( )
}

interface IOps_softwareOps_stm0 {
	op ( )
}

controller ctrl0 {
	opref ctrl0_ref_clone_normal_stm0_S_t2_op = clone_normal_stm0_S_t2_op
	opref ctrl0_ref_clone_normal_stm0_S_t2_op_j_2_2_t_2_2_op_2 = clone_normal_stm0_S_t2_op_j_2_2_t_2_2_op_2
	opref ctrl0_ref_clone_op_3 = clone_op_3
	sref stm_ref0 = stm0
	cycleDef cycle == 1
}

stm stm0 {
	//requires IOps_softwareOps_stm0 
	requires I_clone_normal_stm0_S_t2_op_softwareOps_stm0 var x : int
	const n : int
	clock C
	clock C2
	input context { }
	output context { }
	cycleDef cycle == 1
	initial i
	state S {
		initial i
		state EmptyCycle {
		}
		transition tS {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_stm0_S_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( x > n )
			action exec
		}
	}
	final f
	transition t {
		from i
		to S
	}
	transition t2 {
		from S
		to f
		# C
		condition x > n
		action clone_normal_stm0_S_t2_op ( )
	}
}

operation clone_normal_stm0_S_t2_op ( ) {
	//requires req_normal_stm0_S_t2_op_softwareOps_clone_normal_stm0_S_t2_op 
	requires I_clone_normal_stm0_S_t2_op_j_2_2_t_2_2_op_2_softwareOps_clone_normal_stm0_S_t2_op 
	requires I_clone_op_3_softwareOps_clone_normal_stm0_S_t2_op initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action clone_op_3 ( )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_normal_stm0_S_t2_op_j_2_2_t_2_2_op_2 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_stm0_S_t2_op_j_2_2_t_2_2_op_2 ( ) {
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

operation clone_op_3 ( ) {
	var x : int
	const n : int
	initial i
	state s {
		initial i
		state EmptyCycle {
		}
		transition ts {
			from i
			to EmptyCycle
		}
	transition t0 {
			from EmptyCycle
			to EmptyCycle
			condition not x > n
			action exec
		}
	}
	final f
	transition t1 {
		from i
		to s
	}
	transition t2 {
		from s
		to f
		condition x > n
	}
	input context { }
	output context { }
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {		
	}

	cref ctrl_ref0 = ctrl0

}

