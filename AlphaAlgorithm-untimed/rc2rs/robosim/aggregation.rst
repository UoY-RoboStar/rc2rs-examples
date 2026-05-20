package pkg223_aggregation_sim 
import Mathematics::floor import main::Position import Mathematics::random import Mathematics::floor import main::Position 
import Mathematics::random interface req_normal_Movement_Turning_RandomTurn_t5_op_localVars {
	var turned : boolean
}

interface I_waitOp_softwareOps_clone_normal_Movement_MovementAndAvoidance_Avoid_entry {
	waitOp ( i : nat )
} 

interface req_normal_Movement_MovementAndAvoidance_Avoid_entry_localVars {
	var p : Position
	const av : real
}

interface I_clone_waitOp_j_2_5_f_softwareOps_clone_normal_Movement_MovementAndAvoidance_Avoid_entry {
	clone_waitOp_j_2_5_f ( i : nat )
}

interface req_normal_Movement_MovementAndAvoidance_Avoid_entry_platformOps_clone_normal_Movement_MovementAndAvoidance_Avoid_entry {
	move ( l : real , a : real )
}

interface req_normal_Movement_Turning_RandomTurn_entry_localVars {
	const av : real
}

interface I_clone_waitOp_j_2_3_f_softwareOps_clone_normal_Movement_Turning_RandomTurn_entry {
	clone_waitOp_j_2_3_f ( i : nat )
}

interface I_waitOp_softwareOps_clone_normal_Movement_Turning_RandomTurn_entry {
	waitOp ( i : nat )
}

interface req_normal_Movement_Turning_RandomTurn_entry_platformOps_clone_normal_Movement_Turning_RandomTurn_entry {
	move ( l : real , a : real )
}

interface I_clone_normal_Movement_Turning_entry_i_t_op_i_j_2_2_softwareOps_clone_normal_Movement_Turning_entry {
	clone_normal_Movement_Turning_entry_i_t_op_i_j_2_2 ( )
}

interface I_clone_normal_Movement_Turning_entry_j_2_2_t_2_2_op_j_2_2_f_softwareOps_clone_normal_Movement_Turning_entry {
	clone_normal_Movement_Turning_entry_j_2_2_t_2_2_op_j_2_2_f ( )
}

interface req_normal_Movement_Turning_entry_localVars {
	var n : nat , turned : boolean
}

interface I_events_normal_Movement_Turning_entry_inpEvs {
	event neighbours : nat
}

interface IctrEvars_Movement {
	var obstacleF : boolean = true , neighboursF : boolean = true
}
 
interface req_normal_Movement_i1_t1_op_clocks {
	clock MBC
}

interface req_normal_Movement_Turning_Turn180_t4_op_localVars {
	var turned : boolean
}

interface I_waitOp_softwareOps_clone_normal_Movement_Turning_Turn180_entry {
	waitOp ( i : nat )
}

interface req_normal_Movement_Turning_Turn180_entry_platformOps_clone_normal_Movement_Turning_Turn180_entry {
	move ( l : real , a : real )
}

interface req_normal_Movement_Turning_Turn180_entry_localVars {
	const av : real
}

interface I_clone_waitOp_j_2_4_f_softwareOps_clone_normal_Movement_Turning_Turn180_entry {
	clone_waitOp_j_2_4_f ( i : nat )
}

interface I_req_normal_Movement_Turning_entry_i_t_localVars {
	var n : nat
}

interface I_events_normal_Movement_Turning_entry_i_t_inpEvs {
	event neighbours : nat
}

interface I_req_normal_Movement_Turning_entry_j_2_2_t_2_2_localVars {
	var turned : boolean
}

interface I_clone_normal_Movement_Turning_RandomTurn_entry_softwareOps_Movement {
	clone_normal_Movement_Turning_RandomTurn_entry ( )
}

interface I_clone_normal_Movement_Turning_RandomTurn_t5_op_softwareOps_Movement {
	clone_normal_Movement_Turning_RandomTurn_t5_op ( )
}

interface I_clone_normal_Movement_i1_t1_op_softwareOps_Movement {
	clone_normal_Movement_i1_t1_op ( )
}

interface I_clone_normal_Movement_MovementAndAvoidance_Avoid_entry_softwareOps_Movement {
	clone_normal_Movement_MovementAndAvoidance_Avoid_entry ( )
}

interface I_clone_normal_Movement_Turning_Turn180_entry_softwareOps_Movement {
	clone_normal_Movement_Turning_Turn180_entry ( )
}

interface I_clone_normal_Movement_Turning_Turn180_t4_op_softwareOps_Movement {
	clone_normal_Movement_Turning_Turn180_t4_op ( )
}

interface I_clone_normal_Movement_Turning_entry_softwareOps_Movement {
	clone_normal_Movement_Turning_entry ( )
}

interface MovingHw_platformOps_Movement {
	move ( l : real , a : real )
}
 
interface ObstacleHw_inpEvs_Movement {
	event obstacle : Position
}

interface SensingHw_inpEvs_Movement {
	event neighbours : nat
}

stm Movement {
	uses IctrEvars_Movement 
	requires I_clone_normal_Movement_Turning_RandomTurn_t5_op_softwareOps_Movement requires I_clone_normal_Movement_MovementAndAvoidance_Avoid_entry_softwareOps_Movement requires I_clone_normal_Movement_Turning_RandomTurn_entry_softwareOps_Movement requires I_clone_normal_Movement_Turning_entry_softwareOps_Movement requires I_clone_normal_Movement_i1_t1_op_softwareOps_Movement requires I_clone_normal_Movement_Turning_Turn180_t4_op_softwareOps_Movement requires I_clone_normal_Movement_Turning_Turn180_entry_softwareOps_Movement const lv : real , av : real , MB : real , alpha : nat
	var n : nat , p : Position , turned : boolean
	clock MBC
	input context { uses ObstacleHw_inpEvs_Movement uses SensingHw_inpEvs_Movement }
	output context { requires MovingHw_platformOps_Movement }
	cycleDef cycle == 1
	initial i1
	state MovementAndAvoidance {
		initial i1
		state Move {
			initial i
			state EmptyCycle {
			}
			transition tMove {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_Movement_MovementAndAvoidance_Move_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition ( not  ($ obstacle ? p /\ obstacleF )) /\ not (since(MBC)>=MB)
				action exec ; ( obstacleF = true ; neighboursF = true )
			}
			entry $ move ( lv , 0 )
		}
		state Avoid {
			initial i
			state EmptyCycle {
			}
			transition tAvoid {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_Movement_MovementAndAvoidance_Avoid_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition false /\ not (since(MBC)>=MB)
				action exec ; ( obstacleF = true ; neighboursF = true )
			}
			entry clone_normal_Movement_MovementAndAvoidance_Avoid_entry ( )
		}
		transition t1 {
			from i1
			to Move
		}
		transition t2 {
			from Move
			to Avoid
			condition ( $ obstacle ? p /\ obstacleF )
			action obstacleF = false
		}
		transition t3 {
			from Avoid
			to Move
		}
	}
	state Turning {
		initial i1
		junction j1
		state Turn180 {
			initial i
			state EmptyCycle {
			}
			transition tTurn180 {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_Movement_Turning_Turn180_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition false /\ not (turned==true)
				action exec ; ( obstacleF = true ; neighboursF = true )
			}
			entry clone_normal_Movement_Turning_Turn180_entry ( )
		}
		state RandomTurn {
			initial i
			state EmptyCycle {
			}
			transition tRandomTurn {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_Movement_Turning_RandomTurn_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition false /\ not (turned==true)
				action exec ; ( obstacleF = true ; neighboursF = true )
			}
			entry clone_normal_Movement_Turning_RandomTurn_entry ( )
		}
		state EmptyCycle {
		}
		transition t1 {
			from i1
			to j1
		}
		transition t2 {
			from j1
			to Turn180
			condition n > alpha
		}
		transition t3 {
			from j1
			to RandomTurn
			condition n <= alpha
		}
		transition t4 {
			from Turn180
			to EmptyCycle
			action clone_normal_Movement_Turning_Turn180_t4_op ( )
		}
		transition t5 {
			from RandomTurn
			to EmptyCycle
			action clone_normal_Movement_Turning_RandomTurn_t5_op ( )
		}
		transition tEmptyCycle_Movement_Turning_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			action exec ; ( obstacleF = true ; neighboursF = true )
		}
		entry clone_normal_Movement_Turning_entry ( )
	}
	transition t1 {
		from i1
		to MovementAndAvoidance
		action clone_normal_Movement_i1_t1_op ( )
	}
	transition t2 {
		from MovementAndAvoidance
		to Turning
		condition since ( MBC ) >= MB
	}
	transition t3 {
		from Turning
		to MovementAndAvoidance
		condition turned == true
	}
}

operation clone_normal_Movement_Turning_RandomTurn_t5_op ( ) {
	requires req_normal_Movement_Turning_RandomTurn_t5_op_localVars initial i
	final f
	transition t {
		from i
		to f
		action turned = true
	}
	input context { }
	output context { }
}

operation clone_normal_Movement_MovementAndAvoidance_Avoid_entry ( ) {
	requires req_normal_Movement_MovementAndAvoidance_Avoid_entry_localVars 
	requires I_clone_waitOp_j_2_5_f_softwareOps_clone_normal_Movement_MovementAndAvoidance_Avoid_entry initial i
	junction t_initialJunction_
	junction t_thenJ_
	junction t_elseJ_
	junction j_2_5
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition ( p == Position :: left ) 
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not ( p == Position :: left )
	}
	transition t_thenTA_ {
		from t_thenJ_
		to j_2_5
		action $ move ( 0 , av )
	}
	transition t_elseTA_ {
		from t_elseJ_
		to j_2_5
		action $ move ( 0 , - av )
	}
	transition t_2_5 {
		from j_2_5
		to f
		action clone_waitOp_j_2_5_f ( floor ( random ( ) * 360 / av ) )
	}
	input context { }
	output context { requires req_normal_Movement_MovementAndAvoidance_Avoid_entry_platformOps_clone_normal_Movement_MovementAndAvoidance_Avoid_entry }
} 

operation clone_normal_Movement_Turning_RandomTurn_entry ( ) {
	requires req_normal_Movement_Turning_RandomTurn_entry_localVars  
	requires IctrEvars_Movement
	requires I_clone_waitOp_j_2_3_f_softwareOps_clone_normal_Movement_Turning_RandomTurn_entry initial i
	junction j_2_3
	final f
	transition t {
		from i
		to j_2_3
		action $ move ( 0 , av )
	}
	transition t_2_3 {
		from j_2_3
		to f
		action clone_waitOp_j_2_3_f ( floor ( random ( ) * 360 / av ) )
	}
	input context { }
	output context { requires req_normal_Movement_Turning_RandomTurn_entry_platformOps_clone_normal_Movement_Turning_RandomTurn_entry }
}

operation clone_normal_Movement_Turning_entry ( ) {
	requires req_normal_Movement_Turning_entry_localVars  
	requires I_clone_normal_Movement_Turning_entry_i_t_op_i_j_2_2_softwareOps_clone_normal_Movement_Turning_entry requires I_clone_normal_Movement_Turning_entry_j_2_2_t_2_2_op_j_2_2_f_softwareOps_clone_normal_Movement_Turning_entry requires IctrEvars_Movement initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action clone_normal_Movement_Turning_entry_i_t_op_i_j_2_2 ( )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_normal_Movement_Turning_entry_j_2_2_t_2_2_op_j_2_2_f ( )
	}
	input context { uses I_events_normal_Movement_Turning_entry_inpEvs }
	output context { }
}

operation clone_normal_Movement_i1_t1_op ( ) {
	requires req_normal_Movement_i1_t1_op_clocks initial i
	final f
	transition t {
		from i
		to f
		action # MBC
	}
	input context { }
	output context { }
}

operation clone_normal_Movement_Turning_Turn180_t4_op ( ) {
	requires req_normal_Movement_Turning_Turn180_t4_op_localVars initial i
	final f
	transition t {
		from i
		to f
		action turned = true
	}
	input context { }
	output context { }
}

operation clone_normal_Movement_Turning_Turn180_entry ( ) {
	requires req_normal_Movement_Turning_Turn180_entry_localVars 
	requires IctrEvars_Movement
	requires I_clone_waitOp_j_2_4_f_softwareOps_clone_normal_Movement_Turning_Turn180_entry initial i
	junction j_2_4
	final f
	transition t {
		from i
		to j_2_4
		action $ move ( 0 , av )
	}
	transition t_2_4 {
		from j_2_4
		to f
		action clone_waitOp_j_2_4_f ( floor ( 180 / av ) )
	}
	input context { }
	output context { requires req_normal_Movement_Turning_Turn180_entry_platformOps_clone_normal_Movement_Turning_Turn180_entry }
}

operation clone_waitOp_j_2_5_f ( i : nat
) {
	requires IctrEvars_Movement
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
			action exec ; ( obstacleF = true ; neighboursF = true )		
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

operation clone_normal_Movement_Turning_entry_i_t_op_i_j_2_2 ( ) {
	requires I_req_normal_Movement_Turning_entry_i_t_localVars requires IctrEvars_Movement initial i
	junction j
	final f
	transition tr1 {
		from i
		to j
	}
	transition tr2 {
		from j
		to f
		condition ( $ neighbours ? n /\ neighboursF )
		action neighboursF = false
	}
	transition tr3 {
		from j
		to j
		condition not ( $ neighbours /\ neighboursF )
		action exec ; ( obstacleF = true ; neighboursF = true )
	}
	input context { uses I_events_normal_Movement_Turning_entry_i_t_inpEvs }
	output context { }
}

operation clone_waitOp_j_2_4_f ( i : nat
) {
	initial i0
	requires IctrEvars_Movement
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
			condition not (since ( C ) == i)
			action exec; obstacleF = true ; neighboursF = true
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

operation clone_waitOp_j_2_3_f ( i : nat
) {
	initial i0
	requires IctrEvars_Movement
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
			condition not (since ( C ) == i)
			action exec; obstacleF = true ; neighboursF = true
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

operation clone_normal_Movement_Turning_entry_j_2_2_t_2_2_op_j_2_2_f ( ) {
	requires I_req_normal_Movement_Turning_entry_j_2_2_t_2_2_localVars initial i
	final f
	transition t {
		from i
		to f
		action turned = false
	}
	input context { }
	output context { }
}

