package pre_pkg_head_sim 

interface I_events_normal_HeadS_j0_t1_op_outEvs {
	event startSiren
}

interface IctrEvars_HeadS {
	var wallDetectedF : boolean = true , stepDoneLeftF : boolean = true , stepDoneRightF : boolean = true
}
 
interface Iexec_ms_HeadS_Walking {
	var exec_ms_HeadS_Walking : boolean = false
}

interface I_clone_clone_HeadS_Walk_during_1_normal_Walk_RightFoot_entry_entry_2_softwareOps_clone_HeadS_Walk_during_1 {
	clone_clone_HeadS_Walk_during_1_normal_Walk_RightFoot_entry_entry_2 ( )
}

interface I_outEvs_clone_HeadS_Walk_during_1 {
	event liftFootLeft
	event liftFootRight
}

interface I_inpEvs_clone_HeadS_Walk_during_1 {
	event stepDoneLeft
	event stepDoneRight
}

interface Iexec_ds_HeadS_Walking {
	var exec_ds_HeadS_Walking : boolean = false
}

interface I_clone_clone_HeadS_Walk_during_1_normal_Walk_LeftFoot_entry_entry_3_softwareOps_clone_HeadS_Walk_during_1 {
	clone_clone_HeadS_Walk_during_1_normal_Walk_LeftFoot_entry_entry_3 ( )
}

interface I_events_normal_HeadS_Walking_t5_op_outEvs {
	event stopSiren
}

interface I_events_normal_Walk_RightFoot_entry_outEvs {
	event liftFootRight
}

interface I_events_normal_Walk_LeftFoot_entry_outEvs {
	event liftFootLeft
}

interface HeadI_platformOps_HeadS {
	turn ( )
}

interface I_clone_normal_HeadS_j0_t1_op_softwareOps_HeadS {
	clone_normal_HeadS_j0_t1_op ( )
}

interface I_clone_HeadS_Walk_during_1_softwareOps_HeadS {
	clone_HeadS_Walk_during_1 ( )
}

interface I_inpEvs_HeadS {
	event wallDetected
	event stepDoneLeft
	event stepDoneRight
	
}

interface I_clone_normal_HeadS_Walking_t5_op_softwareOps_HeadS {
	clone_normal_HeadS_Walking_t5_op ( )
}

interface I_outEvs_HeadS {
	event liftFootLeft
	event liftFootRight
}

interface WalkI_softwareOps_HeadS {
	Walk ( )
}

interface I_opFinalDuring_HeadS_Walking {
	opFinalDuring_HeadS_Walking ( )
}

interface I_SFinal_HeadS_Walking {
	SFinal_HeadS_Walking ( )
}

interface Iinact_HeadS_Walking {
	var inact_HeadS_Walking : boolean = true
}

interface I_SFinal_EmptyCycle_clone_HeadS_Walk_during_1_LeftFoot {
	SFinal_EmptyCycle_clone_HeadS_Walk_during_1_LeftFoot ( )
}

interface I_SFinal_EmptyCycle_clone_HeadS_Walk_during_1_RightFoot {
	SFinal_EmptyCycle_clone_HeadS_Walk_during_1_RightFoot ( )
}

controller Head {
	requires //pre_pkg_head::HeadI 
	HeadI_platformOps_HeadS
	event startSiren
	event wallDetected
	event stopSiren
	event liftFootLeft
	event liftFootRight
	event stepDoneLeft
	event stepDoneRight
	opref Head_ref_clone_normal_HeadS_j0_t1_op = clone_normal_HeadS_j0_t1_op
	opref Head_ref_clone_HeadS_Walk_during_1 = clone_HeadS_Walk_during_1
	opref Head_ref_clone_normal_HeadS_Walking_t5_op = clone_normal_HeadS_Walking_t5_op
	opref Head_ref_clone_clone_HeadS_Walk_during_1_normal_Walk_RightFoot_entry_entry_2 = clone_clone_HeadS_Walk_during_1_normal_Walk_RightFoot_entry_entry_2
	opref Head_ref_clone_clone_HeadS_Walk_during_1_normal_Walk_LeftFoot_entry_entry_3 = clone_clone_HeadS_Walk_during_1_normal_Walk_LeftFoot_entry_entry_3
	opref Head_ref_SFinal_EmptyCycle_clone_HeadS_Walk_during_1_RightFoot = SFinal_EmptyCycle_clone_HeadS_Walk_during_1_RightFoot
	opref Head_ref_SFinal_EmptyCycle_clone_HeadS_Walk_during_1_LeftFoot = SFinal_EmptyCycle_clone_HeadS_Walk_during_1_LeftFoot
	opref Head_ref_SFinal_HeadS_Walking = SFinal_HeadS_Walking
	opref Head_ref_opFinalDuring_HeadS_Walking = opFinalDuring_HeadS_Walking //added
	sref stm_ref = HeadS
		connection stm_ref on startSiren to Head on startSiren
	connection stm_ref on stopSiren to Head on stopSiren
	connection Head on wallDetected to stm_ref on wallDetected
	cycleDef cycle == 1
}

stm HeadS {
	uses IctrEvars_HeadS uses Iexec_ds_HeadS_Walking uses Iexec_ms_HeadS_Walking uses Iinact_HeadS_Walking 
	//requires WalkI_softwareOps_HeadS 
	requires I_clone_normal_HeadS_j0_t1_op_softwareOps_HeadS 
	requires I_clone_HeadS_Walk_during_1_softwareOps_HeadS 
	requires I_clone_normal_HeadS_Walking_t5_op_softwareOps_HeadS requires I_opFinalDuring_HeadS_Walking requires I_SFinal_HeadS_Walking 
	input context { uses I_inpEvs_HeadS }
	output context { uses I_outEvs_HeadS requires HeadI_platformOps_HeadS 
		event stopSiren event startSiren //added
		/*
- Output event 'startSiren' used by operation 'clone_normal_HeadS_j0_t1_op'
   is not provided by state machine 'HeadS' as an output.
- Output event 'stopSiren' used by operation 'clone_normal_HeadS_Walking_t5_op'
   is not provided by state machine 'HeadS' as an output. */
	}
	cycleDef cycle == 1
	initial i0 
	junction j0
	junction j2
	junction j1
	state Walking {
		initial i
		state EmptyCycle {
			entry inact_HeadS_Walking = false
		}
		transition tWalking {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_HeadS_Walking_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( $ wallDetected /\ wallDetectedF ) )
			action SFinal_HeadS_Walking ( )
		}
		during clone_HeadS_Walk_during_1 ( ) ; opFinalDuring_HeadS_Walking ( )
		exit inact_HeadS_Walking = true
	}
	final f0
	transition t0 {
		from i0
		to j0
	}
	transition t1 {
		from j0
		to j1
		action clone_normal_HeadS_j0_t1_op ( )
	}
	transition t2 {
		from j0
		to j2
	}
	transition t4 {
		from j2
		to Walking
	}
	transition t3 {
		from j1
		to Walking
	}
	transition t5 {
		from Walking
		to f0
		condition ( $ wallDetected /\ wallDetectedF )
		action clone_normal_HeadS_Walking_t5_op ( ) ; wallDetectedF = false
	}
}

operation clone_normal_HeadS_j0_t1_op ( ) {
	requires IctrEvars_HeadS initial i
	final f
	transition t {
		from i
		to f
		action $ startSiren
	}
	input context { }
	output context { uses I_events_normal_HeadS_j0_t1_op_outEvs }
}

operation clone_HeadS_Walk_during_1 ( ) {
	requires I_clone_clone_HeadS_Walk_during_1_normal_Walk_RightFoot_entry_entry_2_softwareOps_clone_HeadS_Walk_during_1 
	requires I_clone_clone_HeadS_Walk_during_1_normal_Walk_LeftFoot_entry_entry_3_softwareOps_clone_HeadS_Walk_during_1 
	requires IctrEvars_HeadS requires I_SFinal_EmptyCycle_clone_HeadS_Walk_during_1_LeftFoot 
	requires I_SFinal_EmptyCycle_clone_HeadS_Walk_during_1_RightFoot //added
	requires Iexec_ds_HeadS_Walking requires Iexec_ms_HeadS_Walking 
	initial i0
	state LeftFoot {
		entry clone_clone_HeadS_Walk_during_1_normal_Walk_LeftFoot_entry_entry_3 ( )
		//added
		initial i
		state emptyCycle{}
		transition t{
			from i to emptyCycle
		}
		transition tEmptyCyle{
			from emptyCycle
			to emptyCycle
			condition not  ( $ stepDoneLeft /\ stepDoneLeftF )
			action SFinal_EmptyCycle_clone_HeadS_Walk_during_1_LeftFoot()
		}
		
	}
	state RightFoot {
		entry clone_clone_HeadS_Walk_during_1_normal_Walk_RightFoot_entry_entry_2 ( )
		//added
		initial i
		state emptyCycle{}
		transition t{
			from i to emptyCycle
		}
		transition tEmptyCyle{
			from emptyCycle
			to emptyCycle
			condition not ( $ stepDoneRight /\ stepDoneRightF )
			action SFinal_EmptyCycle_clone_HeadS_Walk_during_1_RightFoot()
		}
	}
	transition t0 {
		from i0
		to LeftFoot
	}
	transition t1 {
		from LeftFoot
		to RightFoot
		condition ( $ stepDoneLeft /\ stepDoneLeftF )
		action stepDoneLeftF = false
	}
	transition t2 {
		from RightFoot
		to LeftFoot
		condition ( $ stepDoneRight /\ stepDoneRightF )
		action stepDoneRightF = false
	}
	input context { uses I_inpEvs_clone_HeadS_Walk_during_1 }
	output context { uses I_outEvs_clone_HeadS_Walk_during_1 }
}

operation clone_normal_HeadS_Walking_t5_op ( ) {
	requires IctrEvars_HeadS initial i
	final f
	transition t {
		from i
		to f
		action $ stopSiren
	}
	input context { }
	output context { uses I_events_normal_HeadS_Walking_t5_op_outEvs }
}

operation clone_clone_HeadS_Walk_during_1_normal_Walk_RightFoot_entry_entry_2 ( ) {
	requires IctrEvars_HeadS requires Iexec_ds_HeadS_Walking requires Iexec_ms_HeadS_Walking initial i
	final f
	transition t {
		from i
		to f
		action $ liftFootRight
	}
	input context { }
	output context { uses I_events_normal_Walk_RightFoot_entry_outEvs }
}

operation clone_clone_HeadS_Walk_during_1_normal_Walk_LeftFoot_entry_entry_3 ( ) {
	requires IctrEvars_HeadS requires Iexec_ds_HeadS_Walking requires Iexec_ms_HeadS_Walking initial i
	final f
	transition t {
		from i
		to f
		action $ liftFootLeft
	}
	input context { }
	output context { uses I_events_normal_Walk_LeftFoot_entry_outEvs }
}

operation opFinalDuring_HeadS_Walking ( ) {
	requires Iexec_ds_HeadS_Walking requires Iexec_ms_HeadS_Walking initial i
	state S0 {
	}
	state S1 {
	}
	transition t {
		from i
		to S0
	}
	transition t1 {
		from S0
		to S1
		action exec_ds_HeadS_Walking = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_HeadS_Walking
		action exec_ms_HeadS_Walking = false
	}
	input context { }
	output context { }
}

operation SFinal_HeadS_Walking ( ) {
	requires IctrEvars_HeadS requires Iexec_ds_HeadS_Walking requires Iexec_ms_HeadS_Walking requires Iinact_HeadS_Walking initial i
	state S1 {
	}
	final f
	transition t1 {
		from i
		to S1
	}
	transition t2 {
		from S1
		to f
		condition ( inact_HeadS_Walking \/ exec_ds_HeadS_Walking )
		action exec ; ( stepDoneRightF = true ; ( stepDoneLeftF = true ; wallDetectedF = true ) ) ; if exec_ds_HeadS_Walking then exec_ds_HeadS_Walking = false ; exec_ms_HeadS_Walking = true end
	}
	input context { }
	output context { }
}

operation SFinal_EmptyCycle_clone_HeadS_Walk_during_1_RightFoot ( ) {
	requires Iexec_ds_HeadS_Walking requires Iexec_ms_HeadS_Walking initial i
	state S1 {
	}
	final f
	transition t1 {
		from i
		to S1
		action exec_ds_HeadS_Walking = true
	}
	transition t2 {
		from S1
		to f
		condition exec_ms_HeadS_Walking
		action exec_ms_HeadS_Walking = false
	}
	input context { }
	output context { }
}

operation SFinal_EmptyCycle_clone_HeadS_Walk_during_1_LeftFoot ( ) {
	requires Iexec_ds_HeadS_Walking requires Iexec_ms_HeadS_Walking initial i
	state S1 {
	}
	final f
	transition t1 {
		from i
		to S1
		action exec_ds_HeadS_Walking = true
	}
	transition t2 {
		from S1
		to f
		condition exec_ms_HeadS_Walking
		action exec_ms_HeadS_Walking = false
	}
	input context { }
	output context { }
}

module Humanoid {
	connection Robot on wallDetected to ctrl_ref0 on wallDetected ( _async )
	cref ctrl_ref0 = Head
	robotic platform Robot {
		provides HeadI_platformOps_HeadS // pre_pkg_head::HeadI
		
		 event outOfBalanceLeft : Vectorhead
		event outOfBalanceRight : Vectorhead
		event wallDetected
	}

	cycleDef cycle == 1
}

datatype Vectorhead {
	x: real
	y: real
	z: real
}

