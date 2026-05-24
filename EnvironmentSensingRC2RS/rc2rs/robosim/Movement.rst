package pkg1126__sim interface req_normal_Movement_AvoidingAgain_t13_op_clocks {
	clock T
}

interface req_normal_Movement_AvoidingAgain_t12_op_clocks {
	clock T
}

interface I_clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_2_2_1_softwareOps_clone_normal_Movement_Avoiding_entry {
	clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_2_2_1 ( )
}

interface IctrEvars_Movement {
	var turnF : boolean = true , odometerF : boolean = true , obstacleF : boolean = true , resumeF : boolean = true , stopF : boolean = true
}

interface I_events_normal_Movement_Avoiding_entry_inpEvs {
	event odometer : real
}

interface req_normal_Movement_Avoiding_entry_platformOps_clone_normal_Movement_Avoiding_entry {
	changeDirection ( l : Loc )
}

interface req_normal_Movement_Avoiding_entry_localVars {
	var l : Loc , d0 : real
}

interface req_normal_Movement_Found_entry_platformOps_clone_normal_Movement_Found_entry {
	stop ( )
}

interface I_events_normal_Movement_Found_entry_outEvs {
	event flag
}

interface I_clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_3_t_2_3_op_j_2_3_f_2_softwareOps_clone_normal_Movement_Found_entry {
	clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_3_t_2_3_op_j_2_3_f_2 ( )
}

interface req_normal_Movement_Exploring_t21_op_clocks {
	clock T
}

interface req_normal_Movement_Going_t6_op_clocks {
	clock T
}

interface req_normal_Movement_TryingAgain_t11_op_localVars {
	var d1 : real
}

interface I_events_normal_Movement_TryingAgain_t11_op_inpEvs {
	event odometer : real
}

interface I_req_normal_Movement_Avoiding_entry_i_t_localVars {
	var d0 : real
}

interface I_events_normal_Movement_Avoiding_entry_i_t_inpEvs {
	event odometer : real
}

interface I_events_normal_Movement_Found_entry_j_2_3_t_2_3_outEvs {
	event flag
}

interface I_clone_normal_Movement_AvoidingAgain_t13_op_softwareOps_Movement {
	clone_normal_Movement_AvoidingAgain_t13_op ( )
}

interface I_clone_normal_Movement_Exploring_t21_op_softwareOps_Movement {
	clone_normal_Movement_Exploring_t21_op ( )
}

interface I_outEvs_Movement {
	event flag
}

interface Operations_platformOps_Movement {
	stop ( )
	moveForward ( )
	reverse ( )
	moveTowards ( a : real )
	changeDirection ( l : Loc )
}

interface I_clone_normal_Movement_TryingAgain_t11_op_softwareOps_Movement {
	clone_normal_Movement_TryingAgain_t11_op ( )
}

interface I_inpEvs_Movement {
	event obstacle : Loc
	event odometer : real
	event resume
	event turn : real
	event stop
}

interface I_clone_normal_Movement_Avoiding_entry_softwareOps_Movement {
	clone_normal_Movement_Avoiding_entry ( )
}

interface I_clone_normal_Movement_AvoidingAgain_t12_op_softwareOps_Movement {
	clone_normal_Movement_AvoidingAgain_t12_op ( )
}

interface I_clone_normal_Movement_Found_entry_softwareOps_Movement {
	clone_normal_Movement_Found_entry ( )
}

interface I_clone_normal_Movement_Going_t6_op_softwareOps_Movement {
	clone_normal_Movement_Going_t6_op ( )
}

stm Movement {
	uses IctrEvars_Movement requires I_clone_normal_Movement_AvoidingAgain_t13_op_softwareOps_Movement requires I_clone_normal_Movement_AvoidingAgain_t12_op_softwareOps_Movement requires I_clone_normal_Movement_Avoiding_entry_softwareOps_Movement requires I_clone_normal_Movement_Found_entry_softwareOps_Movement requires I_clone_normal_Movement_Exploring_t21_op_softwareOps_Movement requires I_clone_normal_Movement_Going_t6_op_softwareOps_Movement requires I_clone_normal_Movement_TryingAgain_t11_op_softwareOps_Movement const lv : real , evadeTime : int , stuckDist : real , outPeriod : int
	var a : real , d0 : real , d1 : real
	var l : Loc
	clock T
	input context { uses I_inpEvs_Movement }
	output context { uses I_outEvs_Movement requires Operations_platformOps_Movement }
	cycleDef cycle == 1
	initial i1
	state Exploring {
		initial i
		state EmptyCycle {
		}
		transition tExploring {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Movement_Exploring_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( ( ( true /\ ( ( $ turn ? a /\ turnF ) ) ) \/ ( true /\ ( ( $ obstacle ? l /\ obstacleF ) ) ) ) \/ ( true /\ ( ( $ resume /\ resumeF ) ) ) ) \/ ( true /\ ( ( $ stop /\ stopF ) ) ) )
			action exec ; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
		}
		entry $ moveForward ( )
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
			condition not ( ( ( since ( T ) > evadeTime /\ ( ( $ turn ? a /\ turnF ) ) ) \/ ( since ( T ) > evadeTime /\ ( ( $ resume /\ resumeF ) ) ) ) \/ ( since ( T ) > evadeTime /\ ( ( $ stop /\ stopF ) ) ) )
			action exec ; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
		}
		entry clone_normal_Movement_Avoiding_entry ( )
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
			condition not ( ( ( true /\ ( ( $ turn ? a /\ turnF ) ) ) \/ ( true /\ ( ( $ stop /\ stopF ) ) ) ) \/ ( true /\ ( ( $ obstacle ? l /\ obstacleF ) ) ) )
			action exec ; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
		}
		entry $ moveTowards ( a )
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
			action exec ; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
		}
		entry clone_normal_Movement_Found_entry ( )
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
			condition not ( ( ( ( true /\ ( ( $ turn ? a /\ turnF ) ) ) \/ ( true /\ ( ( $ resume /\ resumeF ) ) ) ) \/ ( true /\ ( ( $ obstacle ? l /\ obstacleF ) ) ) ) \/ ( true /\ ( ( $ stop /\ stopF ) ) ) )
			action exec ; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
		}
		entry $ moveTowards ( a )
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
			condition not ( ( ( ( true /\ ( ( $ stop /\ stopF ) ) ) \/ ( d1 - d0 <= stuckDist ) ) 
				\/ ( true /\ ( ( $ resume /\ resumeF ) ) )
			) \/ ( d1 - d0 > stuckDist ) )
			action exec ; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
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
			condition not ( ( ( since ( T ) > outPeriod /\ ( ( $ resume /\ resumeF ) ) ) \/ ( since ( T ) > outPeriod /\ ( ( $ stop /\ stopF ) ) ) ) \/ ( since ( T ) > outPeriod /\ ( ( $ turn ? a /\ turnF ) ) ) )
			action exec ; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
		}
		entry $ reverse ( )
	}
	transition t1 {
		from i1
		to Exploring
	}
	transition t2 {
		from Exploring
		to Going
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t21 {
		from Exploring
		to Avoiding
		condition ( $ obstacle ? l /\ obstacleF )
		action obstacleF = false
	}
	transition t0 {
		from Exploring
		to Exploring
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t15 {
		from Exploring
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
	}
	transition t7 {
		from Avoiding
		to TryingAgain
		condition ( $ turn ? a /\ turnF ) /\ since ( T ) > evadeTime
		action turnF = false
	}
	transition t19 {
		from Avoiding
		to Exploring
		condition ( $ resume /\ resumeF ) /\ since ( T ) > evadeTime
		action resumeF = false
	}
	transition t18 {
		from Avoiding
		to Found
		condition ( $ stop /\ stopF ) /\ since ( T ) > evadeTime
		action stopF = false
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
	transition t6 {
		from Going
		to Avoiding
		condition ( $ obstacle ? l /\ obstacleF )
		action obstacleF = false
	}
	transition t5 {
		from Found
		to j1
	}
	transition t8 {
		from TryingAgain
		to TryingAgain
		condition ( $ turn ? a /\ turnF )
		action turnF = false
	}
	transition t10 {
		from TryingAgain
		to Exploring
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t11 {
		from TryingAgain
		to AvoidingAgain
		condition ( $ obstacle ? l /\ obstacleF )
		action obstacleF = false
	}
	transition t9 {
		from TryingAgain
		to Found
		condition ( $ stop /\ stopF )
		action stopF = false
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
		condition d1 - d0 <= stuckDist
	}
	transition t22 {
		from AvoidingAgain
		to Exploring
		condition ( $ resume /\ resumeF )
		action resumeF = false
	}
	transition t12 {
		from AvoidingAgain
		to Avoiding
		condition d1 - d0 > stuckDist
	}
	transition t14 {
		from GettingOut
		to Going
		condition ( $ turn ? a /\ turnF ) /\ since ( T ) > outPeriod
		action turnF = false
	}
	transition t16 {
		from GettingOut
		to Found
		condition ( $ stop /\ stopF ) /\ since ( T ) > outPeriod
		action stopF = false
	}
	transition t20 {
		from GettingOut
		to Exploring
		condition ( $ resume /\ resumeF ) /\ since ( T ) > outPeriod
		action resumeF = false
	}
}

operation clone_normal_Movement_AvoidingAgain_t13_op ( ) {
	requires req_normal_Movement_AvoidingAgain_t13_op_clocks requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
		action # T
	}
	input context { }
	output context { }
}

operation clone_normal_Movement_AvoidingAgain_t12_op ( ) {
	requires req_normal_Movement_AvoidingAgain_t12_op_clocks requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
		action # T
	}
	input context { }
	output context { }
}

operation clone_normal_Movement_Avoiding_entry ( ) {
	requires req_normal_Movement_Avoiding_entry_localVars requires I_clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_2_2_1_softwareOps_clone_normal_Movement_Avoiding_entry requires IctrEvars_Movement initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_2_2_1 ( )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action $ changeDirection ( l )
	}
	input context { uses I_events_normal_Movement_Avoiding_entry_inpEvs }
	output context { requires req_normal_Movement_Avoiding_entry_platformOps_clone_normal_Movement_Avoiding_entry }
}

operation clone_normal_Movement_Found_entry ( ) {
	requires I_clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_3_t_2_3_op_j_2_3_f_2_softwareOps_clone_normal_Movement_Found_entry requires IctrEvars_Movement initial i
	junction j_2_3
	final f
	transition t {
		from i
		to j_2_3
		action $ stop ( )
	}
	transition t_2_3 {
		from j_2_3
		to f
		action clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_3_t_2_3_op_j_2_3_f_2 ( )
	}
	input context { }
	output context { uses I_events_normal_Movement_Found_entry_outEvs requires req_normal_Movement_Found_entry_platformOps_clone_normal_Movement_Found_entry }
}

operation clone_normal_Movement_Exploring_t21_op ( ) {
	requires req_normal_Movement_Exploring_t21_op_clocks requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
		action # T
	}
	input context { }
	output context { }
}

operation clone_normal_Movement_Going_t6_op ( ) {
	requires req_normal_Movement_Going_t6_op_clocks requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
		action # T
	}
	input context { }
	output context { }
}

operation clone_normal_Movement_TryingAgain_t11_op ( ) {
	requires req_normal_Movement_TryingAgain_t11_op_localVars requires IctrEvars_Movement initial i
	final f
	junction j
	transition t {
		from i
		to j
	}
	transition t2{
		from j
		to f
		condition $ odometer ? d1
		action odometerF = false
	}
	transition t3{
		from j
		to j
		condition not  $ odometer
		action exec; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
	}
	input context { uses I_events_normal_Movement_TryingAgain_t11_op_inpEvs }
	output context { }
}

operation clone_clone_normal_Movement_Avoiding_entry_normal_Movement_Avoiding_entry_i_t_op_i_j_2_2_1 ( ) {
	requires I_req_normal_Movement_Avoiding_entry_i_t_localVars requires IctrEvars_Movement initial i
	final f
	junction j
	transition t {
		from i
		to j
	}
	transition t2{
		from j
		to f
		condition $ odometer ? d0
		action odometerF = false
	}
	transition t3{
		from j
		to j
		condition not  $ odometer
		action exec; ( stopF = true ; ( resumeF = true ; ( obstacleF = true ; ( odometerF = true ; turnF = true ) ) ) )
	}
	input context { uses I_events_normal_Movement_Avoiding_entry_i_t_inpEvs }
	output context { }
}

operation clone_clone_normal_Movement_Found_entry_normal_Movement_Found_entry_j_2_3_t_2_3_op_j_2_3_f_2 ( ) {
	requires IctrEvars_Movement initial i
	final f
	transition t {
		from i
		to f
		action $ flag
	}
	input context { }
	output context { uses I_events_normal_Movement_Found_entry_j_2_3_t_2_3_outEvs }
}

