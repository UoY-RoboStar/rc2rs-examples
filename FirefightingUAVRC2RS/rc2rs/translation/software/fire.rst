package pre_pkg__sim  interface req_normal_FireDetect_Superimpose_entry_localVars {
	var rgb : RgbFrame , d : Frame , super : SuperimposedFrame , t : Frame
}

interface I_events_normal_FireDetect_CheckFire_TGain_entry_outEvs {
	event trackingGained
}

interface I_events_normal_FireDetect_CheckFire_FLoss_entry_outEvs {
	event fireLost
}

interface req_normal_FireDetect_Idle_IR_op_localVars {
	var gotD : boolean
}

interface req_normal_FireDetect_I_II_op_localVars {
	var gotD : boolean , gotR : boolean , gotH : boolean
}

interface I_clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_3_2_t_3_2_op_j_3_2_j_2_32_13_softwareOps_clone_normal_FireDetect_I_II_op {
	clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_3_2_t_3_2_op_j_3_2_j_2_32_13 ( )
}

interface I_clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_2_32_t_2_32_op_j_2_32_f_31_softwareOps_clone_normal_FireDetect_I_II_op {
	clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_2_32_t_2_32_op_j_2_32_f_31 ( )
}

interface I_clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_i_t_op_i_j_3_2_7_softwareOps_clone_normal_FireDetect_I_II_op {
	clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_i_t_op_i_j_3_2_7 ( )
}

interface req_normal_FireDetect_CheckFire_Algorithm_entry_localVars {
	var super : SuperimposedFrame , fp : FireTarget , wm : WallMetrics
}

interface I_events_normal_FireDetect_CheckFire_Algorithm_entry_outEvs {
	event fvSeenFire : FireTarget
	event fgSeenFire : FireTarget
}

interface I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_i_t_op_i_j_4_3_51_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry {
	clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_i_t_op_i_j_4_3_51 ( )
}

interface I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_op_j_2_35_f_15_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry {
	clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_op_j_2_35_f_15 ( )
}

interface I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_op_j_3_27_j_2_35_36_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry {
	clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_op_j_3_27_j_2_35_36 ( )
}

interface I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_4_3_t_4_3_op_j_4_3_j_3_27_33_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry {
	clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_4_3_t_4_3_op_j_4_3_j_3_27_33 ( )
}

interface I_events_normal_FireDetect_CheckFire_TLoss_entry_outEvs {
	event trackingLost
}

interface req_normal_FireDetect_Idle_ID_op_localVars {
	var gotD : boolean
}

interface I_events_normal_FireDetect_CheckFire_FGain_entry_outEvs {
	event fireDetected
}

interface req_normal_FireDetect_CheckFire_FI_op_localVars {
	var gotD : boolean , gotR : boolean , gotH : boolean
}

interface I_clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_2_30_t_2_30_op_j_2_30_f_10_softwareOps_clone_normal_FireDetect_CheckFire_FI_op {
	clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_2_30_t_2_30_op_j_2_30_f_10 ( )
}

interface I_clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_3_14_t_3_14_op_j_3_14_j_2_30_12_softwareOps_clone_normal_FireDetect_CheckFire_FI_op {
	clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_3_14_t_3_14_op_j_3_14_j_2_30_12 ( )
}

interface I_clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_i_t_op_i_j_3_14_37_softwareOps_clone_normal_FireDetect_CheckFire_FI_op {
	clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_i_t_op_i_j_3_14_37 ( )
}

interface I_events_normal_FireDetect_CheckWall_entry_outEvs {
	event wallMetrics : WallMetrics
}

interface I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_3_33_t_3_33_op_j_3_33_j_2_34_23_softwareOps_clone_normal_FireDetect_CheckWall_entry {
	clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_3_33_t_3_33_op_j_3_33_j_2_34_23 ( )
}

interface req_normal_FireDetect_CheckWall_entry_localVars {
	var wm : WallMetrics
}

interface I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_4_22_t_4_22_op_j_4_22_j_3_33_43_softwareOps_clone_normal_FireDetect_CheckWall_entry {
	clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_4_22_t_4_22_op_j_4_22_j_3_33_43 ( )
}

interface I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_i_t_op_i_j_4_22_5_softwareOps_clone_normal_FireDetect_CheckWall_entry {
	clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_i_t_op_i_j_4_22_5 ( )
}

interface I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_op_j_2_34_f_50_softwareOps_clone_normal_FireDetect_CheckWall_entry {
	clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_op_j_2_34_f_50 ( )
}

interface req_normal_FireDetect_CheckFire_Done_entry_localVars {
	var fs : FireStatus , fp : FireTarget , checkDone : boolean
}

interface I_clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_j_2_20_t_2_20_op_j_2_20_f_41_softwareOps_clone_normal_FireDetect_CheckFire_Done_entry {
	clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_j_2_20_t_2_20_op_j_2_20_f_41 ( )
}

interface I_clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_i_t_op_i_j_2_20_17_softwareOps_clone_normal_FireDetect_CheckFire_Done_entry {
	clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_i_t_op_i_j_2_20_17 ( )
}

interface req_normal_FireDetect_Idle_IT_op_localVars {
	var gotH : boolean
}

interface req_normal_FireDetect_CheckFire_entry_localVars {
	var checkDone : boolean
}

interface I_req_normal_FireDetect_CheckWall_entry_i_t_localVars {
	var wm : WallMetrics
}

interface I_req_normal_FireDetect_I_II_op_i_t_localVars {
	var gotD : boolean
}

interface I_req_normal_FireDetect_CheckFire_FI_op_j_2_30_t_2_30_localVars {
	var gotR : boolean
}

interface I_req_normal_FireDetect_CheckFire_FI_op_j_3_14_t_3_14_localVars {
	var gotH : boolean
}

interface I_req_normal_FireDetect_I_II_op_j_3_2_t_3_2_localVars {
	var gotH : boolean
}

interface I_events_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_outEvs {
	event fgSeenFire : FireTarget
}

interface I_req_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_localVars {
	var fp : FireTarget
}

interface I_req_normal_FireDetect_CheckFire_Done_entry_i_t_localVars {
	var fp : FireTarget , fs : FireStatus
}

interface I_req_normal_FireDetect_CheckWall_entry_j_3_33_t_3_33_localVars {
	var wm : WallMetrics
}

interface I_req_normal_FireDetect_I_II_op_j_2_32_t_2_32_localVars {
	var gotR : boolean
}

interface I_req_normal_FireDetect_CheckFire_Algorithm_entry_j_4_3_t_4_3_localVars {
	var fp : FireTarget , wm : WallMetrics
}

interface I_events_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_outEvs {
	event fvSeenFire : FireTarget
}

interface I_req_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_localVars {
	var fp : FireTarget
}

interface I_req_normal_FireDetect_CheckFire_FI_op_i_t_localVars {
	var gotD : boolean
}

interface I_req_normal_FireDetect_CheckFire_Done_entry_j_2_20_t_2_20_localVars {
	var checkDone : boolean
}

interface I_req_normal_FireDetect_CheckWall_entry_j_4_22_t_4_22_localVars {
	var wm : WallMetrics
}

interface I_req_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_localVars {
	var wm : WallMetrics
}

interface I_events_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_outEvs {
	event wallMetrics : WallMetrics
}

interface I_req_normal_FireDetect_CheckFire_Algorithm_entry_i_t_localVars {
	var super : SuperimposedFrame , fp : FireTarget
}

interface I_clone_normal_FireDetect_I_II_op_softwareOps_FireDetect {
	clone_normal_FireDetect_I_II_op ( )
}

interface I_clone_normal_FireDetect_CheckFire_Algorithm_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_Algorithm_entry ( )
}

interface I_clone_normal_FireDetect_Idle_IT_op_softwareOps_FireDetect {
	clone_normal_FireDetect_Idle_IT_op ( )
}

interface I_clone_normal_FireDetect_CheckFire_TGain_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_TGain_entry ( )
}

interface I_clone_normal_FireDetect_CheckFire_Done_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_Done_entry ( )
}

interface I_clone_normal_FireDetect_CheckFire_TLoss_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_TLoss_entry ( )
}

interface FireVisualEvents_outEvs_FireDetect {
	event wallMetrics : WallMetrics
	event fvSeenFire : FireTarget
}

interface MLX90640Events_inpEvs_FireDetect {
	event mlxHeatmap : Frame
}

interface IctrEvars_FireDetect {
	var mlxHeatmapF : boolean = true , rsDepthFrameF : boolean = true , rsRgbFrameF : boolean = true
}

interface I_clone_normal_FireDetect_CheckFire_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_entry ( )
}

interface I_clone_normal_FireDetect_Idle_ID_op_softwareOps_FireDetect {
	clone_normal_FireDetect_Idle_ID_op ( )
}

interface I_clone_normal_FireDetect_CheckFire_FLoss_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_FLoss_entry ( )
}

interface FirePlanningEvents_outEvs_FireDetect {
	event fireDetected
	event fireLost
	event trackingGained
	event trackingLost
}

interface I_clone_normal_FireDetect_Idle_IR_op_softwareOps_FireDetect {
	clone_normal_FireDetect_Idle_IR_op ( )
}

interface FireGimbalEvents_outEvs_FireDetect {
	event fgSeenFire : FireTarget
}

interface I_clone_normal_FireDetect_Superimpose_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_Superimpose_entry ( )
}

interface I_clone_normal_FireDetect_CheckWall_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckWall_entry ( )
}

interface RealSenseD435iEvents_inpEvs_FireDetect {
	event rsDepthFrame : Frame
	event rsRgbFrame : RgbFrame
}

interface I_clone_normal_FireDetect_CheckFire_FGain_entry_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_FGain_entry ( )
}

interface I_clone_normal_FireDetect_CheckFire_FI_op_softwareOps_FireDetect {
	clone_normal_FireDetect_CheckFire_FI_op ( )
}

stm FireDetect {
	uses IctrEvars_FireDetect requires I_clone_normal_FireDetect_Superimpose_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_TGain_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_FLoss_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_Idle_IR_op_softwareOps_FireDetect requires I_clone_normal_FireDetect_I_II_op_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_Algorithm_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_TLoss_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_Idle_ID_op_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_FGain_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_FI_op_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckWall_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_Done_entry_softwareOps_FireDetect requires I_clone_normal_FireDetect_Idle_IT_op_softwareOps_FireDetect requires I_clone_normal_FireDetect_CheckFire_entry_softwareOps_FireDetect var fp : FireTarget , fs : FireStatus , wm : WallMetrics , checkDone : boolean
	var gotD : boolean , gotH : boolean , gotR : boolean
	var rgb : RgbFrame , d : Frame , t : Frame , super : SuperimposedFrame
	const LEFT_X : nat , CENTRE_X : nat , RIGHT_X : nat , CENTRE_Y : nat
	input context { uses MLX90640Events_inpEvs_FireDetect uses RealSenseD435iEvents_inpEvs_FireDetect }
	output context { uses FireVisualEvents_outEvs_FireDetect uses FireGimbalEvents_outEvs_FireDetect uses FirePlanningEvents_outEvs_FireDetect }
	cycleDef cycle == 1
	initial I
	state Idle {
		initial i
		state EmptyCycle {
		}
		transition tIdle {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_FireDetect_Idle_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( ( ( gotH /\ gotD /\ gotR ) \/ ( true /\ ( ( $ rsDepthFrame ? d /\ rsDepthFrameF ) ) ) ) \/ ( true /\ ( ( $ mlxHeatmap ? t /\ mlxHeatmapF ) ) ) ) \/ ( true /\ ( ( $ rsRgbFrame ? rgb /\ rsRgbFrameF ) ) ) )
			action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
		}
	}
	state Superimpose {
		initial i
		state EmptyCycle {
		}
		transition tSuperimpose {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_FireDetect_Superimpose_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
		}
		entry clone_normal_FireDetect_Superimpose_entry ( )
	}
	state CheckWall {
		initial i
		state EmptyCycle {
		}
		transition tCheckWall {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_FireDetect_CheckWall_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
		}
		entry clone_normal_FireDetect_CheckWall_entry ( )
	}
	state CheckFire {
		initial I
		state Algorithm {
			initial i
			state EmptyCycle {
			}
			transition tAlgorithm {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_FireDetect_CheckFire_Algorithm_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( ( ( fs == FireStatus :: Detected ) \/ ( fs == FireStatus :: Tracked ) ) \/ ( fs == FireStatus :: NoFire ) ) \/ ( checkDone ) )
				action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
			}
			entry clone_normal_FireDetect_CheckFire_Algorithm_entry ( )
		}
		junction WasDetected
		junction WasTracked
		junction WasNoFire
		state FLoss {
			initial i
			state EmptyCycle {
			}
			transition tFLoss {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_FireDetect_CheckFire_FLoss_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( true ) \/ ( checkDone ) )
				action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
			}
			entry clone_normal_FireDetect_CheckFire_FLoss_entry ( )
		}
		state TGain {
			initial i
			state EmptyCycle {
			}
			transition tTGain {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_FireDetect_CheckFire_TGain_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( true ) \/ ( checkDone ) )
				action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
			}
			entry clone_normal_FireDetect_CheckFire_TGain_entry ( )
		}
		state Done {
			initial i
			state EmptyCycle {
			}
			transition tDone {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_FireDetect_CheckFire_Done_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( checkDone )
				action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
			}
			entry clone_normal_FireDetect_CheckFire_Done_entry ( )
		}
		state TLoss {
			initial i
			state EmptyCycle {
			}
			transition tTLoss {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_FireDetect_CheckFire_TLoss_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( ( fs != FireStatus :: NoFire ) \/ ( fs == FireStatus :: NoFire ) ) \/ ( checkDone ) )
				action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
			}
			entry clone_normal_FireDetect_CheckFire_TLoss_entry ( )
		}
		state FGain {
			initial i
			state EmptyCycle {
			}
			transition tFGain {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_FireDetect_CheckFire_FGain_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( ( fs != FireStatus :: Tracked ) \/ ( fs == FireStatus :: Tracked ) ) \/ ( checkDone ) )
				action exec ; ( rsRgbFrameF = true ; ( rsDepthFrameF = true ; mlxHeatmapF = true ) )
			}
			entry clone_normal_FireDetect_CheckFire_FGain_entry ( )
		}
		transition Init {
			from I
			to Algorithm
		}
		transition WDT {
			from Algorithm
			to WasDetected
			condition fs == FireStatus :: Detected
		}
		transition WTR {
			from Algorithm
			to WasTracked
			condition fs == FireStatus :: Tracked
		}
		transition WNF {
			from Algorithm
			to WasNoFire
			condition fs == FireStatus :: NoFire
		}
		transition FLossDT {
			from WasDetected
			to FLoss
			condition fs == FireStatus :: NoFire
		}
		transition DetectedPass {
			from WasDetected
			to Done
			condition fs == FireStatus :: Detected
		}
		transition TGainDT {
			from WasDetected
			to TGain
			condition fs == FireStatus :: Tracked
		}
		transition TLossNF {
			from WasTracked
			to TLoss
			condition fs != FireStatus :: Tracked
		}
		transition TrackedPass {
			from WasTracked
			to Done
			condition fs == FireStatus :: Tracked
		}
		transition FGainNF {
			from WasNoFire
			to FGain
			condition fs != FireStatus :: NoFire
		}
		transition NoFirePass {
			from WasNoFire
			to Done
			condition fs == FireStatus :: NoFire
		}
		transition FLossPass {
			from FLoss
			to Done
		}
		transition TGainPass {
			from TGain
			to Done
		}
		transition TLossPass {
			from TLoss
			to Done
			condition fs != FireStatus :: NoFire
		}
		transition FLossT {
			from TLoss
			to FLoss
			condition fs == FireStatus :: NoFire
		}
		transition FGainPass {
			from FGain
			to Done
			condition fs != FireStatus :: Tracked
		}
		transition TGainF {
			from FGain
			to TGain
			condition fs == FireStatus :: Tracked
		}
		entry clone_normal_FireDetect_CheckFire_entry ( )
	}
	transition II {
		from I
		to Idle
		action clone_normal_FireDetect_I_II_op ( )
	}
	transition IS {
		from Idle
		to Superimpose
		condition gotH /\ gotD /\ gotR
	}
	transition ID {
		from Idle
		to Idle
		condition ( $ rsDepthFrame ? d /\ rsDepthFrameF )
		action clone_normal_FireDetect_Idle_ID_op ( ) ; rsDepthFrameF = false
	}
	transition IT {
		from Idle
		to Idle
		condition ( $ mlxHeatmap ? t /\ mlxHeatmapF )
		action clone_normal_FireDetect_Idle_IT_op ( ) ; mlxHeatmapF = false
	}
	transition IR {
		from Idle
		to Idle
		condition ( $ rsRgbFrame ? rgb /\ rsRgbFrameF )
		action clone_normal_FireDetect_Idle_IR_op ( ) ; rsRgbFrameF = false
	}
	transition SW {
		from Superimpose
		to CheckWall
	}
	transition WF {
		from CheckWall
		to CheckFire
	}
	transition FI {
		from CheckFire
		to Idle
		condition checkDone
		action clone_normal_FireDetect_CheckFire_FI_op ( )
	}
}

operation clone_normal_FireDetect_Superimpose_entry ( ) {
	requires req_normal_FireDetect_Superimpose_entry_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action super = superimpose ( rgb , d , t )
	}
	input context { }
	output context { }
}

operation clone_normal_FireDetect_CheckFire_TGain_entry ( ) {
	requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action $ trackingGained
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckFire_TGain_entry_outEvs }
}

operation clone_normal_FireDetect_CheckFire_FLoss_entry ( ) {
	requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action $ fireLost
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckFire_FLoss_entry_outEvs }
}

operation clone_normal_FireDetect_Idle_IR_op ( ) {
	requires req_normal_FireDetect_Idle_IR_op_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotD = true
	}
	input context { }
	output context { }
}

operation clone_normal_FireDetect_I_II_op ( ) {
	requires req_normal_FireDetect_I_II_op_localVars requires I_clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_i_t_op_i_j_3_2_7_softwareOps_clone_normal_FireDetect_I_II_op requires I_clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_3_2_t_3_2_op_j_3_2_j_2_32_13_softwareOps_clone_normal_FireDetect_I_II_op requires I_clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_2_32_t_2_32_op_j_2_32_f_31_softwareOps_clone_normal_FireDetect_I_II_op requires IctrEvars_FireDetect initial i
	junction j_3_2
	junction j_2_32
	final f
	transition t {
		from i
		to j_3_2
		action clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_i_t_op_i_j_3_2_7 ( )
	}
	transition t_3_2 {
		from j_3_2
		to j_2_32
		action clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_3_2_t_3_2_op_j_3_2_j_2_32_13 ( )
	}
	transition t_2_32 {
		from j_2_32
		to f
		action clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_2_32_t_2_32_op_j_2_32_f_31 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_FireDetect_CheckFire_Algorithm_entry ( ) {
	requires req_normal_FireDetect_CheckFire_Algorithm_entry_localVars requires I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_op_j_2_35_f_15_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry requires I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_4_3_t_4_3_op_j_4_3_j_3_27_33_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry requires I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_op_j_3_27_j_2_35_36_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry requires I_clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_i_t_op_i_j_4_3_51_softwareOps_clone_normal_FireDetect_CheckFire_Algorithm_entry requires IctrEvars_FireDetect initial i
	junction j_4_3
	junction j_3_27
	junction j_2_35
	final f
	transition t {
		from i
		to j_4_3
		action clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_i_t_op_i_j_4_3_51 ( )
	}
	transition t_4_3 {
		from j_4_3
		to j_3_27
		action clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_4_3_t_4_3_op_j_4_3_j_3_27_33 ( )
	}
	transition t_3_27 {
		from j_3_27
		to j_2_35
		action clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_op_j_3_27_j_2_35_36 ( )
	}
	transition t_2_35 {
		from j_2_35
		to f
		action clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_op_j_2_35_f_15 ( )
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckFire_Algorithm_entry_outEvs }
}

operation clone_normal_FireDetect_CheckFire_TLoss_entry ( ) {
	requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action $ trackingLost
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckFire_TLoss_entry_outEvs }
}

operation clone_normal_FireDetect_Idle_ID_op ( ) {
	requires req_normal_FireDetect_Idle_ID_op_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotD = true
	}
	input context { }
	output context { }
}

operation clone_normal_FireDetect_CheckFire_FGain_entry ( ) {
	requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action $ fireDetected
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckFire_FGain_entry_outEvs }
}

operation clone_normal_FireDetect_CheckFire_FI_op ( ) {
	requires req_normal_FireDetect_CheckFire_FI_op_localVars requires I_clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_2_30_t_2_30_op_j_2_30_f_10_softwareOps_clone_normal_FireDetect_CheckFire_FI_op requires I_clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_3_14_t_3_14_op_j_3_14_j_2_30_12_softwareOps_clone_normal_FireDetect_CheckFire_FI_op requires I_clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_i_t_op_i_j_3_14_37_softwareOps_clone_normal_FireDetect_CheckFire_FI_op requires IctrEvars_FireDetect initial i
	junction j_3_14
	junction j_2_30
	final f
	transition t {
		from i
		to j_3_14
		action clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_i_t_op_i_j_3_14_37 ( )
	}
	transition t_3_14 {
		from j_3_14
		to j_2_30
		action clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_3_14_t_3_14_op_j_3_14_j_2_30_12 ( )
	}
	transition t_2_30 {
		from j_2_30
		to f
		action clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_2_30_t_2_30_op_j_2_30_f_10 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_FireDetect_CheckWall_entry ( ) {
	requires req_normal_FireDetect_CheckWall_entry_localVars requires I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_i_t_op_i_j_4_22_5_softwareOps_clone_normal_FireDetect_CheckWall_entry requires I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_3_33_t_3_33_op_j_3_33_j_2_34_23_softwareOps_clone_normal_FireDetect_CheckWall_entry requires I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_4_22_t_4_22_op_j_4_22_j_3_33_43_softwareOps_clone_normal_FireDetect_CheckWall_entry requires I_clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_op_j_2_34_f_50_softwareOps_clone_normal_FireDetect_CheckWall_entry requires IctrEvars_FireDetect initial i
	junction j_4_22
	junction j_3_33
	junction j_2_34
	final f
	transition t {
		from i
		to j_4_22
		action clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_i_t_op_i_j_4_22_5 ( )
	}
	transition t_4_22 {
		from j_4_22
		to j_3_33
		action clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_4_22_t_4_22_op_j_4_22_j_3_33_43 ( )
	}
	transition t_3_33 {
		from j_3_33
		to j_2_34
		action clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_3_33_t_3_33_op_j_3_33_j_2_34_23 ( )
	}
	transition t_2_34 {
		from j_2_34
		to f
		action clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_op_j_2_34_f_50 ( )
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckWall_entry_outEvs }
}

operation clone_normal_FireDetect_CheckFire_Done_entry ( ) {
	requires req_normal_FireDetect_CheckFire_Done_entry_localVars requires I_clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_i_t_op_i_j_2_20_17_softwareOps_clone_normal_FireDetect_CheckFire_Done_entry requires I_clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_j_2_20_t_2_20_op_j_2_20_f_41_softwareOps_clone_normal_FireDetect_CheckFire_Done_entry requires IctrEvars_FireDetect initial i
	junction j_2_20
	final f
	transition t {
		from i
		to j_2_20
		action clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_i_t_op_i_j_2_20_17 ( )
	}
	transition t_2_20 {
		from j_2_20
		to f
		action clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_j_2_20_t_2_20_op_j_2_20_f_41 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_FireDetect_Idle_IT_op ( ) {
	requires req_normal_FireDetect_Idle_IT_op_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotH = true
	}
	input context { }
	output context { }
}

operation clone_normal_FireDetect_CheckFire_entry ( ) {
	requires req_normal_FireDetect_CheckFire_entry_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action checkDone = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_i_t_op_i_j_4_22_5 ( ) {
	requires I_req_normal_FireDetect_CheckWall_entry_i_t_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action wm . leftDist = 1
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_i_t_op_i_j_3_2_7 ( ) {
	requires I_req_normal_FireDetect_I_II_op_i_t_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotD = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_2_30_t_2_30_op_j_2_30_f_10 ( ) {
	requires I_req_normal_FireDetect_CheckFire_FI_op_j_2_30_t_2_30_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotR = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_j_3_14_t_3_14_op_j_3_14_j_2_30_12 ( ) {
	requires I_req_normal_FireDetect_CheckFire_FI_op_j_3_14_t_3_14_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotH = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_3_2_t_3_2_op_j_3_2_j_2_32_13 ( ) {
	requires I_req_normal_FireDetect_I_II_op_j_3_2_t_3_2_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotH = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_op_j_2_35_f_15 ( ) {
	requires I_req_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action $ fgSeenFire ! fp
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckFire_Algorithm_entry_j_2_35_t_2_35_outEvs }
}

operation clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_i_t_op_i_j_2_20_17 ( ) {
	requires I_req_normal_FireDetect_CheckFire_Done_entry_i_t_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action fs = fp . status
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_3_33_t_3_33_op_j_3_33_j_2_34_23 ( ) {
	requires I_req_normal_FireDetect_CheckWall_entry_j_3_33_t_3_33_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action wm . rightDist = 1
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_I_II_op_normal_FireDetect_I_II_op_j_2_32_t_2_32_op_j_2_32_f_31 ( ) {
	requires I_req_normal_FireDetect_I_II_op_j_2_32_t_2_32_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotR = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_4_3_t_4_3_op_j_4_3_j_3_27_33 ( ) {
	requires I_req_normal_FireDetect_CheckFire_Algorithm_entry_j_4_3_t_4_3_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action fp . distance = wm . centreDist
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_op_j_3_27_j_2_35_36 ( ) {
	requires I_req_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action $ fvSeenFire ! fp
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckFire_Algorithm_entry_j_3_27_t_3_27_outEvs }
}

operation clone_clone_normal_FireDetect_CheckFire_FI_op_normal_FireDetect_CheckFire_FI_op_i_t_op_i_j_3_14_37 ( ) {
	requires I_req_normal_FireDetect_CheckFire_FI_op_i_t_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action gotD = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckFire_Done_entry_normal_FireDetect_CheckFire_Done_entry_j_2_20_t_2_20_op_j_2_20_f_41 ( ) {
	requires I_req_normal_FireDetect_CheckFire_Done_entry_j_2_20_t_2_20_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action checkDone = true
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_4_22_t_4_22_op_j_4_22_j_3_33_43 ( ) {
	requires I_req_normal_FireDetect_CheckWall_entry_j_4_22_t_4_22_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action wm . centreDist = 1
	}
	input context { }
	output context { }
}

operation clone_clone_normal_FireDetect_CheckWall_entry_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_op_j_2_34_f_50 ( ) {
	requires I_req_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action $ wallMetrics ! wm
	}
	input context { }
	output context { uses I_events_normal_FireDetect_CheckWall_entry_j_2_34_t_2_34_outEvs }
}

operation clone_clone_normal_FireDetect_CheckFire_Algorithm_entry_normal_FireDetect_CheckFire_Algorithm_entry_i_t_op_i_j_4_3_51 ( ) {
	requires I_req_normal_FireDetect_CheckFire_Algorithm_entry_i_t_localVars requires IctrEvars_FireDetect initial i
	final f
	transition t {
		from i
		to f
		action fp = calcFireTarget ( super )
	}
	input context { }
	output context { }
}

