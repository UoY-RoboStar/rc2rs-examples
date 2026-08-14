package pre_pkg_main_sim interface IvarsMoveClockwise_localVars {
	var linearSpeed : real , angularSpeed : real
}

interface I_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_softwareOps_clone_AggregationFSM_MoveClockwise_entry_1 {
	clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 ( n : real , j : real )
}

interface I_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_softwareOps_clone_AggregationFSM_RotateClockwise_entry_2 {
	clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 ( n : real )
}

interface IvarsRotateClockwise_localVars {
	var linearSpeed : real , angularSpeed : real
}

interface req_normal_RotateClockwise_S_entry_localVars {
	var linearSpeed : real , angularSpeed : real
}

interface I_clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_j_2_3_t_2_3_op_j_2_3_f_6_softwareOps_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 {
	clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_j_2_3_t_2_3_op_j_2_3_f_6 ( n : real )
}

interface I_clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_i_t_op_i_j_2_3_8_softwareOps_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 {
	clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_i_t_op_i_j_2_3_8 ( )
}

interface I_clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_i_t_op_i_j_2_2_5_softwareOps_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 {
	clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_i_t_op_i_j_2_2_5 ( n : real )
}

interface I_clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_j_2_2_t_2_2_op_j_2_2_f_7_softwareOps_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 {
	clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_j_2_2_t_2_2_op_j_2_2_f_7 ( j : real )
}

interface req_normal_MoveClockwise_S_entry_localVars {
	var angularSpeed : real , linearSpeed : real
}

interface I_req_normal_MoveClockwise_S_entry_i_t_localVars {
	var linearSpeed : real
}

interface I_req_normal_RotateClockwise_S_entry_j_2_3_t_2_3_localVars {
	var angularSpeed : real
}

interface I_req_normal_MoveClockwise_S_entry_j_2_2_t_2_2_localVars {
	var angularSpeed : real
}

interface I_req_normal_RotateClockwise_S_entry_i_t_localVars {
	var linearSpeed : real
}

interface IctrEvars_AggregationFSM {
	var seeRobotF : boolean = true , seeWallF : boolean = true
}

interface IvarsAggregationFSM_usedVars_AggregationFSM {
	var linearSpeed : real
	var angularSpeed : real
}

interface AggregationIface_softwareOps_AggregationFSM {
	MoveClockwise ( n : real , j : real )
	RotateClockwise ( n : real )
}

interface I_clone_AggregationFSM_MoveClockwise_entry_1_softwareOps_AggregationFSM {
	clone_AggregationFSM_MoveClockwise_entry_1 ( n : real , j : real )
}

interface I_clone_AggregationFSM_RotateClockwise_entry_2_softwareOps_AggregationFSM {
	clone_AggregationFSM_RotateClockwise_entry_2 ( n : real )
}

interface Ievents_inpEvs_AggregationFSM {
	event seeWall
	event seeRobot
}

controller ctrl0 {
	uses pre_pkg_main::Ievents 
	opref ctrl0_ref_clone_AggregationFSM_MoveClockwise_entry_1 = clone_AggregationFSM_MoveClockwise_entry_1
	opref ctrl0_ref_clone_AggregationFSM_RotateClockwise_entry_2 = clone_AggregationFSM_RotateClockwise_entry_2
	opref ctrl0_ref_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 = clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3
	opref ctrl0_ref_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 = clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4
	opref ctrl0_ref_clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_i_t_op_i_j_2_2_5 = clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_i_t_op_i_j_2_2_5
	opref ctrl0_ref_clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_j_2_3_t_2_3_op_j_2_3_f_6 = clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_j_2_3_t_2_3_op_j_2_3_f_6
	opref ctrl0_ref_clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_j_2_2_t_2_2_op_j_2_2_f_7 = clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_j_2_2_t_2_2_op_j_2_2_f_7
	opref ctrl0_ref_clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_i_t_op_i_j_2_3_8 = clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_i_t_op_i_j_2_3_8
	sref stm_ref0 = AggregationFSM
	connection ctrl0 on seeWall to stm_ref0 on seeWall
	connection ctrl0 on seeRobot to stm_ref0 on seeRobot
	cycleDef cycle == 1
}

stm AggregationFSM {
	uses IvarsAggregationFSM_usedVars_AggregationFSM uses IctrEvars_AggregationFSM 
	//requires AggregationIface_softwareOps_AggregationFSM 
	requires I_clone_AggregationFSM_MoveClockwise_entry_1_softwareOps_AggregationFSM 
	requires I_clone_AggregationFSM_RotateClockwise_entry_2_softwareOps_AggregationFSM 
	input context { uses Ievents_inpEvs_AggregationFSM }
	output context { }
	cycleDef cycle == 1
	initial I
	state S1 {
		initial i
		state EmptyCycle {
		}
		transition tS1 {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_AggregationFSM_S1_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ seeRobot /\ seeRobotF ) ) )
			action exec ; ( seeWallF = true ; seeRobotF = true )
		}
		entry clone_AggregationFSM_MoveClockwise_entry_1 ( 1 , 1 )
	}
	state S2 {
		initial i
		state EmptyCycle {
		}
		transition tS2 {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_AggregationFSM_S2_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ seeWall /\ seeWallF ) ) )
			action exec ; ( seeWallF = true ; seeRobotF = true )
		}
		entry clone_AggregationFSM_RotateClockwise_entry_2 ( 1 )
	}
	transition T1 {
		from I
		to S1
	}
	transition T3 {
		from S1
		to S2
		condition ( $ seeRobot /\ seeRobotF )
		action seeRobotF = false
	}
	transition T2 {
		from S2
		to S1
		condition ( $ seeWall /\ seeWallF )
		action seeWallF = false
	}
}

operation clone_AggregationFSM_MoveClockwise_entry_1 ( n : real
, j : real
) {
	requires IvarsMoveClockwise_localVars requires I_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_softwareOps_clone_AggregationFSM_MoveClockwise_entry_1 requires IctrEvars_AggregationFSM initial I
	state S {
		entry clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 ( n , j )
	}
	final F
	transition T1 {
		from I
		to S
	}
	transition T2 {
		from S
		to F
	}
	input context { }
	output context { }
}

operation clone_AggregationFSM_RotateClockwise_entry_2 ( n : real
) {
	requires IvarsRotateClockwise_localVars requires I_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_softwareOps_clone_AggregationFSM_RotateClockwise_entry_2 requires IctrEvars_AggregationFSM initial I
	state S {
		entry clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 ( n )
	}
	final F
	transition T1 {
		from I
		to S
	}
	transition T2 {
		from S
		to F
	}
	input context { }
	output context { }
}

operation clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 ( n : real
) {
	requires req_normal_RotateClockwise_S_entry_localVars requires I_clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_j_2_3_t_2_3_op_j_2_3_f_6_softwareOps_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 requires I_clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_i_t_op_i_j_2_3_8_softwareOps_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3 requires IctrEvars_AggregationFSM initial i
	junction j_2_3
	final f
	transition t {
		from i
		to j_2_3
		action clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_i_t_op_i_j_2_3_8 ( )
	}
	transition t_2_3 {
		from j_2_3
		to f
		action clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_j_2_3_t_2_3_op_j_2_3_f_6 ( n )
	}
	input context { }
	output context { }
}

operation clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 ( n : real
, j : real
) {
	requires req_normal_MoveClockwise_S_entry_localVars requires I_clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_i_t_op_i_j_2_2_5_softwareOps_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 requires I_clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_j_2_2_t_2_2_op_j_2_2_f_7_softwareOps_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4 requires IctrEvars_AggregationFSM initial i
	junction j_2_2
	final f
	transition t {
		from i
		to j_2_2
		action clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_i_t_op_i_j_2_2_5 ( n )
	}
	transition t_2_2 {
		from j_2_2
		to f
		action clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_j_2_2_t_2_2_op_j_2_2_f_7 ( j )
	}
	input context { }
	output context { }
}

operation clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_i_t_op_i_j_2_2_5 ( n : real
) {
	requires I_req_normal_MoveClockwise_S_entry_i_t_localVars requires IctrEvars_AggregationFSM initial i
	final f
	transition t {
		from i
		to f
		action linearSpeed = n
	}
	input context { }
	output context { }
}

operation clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_j_2_3_t_2_3_op_j_2_3_f_6 ( n : real
) {
	requires I_req_normal_RotateClockwise_S_entry_j_2_3_t_2_3_localVars requires IctrEvars_AggregationFSM initial i
	final f
	transition t {
		from i
		to f
		action angularSpeed = n
	}
	input context { }
	output context { }
}

operation clone_clone_clone_AggregationFSM_MoveClockwise_entry_1_normal_MoveClockwise_S_entry_entry_4_normal_MoveClockwise_S_entry_j_2_2_t_2_2_op_j_2_2_f_7 ( j : real
) {
	requires I_req_normal_MoveClockwise_S_entry_j_2_2_t_2_2_localVars requires IctrEvars_AggregationFSM initial i
	final f
	transition t {
		from i
		to f
		action angularSpeed = j
	}
	input context { }
	output context { }
}

operation clone_clone_clone_AggregationFSM_RotateClockwise_entry_2_normal_RotateClockwise_S_entry_entry_3_normal_RotateClockwise_S_entry_i_t_op_i_j_2_3_8 ( ) {
	requires I_req_normal_RotateClockwise_S_entry_i_t_localVars requires IctrEvars_AggregationFSM initial i
	final f
	transition t {
		from i
		to f
		action linearSpeed = 0
	}
	input context { }
	output context { }
}

module M {
	connection rp0 on seeWall to ctrl_ref0 on seeWall ( _async )
	connection rp0 on seeRobot to ctrl_ref0 on seeRobot ( _async )
	cref ctrl_ref0 = ctrl0
	robotic platform rp0 {
		uses pre_pkg_main::Ievents }

	cycleDef cycle == 1
}

