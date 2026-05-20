package pkg727_main_sim import main::jointFruit import set_toolkit::diff import main::fdiff import main::reachable import setoperations::choose import main::addApple import main::jointInLimit import main::isEmpty import main::jointApproach import main::jointStorage import main::jointFruit import set_toolkit::diff import main::fdiff import main::reachable import setoperations::choose import main::addApple import main::jointInLimit import main::isEmpty import main::jointApproach import main::jointStorage interface I_events_normal_AppleHarvestControl_j0_t7_op_outEvs {
	event startGoHome
}

interface req_normal_AppleHarvestControl_GetApple_entry_platformOps_clone_normal_AppleHarvestControl_GetApple_entry {
	drop ( jp : main::JointsPos )
	grasp ( jp : main::JointsPos )
	pick ( )
	move ( jp : main::JointsPos )
}  
 
interface req_normal_AppleHarvestControl_GetApple_entry_localVars {
	var positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos , nextApple : setoperations::Coord3D
	const pickTime : nat , approachTime : nat , dropTime : nat , pickDeadl : nat , graspTime : nat
}

interface I_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_softwareOps_clone_normal_AppleHarvestControl_GetApple_entry {
	clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f ( d : nat )
}

interface LookUpTable_localVars {
	var positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos , nextApple : setoperations::Coord3D
}

interface req_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op_localVars {
	var localized : boolean
}

interface req_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_localVars {
	var apples : Set( setoperations::Coord3D )
}

interface I_events_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_outEvs {
	event startIKSolver : Set( setoperations::Coord3D )
}

interface I_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op {
	clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f ( d : nat )
}

interface I_clone_normal_IKSolver_Solve_entry_j_2_6_t_2_6_op_j_2_6_f_softwareOps_clone_normal_IKSolver_Solve_entry {
	clone_normal_IKSolver_Solve_entry_j_2_6_t_2_6_op_j_2_6_f ( )
}

interface req_normal_IKSolver_Solve_entry_localVars {
	var apple : setoperations::Coord3D , p3 : main::JointsPos , p1 : main::JointsPos , p2 : main::JointsPos
}

interface I_clone_normal_IKSolver_Solve_entry_j_3_2_t_3_2_op_j_3_2_j_2_6_softwareOps_clone_normal_IKSolver_Solve_entry {
	clone_normal_IKSolver_Solve_entry_j_3_2_t_3_2_op_j_3_2_j_2_6 ( )
}

interface I_clone_normal_IKSolver_Solve_entry_i_t_op_i_j_3_2_softwareOps_clone_normal_IKSolver_Solve_entry {
	clone_normal_IKSolver_Solve_entry_i_t_op_i_j_3_2 ( )
}

interface I_clone_CHTBA_i_j_2_4_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_entry {
	clone_CHTBA_i_j_2_4 ( img : main::Image )
}

interface req_normal_AppleHarvestControl_LocalizeFruit_entry_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_entry {
	CHTBA ( img : main::Image )
}

interface req_normal_AppleHarvestControl_LocalizeFruit_entry_localVars {
	var img : main::Image , localized : boolean , apples : Set( setoperations::Coord3D )
}

interface I_clone_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_op_j_2_4_f_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_entry {
	clone_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_op_j_2_4_f ( )
}

interface req_normal_IKSolver_Solve_t3_op_localVars {
	var apple : setoperations::Coord3D , p3 : main::JointsPos , p1 : main::JointsPos , positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos , p2 : main::JointsPos
}

interface I_clone_normal_IKSolver_Solve_t3_op_t_elseJ__t_elseTA__op_t_elseJ__f_softwareOps_clone_normal_IKSolver_Solve_t3_op {
	clone_normal_IKSolver_Solve_t3_op_t_elseJ__t_elseTA__op_t_elseJ__f ( )
}

interface I_clone_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__op_t_thenJ__f_softwareOps_clone_normal_IKSolver_Solve_t3_op {
	clone_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__op_t_thenJ__f ( )
}

interface I_events_normal_GoHome_Going_t2_op_outEvs {
	event endGoHome
}

interface I_events_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_outEvs {
	event startGoHome
}

interface I_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op {
	clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f ( d : nat )
}

interface req_normal_IKSolver_Loop_t4_op_localVars {
	var positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos
}

interface I_events_normal_IKSolver_Loop_t4_op_outEvs {
	event endIKSolver : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos
}

interface req_normal_GoHome_Going_entry_localVars {
	const goHTime : nat
}

interface req_normal_GoHome_Going_entry_platformOps_clone_normal_GoHome_Going_entry {
	goHome ( )
}

interface I_clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f_softwareOps_clone_normal_GoHome_Going_entry {
	clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f ( i : nat )
}

interface I_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_softwareOps_clone_normal_AppleHarvestControl_Prepare_entry {
	clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f ( m : nat , n : nat )
}

interface req_normal_AppleHarvestControl_Prepare_entry_localVars {
	const hideTime : nat
}

interface req_normal_AppleHarvestControl_Prepare_entry_platformOps_clone_normal_AppleHarvestControl_Prepare_entry {
	hideArm ( )
}

interface I_waitInterval_softwareOps_clone_normal_AppleHarvestControl_Prepare_entry {
	waitInterval ( m : nat , n : nat )
}

interface req_normal_IKSolver_Loop_t2_op_localVars {
	var apple : setoperations::Coord3D , apples : Set( setoperations::Coord3D )
}

interface AppleCoordinates_localVars {
	var apples : Set( setoperations::Coord3D )
}

interface I_req_normal_IKSolver_Solve_entry_i_t_localVars {
	var apple : setoperations::Coord3D , p1 : main::JointsPos
}

interface Iexec_ds_AppleHarvestControl_Prepare {
	var exec_ds_AppleHarvestControl_Prepare : boolean = false
}

interface Iexec_ms_AppleHarvestControl_Prepare {
	var exec_ms_AppleHarvestControl_Prepare : boolean = false
}

interface I_clone_clone_normal_AppleHarvestControl_Prepare_t1_dop_deadlineCheck_softwareOps_clone_normal_AppleHarvestControl_Prepare_t1_dop {
	clone_clone_normal_AppleHarvestControl_Prepare_t1_dop_deadlineCheck ( d : nat )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f ( )
}

interface I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f {
	var exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f : boolean = false
}

interface I_clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_deadlineCheck_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f {
	clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_deadlineCheck ( d : nat )
}

interface I_eventsnormal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_outEvs {
	event startGoHome
}

interface I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f {
	var inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f : boolean = true
}

interface I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f {
	var exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f : boolean = false
}

interface I_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j_softwareOps_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f {
	clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j ( i : nat )
}

interface I_req_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_localVars {
	var localized : boolean
}

interface I_req_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__localVars {
	var p2 : main::JointsPos , apple : setoperations::Coord3D , p1 : main::JointsPos , p3 : main::JointsPos , positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos
}

interface I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f {
	var exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f : boolean = false
}

interface I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f {
	var exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f : boolean = false
}

interface req_normal_AppleHarvestControl_GetApple_entry_t_platformOps_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f {
	pick ( )
	move ( jp : main::JointsPos )
	drop ( jp : main::JointsPos )
	grasp ( jp : main::JointsPos )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f ( )
}

interface I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f {
	var inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f : boolean = true
}

interface I_clone_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_deadlineCheck_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f {
	clone_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_deadlineCheck ( d : nat )
}

interface req_normal_AppleHarvestControl_GetApple_entry_t_localVars {
	var positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos , nextApple : setoperations::Coord3D
	const pickTime : nat , graspTime : nat , dropTime : nat , approachTime : nat
}

interface I_req_normal_IKSolver_Solve_entry_j_3_2_t_3_2_localVars {
	var apple : setoperations::Coord3D , p2 : main::JointsPos
}

interface req_normal_IKSolver_Solve_exit_localVars {
	var apple : setoperations::Coord3D , apples : Set( setoperations::Coord3D )
}

interface I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f {
	var exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f : boolean = false
}

interface I_clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_deadlineCheck_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f {
	clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_deadlineCheck ( d : nat )
}

interface I_eventsnormal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_outEvs {
	event startIKSolver : Set( setoperations::Coord3D )
}

interface I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f {
	var exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f : boolean = false
}

interface req_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_localVars {
	var apples : Set( setoperations::Coord3D )
}

interface I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f {
	var inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f : boolean = true
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f ( )
}

interface req_normal_AppleHarvestControl_GetApple_exit_localVars {
	var positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos , nextApple : setoperations::Coord3D
}

interface I_req_normal_IKSolver_Solve_entry_j_2_6_t_2_6_localVars {
	var p3 : main::JointsPos , apple : setoperations::Coord3D
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_op_j_2_7_f_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_op_j_2_7_f ( )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_op_i_j_2_7_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_op_i_j_2_7 ( )
}

interface I_req_normal_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_S0_t_localVars {
	var apples : Set( setoperations::Coord3D ) , g : boolean = false
}

interface I_events_normal_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_S0_t_outEvs {
	event startIKSolver : Set( setoperations::Coord3D )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8 ( m : nat , n : nat )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13 ( m : nat , n : nat )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11 ( m : nat , n : nat )
}

interface I_req_normal_normal_AppleHarvestControl_GetApple_entry_S0_t_localVars {
	var nextApple : setoperations::Coord3D , positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos , g : boolean = false
	const approachTime : nat , graspTime : nat , pickTime : nat , dropTime : nat
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15 ( m : nat , n : nat )
}

interface I_waitInterval_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f {
	waitInterval ( m : nat , n : nat )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_op_j_2_8_f_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_op_j_2_8_f ( )
}

interface I_req_normal_normal_AppleHarvestControl_GetApple_entry_S0_t_platformOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f {
	pick ( )
	move ( jp : main::JointsPos )
	drop ( jp : main::JointsPos )
	grasp ( jp : main::JointsPos )
}

interface I_req_normal_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_S0_t_localVars {
	var g : boolean = false
}

interface I_events_normal_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_S0_t_outEvs {
	event startGoHome
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_op_j_2_9_f_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_op_j_2_9_f ( )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_op_i_j_2_9_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f {
	clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_op_i_j_2_9 ( )
}

interface I_req_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_localVars {
	var g : boolean = false
}

interface I_events_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_outEvs {
	event startGoHome
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15 {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j ( i : nat )
}

interface I_req_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_localVars {
	var g : boolean = false
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8 {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j ( i : nat )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11 {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j ( i : nat )
}

interface I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13 {
	clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j ( i : nat )
}

interface I_req_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_localVars {
	var apples : Set( setoperations::Coord3D )
}

interface I_events_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_outEvs {
	event startIKSolver : Set( setoperations::Coord3D )
}

interface I_req_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_localVars {
	var g : boolean = false
}

interface I_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_S0 {
	opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_S0 ( )
}

interface I_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_S0 {
	opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_S0 ( )
}

interface I_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_S0 {
	opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_S0 ( )
}

interface I_clone_normal_AppleHarvestControl_LocalizeFruit_entry_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_LocalizeFruit_entry ( )
}

interface Camera_inpEvs_AppleHarvestControl {
	event takePic : main::Image
}

interface I_clone_normal_AppleHarvestControl_Prepare_t1_dop_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_Prepare_t1_dop ( )
}

interface I_clone_normal_AppleHarvestControl_Prepare_entry_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_Prepare_entry ( )
}

interface SolverControl_outEvs_AppleHarvestControl {
	event startIKSolver : Set( setoperations::Coord3D )
}

interface TimeConstants_usedVars_AppleHarvestControl {
	const hideTime : nat
	const approachTime : nat
	const graspTime : nat
	const dropTime : nat
	const pickTime : nat
	const pickDeadl : nat
}

interface ArmOperations_platformOps_AppleHarvestControl {
	hideArm ( )
	goHome ( )
	move ( jp : main::JointsPos )
	grasp ( jp : main::JointsPos )
	pick ( )
	drop ( jp : main::JointsPos )
}

interface I_clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op ( )
}

interface I_clone_normal_AppleHarvestControl_GetApple_entry_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_GetApple_entry ( )
}

interface I_clone_NearestNeighbour_softwareOps_AppleHarvestControl {
	clone_NearestNeighbour ( )
}

interface I_clone_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op ( )
}

interface GoHomeControl_inpEvs_AppleHarvestControl {
	event endGoHome
}

interface TravellingSalesman_softwareOps_AppleHarvestControl {
	NearestNeighbour ( )
}

interface GoHomeControl_outEvs_AppleHarvestControl {
	event startGoHome
}

interface I_clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op ( )
}

interface Locations_usedVars_AppleHarvestControl {
	const homePos : setoperations::Coord3D
	const storagePos : setoperations::Coord3D
}

interface SolverControl_inpEvs_AppleHarvestControl {
	event endIKSolver : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos
}

interface IctrEvars_AppleHarvestControl {
	var endIKSolverF : boolean = true , endGoHomeF : boolean = true , takePicF : boolean = true
}

interface I_clone_normal_AppleHarvestControl_GetApple_exit_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_GetApple_exit ( )
}

interface I_clone_normal_AppleHarvestControl_j0_t7_op_softwareOps_AppleHarvestControl {
	clone_normal_AppleHarvestControl_j0_t7_op ( )
}

interface Vision_softwareOps_AppleHarvestControl {
	CHTBA ( img : main::Image )
}

interface I_opFinalDuring_AppleHarvestControl_Prepare {
	opFinalDuring_AppleHarvestControl_Prepare ( )
}

interface I_SFinal_AppleHarvestControl_Prepare {
	SFinal_AppleHarvestControl_Prepare ( )
}

interface Iinact_AppleHarvestControl_Prepare {
	var inact_AppleHarvestControl_Prepare : boolean = true
}

interface SolverControl_inpEvs_IKSolver {
	event startIKSolver : Set( setoperations::Coord3D )
}

interface SolverControl_outEvs_IKSolver {
	event endIKSolver : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos
}

interface I_clone_normal_IKSolver_Loop_t4_op_softwareOps_IKSolver {
	clone_normal_IKSolver_Loop_t4_op ( )
}

interface I_clone_normal_IKSolver_Solve_entry_softwareOps_IKSolver {
	clone_normal_IKSolver_Solve_entry ( )
}

interface I_clone_normal_IKSolver_Solve_exit_softwareOps_IKSolver {
	clone_normal_IKSolver_Solve_exit ( )
}

interface I_clone_normal_IKSolver_Loop_t2_op_softwareOps_IKSolver {
	clone_normal_IKSolver_Loop_t2_op ( )
}

interface I_clone_normal_IKSolver_Solve_t3_op_softwareOps_IKSolver {
	clone_normal_IKSolver_Solve_t3_op ( )
}

interface IctrEvars_IKSolver {
	var startIKSolverF : boolean = true
}

interface I_clone_normal_GoHome_Going_entry_softwareOps_GoHome {
	clone_normal_GoHome_Going_entry ( )
}

interface I_clone_normal_GoHome_Going_t2_op_softwareOps_GoHome {
	clone_normal_GoHome_Going_t2_op ( )
}

interface GoHomeControl_outEvs_GoHome {
	event endGoHome
}

interface ArmOperations_platformOps_GoHome {
	hideArm ( )
	goHome ( )
	move ( jp : main::JointsPos )
	grasp ( jp : main::JointsPos )
	pick ( )
	drop ( jp : main::JointsPos )
}

interface GoHomeControl_inpEvs_GoHome {
	event startGoHome
}

interface IctrEvars_GoHome {
	var startGoHomeF : boolean = true
}

controller ControlArm {
	uses pkg727_main::Camera requires pkg727_main::ArmOperations 
	opref ControlArm_ref_clone_normal_AppleHarvestControl_j0_t7_op = clone_normal_AppleHarvestControl_j0_t7_op
	opref ControlArm_ref_clone_normal_AppleHarvestControl_GetApple_entry = clone_normal_AppleHarvestControl_GetApple_entry
	opref ControlArm_ref_clone_NearestNeighbour = clone_NearestNeighbour
	opref ControlArm_ref_clone_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op = clone_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op
	opref ControlArm_ref_clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op = clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op
	opref ControlArm_ref_clone_normal_IKSolver_Solve_entry = clone_normal_IKSolver_Solve_entry
	opref ControlArm_ref_clone_normal_AppleHarvestControl_LocalizeFruit_entry = clone_normal_AppleHarvestControl_LocalizeFruit_entry
	opref ControlArm_ref_clone_normal_IKSolver_Solve_t3_op = clone_normal_IKSolver_Solve_t3_op
	opref ControlArm_ref_clone_normal_GoHome_Going_t2_op = clone_normal_GoHome_Going_t2_op
	opref ControlArm_ref_clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op = clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op
	opref ControlArm_ref_clone_normal_IKSolver_Loop_t4_op = clone_normal_IKSolver_Loop_t4_op
	opref ControlArm_ref_clone_normal_GoHome_Going_entry = clone_normal_GoHome_Going_entry
	opref ControlArm_ref_clone_normal_AppleHarvestControl_Prepare_entry = clone_normal_AppleHarvestControl_Prepare_entry
	opref ControlArm_ref_clone_normal_IKSolver_Loop_t2_op = clone_normal_IKSolver_Loop_t2_op
	opref ControlArm_ref_clone_CHTBA_i_j_2_4 = clone_CHTBA_i_j_2_4
	opref ControlArm_ref_clone_normal_IKSolver_Solve_entry_i_t_op_i_j_3_2 = clone_normal_IKSolver_Solve_entry_i_t_op_i_j_3_2
	opref ControlArm_ref_clone_normal_AppleHarvestControl_Prepare_t1_dop = clone_normal_AppleHarvestControl_Prepare_t1_dop
	opref ControlArm_ref_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f = clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f
	opref ControlArm_ref_clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f = clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f
	opref ControlArm_ref_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f = clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f
	opref ControlArm_ref_clone_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_op_j_2_4_f = clone_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_op_j_2_4_f
	opref ControlArm_ref_clone_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__op_t_thenJ__f = clone_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__op_t_thenJ__f
	opref ControlArm_ref_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
	opref ControlArm_ref_clone_normal_IKSolver_Solve_entry_j_3_2_t_3_2_op_j_3_2_j_2_6 = clone_normal_IKSolver_Solve_entry_j_3_2_t_3_2_op_j_3_2_j_2_6
	opref ControlArm_ref_clone_normal_IKSolver_Solve_exit = clone_normal_IKSolver_Solve_exit
	opref ControlArm_ref_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f = clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f
	opref ControlArm_ref_clone_normal_AppleHarvestControl_GetApple_exit = clone_normal_AppleHarvestControl_GetApple_exit
	opref ControlArm_ref_clone_normal_IKSolver_Solve_entry_j_2_6_t_2_6_op_j_2_6_f = clone_normal_IKSolver_Solve_entry_j_2_6_t_2_6_op_j_2_6_f
	opref ControlArm_ref_clone_normal_IKSolver_Solve_t3_op_t_elseJ__t_elseTA__op_t_elseJ__f = clone_normal_IKSolver_Solve_t3_op_t_elseJ__t_elseTA__op_t_elseJ__f
	opref ControlArm_ref_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j = clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j
	opref ControlArm_ref_clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_deadlineCheck = clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_deadlineCheck
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f = clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f
	opref ControlArm_ref_clone_clone_normal_AppleHarvestControl_Prepare_t1_dop_deadlineCheck = clone_clone_normal_AppleHarvestControl_Prepare_t1_dop_deadlineCheck
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f
	opref ControlArm_ref_clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_deadlineCheck = clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_deadlineCheck
	opref ControlArm_ref_clone_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_deadlineCheck = clone_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_deadlineCheck
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f = clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_op_j_2_8_f = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_op_j_2_8_f
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_op_i_j_2_9 = clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_op_i_j_2_9
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15 = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_op_j_2_7_f = clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_op_j_2_7_f
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8 = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11 = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13 = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_op_i_j_2_7 = clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_op_i_j_2_7
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_op_j_2_9_f = clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_op_j_2_9_f
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j
	opref ControlArm_ref_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j = clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j
	opref ControlArm_ref_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_S0 = opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_S0
	opref ControlArm_ref_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_S0 = opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_S0
	opref ControlArm_ref_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_S0 = opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_S0
	opref ControlArm_ref_SFinal_AppleHarvestControl_Prepare = SFinal_AppleHarvestControl_Prepare
	opref ControlArm_ref_SFinal_opFinalDuring_AppleHarvestControl_Prepare = opFinalDuring_AppleHarvestControl_Prepare
	opref ControlArm_ref_SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j = SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j
	opref ControlArm_ref_SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j = SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j
	opref ControlArm_ref_SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j = SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j
	opref ControlArm_ref_SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j = SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j
	sref stm_ref0 = AppleHarvestControl
	sref stm_ref1 = IKSolver
	sref stm_ref2 = GoHome
	connection ControlArm on takePic to stm_ref0 on takePic 
	connection stm_ref0 on startIKSolver to stm_ref1 on startIKSolver
	connection stm_ref1 on endIKSolver to stm_ref0 on endIKSolver
	connection stm_ref0 on startGoHome to stm_ref2 on startGoHome
	connection stm_ref2 on endGoHome to stm_ref0 on endGoHome
	cycleDef cycle == 1
} 
 
stm AppleHarvestControl {
	uses TimeConstants_usedVars_AppleHarvestControl uses Locations_usedVars_AppleHarvestControl uses IctrEvars_AppleHarvestControl 
	uses Iexec_ds_AppleHarvestControl_Prepare uses Iexec_ms_AppleHarvestControl_Prepare uses Iinact_AppleHarvestControl_Prepare 
	//requires TravellingSalesman_softwareOps_AppleHarvestControl 
	//requires Vision_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_j0_t7_op_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_GetApple_entry_softwareOps_AppleHarvestControl 
	requires I_clone_NearestNeighbour_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_LocalizeFruit_entry_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_Prepare_entry_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_Prepare_t1_dop_softwareOps_AppleHarvestControl 
	requires I_clone_normal_AppleHarvestControl_GetApple_exit_softwareOps_AppleHarvestControl 
	requires I_opFinalDuring_AppleHarvestControl_Prepare 
	requires I_SFinal_AppleHarvestControl_Prepare var img : main::Image
	var localized : boolean
	var apples : Set( setoperations::Coord3D )
	var positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos
	var nextApple : setoperations::Coord3D
	input context { uses Camera_inpEvs_AppleHarvestControl uses SolverControl_inpEvs_AppleHarvestControl uses GoHomeControl_inpEvs_AppleHarvestControl }
	output context { uses SolverControl_outEvs_AppleHarvestControl uses GoHomeControl_outEvs_AppleHarvestControl 
		requires ArmOperations_platformOps_AppleHarvestControl
	}
	cycleDef cycle == 1
	initial i0
	state Prepare {
		initial i
		state EmptyCycle {
			entry inact_AppleHarvestControl_Prepare = false
		}
		transition tPrepare {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_AppleHarvestControl_Prepare_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ($takePic /\ takePicF)
			action SFinal_AppleHarvestControl_Prepare ( )
		}
		entry clone_normal_AppleHarvestControl_Prepare_entry ( )
		during clone_normal_AppleHarvestControl_Prepare_t1_dop ( ) ; opFinalDuring_AppleHarvestControl_Prepare ( )
		exit inact_AppleHarvestControl_Prepare = true
	}
	state LocalizeFruit {
		initial i0
		state Start {
			initial i
			state EmptyCycle {
			}
			transition tStart {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_AppleHarvestControl_LocalizeFruit_Start_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( localized )
				action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
			}
		}
		state Solving {
			initial i
			state EmptyCycle {
			}
			transition tSolving {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_AppleHarvestControl_LocalizeFruit_Solving_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( localized )
				action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
			}
		}
		state SolvingAndMoving {
			initial i
			state EmptyCycle {
			}
			transition tSolvingAndMoving {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_AppleHarvestControl_LocalizeFruit_SolvingAndMoving_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( localized ) /\ ( not ( $ endIKSolver ? positions /\ endIKSolverF ) /\ not ( $ endGoHome /\ endGoHomeF ) )
				action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
			}
		}
		state Moved {
			initial i
			state EmptyCycle {
			}
			transition tMoved {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_AppleHarvestControl_LocalizeFruit_Moved_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( localized ) /\ not ( $ endIKSolver ? positions /\ endIKSolverF )
				action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
			}
		}
		state Solved {
			initial i
			state EmptyCycle {
			}
			transition tSolved {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_AppleHarvestControl_LocalizeFruit_Solved_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( localized ) /\ not ( $ endGoHome /\ endGoHomeF )
				action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
			}
		}
		state Done {
			initial i
			state EmptyCycle {
			}
			transition tDone {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_AppleHarvestControl_LocalizeFruit_Done_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( localized )
				action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
			}
		}
		state EmptyCycle {
		}
		transition t0 {
			from i0
			to Start
		}
		transition t1 {
			from Start
			to Solving
			action clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op ( )
		}
		transition t2 {
			from Solving
			to SolvingAndMoving
			action clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op ( )
		}
		transition t3 {
			from SolvingAndMoving
			to Solved
			condition ( $ endIKSolver ? positions /\ endIKSolverF )
			action endIKSolverF = false
		}
		transition t4 {
			from SolvingAndMoving
			to Moved
			condition ( $ endGoHome /\ endGoHomeF )
			action endGoHomeF = false
		}
		transition t5 {
			from Moved
			to Done
			condition ( $ endIKSolver ? positions /\ endIKSolverF )
			action endIKSolverF = false
		}
		transition t6 {
			from Solved
			to Done
			condition ( $ endGoHome /\ endGoHomeF )
			action endGoHomeF = false
		}
		transition t7 {
			from Done
			to EmptyCycle
			action clone_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op ( )
		}
		transition tEmptyCycle_AppleHarvestControl_LocalizeFruit_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( localized )
			action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
		}
		entry clone_normal_AppleHarvestControl_LocalizeFruit_entry ( )
	}
	state Next {
		initial i
		state EmptyCycle {
		}
		transition tNext {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_AppleHarvestControl_Next_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( not reachable ( nextApple ) ) /\ not ( reachable ( nextApple ) )
			action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) ) 
		}
		entry clone_NearestNeighbour ( )
	}
	state GetApple {
		initial i
		state EmptyCycle {
		}
		transition tGetApple {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_AppleHarvestControl_GetApple_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition true
			action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
		}
		entry clone_normal_AppleHarvestControl_GetApple_entry ( )
		exit clone_normal_AppleHarvestControl_GetApple_exit ( )
	}
	junction j0
	state GoingHome {
		initial i
		state EmptyCycle {
		}
		transition tGoingHome {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_AppleHarvestControl_GoingHome_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( $ endGoHome /\ endGoHomeF )
			action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
		}
	}
	transition t0 {
		from i0
		to Prepare
	}
	transition t1 {
		from Prepare
		to LocalizeFruit
		condition ( $ takePic ? img /\ takePicF )
		action takePicF = false
	}
	transition t2 {
		from LocalizeFruit
		to Next
		condition localized
	}
	transition t3 {
		from Next
		to Next
		condition not reachable ( nextApple )
	}
	transition t4 {
		from Next
		to GetApple
		condition reachable ( nextApple )
	}
	transition t5 {
		from GetApple
		to j0
	}
	transition t7 {
		from j0
		to GoingHome
		condition isEmpty ( positions )
		action clone_normal_AppleHarvestControl_j0_t7_op ( )
	}
	transition t6 {
		from j0
		to Next
		condition not isEmpty ( positions )
	}
	transition t8 {
		from GoingHome
		to Next
		condition ( $ endGoHome /\ endGoHomeF )
		action endGoHomeF = false
	}
}

stm IKSolver {
	uses IctrEvars_IKSolver requires I_clone_normal_IKSolver_Solve_entry_softwareOps_IKSolver requires I_clone_normal_IKSolver_Solve_t3_op_softwareOps_IKSolver requires I_clone_normal_IKSolver_Loop_t4_op_softwareOps_IKSolver requires I_clone_normal_IKSolver_Loop_t2_op_softwareOps_IKSolver requires I_clone_normal_IKSolver_Solve_exit_softwareOps_IKSolver var apples : Set( setoperations::Coord3D )
	var positions : setoperations::Coord3D -> main::JointsPos * main::JointsPos * main::JointsPos
	var apple : setoperations::Coord3D
	var p1 : main::JointsPos , p2 : main::JointsPos , p3 : main::JointsPos
	input context { uses SolverControl_inpEvs_IKSolver }
	output context { uses SolverControl_outEvs_IKSolver }
	cycleDef cycle == 1
	initial i0
	state Ready {
		initial i
		state EmptyCycle {
		}
		transition tReady {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_IKSolver_Ready_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( $ startIKSolver ? apples /\ startIKSolverF )
			action exec ; startIKSolverF = true
		}
	}
	state Loop {
		initial i
		state EmptyCycle {
		}
		transition tLoop {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_IKSolver_Loop_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( apples != { } ) /\ not ( apples == { } )
			action exec ; startIKSolverF = true
		}
	}
	state Solve {
		initial i
		state EmptyCycle {
		}
		transition tSolve {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_IKSolver_Solve_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition true
			action exec ; startIKSolverF = true
		}
		entry clone_normal_IKSolver_Solve_entry ( )
		exit clone_normal_IKSolver_Solve_exit ( )
	}
	transition t0 {
		from i0
		to Ready
	}
	transition t1 {
		from Ready
		to Loop
		condition ( $ startIKSolver ? apples /\ startIKSolverF )
		action startIKSolverF = false
	}
	transition t2 {
		from Loop
		to Solve
		condition apples != { }
	}
	transition t4 {
		from Loop
		to Ready
		condition apples == { }
	}
	transition t3 {
		from Solve
		to Loop
		action clone_normal_IKSolver_Solve_t3_op ( )
	}
}

stm GoHome {
	uses IctrEvars_GoHome requires I_clone_normal_GoHome_Going_t2_op_softwareOps_GoHome requires I_clone_normal_GoHome_Going_entry_softwareOps_GoHome const goHTime : nat
	input context { uses GoHomeControl_inpEvs_GoHome }
	output context { uses GoHomeControl_outEvs_GoHome requires ArmOperations_platformOps_GoHome }
	cycleDef cycle == 1
	initial i0
	state Ready {
		initial i
		state EmptyCycle {
		}
		transition tReady {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GoHome_Ready_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( $ startGoHome /\ startGoHomeF )
			action exec ; startGoHomeF = true
		}
	}
	state Going {
		initial i
		state EmptyCycle {
		}
		transition tGoing {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GoHome_Going_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition true
			action exec ; startGoHomeF = true
		}
		entry clone_normal_GoHome_Going_entry ( )
	}
	transition t0 {
		from i0
		to Ready
	}
	transition t1 {
		from Ready
		to Going
		condition ( $ startGoHome /\ startGoHomeF )
		action startGoHomeF = false
	}
	transition t2 {
		from Going
		to Ready
		action clone_normal_GoHome_Going_t2_op ( )
	}
}

operation clone_normal_AppleHarvestControl_j0_t7_op ( ) {
	requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
	}
	input context { }
	output context { uses I_events_normal_AppleHarvestControl_j0_t7_op_outEvs }
}

operation clone_normal_AppleHarvestControl_GetApple_entry ( ) {
	requires req_normal_AppleHarvestControl_GetApple_entry_localVars requires I_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_softwareOps_clone_normal_AppleHarvestControl_GetApple_entry requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
		action clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f ( pickDeadl )
	}
	input context { }
	output context { requires req_normal_AppleHarvestControl_GetApple_entry_platformOps_clone_normal_AppleHarvestControl_GetApple_entry }
}

operation clone_NearestNeighbour ( ) {
	requires LookUpTable_localVars requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
	}
	input context { }
	output context { }
}

operation clone_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op ( ) {
	requires req_normal_AppleHarvestControl_LocalizeFruit_Done_t7_op_localVars requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
		action localized = true
	}
	input context { }
	output context { }
}

operation clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op ( ) {
	requires req_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_localVars requires I_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
		action clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f ( 0 )
	}
	input context { }
	output context { uses I_events_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_outEvs }
}

operation clone_normal_IKSolver_Solve_entry ( ) {
	requires req_normal_IKSolver_Solve_entry_localVars requires I_clone_normal_IKSolver_Solve_entry_i_t_op_i_j_3_2_softwareOps_clone_normal_IKSolver_Solve_entry requires I_clone_normal_IKSolver_Solve_entry_j_3_2_t_3_2_op_j_3_2_j_2_6_softwareOps_clone_normal_IKSolver_Solve_entry requires I_clone_normal_IKSolver_Solve_entry_j_2_6_t_2_6_op_j_2_6_f_softwareOps_clone_normal_IKSolver_Solve_entry requires IctrEvars_IKSolver initial i
	junction j_3_2
	junction j_2_6
	final f
	transition t {
		from i
		to j_3_2
		action clone_normal_IKSolver_Solve_entry_i_t_op_i_j_3_2 ( )
	}
	transition t_3_2 {
		from j_3_2
		to j_2_6
		action clone_normal_IKSolver_Solve_entry_j_3_2_t_3_2_op_j_3_2_j_2_6 ( )
	}
	transition t_2_6 {
		from j_2_6
		to f
		action clone_normal_IKSolver_Solve_entry_j_2_6_t_2_6_op_j_2_6_f ( )
	}
	input context { }
	output context { }
}

operation clone_normal_AppleHarvestControl_LocalizeFruit_entry ( ) {
	requires req_normal_AppleHarvestControl_LocalizeFruit_entry_localVars 
	requires I_clone_CHTBA_i_j_2_4_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_entry requires I_clone_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_op_j_2_4_f_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_entry requires IctrEvars_AppleHarvestControl initial i
	junction j_2_4
	final f
	transition t {
		from i
		to j_2_4
		action clone_CHTBA_i_j_2_4 ( img )
	}
	transition t_2_4 {
		from j_2_4
		to f
		action clone_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_op_j_2_4_f ( )
	}
	input context { }
	output context { }
}

operation clone_normal_IKSolver_Solve_t3_op ( ) {
	requires req_normal_IKSolver_Solve_t3_op_localVars requires I_clone_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__op_t_thenJ__f_softwareOps_clone_normal_IKSolver_Solve_t3_op requires I_clone_normal_IKSolver_Solve_t3_op_t_elseJ__t_elseTA__op_t_elseJ__f_softwareOps_clone_normal_IKSolver_Solve_t3_op requires IctrEvars_IKSolver initial i
	junction t_initialJunction_
	junction t_thenJ_
	junction t_elseJ_
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition ( jointInLimit ( p1 ) \/ jointInLimit ( p2 ) \/ jointInLimit ( p3 ) )
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not ( jointInLimit ( p1 ) \/ jointInLimit ( p2 ) \/ jointInLimit ( p3 ) )
	}
	transition t_thenTA_ {
		from t_thenJ_
		to f
		action clone_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__op_t_thenJ__f ( )
	}
	transition t_elseTA_ {
		from t_elseJ_
		to f
		action clone_normal_IKSolver_Solve_t3_op_t_elseJ__t_elseTA__op_t_elseJ__f ( )
	}
	input context { }
	output context { }
}

operation clone_normal_GoHome_Going_t2_op ( ) {
	requires IctrEvars_GoHome initial i
	final f
	transition t {
		from i
		to f
		action $endGoHome
	}
	input context { }
	output context { uses I_events_normal_GoHome_Going_t2_op_outEvs }
}

operation clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op ( ) {
	requires I_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_softwareOps_clone_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
		action clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f ( 0 )
	}
	input context { }
	output context { uses I_events_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_outEvs }
}

operation clone_normal_IKSolver_Loop_t4_op ( ) {
	requires req_normal_IKSolver_Loop_t4_op_localVars requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action $ endIKSolver ! positions
	}
	input context { }
	output context { uses I_events_normal_IKSolver_Loop_t4_op_outEvs }
}

operation clone_normal_GoHome_Going_entry ( ) {
	requires req_normal_GoHome_Going_entry_localVars 
	requires I_clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f_softwareOps_clone_normal_GoHome_Going_entry 
	requires IctrEvars_GoHome initial i
	junction j_2_5
	final f
	transition t {
		from i
		to j_2_5
		action $ goHome ( )
	}
	transition t_2_5 {
		from j_2_5
		to f
		action clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f ( goHTime )
	}
	input context { }
	output context { requires req_normal_GoHome_Going_entry_platformOps_clone_normal_GoHome_Going_entry }
}

operation clone_normal_AppleHarvestControl_Prepare_entry ( ) {
	requires req_normal_AppleHarvestControl_Prepare_entry_localVars requires I_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_softwareOps_clone_normal_AppleHarvestControl_Prepare_entry requires IctrEvars_AppleHarvestControl initial i
	junction j_2_3
	final f
	transition t {
		from i
		to j_2_3
		action $ hideArm ( )
	}
	transition t_2_3 {
		from j_2_3
		to f
		action clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f ( 0 , hideTime )
	}
	input context { }
	output context { requires req_normal_AppleHarvestControl_Prepare_entry_platformOps_clone_normal_AppleHarvestControl_Prepare_entry }
}

operation clone_normal_IKSolver_Loop_t2_op ( ) {
	requires req_normal_IKSolver_Loop_t2_op_localVars requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action apple = choose ( apples )
	}
	input context { }
	output context { }
}

operation clone_CHTBA_i_j_2_4 ( img : main::Image
) {
	requires AppleCoordinates_localVars requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
	}
	input context { }
	output context { }
}

operation clone_normal_IKSolver_Solve_entry_i_t_op_i_j_3_2 ( ) {
	requires I_req_normal_IKSolver_Solve_entry_i_t_localVars requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action p1 = jointApproach ( apple )
	}
	input context { }
	output context { }
}

operation clone_normal_AppleHarvestControl_Prepare_t1_dop ( ) {
	requires I_clone_clone_normal_AppleHarvestControl_Prepare_t1_dop_deadlineCheck_softwareOps_clone_normal_AppleHarvestControl_Prepare_t1_dop requires IctrEvars_AppleHarvestControl requires Iexec_ds_AppleHarvestControl_Prepare requires Iexec_ms_AppleHarvestControl_Prepare initial i0
	state S0 {
		initial i0_S0
		state S1 {
		}
		state S2 {
			during clone_clone_normal_AppleHarvestControl_Prepare_t1_dop_deadlineCheck ( 0 )
		}
		transition t0 {
			from i0_S0 
			to S1
		}
		transition t1 {
			from S1
			to S2
			condition true
		}
		transition t2 {
			from S2
			to S1
			condition not true
		}
	}
	transition t0 {
		from i0
		to S0
	}
	input context { }
	output context { }
}

operation clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f ( d : nat
) {
	uses I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f uses I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f uses I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_deadlineCheck_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires IctrEvars_AppleHarvestControl requires I_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_S0 var g : boolean = false
	initial i
	state S0 {
		initial i
		state S1 {
			entry inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f = false
		}
		final f
		transition t0 {
			from i
			to S1
		}
		transition t1 {
			from S1
			to f
			action clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f ( )
		}
		during clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_deadlineCheck ( d ) ; opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_S0 ( )
		exit inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f = true
	}
	final f
	transition t0 {
		from i
		to S0
	}
	transition t1 {
		from S0
		to f
		condition g
	}
	input context { }
	output context { uses I_eventsnormal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_outEvs }
}

operation clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f ( i : nat
) { 
	initial i0
	requires IctrEvars_GoHome
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_normal_GoHome_Going_entry_clone_waitOp_j_2_5_f_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == i
			action exec ; ( startGoHomeF = true  )
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

operation clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f ( m : nat
, n : nat
) {
	requires I_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j_softwareOps_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f requires IctrEvars_AppleHarvestControl initial i
	junction j
	final f
	transition trI {
		from i
		to j
		action # C
	}
	transition trF {
		from j
		to f
		condition since ( C ) >= m
	}
	transition trSelf {
		from j
		to j
		condition since ( C ) < n
		action clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j ( 1 )
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_op_j_2_4_f ( ) {
	requires I_req_normal_AppleHarvestControl_LocalizeFruit_entry_j_2_4_t_2_4_localVars requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
		action localized = false
	}
	input context { }
	output context { }
}

operation clone_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__op_t_thenJ__f ( ) {
	requires I_req_normal_IKSolver_Solve_t3_op_t_thenJ__t_thenTA__localVars requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action positions = addApple ( positions , apple , p1 , p2 , p3 )
	}
	input context { }
	output context { }
}

operation clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f ( d : nat
) {
	uses I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f uses I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f uses I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires req_normal_AppleHarvestControl_GetApple_entry_t_localVars requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_clone_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_deadlineCheck_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires IctrEvars_AppleHarvestControl requires I_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_S0 var g : boolean = false
	initial i
	state S0 {
		initial i
		state S1 {
			entry inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = false
		}
		final f
		transition t0 {
			from i
			to S1
		} 
		transition t1 {
			from S1
			to f
			action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f ( )
		}
		during clone_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_deadlineCheck ( d ) ; opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_S0 ( )
		exit inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = true
	}
	final f
	transition t0 {
		from i
		to S0
	}
	transition t1 {
		from S0
		to f
		condition g
	}
	input context { }
	output context { requires req_normal_AppleHarvestControl_GetApple_entry_t_platformOps_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f }
}

operation clone_normal_IKSolver_Solve_entry_j_3_2_t_3_2_op_j_3_2_j_2_6 ( ) {
	requires I_req_normal_IKSolver_Solve_entry_j_3_2_t_3_2_localVars requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action p2 = jointFruit ( apple )
	}
	input context { }
	output context { }
}

operation clone_normal_IKSolver_Solve_exit ( ) {
	requires req_normal_IKSolver_Solve_exit_localVars requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action apples = diff ( apples , { apple } )
	}
	input context { }
	output context { }
}

operation clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f ( d : nat
) {
	uses I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f uses I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f uses I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires req_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_localVars requires I_clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_deadlineCheck_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f_softwareOps_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires IctrEvars_AppleHarvestControl requires I_opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_S0 var g : boolean = false
	initial i
	state S0 {
		initial i
		state S1 {
			entry inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f = false
		}
		final f
		transition t0 {
			from i
			to S1
		}
		transition t1 {
			from S1
			to f
			action clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f ( )
		}
		during clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_deadlineCheck ( d ) ; opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_S0 ( )
		exit inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f = true
	}
	final f
	transition t0 {
		from i
		to S0
	}
	transition t1 {
		from S0
		to f
		condition g
	}
	input context { }
	output context { uses I_eventsnormal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_outEvs }
}

operation clone_normal_AppleHarvestControl_GetApple_exit ( ) {
	requires req_normal_AppleHarvestControl_GetApple_exit_localVars requires IctrEvars_AppleHarvestControl initial i
	final f
	transition t {
		from i
		to f
		action positions = fdiff ( nextApple , positions )
	}
	input context { }
	output context { }
}

operation clone_normal_IKSolver_Solve_entry_j_2_6_t_2_6_op_j_2_6_f ( ) {
	requires I_req_normal_IKSolver_Solve_entry_j_2_6_t_2_6_localVars requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action p3 = jointStorage ( apple )
	}
	input context { }
	output context { }
}

operation clone_normal_IKSolver_Solve_t3_op_t_elseJ__t_elseTA__op_t_elseJ__f ( ) {
	requires IctrEvars_IKSolver initial i
	final f
	transition t {
		from i
		to f
		action skip
	}
	input context { }
	output context { }
}

operation clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j ( i : nat
) {
	requires IctrEvars_AppleHarvestControl initial i0
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_normal_AppleHarvestControl_Prepare_entry_clone_waitInterval_j_2_3_f_clone_waitOp_j_j_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not since ( C ) == i
			action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) )
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

operation clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_deadlineCheck ( d : nat
) {
	requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f initial i
	state S1 {
	}
	state S2 {
	}
	state sStop {
	}
	transition tr1 {
		from i
		to S1
		action # C
	}
	transition tr2 {
		from S1
		to S2
		condition since ( C ) <= 1 - 1
		action exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f = true
	}
	transition tr3 {
		from S2
		to S1
		condition exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f
		action exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f = false
	}
	transition tr4 {
		from S1
		to sStop
		condition since ( C ) > 1 - 1
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f ( ) {
	requires I_req_normal_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_S0_t_localVars requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_op_j_2_7_f_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_op_i_j_2_7_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_S1_f requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f initial i
	junction j_2_7
	final f
	transition t {
		from i
		to j_2_7
		action clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_op_i_j_2_7 ( )
	}
	transition t_2_7 {
		from j_2_7
		to f
		action clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_op_j_2_7_f ( )
	}
	input context { }
	output context { uses I_events_normal_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_S0_t_outEvs }
}

operation clone_clone_normal_AppleHarvestControl_Prepare_t1_dop_deadlineCheck ( d : nat
) {
	requires Iexec_ds_AppleHarvestControl_Prepare requires Iexec_ms_AppleHarvestControl_Prepare initial i
	state S1 {
	}
	state S2 {
	}
	state sStop {
	}
	transition tr1 {
		from i
		to S1
		action # C
	}
	transition tr2 {
		from S1
		to S2
		condition since ( C ) <= 1 - 1
		action exec_ds_AppleHarvestControl_Prepare = true
	}
	transition tr3 {
		from S2
		to S1
		condition exec_ms_AppleHarvestControl_Prepare
		action exec_ms_AppleHarvestControl_Prepare = false
	}
	transition tr4 {
		from S1
		to sStop
		condition since ( C ) > 1 - 1
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f ( ) {
	requires I_req_normal_normal_AppleHarvestControl_GetApple_entry_S0_t_localVars 
	requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_op_j_2_8_f_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
	junction j_8_10
	junction j_7_11
	junction j_6_12
	junction j_5_13
	junction j_4_14
	junction j_3_15
	junction j_2_16
	junction j_2_8
	final f
	transition t {
		from i
		to j_8_10
		action $ move ( positions ( nextApple ) [ 1 ] )
	}
	transition t_8_10 {
		from j_8_10
		to j_7_11
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11 ( 0 , approachTime )
	}
	transition t_7_11 {
		from j_7_11
		to j_6_12
		action $ grasp ( positions ( nextApple ) [ 2 ] )
	}
	transition t_6_12 {
		from j_6_12
		to j_5_13
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13 ( 1 , graspTime )
	}
	transition t_5_13 {
		from j_5_13
		to j_4_14
		action $ pick ( )
	}
	transition t_4_14 {
		from j_4_14
		to j_3_15
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15 ( 1 , pickTime )
	}
	transition t_3_15 {
		from j_3_15
		to j_2_16
		action $ drop ( positions ( nextApple ) [ 3 ] )
	}
	transition t_2_16 {
		from j_2_16
		to j_2_8
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8 ( 0 , dropTime )
	}
	transition t_2_8 {
		from j_2_8
		to f
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_op_j_2_8_f ( )
	}
	input context { }
	output context { requires I_req_normal_normal_AppleHarvestControl_GetApple_entry_S0_t_platformOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f }
}

operation clone_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_deadlineCheck ( d : nat
) {
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f initial i
	state S1 {
	}
	state S2 {
	}
	state sStop {
	}
	transition tr1 {
		from i
		to S1
		action # C
	}
	transition tr2 {
		from S1
		to S2
		condition since ( C ) <= 1 - 1
		action exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f = true
	}
	transition tr3 {
		from S2
		to S1
		condition exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f
		action exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f = false
	}
	transition tr4 {
		from S1
		to sStop
		condition since ( C ) > 1 - 1
	}
	clock C
	input context { }
	output context { }
}

operation clone_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_deadlineCheck ( d : nat
) {
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
	state S1 {
	}
	state S2 {
	}
	state sStop {
	}
	transition tr1 {
		from i
		to S1
		action # C
	}
	transition tr2 {
		from S1
		to S2
		condition since ( C ) <= 1 - 1
		action exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = true
	}
	transition tr3 {
		from S2
		to S1
		condition exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
		action exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = false
	}
	transition tr4 {
		from S1
		to sStop
		condition since ( C ) > 1 - 1
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f ( ) {
	requires I_req_normal_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_S0_t_localVars requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_op_i_j_2_9_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_op_j_2_9_f_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_S1_f requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f initial i
	junction j_2_9
	final f
	transition t {
		from i
		to j_2_9
		action clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_op_i_j_2_9 ( )
	}
	transition t_2_9 {
		from j_2_9
		to f
		action clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_op_j_2_9_f ( )
	}
	input context { }
	output context { uses I_events_normal_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_S0_t_outEvs }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_op_j_2_8_f ( ) {
	requires I_req_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_j_2_8_t_2_8_localVars requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
	final f
	transition t {
		from i
		to f
		action g = true
	}
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_op_i_j_2_9 ( ) {
	requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f initial i
	final f
	transition t {
		from i
		to f 
		action $startGoHome
	}
	input context { }
	output context { uses I_events_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_t_outEvs }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15 ( m : nat
, n : nat
) {
	requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15 requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
	junction j
	final f
	transition trI {
		from i
		to j
		action # C
	}
	transition trF {
		from j
		to f
		condition since ( C ) >= m
	}
	transition trSelf {
		from j
		to j
		condition since ( C ) < n
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j ( 1 )
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_op_j_2_7_f ( ) {
	requires I_req_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_j_2_7_t_2_7_localVars requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f initial i
	final f
	transition t {
		from i
		to f
		action g = true
	}
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8 ( m : nat
, n : nat
) {
	requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8 requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
	junction j
	final f
	transition trI {
		from i
		to j
		action # C
	}
	transition trF {
		from j
		to f
		condition since ( C ) >= m
	}
	transition trSelf {
		from j
		to j
		condition since ( C ) < n
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j ( 1 )
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11 ( m : nat
, n : nat
) {
	requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11 requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
	junction j
	final f
	transition trI {
		from i
		to j
		action # C
	}
	transition trSelf {
		from j
		to j
		condition since ( C ) < n
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j ( 1 )
	}
	transition trF {
		from j
		to f
		condition since ( C ) >= m
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13 ( m : nat
, n : nat
) {
	requires I_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j_softwareOps_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13 requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
	junction j
	final f
	transition trI {
		from i
		to j
		action # C
	}
	transition trSelf {
		from j
		to j
		condition since ( C ) < n
		action clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j ( 1 )
	}
	transition trF {
		from j
		to f
		condition since ( C ) >= m
	}
	clock C
	input context { }
	output context { }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_op_i_j_2_7 ( ) {
	requires I_req_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_localVars requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f initial i
	final f
	transition t {
		from i
		to f
		action $ startIKSolver ! apples
	}
	input context { }
	output context { uses I_events_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_t_outEvs }
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_op_j_2_9_f ( ) {
	requires I_req_normal_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_j_2_9_t_2_9_localVars requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f initial i
	final f
	transition t {
		from i
		to f
		action g = true
	}
	input context { }
	output context { }
}


operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j ( i : nat
) {
	requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i0
	requires ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmpeyCycle{
			from EmptyCycle
			to EmptyCycle
			condition not ( since ( C ) == i)
			action SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j()
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

interface ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j{
	SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j()
}

operation SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_4_14_j_3_15_clone_waitOp_j_j(){
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
	requires IctrEvars_AppleHarvestControl
	initial i
	final f
	state S1{}
	transition t1 {
		from i
		to S1
	}
	
	transition t2 {
		from S1
		to f
		condition ( inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f \/ exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f)
		action exec ;
		         if exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
		         then
		        (exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = false ;
		        exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = true)
		        end
	 }
	
	input context { }
	output context { }
}


operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j ( i : nat
) {
	requires IctrEvars_AppleHarvestControl 
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j  initial i0
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
			condition not ( since ( C ) == 1 )
			action SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j( )
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

interface ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j{
	SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j()
}

operation SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_8_10_j_7_11_clone_waitOp_j_j(){
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
	requires IctrEvars_AppleHarvestControl
	initial i
	final f
	state S1{}
	transition t1 {
		from i
		to S1
	}
	
	transition t2 {
		from S1
		to f
		condition ( inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f \/ exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f)
		action exec ;
		         if exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
		         then
		        (exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = false ;
		        exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = true)
		        end
	 }
	
	input context { }
	output context { }
}

interface ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j{
	SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j ( )
}

operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j ( i : nat
) {
	requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i0
	requires ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j
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
			condition not ( since ( C ) == i )
			action SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j ()
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

operation SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_6_12_j_5_13_clone_waitOp_j_j ( )
 {
 	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
	requires IctrEvars_AppleHarvestControl
	initial i
	final f
	state S1{}
	transition t1 {
		from i
		to S1
	} 
	
	transition t2 {
		from S1
		to f
		condition ( inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f \/ exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f)
		action exec ;
		         if exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
		         then
		        (exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = false ;
		        exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = true)
		        end
	 }
	
	input context { }
	output context { }
 }
operation clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j ( i : nat
) {
	requires IctrEvars_AppleHarvestControl requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i0
	requires ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j
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
			condition not (since ( C ) == i )
			action SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j ( )
			
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

interface ISFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j {
	SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j ( )
}

operation SFinal_clone_normal_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_S1_f_clone_waitInterval_j_2_16_j_2_8_clone_waitOp_j_j ( ) {
	
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f 
	requires I_inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
	requires IctrEvars_AppleHarvestControl
	initial i
	final f
	state S1{}
	transition t1 {
		from i
		to S1
	}
	
	transition t2 {
		from S1
		to f
		condition ( inact_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f \/ exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f)
		action exec ;
		         if exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
		         then
		        (exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = false ;
		        exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = true)
		        end
	 }
	
	input context { }
	output context { }
}

operation opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f_S0 ( ) {
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f initial i
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
		action exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f
		action exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Start_t1_op_t_i_f = false
	}
	input context { }
	output context { }
}

operation opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f_S0 ( ) {
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f initial i
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
		action exec_ds_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f
		action exec_ms_clone_deadlineAction_normal_AppleHarvestControl_GetApple_entry_t_i_f = false
	}
	input context { }
	output context { }
}

operation opFinalDuring_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f_S0 ( ) {
	requires I_exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f requires I_exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f initial i
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
		action exec_ds_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f
		action exec_ms_clone_deadlineAction_normal_AppleHarvestControl_LocalizeFruit_Solving_t2_op_t_i_f = false
	}
	input context { }
	output context { }
}

operation opFinalDuring_AppleHarvestControl_Prepare ( ) {
	requires Iexec_ds_AppleHarvestControl_Prepare requires Iexec_ms_AppleHarvestControl_Prepare initial i
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
		action exec_ds_AppleHarvestControl_Prepare = true
	}
	transition t2 {
		from S1
		to S0
		condition exec_ms_AppleHarvestControl_Prepare
		action exec_ms_AppleHarvestControl_Prepare = false
	}
	input context { }
	output context { }
}

operation SFinal_AppleHarvestControl_Prepare ( ) {
	requires IctrEvars_AppleHarvestControl requires Iexec_ds_AppleHarvestControl_Prepare requires Iexec_ms_AppleHarvestControl_Prepare requires Iinact_AppleHarvestControl_Prepare initial i
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
		condition ( inact_AppleHarvestControl_Prepare \/ exec_ds_AppleHarvestControl_Prepare )
		action exec ; ( takePicF = true ; ( endGoHomeF = true ; endIKSolverF = true ) ) ; if exec_ds_AppleHarvestControl_Prepare then exec_ds_AppleHarvestControl_Prepare = false ; exec_ms_AppleHarvestControl_Prepare = true end
	}
	input context { }
	output context { }
}
 
module Harvester {
	connection Arm on takePic to ctrl_ref0 on takePic ( _async )
	cref ctrl_ref0 = ControlArm
	robotic platform Arm {
		uses pkg727_main::Camera provides pkg727_main::ArmOperations }

	cycleDef cycle == 1
} 

