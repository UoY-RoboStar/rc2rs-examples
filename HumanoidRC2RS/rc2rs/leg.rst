package pre_pkg_foot_sim 

function sqrt(r:real):real {
	precondition r >= 0
	postcondition r <= result*result /\ result*result < r + 1 
}

datatype Vectorfoot {
	x: real
	y: real
	z: real
}

interface foot_platformOps_clone_foot_controller_correct1 {
	movex ( r : real )
	movey ( r : real )
	movez ( r : real )
	leanforward ( )
}

interface I_events_normal_foot_controller_Leaning_t6_op_outEvs {
	event stepDownOut
}

interface I_clone_clone_foot_controller_step_entry_2_normal_step_Waiting_t5_op_Waiting_j4_4_softwareOps_clone_foot_controller_step_entry_2 {
	clone_clone_foot_controller_step_entry_2_normal_step_Waiting_t5_op_Waiting_j4_4 ( )
}

interface I_clone_clone_foot_controller_step_entry_2_normal_step_j3_t4_op_j3_Waiting_3_softwareOps_clone_foot_controller_step_entry_2 {
	clone_clone_foot_controller_step_entry_2_normal_step_j3_t4_op_j3_Waiting_3 ( )
}

interface IctrEvars_foot_controller {
	var stepDownInF : boolean = true , leanInF : boolean = true , outOfBalanceF : boolean = true , liftFootF : boolean = true
}

interface foot_platformOps_clone_foot_controller_step_entry_2 {
	movex ( r : real )
	movey ( r : real )
	movez ( r : real )
	leanforward ( )
}

interface I_outEvs_clone_foot_controller_step_entry_2 {
	event leanOut
	event stepDone
}

interface I_inpEvs_clone_foot_controller_step_entry_2 {
	event stepDownIn
}

interface I_events_normal_step_j3_t4_op_outEvs {
	event leanOut
}

interface I_events_normal_step_Waiting_t5_op_outEvs {
	event stepDone
}

interface I_inpEvs_foot_controller {
	event outOfBalance : Vectorfoot
	event liftFoot
	event leanIn
	event stepDownIn
}

interface ICorrect_softwareOps_foot_controller {
	correct ( v : Vectorfoot )
	step ( d : Vectorfoot )
}

interface foot_platformOps_foot_controller {
	movex ( r : real )
	movey ( r : real )
	movez ( r : real )
	leanforward ( )
}

interface I_clone_foot_controller_correct1_softwareOps_foot_controller {
	clone_foot_controller_correct1 ( v : Vectorfoot )
}

interface I_clone_normal_foot_controller_Leaning_t6_op_softwareOps_foot_controller {
	clone_normal_foot_controller_Leaning_t6_op ( )
}

interface I_clone_foot_controller_step_entry_2_softwareOps_foot_controller {
	clone_foot_controller_step_entry_2 ( d : Vectorfoot )
}

interface I_outEvs_foot_controller {
	event leanOut
	event stepDone
}

controller Foot {
	requires foot_platformOps_foot_controller  event leanOut
	event stepDone
	event stepDownOut
	event outOfBalance : Vectorfoot
	event liftFoot
	event leanIn
	event stepDownIn
	opref Foot_ref_clone_foot_controller_correct1 = clone_foot_controller_correct1
	opref Foot_ref_clone_normal_foot_controller_Leaning_t6_op = clone_normal_foot_controller_Leaning_t6_op
	opref Foot_ref_clone_foot_controller_step_entry_2 = clone_foot_controller_step_entry_2
	opref Foot_ref_clone_clone_foot_controller_step_entry_2_normal_step_j3_t4_op_j3_Waiting_3 = clone_clone_foot_controller_step_entry_2_normal_step_j3_t4_op_j3_Waiting_3
	opref Foot_ref_clone_clone_foot_controller_step_entry_2_normal_step_Waiting_t5_op_Waiting_j4_4 = clone_clone_foot_controller_step_entry_2_normal_step_Waiting_t5_op_Waiting_j4_4
	sref stm_ref0 = foot_controller
	connection Foot on leanIn to stm_ref0 on leanIn
	connection Foot on liftFoot to stm_ref0 on liftFoot
	connection Foot on stepDownIn to stm_ref0 on stepDownIn
	connection stm_ref0 on stepDownOut to Foot on stepDownOut
	connection Foot on outOfBalance to stm_ref0 on outOfBalance
	connection stm_ref0 on stepDone to Foot on stepDone
	connection stm_ref0 on leanOut to Foot on leanOut
	cycleDef cycle == 1
}

stm foot_controller {
	uses IctrEvars_foot_controller 
	//requires ICorrect_softwareOps_foot_controller 
	requires I_clone_foot_controller_correct1_softwareOps_foot_controller 
	requires I_clone_normal_foot_controller_Leaning_t6_op_softwareOps_foot_controller 
	requires I_clone_foot_controller_step_entry_2_softwareOps_foot_controller 
	var v : Vectorfoot , direction : Vectorfoot
	input context { uses I_inpEvs_foot_controller }
	output context { uses I_outEvs_foot_controller 
		requires foot_platformOps_foot_controller
		event stepDownOut
	}
	cycleDef cycle == 1
	initial I1
	state Balanced {
		initial i
		state EmptyCycle {
		}
		transition tBalanced {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_foot_controller_Balanced_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( ( true /\ ( ( $ leanIn /\ leanInF ) ) ) \/ ( true /\ ( ( $ outOfBalance ? v /\ outOfBalanceF ) ) ) ) \/ ( true /\ ( ( $ liftFoot /\ liftFootF ) ) ) )
			action exec ; ( liftFootF = true ; ( outOfBalanceF = true ; ( leanInF = true ; stepDownInF = true ) ) )
		}
	}
	state Moving {
		initial i
		state EmptyCycle {
		}
		transition tMoving {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_foot_controller_Moving_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( liftFootF = true ; ( outOfBalanceF = true ; ( leanInF = true ; stepDownInF = true ) ) )
		}
		entry clone_foot_controller_step_entry_2 ( direction )
	}
	state Leaning {
		initial i
		state EmptyCycle {
		}
		transition tLeaning {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_foot_controller_Leaning_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( liftFootF = true ; ( outOfBalanceF = true ; ( leanInF = true ; stepDownInF = true ) ) )
		}
		entry $ leanforward ( )
	}
	transition t2 {
		from I1
		to Balanced
	}
	transition t5 {
		from Balanced
		to Leaning
		condition ( $ leanIn /\ leanInF )
		action leanInF = false
	}
	transition t1 {
		from Balanced
		to Balanced
		condition ( $ outOfBalance ? v /\ outOfBalanceF )
		action clone_foot_controller_correct1 ( v ) ; outOfBalanceF = false
	}
	transition t3 {
		from Balanced
		to Moving
		condition ( $ liftFoot /\ liftFootF )
		action liftFootF = false
	}
	transition t4 {
		from Moving
		to Balanced
	}
	transition t6 {
		from Leaning
		to Balanced
		action clone_normal_foot_controller_Leaning_t6_op ( )
	}
}

operation clone_foot_controller_correct1 ( v : Vectorfoot
) {
	requires IctrEvars_foot_controller initial I1
	junction j_3_2
	junction j_2_3
	final F1
	transition t1 {
		from I1
		to j_3_2
		action $ movex ( v . x )
	}
	transition t_3_2 {
		from j_3_2
		to j_2_3
		action $ movey ( v . y )
	}
	transition t_2_3 {
		from j_2_3
		to F1
		action $ movez ( v . z )
	}
	input context { }
	output context { requires foot_platformOps_clone_foot_controller_correct1 }
}

operation clone_normal_foot_controller_Leaning_t6_op ( ) {
	requires IctrEvars_foot_controller initial i
	final f
	transition t { 
		from i
		to f
		action $ stepDownOut
	}
	input context { }
	output context { uses I_events_normal_foot_controller_Leaning_t6_op_outEvs }
}

operation clone_foot_controller_step_entry_2 ( d : Vectorfoot
) {
	requires I_clone_clone_foot_controller_step_entry_2_normal_step_j3_t4_op_j3_Waiting_3_softwareOps_clone_foot_controller_step_entry_2 requires I_clone_clone_foot_controller_step_entry_2_normal_step_Waiting_t5_op_Waiting_j4_4_softwareOps_clone_foot_controller_step_entry_2 requires IctrEvars_foot_controller const c : real
	initial I1
	junction j1 
	junction j2
	junction j3 
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition tWaiting {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_foot_controller_step_entry_2_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( $ stepDownIn /\ stepDownInF ) )
			action exec ; ( liftFootF = true ; ( outOfBalanceF = true ; ( leanInF = true ; stepDownInF = true ) ) )
		}
	}
	junction j4
	final F1
	transition t1 {
		from I1
		to j1
		action $ movex ( c * d . x / sqrt ( ( d . x * d . x ) + ( d . y * d . y ) ) )
	}
	transition t2 {
		from j1
		to j2
		action $ movey ( ( c * d . y ) / sqrt ( ( d . x * d . x ) + ( d . y * d . y ) ) )
	}
	transition t3 {
		from j2
		to j3
		action $ movez ( c )
	}
	transition t4 {
		from j3
		to Waiting
		action clone_clone_foot_controller_step_entry_2_normal_step_j3_t4_op_j3_Waiting_3 ( )
	}
	transition t5 {
		from Waiting
		to j4
		condition ( $ stepDownIn /\ stepDownInF )
		action clone_clone_foot_controller_step_entry_2_normal_step_Waiting_t5_op_Waiting_j4_4 ( ) ; stepDownInF = false
	}
	transition t6 {
		from j4
		to F1
		action $ movez ( - c )
	}
	input context { uses I_inpEvs_clone_foot_controller_step_entry_2 }
	output context { uses I_outEvs_clone_foot_controller_step_entry_2 requires foot_platformOps_clone_foot_controller_step_entry_2 }
}

operation clone_clone_foot_controller_step_entry_2_normal_step_j3_t4_op_j3_Waiting_3 ( ) {
	requires IctrEvars_foot_controller initial i
	final f
	transition t {
		from i
		to f
		action $ leanOut
	}
	input context { }
	output context { uses I_events_normal_step_j3_t4_op_outEvs }
}

operation clone_clone_foot_controller_step_entry_2_normal_step_Waiting_t5_op_Waiting_j4_4 ( ) {
	requires IctrEvars_foot_controller initial i
	final f
	transition t {
		from i
		to f
		action $ stepDone
	}
	input context { }
	output context { uses I_events_normal_step_Waiting_t5_op_outEvs }
}


