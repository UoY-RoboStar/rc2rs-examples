package pkg224_SimFW_sim 
interface I_waitOp_softwareOps_clone_normal_SMovement_Turning_entry {
	waitOp ( i : nat )
}
 
interface req_normal_SMovement_Turning_entry_platformOps_clone_normal_SMovement_Turning_entry {
	move ( lv : real , av : real )
}

interface req_normal_SMovement_Turning_entry_localVars {
	const av : real
}

interface I_clone_waitOp_j_2_4_f_softwareOps_clone_normal_SMovement_Turning_entry {
	clone_waitOp_j_2_4_f ( i : nat )
}

interface req_normal_SMovement_Moving_entry_localVars {
	const lv : real
}

interface req_normal_SMovement_Moving_t2_op_clocks {
	clock MBC
}

interface req_normal_SMovement_Moving_entry_platformOps_clone_normal_SMovement_Moving_entry {
	move ( lv : real , av : real )
}

interface I_clone_waitOp_j_2_2_f_softwareOps_clone_normal_SMovement_Moving_entry {
	clone_waitOp_j_2_2_f ( i : nat )
}

interface I_clone_waitOp_j_2_5_f_softwareOps_clone_normal_SMovement_Moving_t2_op {
	clone_waitOp_j_2_5_f ( i : nat )
}

interface I_waitOp_softwareOps_clone_normal_SMovement_Moving_entry {
	waitOp ( i : nat )
}

interface req_normal_SMovement_Moving_t2_op_platformOps_clone_normal_SMovement_Moving_t2_op {
	stop ( )
}

interface I_req_normal_SMovement_Moving_t2_op_i_t_clocks {
	clock MBC
}

interface I_waitOp_softwareOps_clone_normal_SMovement_Moving_t2_op {
	waitOp ( i : nat )
}


interface I_clone_waitOp_j_2_4_f_softwareOps_clone_normal_SMovement_Moving_t2_op {
	clone_waitOp_j_2_4_f ( i : nat )
}

interface IctrEvars_SMovement {
	var obstacleF : boolean = false
}

interface ObstacleI_inpEvs_SMovement {
	event obstacle
}

interface I_clone_normal_SMovement_Turning_entry_softwareOps_SMovement {
	clone_normal_SMovement_Turning_entry ( )
}

interface I_clone_normal_SMovement_Moving_entry_softwareOps_SMovement {
	clone_normal_SMovement_Moving_entry ( )
}

interface I_clone_normal_SMovement_Moving_t2_op_i_t_op_i_j_3_3_softwareOps_clone_normal_SMovement_Moving_t2_op {
	clone_normal_SMovement_Moving_t2_op_i_t_op_i_j_3_3 ( )
}

interface MovementI_platformOps_SMovement {
	move ( lv : real , av : real )
	stop ( )
}

interface I_clone_normal_SMovement_Moving_t2_op_softwareOps_SMovement {
	clone_normal_SMovement_Moving_t2_op ( ) 
}

controller Movement {
	uses ObstacleI requires MovementI   
	opref Movement_ref_clone_normal_SMovement_Turning_entry = clone_normal_SMovement_Turning_entry
	opref Movement_ref_clone_normal_SMovement_Moving_entry = clone_normal_SMovement_Moving_entry
	opref Movement_ref_clone_normal_SMovement_Moving_t2_op = clone_normal_SMovement_Moving_t2_op
	opref Movement_ref_clone_waitOp_j_2_2_f = clone_waitOp_j_2_2_f
	opref Movement_ref_clone_waitOp_j_2_4_f = clone_waitOp_j_2_4_f
	opref Movement_ref_clone_normal_SMovement_Moving_t2_op_i_t_op_i_j_3_3 = clone_normal_SMovement_Moving_t2_op_i_t_op_i_j_3_3
	sref stm_ref0 = SMovement
	connection Movement on obstacle to stm_ref0 on obstacle
	cycleDef cycle == 1
}
 
stm SMovement {
	uses IctrEvars_SMovement 
	requires I_clone_normal_SMovement_Turning_entry_softwareOps_SMovement 
	requires I_clone_normal_SMovement_Moving_entry_softwareOps_SMovement 
	requires I_clone_normal_SMovement_Moving_t2_op_softwareOps_SMovement const lv : real
	const PI : real
	const av : real
	clock MBC
	input context { uses ObstacleI_inpEvs_SMovement }
	output context { requires MovementI_platformOps_SMovement }
	cycleDef cycle == 1
	initial i1
	state Moving {
		initial i
		state EmptyCycle {
		}
		transition tMoving {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_SMovement_Moving_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( $ obstacle /\ obstacleF )
			action exec ; obstacleF = true
		}
		entry clone_normal_SMovement_Moving_entry ( )
	}
	state Turning {
		initial i
		state EmptyCycle {
		}
		transition tTurning {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_SMovement_Turning_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not since(MBC)>=PI/av
			action exec ; obstacleF = true
		}
		entry clone_normal_SMovement_Turning_entry ( )
	}
	transition t1 {
		from i1
		to Moving
	}
	transition t2 {
		from Moving
		to Turning
		# MBC
		condition ( $ obstacle /\ obstacleF )
		action clone_normal_SMovement_Moving_t2_op ( ) ; obstacleF = false
	}
	transition t3 {
		from Turning
		to Moving
		condition since ( MBC ) >= PI / av 
	}
}

operation clone_normal_SMovement_Turning_entry ( ) {
	requires IctrEvars_SMovement requires req_normal_SMovement_Turning_entry_localVars requires I_clone_waitOp_j_2_4_f_softwareOps_clone_normal_SMovement_Turning_entry initial i
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
		action clone_waitOp_j_2_4_f ( 1 )
	}
	input context { }
	output context { requires req_normal_SMovement_Turning_entry_platformOps_clone_normal_SMovement_Turning_entry }
}

operation clone_normal_SMovement_Moving_entry ( ) {
	requires IctrEvars_SMovement requires req_normal_SMovement_Moving_entry_localVars requires I_clone_waitOp_j_2_2_f_softwareOps_clone_normal_SMovement_Moving_entry initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action $ move ( lv , 0 )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_waitOp_j_2_2_f ( 1 )
	}
	input context { }
	output context { requires req_normal_SMovement_Moving_entry_platformOps_clone_normal_SMovement_Moving_entry }
}

operation clone_normal_SMovement_Moving_t2_op ( ) {
	requires IctrEvars_SMovement requires I_clone_waitOp_j_2_4_f_softwareOps_clone_normal_SMovement_Moving_t2_op initial i
	junction j_2_4
	final f
	transition t {
		from i
		to j_2_4
		action $ stop ( )
	}
	transition t_2_4 {
		from j_2_4
		to f
		action clone_waitOp_j_2_4_f ( 1 )
	}
	input context { }
	output context { requires req_normal_SMovement_Moving_t2_op_platformOps_clone_normal_SMovement_Moving_t2_op }
}

operation clone_normal_SMovement_Moving_t2_op_i_t_op_i_j_3_3 ( ) {
	requires I_req_normal_SMovement_Moving_t2_op_i_t_clocks initial i
	final f
	transition t {
		from i
		to f
		action # MBC
	}
	input context { }
	output context { }
}

operation clone_waitOp_j_2_2_f ( i : nat
) {
	initial i0
	requires IctrEvars_SMovement
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		
		transition t_EmptyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == i
			action exec; obstacleF = true
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

operation clone_waitOp_j_2_4_f ( i : nat
) {
	initial i0
	requires IctrEvars_SMovement
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition t_EmptyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == i
			action exec; obstacleF = true
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
 


module CMovement {
	connection FootBot on obstacle to ctrl_ref0 on obstacle ( _async )
	robotic platform FootBot {
		uses ObstacleI provides MovementI }

	cref ctrl_ref0 = Movement
	cycleDef cycle == 1
}

