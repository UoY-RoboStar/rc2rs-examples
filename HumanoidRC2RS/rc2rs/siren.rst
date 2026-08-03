package pre_pkg_siren_sim  
interface req_normal_SirenS_s1_Red_entry_platformOps_clone_normal_SirenS_s1_Red_entry {
	green5s ( )
}

interface I_clone_clone_normal_SirenS_s1_Red_entry_waitOp_j_2_3_f_1_softwareOps_clone_normal_SirenS_s1_Red_entry {
	clone_clone_normal_SirenS_s1_Red_entry_waitOp_j_2_3_f_1 ( i : nat )
}

interface SirenI_platformOps_SirenS {
	green5s ( )
	red5s ( )
	play ( )
}

interface I_clone_normal_SirenS_s1_Red_entry_softwareOps_SirenS {
	clone_normal_SirenS_s1_Red_entry ( )
}

controller Siren {
	requires SirenI_platformOps_SirenS//pre_pkg_humanoid::SirenI 
	event startSiren
	event stopSiren
	opref Siren_ref_clone_normal_SirenS_s1_Red_entry = clone_normal_SirenS_s1_Red_entry
	opref Siren_ref_clone_clone_normal_SirenS_s1_Red_entry_waitOp_j_2_3_f_1 = clone_clone_normal_SirenS_s1_Red_entry_waitOp_j_2_3_f_1
	sref stm_ref1 = SirenS
	cycleDef cycle == 1
	connection Siren on startSiren to stm_ref1 on startSiren
	connection Siren on stopSiren to stm_ref1 on stopSiren
	
}

stm SirenS {
	requires I_clone_normal_SirenS_s1_Red_entry_softwareOps_SirenS 
	input context { event startSiren event stopSiren }
	output context { requires SirenI_platformOps_SirenS }
	cycleDef cycle == 1
	initial i0
	state Stopped {
		initial i
		state EmptyCycle {
		}
		transition tStopped {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_SirenS_Stopped_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec
		}
	}
	state s1 {
		initial i0
		state Red {
			initial i
			state EmptyCycle {
			}
			transition tRed {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec
		}
			entry clone_normal_SirenS_s1_Red_entry ( )
		}
		state Green {
			initial i
			state EmptyCycle {
			}
			transition tGreen {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec
		}
			entry $ red5s ( )
		}
		transition t0 {
			from i0
			to Red
		}
		transition t1 {
			from Red
			to Green
		}
		transition t2 {
			from Green
			to Red
		}
		during $ play ( )
	}
	transition t0 {
		from i0
		to Stopped
	}
	transition t1 {
		from Stopped
		to s1
	}
	transition t2 {
		from s1
		to Stopped
	}
}

operation clone_normal_SirenS_s1_Red_entry ( ) {
	requires I_clone_clone_normal_SirenS_s1_Red_entry_waitOp_j_2_3_f_1_softwareOps_clone_normal_SirenS_s1_Red_entry initial i
	junction j_2_3
	final f
	transition t {
		from i
		to j_2_3
		action $ green5s ( )
	}
	transition t_2_3 {
		from j_2_3
		to f
		action clone_clone_normal_SirenS_s1_Red_entry_waitOp_j_2_3_f_1 ( 1 )
	}
	input context { }
	output context { requires req_normal_SirenS_s1_Red_entry_platformOps_clone_normal_SirenS_s1_Red_entry }
}

operation clone_clone_normal_SirenS_s1_Red_entry_waitOp_j_2_3_f_1 ( i : nat
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
		transition tEmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not (since ( C ) == i)
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

