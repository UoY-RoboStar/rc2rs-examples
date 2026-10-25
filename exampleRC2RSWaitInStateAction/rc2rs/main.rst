package pre_pkg_main_sim interface I_clone_waitOp_1_softwareOps_clone_normal_stm0_s_entry {
	clone_waitOp_1 ( i : nat )
}
 
interface IOps_platformOps_stm0 {
	move ( )
}

interface I_clone_normal_stm0_s_entry_softwareOps_stm0 {
	clone_normal_stm0_s_entry ( )
}

controller ctrl0 {
	requires main::IOps opref ctrl0_ref_clone_normal_stm0_s_entry = clone_normal_stm0_s_entry
	opref ctrl0_ref_clone_waitOp_1 = clone_waitOp_1
	sref stm_ref0 = stm0
	cycleDef cycle == 1
}

module mod0 {
	cycleDef cycle == 1
	robotic platform rp0 {
		provides main::IOps
	}

	cref ctrl_ref0 = ctrl0

}


stm stm0 {
	requires I_clone_normal_stm0_s_entry_softwareOps_stm0 var x : int
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
	}
}

operation clone_normal_stm0_s_entry ( ) {
	requires I_clone_waitOp_1_softwareOps_clone_normal_stm0_s_entry initial i
	final f
	transition t {
		from i
		to f
		action clone_waitOp_1 ( 1 )
	}
	input context { }
	output context { }
}
 
operation clone_waitOp_1 ( i : nat
) {
	initial i0
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == i
			action exec
		}
	}
	final f
	transition t {
		from i0
		to Waiting
		action # C
	}
	transition t2 {
		from Waiting
		to f
		condition since ( C ) == i
	}
	clock C
	input context { }
	output context { }
}

