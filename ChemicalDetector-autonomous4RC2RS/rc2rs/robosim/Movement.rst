package pkg254__sim import 
Chemical::Angle import Chemical::Angle 
interface I_events_normal_Movement_TryingAgain_t11_op_inpEvs {
	event odometer : real
}
 
interface IctrEvars_Movement {
	var resumeF : boolean = false , turnF : boolean = false , odometerF : boolean = false , obstacleF : boolean = false , stopF : boolean = false
}

interface req_normal_Movement_TryingAgain_t11_op_localVars {
	var d1 : real
}

interface req_normal_Movement_GettingOut_entry_platformOps_clone_normal_Movement_GettingOut_entry {
	shortRandomWalk ( )
}

interface I_waitOp_softwareOps_clone_normal_Movement_GettingOut_entry {
	waitOp ( i : nat )
}

interface I_clone_normal_Movement_GettingOut_entry_clone_waitOp_j_2_4_f_softwareOps_clone_normal_Movement_GettingOut_entry {
	clone_normal_Movement_GettingOut_entry_clone_waitOp_j_2_4_f ( i : nat )
}

interface req_normal_Movement_GettingOut_entry_localVars {
	const outPeriod : nat
}

interface I_clone_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3_softwareOps_clone_normal_Movement_Avoiding_entry {
	clone_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3 ( )
}

interface I_waitOp_softwareOps_clone_normal_Movement_Avoiding_entry {
	waitOp ( i : nat )
}

interface req_normal_Movement_Avoiding_entry_localVars {
	const evadeTime : nat
	var d0 : real
}

interface I_clone_normal_Movement_Avoiding_entry_clone_waitOp_j_2_5_f_softwareOps_clone_normal_Movement_Avoiding_entry {
	clone_normal_Movement_Avoiding_entry_clone_waitOp_j_2_5_f ( i : nat )
}

interface I_clone_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5_softwareOps_clone_normal_Movement_Avoiding_entry {
	clone_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5 ( )
}

interface I_events_normal_Movement_Avoiding_entry_inpEvs {
	event odometer : real
}

interface I_clone_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f_softwareOps_clone_normal_Movement_Found_entry {
	clone_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f ( )
}

interface I_events_normal_Movement_Found_entry_outEvs {
	event flag
}

interface req_normal_Movement_Found_entry_platformOps_clone_normal_Movement_Found_entry {
	move ( lv : real , a : Angle )
}

interface I_events_normal_Movement_Avoiding_entry_i_t_inpEvs {
	event odometer : real
}

interface I_req_normal_Movement_Avoiding_entry_i_t_localVars {
	var d0 : real
}

interface I_events_normal_Movement_Found_entry_j_2_2_t_2_2_outEvs {
	event flag
}

interface Operations_platformOps_Movement {
	move ( lv : real , a : Angle )
	randomWalk ( )
	shortRandomWalk ( )
}

interface I_clone_normal_Movement_GettingOut_entry_softwareOps_Movement {
	clone_normal_Movement_GettingOut_entry ( )
}

interface I_clone_normal_Movement_TryingAgain_t11_op_softwareOps_Movement {
	clone_normal_Movement_TryingAgain_t11_op ( )
}

interface I_outEvs_Movement {
	event flag
}

interface I_clone_normal_Movement_Avoiding_entry_softwareOps_Movement {
	clone_normal_Movement_Avoiding_entry ( )
}

interface I_inpEvs_Movement {
	event obstacle : Location::Loc
	event odometer : real
	event resume
	event turn : Angle
	event stop
}

interface I_clone_normal_Movement_Found_entry_softwareOps_Movement {
	clone_normal_Movement_Found_entry ( )
}

stm Movement {
	uses IctrEvars_Movement requires I_clone_normal_Movement_TryingAgain_t11_op_softwareOps_Movement requires I_clone_normal_Movement_GettingOut_entry_softwareOps_Movement requires I_clone_normal_Movement_Avoiding_entry_softwareOps_Movement requires I_clone_normal_Movement_Found_entry_softwareOps_Movement const lv : real , evadeTime : nat , stuckPeriod : nat , stuckDist : real , outPeriod : nat
	var a : Angle , d0 : real , d1 : real
	var l : Location::Loc
	clock T
	input context { uses I_inpEvs_Movement }
	output context { uses I_outEvs_Movement requires Operations_platformOps_Movement }
	cycleDef cycle == 1
	initial i1
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition tWaiting {
			from i
			to EmptyCycle
		}
		during $ randomWalk ( )
	}
	state Going {
		initial i
		state EmptyCycle {
		}
		transition tGoing {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Movement_Going_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ($obstacle /\ obstacleF) /\ not ( $ stop /\ stopF ) /\ not ($turn /\ turnF )
			action exec ; (resumeF = true; (turnF = true; ( stopF = true ;  obstacleF = true ) ) ) 
		}
		entry $ move ( lv , a )
	}
	state Found {
		initial i
		state EmptyCycle {
		}
		transition tFound {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Movement_Found_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not false
			action exec ; (resumeF = true; (turnF = true; ( stopF = true ;  obstacleF = true ) ) ) 
		}
		entry clone_normal_Movement_Found_entry ( )
	}
	state Avoiding {
		initial i
		state EmptyCycle {
		}
		transition tAvoiding {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Movement_Avoiding_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( $ turn ? a /\ turnF ) /\ ( not ( $ stop /\ stopF ) /\ not ( $ resume /\ resumeF ) )
			action exec ; (resumeF = true; (turnF = true; ( stopF = true ;  obstacleF = true ) ) ) 
		}
		entry clone_normal_Movement_Avoiding_entry ( )
	}
	final j1
	state TryingAgain {
		initial i
		state EmptyCycle {
		}
		transition tTryingAgain {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Movement_TryingAgain_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ($obstacle /\ obstacleF) /\ not ( $ stop /\ stopF ) /\ ( not ( $ turn ? a /\ turnF ) /\ not ( $ resume /\ resumeF ) )
			action exec ; (resumeF = true; (turnF = true; ( stopF = true ;  obstacleF = true ) ) ) 
		}
		entry $ move ( lv , a )
	}
	state AvoidingAgain {
		initial i
		state EmptyCycle {
		}
		transition tAvoidingAgain {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Movement_AvoidingAgain_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( since ( T ) >= stuckPeriod /\ d1 - d0 <= stuckDist ) /\ not ( since ( T ) < stuckPeriod \/ d1 - d0 > stuckDist ) /\ 
			         ( not ( $ resume /\ resumeF ) /\ not ( $ stop /\ stopF ) )
			action exec ; (resumeF = true; (turnF = true; ( stopF = true ;  obstacleF = true ) ) )
		}
	}
	state GettingOut {
		initial i
		state EmptyCycle {
		}
		transition tGettingOut {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Movement_GettingOut_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( $ resume /\ resumeF ) /\ not ( $ stop /\ stopF ) /\ not ( $ turn ? a /\ turnF )
			action exec ; (resumeF = true; (turnF = true; ( stopF = true ;  obstacleF = true ) ) )
		}
		entry clone_normal_Movement_GettingOut_entry ( )
	}
	transition t1 {
		from i1
		to Waiting
	}
	transition t0 {
		from Waiting
		to Waiting
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t2 {
		from Waiting
		to Going
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t15 {
		from Waiting
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t6 {
		from Going
		to Avoiding
		 # T
		condition ( $ obstacle ? l /\ obstacleF )
		action obstacleF = false
	}
	transition t3 {
		from Going
		to Going
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t4 {
		from Going
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t5 {
		from Found
		to j1
	}
	transition t21 {
		from Avoiding
		to Going
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t7 {
		from Avoiding
		to TryingAgain
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t18 {
		from Avoiding
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t19 {
		from Avoiding
		to Waiting
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t11 {
		from TryingAgain
		to AvoidingAgain
		condition ( $ obstacle ? l /\ obstacleF )
	}
	transition t9 {
		from TryingAgain
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t8 {
		from TryingAgain
		to TryingAgain
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t10 {
		from TryingAgain
		to Waiting
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t13 {
		from AvoidingAgain
		to GettingOut
		condition since ( T ) >= stuckPeriod /\ d1 - d0 <= stuckDist
	}
	transition t22 {
		from AvoidingAgain
		to Waiting
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t12 {
		from AvoidingAgain
		to Avoiding
		 # T
		condition since ( T ) < stuckPeriod \/ d1 - d0 > stuckDist
	}
	transition t17 {
		from AvoidingAgain
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t14 {
		from GettingOut
		to Going
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t16 {
		from GettingOut
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t20 {
		from GettingOut
		to Waiting
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
}

operation clone_normal_Movement_TryingAgain_t11_op ( ) {
	requires req_normal_Movement_TryingAgain_t11_op_localVars requires IctrEvars_Movement initial i
	junction j
	final f
	transition tr1 {
		from i
		to j
	}
	transition tr2 {
		from j
		to f
		condition ( $ odometer ? d1 /\ odometerF )
		action odometerF = false
	}
	transition tr3 {
		from j
		to j
		condition not ( $ odometer /\ odometerF )
		action exec ; ( stopF = true ; ( odometerF = true ; obstacleF = true ) )
	}
	input context { uses I_events_normal_Movement_TryingAgain_t11_op_inpEvs }
	output context { }
}

operation clone_normal_Movement_GettingOut_entry ( ) {
	requires req_normal_Movement_GettingOut_entry_localVars 
	requires I_clone_normal_Movement_GettingOut_entry_clone_waitOp_j_2_4_f_softwareOps_clone_normal_Movement_GettingOut_entry initial i
	junction j_2_4
	final f
	transition t {
		from i
		to j_2_4
		action $ shortRandomWalk ( )
	}
	transition t_2_4 {
		from j_2_4
		to f
		action clone_normal_Movement_GettingOut_entry_clone_waitOp_j_2_4_f ( outPeriod )
	}
	input context { }
	output context { requires req_normal_Movement_GettingOut_entry_platformOps_clone_normal_Movement_GettingOut_entry }
}

operation clone_normal_Movement_Avoiding_entry ( ) {
	requires req_normal_Movement_Avoiding_entry_localVars 
	requires I_clone_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5_softwareOps_clone_normal_Movement_Avoiding_entry requires I_clone_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3_softwareOps_clone_normal_Movement_Avoiding_entry requires I_clone_normal_Movement_Avoiding_entry_clone_waitOp_j_2_5_f_softwareOps_clone_normal_Movement_Avoiding_entry requires IctrEvars_Movement initial i
	junction j_3_3
	junction j_2_5
	final f
	transition t {
		from i
		to j_3_3
		action clone_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3 ( )
	}
	transition t_3_3 {
		from j_3_3
		to j_2_5
		action clone_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5 ( )
	}
	transition t_2_5 {
		from j_2_5
		to f
		action clone_normal_Movement_Avoiding_entry_clone_waitOp_j_2_5_f ( evadeTime )
	}
	input context { uses I_events_normal_Movement_Avoiding_entry_inpEvs }
	output context { }
}

operation clone_normal_Movement_Found_entry ( ) {
	requires I_clone_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f_softwareOps_clone_normal_Movement_Found_entry initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action $ move ( 0 , Angle :: Front )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f ( )
	}
	input context { }
	output context { uses I_events_normal_Movement_Found_entry_outEvs requires req_normal_Movement_Found_entry_platformOps_clone_normal_Movement_Found_entry }
}

operation clone_normal_Movement_GettingOut_entry_clone_waitOp_j_2_4_f ( i : nat
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

operation clone_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5 ( ) {
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

operation clone_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3 ( ) {
	requires I_req_normal_Movement_Avoiding_entry_i_t_localVars requires IctrEvars_Movement initial i
	junction j
	final f
	transition tr1 {
		from i
		to j
	}
	transition tr2 {
		from j
		to f
		condition ( $ odometer ? d0 /\ odometerF )
		action odometerF = false
	}
	transition tr3 {
		from j
		to j
		condition not ( $ odometer /\ odometerF )
		action exec ; ( stopF = true ; ( odometerF = true ; obstacleF = true ) )
	}
	input context { uses I_events_normal_Movement_Avoiding_entry_i_t_inpEvs }
	output context { }
}

operation clone_normal_Movement_Avoiding_entry_clone_waitOp_j_2_5_f ( i : nat
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

operation clone_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f ( ) {
	initial i
	final f
	transition t {
		from i
		to f
	}
	input context { }
	output context { uses I_events_normal_Movement_Found_entry_j_2_2_t_2_2_outEvs }
}

