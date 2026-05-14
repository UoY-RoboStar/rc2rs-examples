package pkg213_main_sim 

interface I_events_normal_FinderM_Looking_t2_op_outEvs {
	event land
}

interface req_normal_FinderM_Delivering_entry_localVars {
	const DELIVERY : nat = 2
}

interface I_softwareOps_clone_normal_FinderM_Delivering_entry_waitOp {
	clone_normal_FinderM_Delivering_entry_waitOp ( i : nat )
}

interface I_events_normal_FinderM_Returning_t4_op_outEvs {
	event land
}

interface I_events_normal_FinderM_Off_t1_op_outEvs {
	event takeoff
}

interface req_normal_FinderM_Off_t1_op_localVars {
	const TOP : nat = 1
}

interface I_waitOp_softwareOps_clone_normal_FinderM_Off_t1_op {
	clone_normal_FinderM_Off_t1_waitOp ( n : nat )
}

interface req_normal_FinderM_Delivering_t3_op_platformOps_clone_normal_FinderM_Delivering_t3_op {
	move ( lv : nat )
	turnBack ( )
}

interface I_events_normal_FinderM_Delivering_t3_op_outEvs {
	event takeoff
}

interface I_waitOp_softwareOps_clone_normal_FinderM_Delivering_t3_op {
	waitOp ( i : nat )
}

interface req_normal_FinderM_Delivering_t3_op_localVars {
	const TOP : nat = 1 , LV : nat
}

interface I_clone_normal_FinderM_Looking_t2_op_softwareOps_FinderM {
	clone_normal_FinderM_Looking_t2_op ( )
}

interface IctrEvars_FinderM {
	var originF : boolean = true , foundF : boolean = true , switchOnF : boolean = true
}

interface I_clone_normal_FinderM_Delivering_entry_softwareOps_FinderM {
	clone_normal_FinderM_Delivering_entry ( )
}

interface Flying_outEvs_FinderM {
	event takeoff
	event land
}

interface I_inpEvs_FinderM {
	event switchOn
}

interface I_clone_normal_FinderM_Off_t1_op_softwareOps_FinderM {
	clone_normal_FinderM_Off_t1_op ( )
}

interface Moving_platformOps_FinderM {
	move ( lv : nat )
	turnBack ( )
}

interface Camera_inpEvs_FinderM {
	event found
	event origin
}

interface I_clone_normal_FinderM_Delivering_t3_op_softwareOps_FinderM {
	clone_normal_FinderM_Delivering_t3_op ( )
}

interface I_clone_normal_FinderM_Returning_t4_op_softwareOps_FinderM {
	clone_normal_FinderM_Returning_t4_op ( )
}

stm FinderM {
	uses IctrEvars_FinderM 
	requires I_clone_normal_FinderM_Looking_t2_op_softwareOps_FinderM requires I_clone_normal_FinderM_Delivering_entry_softwareOps_FinderM 
	requires I_clone_normal_FinderM_Returning_t4_op_softwareOps_FinderM requires I_clone_normal_FinderM_Off_t1_op_softwareOps_FinderM 
	requires I_clone_normal_FinderM_Delivering_t3_op_softwareOps_FinderM 
	const DELIVERY : nat = 2
	const LV : nat
	const TOP : nat = 1
	input context { uses I_inpEvs_FinderM uses Camera_inpEvs_FinderM }
	output context { uses Flying_outEvs_FinderM requires Moving_platformOps_FinderM }
	cycleDef cycle == 1
	initial i0
	state Off {
		initial i
		state EmptyCycle {
		}
		transition tOff {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_FinderM_Off_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition (not $ switchOn /\ switchOnF )
			action exec ; ( switchOnF = true ; ( originF = true ; foundF = true ) )
		}
	}
	state Looking {
		initial i
		state EmptyCycle {
		}
		transition tLooking {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_FinderM_Looking_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition (not $ found /\ foundF )
			action exec ; ( switchOnF = true ; ( originF = true ; foundF = true ) )
		}
		entry $ move ( LV )
	}
	state Delivering {
		initial i
		state EmptyCycle {
		}
		transition tDelivering {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_FinderM_Delivering_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not true
			action exec ; ( switchOnF = true ; ( originF = true ; foundF = true ) )
		}
		entry clone_normal_FinderM_Delivering_entry ( )
	}
	state Returning {
		initial i
		state EmptyCycle {
		}
		transition tReturning {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_FinderM_Returning_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition (not $ origin /\ originF )
			action exec ; ( switchOnF = true ; ( originF = true ; foundF = true ) )
		}
	}
	transition t0 {
		from i0
		to Off
	}
	transition t1 {
		from Off
		to Looking
		condition ( $ switchOn /\ switchOnF )
		action clone_normal_FinderM_Off_t1_op ( ) ; switchOnF = false
	}
	transition t2 {
		from Looking
		to Delivering
		condition ( $ found /\ foundF )
		action clone_normal_FinderM_Looking_t2_op ( ) ; foundF = false
	}
	transition t3 {
		from Delivering
		to Returning
		action clone_normal_FinderM_Delivering_t3_op ( )
	}
	transition t4 {
		from Returning
		to Off
		condition ( $ origin /\ originF )
		action clone_normal_FinderM_Returning_t4_op ( ) ; originF = false
	}
}

operation clone_normal_FinderM_Looking_t2_op ( ) {
	initial i
	final f
	transition t {
		from i
		to f
		action $ land
	}
	input context { }
	output context { uses I_events_normal_FinderM_Looking_t2_op_outEvs }
}

operation clone_normal_FinderM_Delivering_entry ( ) {
	requires IctrEvars_FinderM
	requires req_normal_FinderM_Delivering_entry_localVars 
	requires I_softwareOps_clone_normal_FinderM_Delivering_entry_waitOp
	initial i
	final f
	transition t { 
		from i
		to f
		action clone_normal_FinderM_Delivering_entry_waitOp ( DELIVERY )
	}
	input context { }
	output context { }
}

operation clone_normal_FinderM_Returning_t4_op ( ) {
	initial i
	final f
	transition t {
		from i
		to f
		action $ land
	}
	input context { }
	output context { uses I_events_clone_normal_FinderM_Returning_t4_op_outEvs }
}

interface I_events_clone_normal_FinderM_Returning_t4_op_outEvs{
	event land
}

operation clone_normal_FinderM_Off_t1_op ( ) {
	requires I_waitOp_softwareOps_clone_normal_FinderM_Off_t1_op 
	requires I_clone_normal_FinderM_Off_t1_op_i_t_op 
	requires I_req_clone_normal_FinderM_Off_t1_op
	requires IctrEvars_FinderM
	initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action clone_normal_FinderM_Off_t1_op_i_t_op ( )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_normal_FinderM_Off_t1_waitOp ( TOP )
	}
	input context { }
	output context { uses I_events_clone_normal_FinderM_Off_t1_op_outEvs }
}

interface I_req_clone_normal_FinderM_Off_t1_op {
	const TOP : nat = 1
}

operation clone_normal_FinderM_Off_t1_op_i_t_op ( ) {
	initial i
	final f
	transition t {
		from i
		to f
		action $takeoff
	}
	input context { }
	output context { uses I_events_clone_normal_FinderM_Off_t1_op_outEvs }
}

interface I_events_clone_normal_FinderM_Off_t1_op_outEvs{
	event takeoff
}

interface I_clone_normal_FinderM_Off_t1_op_i_t_op{
	clone_normal_FinderM_Off_t1_op_i_t_op()
}

operation clone_normal_FinderM_Off_t1_waitOp ( n : nat
) {
	initial i0
	final f
	requires IctrEvars_FinderM
	state Waiting {
		state EmptyCycle {
		}
		initial i
		transition t { 
			from i
			to EmptyCycle
		}
		transition t_EmptyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == n
			action exec;  ( switchOnF = true ; ( originF = true ; foundF = true ) )
		}
	}
	transition t2 {
		from Waiting
		to f
		condition since ( C ) == n
	}
	transition t {
		from i0
		to Waiting
		action # C
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_FinderM_Delivering_t3_op ( ) {
	requires IctrEvars_FinderM
	requires req_normal_FinderM_Delivering_t3_op_localVars 
	requires I_clone_normal_FinderM_Delivering_t3_op_i_t_op 
	requires I_clone_normal_FinderM_Delivering_t3_waitOp
	initial i
	junction j_4_3
	junction j_3_4
	junction j_2_5
	final f
	transition t {
		from i
		to j_4_3
		action clone_normal_FinderM_Delivering_t3_op_i_t_op ( )
	}
	transition t_4_3 {
		from j_4_3
		to j_3_4
		action clone_normal_FinderM_Delivering_t3_waitOp ( TOP )
	}
	transition t_3_4 {
		from j_3_4
		to j_2_5
		action $ turnBack ( )
	}
	transition t_2_5 {
		from j_2_5
		to f
		action $ move ( LV )
	}
	input context { }
	output context { uses I_events_normal_FinderM_Delivering_t3_op_outEvs 
		requires req_normal_FinderM_Delivering_t3_op_platformOps_clone_normal_FinderM_Delivering_t3_op
	}
}

interface I_clone_normal_FinderM_Delivering_t3_op_i_t_op{
	clone_normal_FinderM_Delivering_t3_op_i_t_op()
}

operation clone_normal_FinderM_Delivering_t3_op_i_t_op ( ) {
	 final f
	initial i
	transition t {
		from i
		to f
		action $takeoff
	}
	input context { }
	output context { uses I_events_clone_normal_FinderM_Delivering_t3_op_i_t  }
}

interface I_events_clone_normal_FinderM_Delivering_t3_op_i_t {
	event takeoff
}


operation clone_normal_FinderM_Delivering_entry_waitOp ( i : nat
) {
	initial i0
	final f
	requires IctrEvars_FinderM
	state Waiting {
		state EmptyCycle {
		}
		initial i
		transition t {
			from i
			to EmptyCycle
		}
		transition t_EmptyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == i
			action exec;  ( switchOnF = true ; ( originF = true ; foundF = true ) )
		}
	}
	transition t2 {
		from Waiting
		to f
		condition since ( C ) == i
	}
	transition t {
		from i0
		to Waiting
		action # C
	}
	clock C
	input context { }
	output context { }
}


operation clone_normal_FinderM_Delivering_t3_waitOp ( i : nat
) {
	initial i0
	final f
	requires IctrEvars_FinderM
	state Waiting {
		state EmptyCycle {
		}
		initial i
		transition t {
			from i
			to EmptyCycle
		}
		transition t_EmptyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == i
			action exec;  ( switchOnF = true ; ( originF = true ; foundF = true ) )
		}
	}
	transition t2 {
		from Waiting
		to f
		condition since ( C ) == i
	}
	transition t {
		from i0
		to Waiting
		action # C
	}
	clock C
	input context { }
	output context { }
}

interface I_clone_normal_FinderM_Delivering_t3_waitOp{
	clone_normal_FinderM_Delivering_t3_waitOp(i : nat)
}

interface Camera {
	event found
	event origin
}

interface Flying {
	event takeoff
	event land
}

interface Moving {
	move ( lv : nat )
	turnBack ( )
}

module Rescue {
	connection Finder on land to Drone on land ( _async )
	connection Drone on found to Finder on found ( _async )
	connection Finder on takeoff to Drone on takeoff ( _async )
	connection Drone on switchOn to Finder on switchOn ( _async )
	connection Drone on origin to Finder on origin ( _async )
	robotic platform Drone {
		uses Flying uses Camera provides Moving event switchOn
	} 

	controller Finder {
		uses Flying uses Camera requires Moving event switchOn
		opref Finder_ref_clone_normal_FinderM_Delivering_t3_op_i_t_op = clone_normal_FinderM_Delivering_t3_op_i_t_op
		opref Finder_ref_clone_normal_FinderM_Off_t1_waitOp = clone_normal_FinderM_Off_t1_waitOp
		opref Finder_ref_clone_normal_FinderM_Off_t1_op  = clone_normal_FinderM_Off_t1_op 
		opref Finder_ref_clone_normal_FinderM_Looking_t2_op = clone_normal_FinderM_Looking_t2_op
		opref Finder_ref_clone_normal_FinderM_Delivering_entry = clone_normal_FinderM_Delivering_entry
		opref Finder_ref_clone_normal_FinderM_Returning_t4_op = clone_normal_FinderM_Returning_t4_op
		opref Finder_ref_clone_normal_FinderM_Delivering_t3_op = clone_normal_FinderM_Delivering_t3_op
		opref Finder_ref_clone_normal_FinderM_Delivering_entry_waitOp = clone_normal_FinderM_Delivering_entry_waitOp
		opref Finder_ref_clone_normal_FinderM_Off_t1_op_i_t_op = clone_normal_FinderM_Off_t1_op_i_t_op
		opref Finder_ref_clone_normal_FinderM_Delivering_t3_waitOp = clone_normal_FinderM_Delivering_t3_waitOp
		sref stm_ref0 = FinderM
		cycleDef cycle == 1
		connection Finder on found to stm_ref0 on found
		connection stm_ref0 on land to Finder on land
		connection stm_ref0 on takeoff to Finder on takeoff
		connection Finder on switchOn to stm_ref0 on switchOn
		connection Finder on origin to stm_ref0 on origin
	}

	cycleDef cycle == 1
}

