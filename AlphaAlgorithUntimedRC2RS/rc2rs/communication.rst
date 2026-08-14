package pre_pkg__sim import sequence_toolkit::size import main::Position import set_toolkit::union import sequence_toolkit::size import set_toolkit::union interface I_events_normal_Communication_Receive_t5_op_outEvs {
	event robots : nat
}

interface req_normal_Communication_Receive_t5_op_localVars {
	var neighs : Set( main::ID )
}

interface req_normal_Communication_Receive_t3_op_localVars {
	const id : main::ID
	var y : main::ID
}

interface I_events_normal_Communication_Receive_t3_op_outEvs {
	event receive : main::ID * main::ID
}

interface req_normal_Communication_Receive_t2_op_localVars {
	var neighs : Set( main::ID ) , x : main::ID * main::ID
}

interface req_normal_Communication_Broadcast_t4_op_localVars {
	var neighs : Set( main::ID )
}

interface req_normal_Communication_Broadcast_entry_localVars {
	const id : main::ID
}

interface I_events_normal_Communication_Broadcast_entry_outEvs {
	event broadcast : main::ID
}

interface CommHw_outEvs_Communication {
	event broadcast : main::ID
	event receive : main::ID * main::ID
}

interface CommHw_inpEvs_Communication {
	event broadcast : main::ID
	event receive : main::ID * main::ID
}

interface I_clone_normal_Communication_Receive_t3_op_softwareOps_Communication {
	clone_normal_Communication_Receive_t3_op ( )
}

interface I_clone_normal_Communication_Broadcast_entry_softwareOps_Communication {
	clone_normal_Communication_Broadcast_entry ( )
}

interface Internal_outEvs_Communication {
	event robots : nat
}

interface I_clone_normal_Communication_Receive_t2_op_softwareOps_Communication {
	clone_normal_Communication_Receive_t2_op ( )
}

interface I_clone_normal_Communication_Receive_t5_op_softwareOps_Communication {
	clone_normal_Communication_Receive_t5_op ( )
}

interface I_clone_normal_Communication_Broadcast_t4_op_softwareOps_Communication {
	clone_normal_Communication_Broadcast_t4_op ( )
}

interface IctrEvars_Communication {
	var broadcastF : boolean = true , receiveF : boolean = true
}

stm Communication {
	uses IctrEvars_Communication requires I_clone_normal_Communication_Receive_t5_op_softwareOps_Communication requires I_clone_normal_Communication_Receive_t3_op_softwareOps_Communication requires I_clone_normal_Communication_Receive_t2_op_softwareOps_Communication requires I_clone_normal_Communication_Broadcast_t4_op_softwareOps_Communication requires I_clone_normal_Communication_Broadcast_entry_softwareOps_Communication const id : main::ID
	var x : main::ID * main::ID , y : main::ID
	var neighs : Set( main::ID )
	const RC : nat
	clock RCC
	input context { uses CommHw_inpEvs_Communication }
	output context { uses CommHw_outEvs_Communication uses Internal_outEvs_Communication }
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
			condition not ( true )
			action exec ; ( receiveF = true ; broadcastF = true )
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
			condition not ( ( ( y != id /\ ( ( $ broadcast ? y /\ broadcastF ) ) ) \/ ( x [ 1 ] == id /\ ( ( $ receive ? x /\ receiveF ) ) ) ) \/ ( since ( RCC ) >= RC ) )
			action exec ; ( receiveF = true ; broadcastF = true )
		}
	}
	transition t1 {
		from i1
		to Broadcast
	}
	transition t4 {
		from Broadcast
		to Receive
		# RCC
		action clone_normal_Communication_Broadcast_t4_op ( )
	}
	transition t3 {
		from Receive
		to Receive
		condition ( $ broadcast ? y /\ broadcastF ) /\ y != id
		action clone_normal_Communication_Receive_t3_op ( ) ; broadcastF = false
	}
	transition t2 {
		from Receive
		to Receive
		condition ( $ receive ? x /\ receiveF ) /\ x [ 1 ] == id
		action clone_normal_Communication_Receive_t2_op ( ) ; receiveF = false
	}
	transition t5 {
		from Receive
		to Broadcast
		condition since ( RCC ) >= RC
		action clone_normal_Communication_Receive_t5_op ( )
	}
}

operation clone_normal_Communication_Receive_t5_op ( ) {
	requires req_normal_Communication_Receive_t5_op_localVars requires IctrEvars_Communication initial i
	final f
	transition t {
		from i
		to f
		action $ robots ! size ( neighs )
	}
	input context { }
	output context { uses I_events_normal_Communication_Receive_t5_op_outEvs }
}

operation clone_normal_Communication_Receive_t3_op ( ) {
	requires req_normal_Communication_Receive_t3_op_localVars requires IctrEvars_Communication initial i
	final f
	transition t {
		from i
		to f
		action $ receive ! (| y , id |)
	}
	input context { }
	output context { uses I_events_normal_Communication_Receive_t3_op_outEvs }
}

operation clone_normal_Communication_Receive_t2_op ( ) {
	requires req_normal_Communication_Receive_t2_op_localVars requires IctrEvars_Communication initial i
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
	requires req_normal_Communication_Broadcast_t4_op_localVars requires IctrEvars_Communication initial i
	final f
	transition t {
		from i
		to f
		action neighs = { }
	}
	input context { }
	output context { }
}

operation clone_normal_Communication_Broadcast_entry ( ) {
	requires req_normal_Communication_Broadcast_entry_localVars requires IctrEvars_Communication initial i
	final f
	transition t {
		from i
		to f
		action $ broadcast ! id
	}
	input context { }
	output context { uses I_events_normal_Communication_Broadcast_entry_outEvs }
}

