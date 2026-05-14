package pkg994__sim import Chemical::Angle import Chemical::Status import Location::Loc 
import Chemical::Angle interface I_events_normal_Movement_Found_entry_outEvs {
	event flag
}

interface I_clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f_4_softwareOps_clone_normal_Movement_Found_entry {
	clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f_4 ( )
}

interface req_normal_Movement_Found_entry_platformOps_clone_normal_Movement_Found_entry {
	move ( lv : real , a : Angle ) 
}

interface I_events_normal_Movement_TryingAgain_t11_op_inpEvs {
	event odometer : real
}

interface IctrEvars_Movement {
	var turnF : boolean = true , stopF : boolean = true , odometerF : boolean = true , resumeF : boolean = true , obstacleF : boolean = true
}

interface req_normal_Movement_TryingAgain_t11_op_localVars {
	var d1 : real
} 

interface I_clone_clone_normal_Movement_GettingOut_entry_waitOp_j_2_4_f_3_softwareOps_clone_normal_Movement_GettingOut_entry {
	clone_clone_normal_Movement_GettingOut_entry_waitOp_j_2_4_f_3 ( i : nat )
}

interface req_normal_Movement_GettingOut_entry_platformOps_clone_normal_Movement_GettingOut_entry {
	shortRandomWalk ( )
}

interface req_normal_Movement_GettingOut_entry_localVars {
	const outPeriod : nat
}

interface I_clone_clone_normal_Movement_Avoiding_entry_waitOp_j_2_5_f_1_softwareOps_clone_normal_Movement_Avoiding_entry {
	clone_clone_normal_Movement_Avoiding_entry_waitOp_j_2_5_f_1 ( i : nat )
}

interface I_events_normal_Movement_Avoiding_entry_inpEvs {
	event odometer : real
}

interface I_clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3_2_softwareOps_clone_normal_Movement_Avoiding_entry {
	clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3_2 ( )
}

interface req_normal_Movement_Avoiding_entry_localVars {
	const evadeTime : nat
	var d0 : real
}

interface I_clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5_5_softwareOps_clone_normal_Movement_Avoiding_entry {
	clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5_5 ( )
}

interface I_req_normal_Movement_Avoiding_entry_i_t_localVars {
	var d0 : real
}

interface I_events_normal_Movement_Avoiding_entry_i_t_inpEvs {
	event odometer : real
}

interface I_events_normal_Movement_Found_entry_j_2_2_t_2_2_outEvs {
	event flag
}

interface I_clone_normal_Movement_Avoiding_entry_softwareOps_Movement {
	clone_normal_Movement_Avoiding_entry ( )
}

interface Operations_platformOps_Movement {
	move ( lv : real , a : Angle )
	randomWalk ( )
	shortRandomWalk ( )
}

interface I_inpEvs_Movement {
	event obstacle : Loc
	event odometer : real
	event resume
	event turn : Angle
	event stop
}

interface I_outEvs_Movement {
	event flag
}

interface I_clone_normal_Movement_Found_entry_softwareOps_Movement {
	clone_normal_Movement_Found_entry ( )
}

interface I_clone_normal_Movement_TryingAgain_t11_op_softwareOps_Movement {
	clone_normal_Movement_TryingAgain_t11_op ( )
}

interface I_clone_normal_Movement_GettingOut_entry_softwareOps_Movement {
	clone_normal_Movement_GettingOut_entry ( )
}

stm Movement {
	uses IctrEvars_Movement requires I_clone_normal_Movement_Found_entry_softwareOps_Movement requires I_clone_normal_Movement_TryingAgain_t11_op_softwareOps_Movement requires I_clone_normal_Movement_GettingOut_entry_softwareOps_Movement requires I_clone_normal_Movement_Avoiding_entry_softwareOps_Movement const lv : real , evadeTime : nat , stuckPeriod : nat , stuckDist : real , outPeriod : nat
	var a : Angle , d0 : real , d1 : real
	var l : Loc
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
		transition tEmptyCycle_Movement_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition ( ( not ( true /\ ( ( $ stop /\ stopF ) ) ) /\ not ( true /\ ( ( $ turn ? a /\ turnF ) ) ) ) /\ not ( true /\ ( ( $ resume /\ resumeF ) ) ) )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
		}
		during $ randomWalk()
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
			condition not ( true )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
		}
		entry clone_normal_Movement_Found_entry ( )
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
			condition ( ( not ( true /\ ( ( $ obstacle ? l /\ obstacleF ) ) ) /\ not ( true /\ ( ( $ turn ? a /\ turnF ) ) ) ) /\ not ( true /\ ( ( $ stop /\ stopF ) ) ) )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
		}
		entry $ move ( lv , a )
	}
	final j1
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
			condition ( ( ( not ( true /\ ( ( $ resume /\ resumeF ) ) ) /\ not ( true /\ ( ( $ turn ? a /\ turnF ) ) ) ) /\ not ( true /\ ( ( $ stop /\ stopF ) ) ) ) /\ not ( true /\ ( ( $ resume /\ resumeF ) ) ) )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
		}
		entry clone_normal_Movement_Avoiding_entry ( )
	}
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
			condition ( ( ( not ( true /\ ( ( $ resume /\ resumeF ) ) ) /\ not ( true /\ ( ( $ turn ? a /\ turnF ) ) ) ) /\ not ( true /\ ( ( $ stop /\ stopF ) ) ) ) /\ not ( true /\ ( ( $ obstacle ? l /\ obstacleF ) ) ) )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
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
			condition ( ( ( not ( true /\ ( ( $ resume /\ resumeF ) ) ) /\ not ( since ( T ) < stuckPeriod \/ d1 - d0 > stuckDist ) ) /\ not ( true /\ ( ( $ stop /\ stopF ) ) ) ) /\ not ( since ( T ) >= stuckPeriod /\ d1 - d0 <= stuckDist ) )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
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
			condition ( ( not ( true /\ ( ( $ turn ? a /\ turnF ) ) ) /\ not ( true /\ ( ( $ stop /\ stopF ) ) ) ) /\ not ( true /\ ( ( $ resume /\ resumeF ) ) ) )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
		}
		entry clone_normal_Movement_GettingOut_entry ( )
	}
	transition t1 {
		from i1
		to Waiting
	}
	transition t15 {
		from Waiting
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t2 {
		from Waiting
		to Going
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t0 {
		from Waiting
		to Waiting
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t5 {
		from Found
		to j1
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
	transition t19 {
		from Avoiding
		to Waiting
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
	transition t21 {
		from Avoiding
		to Going
		condition ( $ resume /\ resumeF )
		action resumeF = false
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
	transition t9 {
		from TryingAgain
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t11 {
		from TryingAgain
		to AvoidingAgain
		condition ( $ obstacle ? l /\ obstacleF )
	}
	transition t22 {
		from AvoidingAgain
		to Waiting
		# T
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t12 {
		from AvoidingAgain
		to Avoiding
		condition since ( T ) < stuckPeriod \/ d1 - d0 > stuckDist
	}
	transition t17 {
		from AvoidingAgain
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t13 {
		from AvoidingAgain
		to GettingOut
		condition since ( T ) >= stuckPeriod /\ d1 - d0 <= stuckDist
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

operation clone_normal_Movement_Found_entry ( ) {
	requires I_clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f_4_softwareOps_clone_normal_Movement_Found_entry requires IctrEvars_Movement initial i
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
		action clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f_4 ( )
	}
	input context { }
	output context { uses I_events_normal_Movement_Found_entry_outEvs requires req_normal_Movement_Found_entry_platformOps_clone_normal_Movement_Found_entry }
}

operation clone_normal_Movement_TryingAgain_t11_op ( ) {
	requires req_normal_Movement_TryingAgain_t11_op_localVars requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
	}
	input context { uses I_events_normal_Movement_TryingAgain_t11_op_inpEvs }
	output context { }
}

operation clone_normal_Movement_GettingOut_entry ( ) {
	requires req_normal_Movement_GettingOut_entry_localVars requires I_clone_clone_normal_Movement_GettingOut_entry_waitOp_j_2_4_f_3_softwareOps_clone_normal_Movement_GettingOut_entry requires IctrEvars_Movement initial i
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
		action clone_clone_normal_Movement_GettingOut_entry_waitOp_j_2_4_f_3 ( outPeriod )
	}
	input context { }
	output context { requires req_normal_Movement_GettingOut_entry_platformOps_clone_normal_Movement_GettingOut_entry }
}

operation clone_normal_Movement_Avoiding_entry ( ) {
	requires req_normal_Movement_Avoiding_entry_localVars requires I_clone_clone_normal_Movement_Avoiding_entry_waitOp_j_2_5_f_1_softwareOps_clone_normal_Movement_Avoiding_entry requires I_clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3_2_softwareOps_clone_normal_Movement_Avoiding_entry requires I_clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5_5_softwareOps_clone_normal_Movement_Avoiding_entry requires IctrEvars_Movement initial i
	junction j_3_3
	junction j_2_5
	final f
	transition t {
		from i
		to j_3_3
		action clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3_2 ( )
	}
	transition t_3_3 {
		from j_3_3
		to j_2_5
		action clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5_5 ( )
	}
	transition t_2_5 {
		from j_2_5
		to f
		action clone_clone_normal_Movement_Avoiding_entry_waitOp_j_2_5_f_1 ( evadeTime )
	}
	input context { uses I_events_normal_Movement_Avoiding_entry_inpEvs }
	output context { }
}

operation clone_clone_normal_Movement_Avoiding_entry_waitOp_j_2_5_f_1 ( i : nat
) {
	requires IctrEvars_Movement initial i0
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_clone_normal_Movement_Avoiding_entry_waitOp_j_2_5_f_1_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( since ( C ) == i )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
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

operation clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_3_3_2 ( ) {
	requires I_req_normal_Movement_Avoiding_entry_i_t_localVars requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
	}
	input context { uses I_events_normal_Movement_Avoiding_entry_i_t_inpEvs }
	output context { }
}

operation clone_clone_normal_Movement_GettingOut_entry_waitOp_j_2_4_f_3 ( i : nat
) {
	requires IctrEvars_Movement initial i0
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_clone_normal_Movement_GettingOut_entry_waitOp_j_2_4_f_3_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( since ( C ) == i )
			action exec ; ( obstacleF = true ; ( resumeF = true ; ( odometerF = true ; ( stopF = true ; turnF = true ) ) ) )
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

operation clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_2_t_2_2_op_j_2_2_f_4 ( ) {
	requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
		action $ flag
	}
	input context { }
	output context { uses I_events_normal_Movement_Found_entry_j_2_2_t_2_2_outEvs }
}

operation clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_j_3_3_t_3_3_op_j_3_3_j_2_5_5 ( ) {
	requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
		action skip
	}
	input context { }
	output context { }
}

