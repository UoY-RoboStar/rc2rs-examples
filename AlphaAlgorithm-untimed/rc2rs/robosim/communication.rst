package pkg223__sim 
import pkg223_main_sim::*
  
import sequence_toolkit::size  
import set_toolkit::union import sequence_toolkit::size import set_toolkit::union interface req_normal_Communication_Receive_t2_op_localVars {
	var x : ID * ID , neighs : Set( ID )
}
   

interface req_normal_Communication_Broadcast_t4_op_localVars {
	var neighs : Set( ID )
}

interface I_events_normal_Communication_Receive_t3_op_outEvs {
	event receive : ID * ID
}

interface req_normal_Communication_Receive_t3_op_localVars {
	var y : ID
	const id : ID
}

interface req_normal_Communication_Broadcast_entry_localVars {
	const id : ID
}

interface I_events_normal_Communication_Broadcast_entry_outEvs {
	event broadcast : ID
}

interface req_normal_Communication_Receive_t5_op_localVars {
	var neighs : Set( ID )
}

interface I_events_normal_Communication_Receive_t5_op_outEvs {
	event robots : nat
}

interface IctrEvars_Communication {
	var broadcastF : boolean = true , receiveF : boolean = true
}

interface I_clone_normal_Communication_Receive_t3_op_softwareOps_Communication {
	clone_normal_Communication_Receive_t3_op ( )
}

interface CommHw_outEvs_Communication {
	event broadcast : ID
	event receive : ID * ID
}

interface Internal_outEvs_Communication {
	event robots : nat
}

interface I_clone_normal_Communication_Broadcast_t4_op_softwareOps_Communication {
	clone_normal_Communication_Broadcast_t4_op ( )
}

interface I_clone_normal_Communication_Receive_t5_op_softwareOps_Communication {
	clone_normal_Communication_Receive_t5_op ( )
}

interface I_clone_normal_Communication_Receive_t2_op_softwareOps_Communication {
	clone_normal_Communication_Receive_t2_op ( )
}

interface CommHw_inpEvs_Communication {
	event broadcast : ID
	event receive : ID * ID
}

interface I_clone_normal_Communication_Broadcast_entry_softwareOps_Communication {
	clone_normal_Communication_Broadcast_entry ( )
}

stm Communication {
	uses IctrEvars_Communication 
	requires I_clone_normal_Communication_Receive_t2_op_softwareOps_Communication 
	requires I_clone_normal_Communication_Broadcast_t4_op_softwareOps_Communication 
	requires I_clone_normal_Communication_Receive_t3_op_softwareOps_Communication 
	requires I_clone_normal_Communication_Broadcast_entry_softwareOps_Communication 
	requires I_clone_normal_Communication_Receive_t5_op_softwareOps_Communication const id : ID
	var x : ID * ID , y : ID
	var neighs : Set( ID )
	const RC : nat 
	clock RCC
	input context { uses CommHw_inpEvs_Communication }
	output context { uses CommHw_inpEvs_Communication uses CommHw_outEvs_Communication 
		uses Internal_outEvs_Communication
	}
	cycleDef cycle == 1
	initial i1
	state Broadcast {
		initial i
		state EmptyCycle {
		}
		transition tBroadcast {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Communication_Broadcast_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not since(RCC)>=RC
			action exec ; ( broadcastF = true ; receiveF = true )
		}
		entry clone_normal_Communication_Broadcast_entry ( )
	}
	state Receive {
		initial i
		state EmptyCycle {
		}
		transition tReceive {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Communication_Receive_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not (( $ broadcast ? y /\ broadcastF ) /\ y != id) /\ not (( $ receive ? x /\ receiveF ) /\ x [ 1 ] == id)
			action exec ; ( broadcastF = true ; receiveF = true )
		}
	}
	transition t1 {
		from i1 
		to Broadcast
	}
	transition t4 {
		from Broadcast
		to Receive 
		action clone_normal_Communication_Broadcast_t4_op ( )
	}
	transition t3 {
		from Receive
		to Receive
		condition ( $ broadcast ? y /\ broadcastF ) /\ y != id
	}
	transition t2 {
		from Receive
		to Receive
		condition ( $ receive ? x /\ receiveF ) /\ x [ 1 ] == id
	}
	transition t5 {
		from Receive
		to Broadcast
		condition since ( RCC ) >= RC
	}
}

operation clone_normal_Communication_Receive_t2_op ( ) {
	requires req_normal_Communication_Receive_t2_op_localVars initial i
	final f
	transition t {
		from i
		to f
		action neighs = union ( neighs , { x [ 2 ] } )
	}
	input context { }
	output context { }
}

operation clone_normal_Communication_Broadcast_t4_op ( ) {
	requires req_normal_Communication_Broadcast_t4_op_localVars initial i
	final f
	transition t {
		from i
		to f
		action neighs = { }
	}
	input context { }
	output context { }
}

operation clone_normal_Communication_Receive_t3_op ( ) {
	requires req_normal_Communication_Receive_t3_op_localVars initial i
	final f
	transition t {
		from i
		to f
		action $ receive ! (| y , id |)
	}
	input context { }
	output context { uses I_events_normal_Communication_Receive_t3_op_outEvs }
}

operation clone_normal_Communication_Broadcast_entry ( ) {
	requires req_normal_Communication_Broadcast_entry_localVars initial i
	final f
	transition t {
		from i
		to f
		action $ broadcast ! id
	}
	input context { }
	output context { uses I_events_normal_Communication_Broadcast_entry_outEvs }
}

operation clone_normal_Communication_Receive_t5_op ( ) {
	requires req_normal_Communication_Receive_t5_op_localVars initial i
	final f
	transition t {
		from i
		to f
		action $ robots ! size ( neighs )
	}
	input context { }
	output context { uses I_events_normal_Communication_Receive_t5_op_outEvs }
}

