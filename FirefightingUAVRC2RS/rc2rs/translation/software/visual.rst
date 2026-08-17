package pre_pkg__sim 
//import ::FireStatus 
interface I_events_normal_GimbalAim_MaybeAimed_DidAim_op_outEvs {
	event gimbalAimed
}

interface req_normal_VisualNav_Active_NoFire_entry_localVars {
	var movement : RelativeMotion , tgt : FireTarget
	const SCAN_DIST : real
}

interface I_clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_2_28_t_2_28_op_j_2_28_f_8_softwareOps_clone_normal_VisualNav_Active_NoFire_entry {
	clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_2_28_t_2_28_op_j_2_28_f_8 ( )
}

interface I_clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_i_t_op_i_j_3_21_24_softwareOps_clone_normal_VisualNav_Active_NoFire_entry {
	clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_i_t_op_i_j_3_21_24 ( )
}

interface I_clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_3_21_t_3_21_op_j_3_21_j_2_28_29_softwareOps_clone_normal_VisualNav_Active_NoFire_entry {
	clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_3_21_t_3_21_op_j_3_21_j_2_28_29 ( )
}

interface req_normal_GimbalAim_I_Init_op_localVars {
	var tgt : FireTarget
}

interface req_normal_GimbalAim_Calculate_entry_localVars {
	var pitch : nat , tgt : FireTarget , yaw : nat
}

interface I_clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_j_2_6_t_2_6_op_j_2_6_f_25_softwareOps_clone_normal_GimbalAim_Calculate_entry {
	clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_j_2_6_t_2_6_op_j_2_6_f_25 ( )
}

interface I_clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_i_t_op_i_j_2_6_48_softwareOps_clone_normal_GimbalAim_Calculate_entry {
	clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_i_t_op_i_j_2_6_48 ( )
}

interface req_normal_VisualNav_Active_Wall_entry_localVars {
	var movement : RelativeMotion , wm : WallMetrics
}

interface I_clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_i_t_op_i_j_2_16_6_softwareOps_clone_normal_GimbalAim_Clamp_entry {
	clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_i_t_op_i_j_2_16_6 ( )
}

interface req_normal_GimbalAim_Clamp_entry_localVars {
	var pitch : nat , cYaw : nat , YAW_DEAD_ZONE : nat , PITCH_DEAD_ZONE : nat , yaw : nat , cPitch : nat
}

interface I_clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_j_2_16_t_2_16_op_j_2_16_f_47_softwareOps_clone_normal_GimbalAim_Clamp_entry {
	clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_j_2_16_t_2_16_op_j_2_16_f_47 ( )
}

interface I_events_normal_GimbalAim_Pitch_entry_outEvs {
	event gimbalPitch : nat
}

interface req_normal_GimbalAim_Pitch_entry_localVars {
	var pitch : nat
}

interface req_normal_GimbalAim_Yaw_entry_localVars {
	var yaw : nat
}

interface I_events_normal_GimbalAim_Yaw_entry_outEvs {
	event gimbalYaw : nat
}

interface I_events_normal_VisualNav_Active_Commit_Loop_op_outEvs {
	event visualPosition : RelativeMotion
}

interface req_normal_VisualNav_Active_Commit_Loop_op_localVars {
	var movement : RelativeMotion
}

interface I_clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_i_t_op_i_j_3_7_18_softwareOps_clone_normal_VisualNav_Active_Fire_entry {
	clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_i_t_op_i_j_3_7_18 ( )
}

interface I_clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_2_26_t_2_26_op_j_2_26_f_38_softwareOps_clone_normal_VisualNav_Active_Fire_entry {
	clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_2_26_t_2_26_op_j_2_26_f_38 ( )
}

interface req_normal_VisualNav_Active_Fire_entry_localVars {
	var movement : RelativeMotion , tgt : FireTarget
	const TRACK_DIST : real
}

interface I_clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_3_7_t_3_7_op_j_3_7_j_2_26_1_softwareOps_clone_normal_VisualNav_Active_Fire_entry {
	clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_3_7_t_3_7_op_j_3_7_j_2_26_1 ( )
}

interface I_req_normal_VisualNav_Active_Fire_entry_j_3_7_t_3_7_localVars {
	var movement : RelativeMotion , tgt : FireTarget
}

interface I_req_normal_GimbalAim_Clamp_entry_i_t_localVars {
	var cYaw : nat , YAW_DEAD_ZONE : nat , yaw : nat
}

interface I_req_normal_VisualNav_Active_NoFire_entry_j_2_28_t_2_28_localVars {
	var movement : RelativeMotion
}

interface I_req_normal_VisualNav_Active_Fire_entry_i_t_localVars {
	const TRACK_DIST : real
	var movement : RelativeMotion , tgt : FireTarget
}

interface I_req_normal_VisualNav_Active_NoFire_entry_i_t_localVars {
	const SCAN_DIST : real
	var tgt : FireTarget , movement : RelativeMotion
}

interface I_req_normal_GimbalAim_Calculate_entry_j_2_6_t_2_6_localVars {
	var pitch : nat , tgt : FireTarget
}

interface I_req_normal_VisualNav_Active_NoFire_entry_j_3_21_t_3_21_localVars {
	var movement : RelativeMotion
}

interface I_req_normal_VisualNav_Active_Fire_entry_j_2_26_t_2_26_localVars {
	var movement : RelativeMotion , tgt : FireTarget
}

interface I_req_normal_GimbalAim_Clamp_entry_j_2_16_t_2_16_localVars {
	var cPitch : nat , PITCH_DEAD_ZONE : nat , pitch : nat
}

interface I_req_normal_GimbalAim_Calculate_entry_i_t_localVars {
	var yaw : nat , tgt : FireTarget
}

interface FireVisualEvents_inpEvs_VisualNav {
	event wallMetrics : WallMetrics
	event fvSeenFire : FireTarget
}

interface IctrEvars_VisualNav {
	var vnavEnableF : boolean = true , wallMetricsF : boolean = true , fvSeenFireF : boolean = true , vnavDisableF : boolean = true
}

interface I_clone_normal_VisualNav_Active_Wall_entry_softwareOps_VisualNav {
	clone_normal_VisualNav_Active_Wall_entry ( )
}

interface VisualPlanningEvents_inpEvs_VisualNav {
	event vnavEnable
	event vnavDisable
}

interface VisualFlightEvents_outEvs_VisualNav {
	event visualPosition : RelativeMotion
}

interface I_clone_normal_VisualNav_Active_NoFire_entry_softwareOps_VisualNav {
	clone_normal_VisualNav_Active_NoFire_entry ( )
}

interface I_clone_normal_VisualNav_Active_Fire_entry_softwareOps_VisualNav {
	clone_normal_VisualNav_Active_Fire_entry ( )
}

interface I_clone_normal_VisualNav_Active_Commit_Loop_op_softwareOps_VisualNav {
	clone_normal_VisualNav_Active_Commit_Loop_op ( )
}

interface FireGimbalEvents_inpEvs_GimbalAim {
	event fgSeenFire : FireTarget
}

interface GimbalPlanningEvents_outEvs_GimbalAim {
	event gimbalAimed
}

interface I_clone_normal_GimbalAim_I_Init_op_softwareOps_GimbalAim {
	clone_normal_GimbalAim_I_Init_op ( )
}

interface I_clone_normal_GimbalAim_MaybeAimed_DidAim_op_softwareOps_GimbalAim {
	clone_normal_GimbalAim_MaybeAimed_DidAim_op ( )
}

interface I_clone_normal_GimbalAim_Clamp_entry_softwareOps_GimbalAim {
	clone_normal_GimbalAim_Clamp_entry ( )
}

interface GimbalSprayEvents_outEvs_GimbalAim {
	event gimbalYaw : nat
	event gimbalPitch : nat
}

interface GimbalSprayEvents_inpEvs_GimbalAim {
	event gimbalYawAck
	event gimbalPitchAck
}

interface I_clone_normal_GimbalAim_Calculate_entry_softwareOps_GimbalAim {
	clone_normal_GimbalAim_Calculate_entry ( )
}

interface I_clone_normal_GimbalAim_Yaw_entry_softwareOps_GimbalAim {
	clone_normal_GimbalAim_Yaw_entry ( )
}

interface IctrEvars_GimbalAim {
	var gimbalYawAckF : boolean = true , fgSeenFireF : boolean = true , gimbalPitchAckF : boolean = true
}

interface I_clone_normal_GimbalAim_Pitch_entry_softwareOps_GimbalAim {
	clone_normal_GimbalAim_Pitch_entry ( )
}

stm VisualNav {
	uses IctrEvars_VisualNav requires I_clone_normal_VisualNav_Active_NoFire_entry_softwareOps_VisualNav requires I_clone_normal_VisualNav_Active_Wall_entry_softwareOps_VisualNav requires I_clone_normal_VisualNav_Active_Commit_Loop_op_softwareOps_VisualNav requires I_clone_normal_VisualNav_Active_Fire_entry_softwareOps_VisualNav var tgt : FireTarget , wm : WallMetrics , movement : RelativeMotion
	const TRACK_DIST : real , SCAN_DIST : real
	input context { uses FireVisualEvents_inpEvs_VisualNav uses VisualPlanningEvents_inpEvs_VisualNav }
	output context { uses VisualFlightEvents_outEvs_VisualNav }
	cycleDef cycle == 1
	initial I
	state Inactive {
		initial i
		state EmptyCycle {
		}
		transition tInactive {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_VisualNav_Inactive_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( ( ( true /\ ( ( $ vnavEnable /\ vnavEnableF ) ) ) \/ ( true /\ ( ( $ vnavDisable /\ vnavDisableF ) ) ) ) \/ ( true /\ ( ( $ fvSeenFire ? tgt /\ fvSeenFireF ) ) ) ) \/ ( true /\ ( ( $ wallMetrics ? wm /\ wallMetricsF ) ) ) )
			action exec ; ( vnavDisableF = true ; ( fvSeenFireF = true ; ( wallMetricsF = true ; vnavEnableF = true ) ) )
		}
	}
	state Active {
		initial I
		state Waiting {
			initial i
			state EmptyCycle {
			}
			transition tWaiting {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_VisualNav_Active_Waiting_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( true /\ ( ( $ wallMetrics ? wm /\ wallMetricsF ) ) ) \/ ( true /\ ( ( $ vnavDisable /\ vnavDisableF ) ) ) )
				action exec ; ( vnavDisableF = true ; ( fvSeenFireF = true ; ( wallMetricsF = true ; vnavEnableF = true ) ) )
			}
		}
		state Wall {
			initial i
			state EmptyCycle {
			}
			transition tWall {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_VisualNav_Active_Wall_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( true /\ ( ( $ fvSeenFire ? tgt /\ fvSeenFireF ) ) ) \/ ( true /\ ( ( $ vnavDisable /\ vnavDisableF ) ) ) )
				action exec ; ( vnavDisableF = true ; ( fvSeenFireF = true ; ( wallMetricsF = true ; vnavEnableF = true ) ) )
			}
			entry clone_normal_VisualNav_Active_Wall_entry ( )
		}
		junction FIsValid
		state NoFire {
			initial i
			state EmptyCycle {
			}
			transition tNoFire {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_VisualNav_Active_NoFire_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( true ) \/ ( true /\ ( ( $ vnavDisable /\ vnavDisableF ) ) ) )
				action exec ; ( vnavDisableF = true ; ( fvSeenFireF = true ; ( wallMetricsF = true ; vnavEnableF = true ) ) )
			}
			entry clone_normal_VisualNav_Active_NoFire_entry ( )
		}
		state Fire {
			initial i
			state EmptyCycle {
			}
			transition tFire {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_VisualNav_Active_Fire_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( true ) \/ ( true /\ ( ( $ vnavDisable /\ vnavDisableF ) ) ) )
				action exec ; ( vnavDisableF = true ; ( fvSeenFireF = true ; ( wallMetricsF = true ; vnavEnableF = true ) ) )
			}
			entry clone_normal_VisualNav_Active_Fire_entry ( )
		}
		junction Commit
		transition Init {
			from I
			to Waiting
		}
		transition WW {
			from Waiting
			to Wall
			condition ( $ wallMetrics ? wm /\ wallMetricsF )
			action wallMetricsF = false
		}
		transition WF {
			from Wall
			to FIsValid
			condition ( $ fvSeenFire ? tgt /\ fvSeenFireF )
			action fvSeenFireF = false
		}
		transition FNotValid {
			from FIsValid
			to NoFire
			condition tgt . status != FireStatus :: Tracked
		}
		transition FValid {
			from FIsValid
			to Fire
			condition tgt . status == FireStatus :: Tracked
		}
		transition NCommit {
			from NoFire
			to Commit
		}
		transition FCommit {
			from Fire
			to Commit
		}
		transition Loop {
			from Commit
			to Waiting
			action clone_normal_VisualNav_Active_Commit_Loop_op ( )
		}
	}
	transition Init {
		from I
		to Inactive
	}
	transition Activate {
		from Inactive
		to Active
		condition ( $ vnavEnable /\ vnavEnableF )
		action vnavEnableF = false
	}
	transition IgnoreDeactivate {
		from Inactive
		to Inactive
		condition ( $ vnavDisable /\ vnavDisableF )
		action vnavDisableF = false
	}
	transition IgnoreF {
		from Inactive
		to Inactive
		condition ( $ fvSeenFire ? tgt /\ fvSeenFireF )
		action fvSeenFireF = false
	}
	transition IgnoreW {
		from Inactive
		to Inactive
		condition ( $ wallMetrics ? wm /\ wallMetricsF )
		action wallMetricsF = false
	}
	transition Deactivate {
		from Active
		to Inactive
		condition ( $ vnavDisable /\ vnavDisableF )
		action vnavDisableF = false
	}
}

stm GimbalAim {
	uses IctrEvars_GimbalAim requires I_clone_normal_GimbalAim_MaybeAimed_DidAim_op_softwareOps_GimbalAim requires I_clone_normal_GimbalAim_I_Init_op_softwareOps_GimbalAim requires I_clone_normal_GimbalAim_Calculate_entry_softwareOps_GimbalAim requires I_clone_normal_GimbalAim_Clamp_entry_softwareOps_GimbalAim requires I_clone_normal_GimbalAim_Pitch_entry_softwareOps_GimbalAim requires I_clone_normal_GimbalAim_Yaw_entry_softwareOps_GimbalAim var tgt : FireTarget , yaw : nat , pitch : nat , tracking : boolean = false
	var cYaw : nat , cPitch : nat , YAW_DEAD_ZONE : nat , PITCH_DEAD_ZONE : nat
	const TRACK_DIST : real
	input context { uses FireGimbalEvents_inpEvs_GimbalAim uses GimbalSprayEvents_inpEvs_GimbalAim }
	output context { uses GimbalSprayEvents_outEvs_GimbalAim uses GimbalPlanningEvents_outEvs_GimbalAim }
	cycleDef cycle == 1
	initial I
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition tWaiting {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GimbalAim_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ fgSeenFire ? tgt /\ fgSeenFireF ) ) )
			action exec ; ( gimbalPitchAckF = true ; ( fgSeenFireF = true ; gimbalYawAckF = true ) )
		}
	}
	junction IsValid
	state Calculate {
		initial i
		state EmptyCycle {
		}
		transition tCalculate {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GimbalAim_Calculate_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( gimbalPitchAckF = true ; ( fgSeenFireF = true ; gimbalYawAckF = true ) )
		}
		entry clone_normal_GimbalAim_Calculate_entry ( )
	}
	state Clamp {
		initial i
		state EmptyCycle {
		}
		transition tClamp {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GimbalAim_Clamp_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( gimbalPitchAckF = true ; ( fgSeenFireF = true ; gimbalYawAckF = true ) )
		}
		entry clone_normal_GimbalAim_Clamp_entry ( )
	}
	state Yaw {
		initial i
		state EmptyCycle {
		}
		transition tYaw {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GimbalAim_Yaw_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ gimbalYawAck /\ gimbalYawAckF ) ) )
			action exec ; ( gimbalPitchAckF = true ; ( fgSeenFireF = true ; gimbalYawAckF = true ) )
		}
		entry clone_normal_GimbalAim_Yaw_entry ( )
	}
	state Pitch {
		initial i
		state EmptyCycle {
		}
		transition tPitch {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GimbalAim_Pitch_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ gimbalPitchAck /\ gimbalPitchAckF ) ) )
			action exec ; ( gimbalPitchAckF = true ; ( fgSeenFireF = true ; gimbalYawAckF = true ) )
		}
		entry clone_normal_GimbalAim_Pitch_entry ( )
	}
	junction MaybeAimed
	transition Init {
		from I
		to Waiting
		action clone_normal_GimbalAim_I_Init_op ( )
	}
	transition GotFire {
		from Waiting
		to IsValid
		condition ( $ fgSeenFire ? tgt /\ fgSeenFireF )
		action fgSeenFireF = false
	}
	transition Valid {
		from IsValid
		to Calculate
		condition tgt . status == FireStatus :: Tracked
	}
	transition NotValid {
		from IsValid
		to Waiting
		condition tgt . status != FireStatus :: Tracked
	}
	transition CalcYaw {
		from Calculate
		to Clamp
	}
	transition Clamped {
		from Clamp
		to Yaw
	}
	transition YP {
		from Yaw
		to Pitch
		condition ( $ gimbalYawAck /\ gimbalYawAckF )
		action gimbalYawAckF = false
	}
	transition PW {
		from Pitch
		to MaybeAimed
		condition ( $ gimbalPitchAck /\ gimbalPitchAckF )
		action gimbalPitchAckF = false
	}
	transition DidAim {
		from MaybeAimed
		to Waiting
		condition cYaw == yaw /\ cPitch == pitch
		action clone_normal_GimbalAim_MaybeAimed_DidAim_op ( )
	}
	transition DidNotAim {
		from MaybeAimed
		to Waiting
		condition cYaw != yaw \/ cPitch != pitch
	}
}

operation clone_normal_GimbalAim_MaybeAimed_DidAim_op ( ) {
	requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action $ gimbalAimed
	}
	input context { }
	output context { uses I_events_normal_GimbalAim_MaybeAimed_DidAim_op_outEvs }
}

operation clone_normal_VisualNav_Active_NoFire_entry ( ) {
	requires req_normal_VisualNav_Active_NoFire_entry_localVars requires I_clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_2_28_t_2_28_op_j_2_28_f_8_softwareOps_clone_normal_VisualNav_Active_NoFire_entry requires I_clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_i_t_op_i_j_3_21_24_softwareOps_clone_normal_VisualNav_Active_NoFire_entry requires I_clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_3_21_t_3_21_op_j_3_21_j_2_28_29_softwareOps_clone_normal_VisualNav_Active_NoFire_entry requires IctrEvars_VisualNav initial i
	junction j_3_21
	junction j_2_28
	final f
	transition t {
		from i
		to j_3_21
		action clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_i_t_op_i_j_3_21_24 ( )
	}
	transition t_3_21 {
		from j_3_21
		to j_2_28
		action clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_3_21_t_3_21_op_j_3_21_j_2_28_29 ( )
	}
	transition t_2_28 {
		from j_2_28
		to f
		action clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_2_28_t_2_28_op_j_2_28_f_8 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_GimbalAim_I_Init_op ( ) {
	requires req_normal_GimbalAim_I_Init_op_localVars requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action tgt . status = FireStatus :: NoFire
	}
	input context { }
	output context { }
}

operation clone_normal_GimbalAim_Calculate_entry ( ) {
	requires req_normal_GimbalAim_Calculate_entry_localVars requires I_clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_j_2_6_t_2_6_op_j_2_6_f_25_softwareOps_clone_normal_GimbalAim_Calculate_entry requires I_clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_i_t_op_i_j_2_6_48_softwareOps_clone_normal_GimbalAim_Calculate_entry requires IctrEvars_GimbalAim initial i
	junction j_2_6
	final f
	transition t {
		from i
		to j_2_6
		action clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_i_t_op_i_j_2_6_48 ( )
	}
	transition t_2_6 {
		from j_2_6
		to f
		action clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_j_2_6_t_2_6_op_j_2_6_f_25 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_VisualNav_Active_Wall_entry ( ) {
	requires req_normal_VisualNav_Active_Wall_entry_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action movement . dyaw = calcYawDelta ( wm )
	}
	input context { }
	output context { }
}

operation clone_normal_GimbalAim_Clamp_entry ( ) {
	requires req_normal_GimbalAim_Clamp_entry_localVars requires I_clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_i_t_op_i_j_2_16_6_softwareOps_clone_normal_GimbalAim_Clamp_entry requires I_clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_j_2_16_t_2_16_op_j_2_16_f_47_softwareOps_clone_normal_GimbalAim_Clamp_entry requires IctrEvars_GimbalAim initial i
	junction j_2_16
	final f
	transition t {
		from i
		to j_2_16
		action clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_i_t_op_i_j_2_16_6 ( )
	}
	transition t_2_16 {
		from j_2_16
		to f
		action clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_j_2_16_t_2_16_op_j_2_16_f_47 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_GimbalAim_Pitch_entry ( ) {
	requires req_normal_GimbalAim_Pitch_entry_localVars requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action $ gimbalPitch ! pitch
	}
	input context { }
	output context { uses I_events_normal_GimbalAim_Pitch_entry_outEvs }
}

operation clone_normal_GimbalAim_Yaw_entry ( ) {
	requires req_normal_GimbalAim_Yaw_entry_localVars requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action $ gimbalYaw ! yaw
	}
	input context { }
	output context { uses I_events_normal_GimbalAim_Yaw_entry_outEvs }
}

operation clone_normal_VisualNav_Active_Commit_Loop_op ( ) {
	requires req_normal_VisualNav_Active_Commit_Loop_op_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action $ visualPosition ! movement
	}
	input context { }
	output context { uses I_events_normal_VisualNav_Active_Commit_Loop_op_outEvs }
}

operation clone_normal_VisualNav_Active_Fire_entry ( ) {
	requires req_normal_VisualNav_Active_Fire_entry_localVars requires I_clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_3_7_t_3_7_op_j_3_7_j_2_26_1_softwareOps_clone_normal_VisualNav_Active_Fire_entry requires I_clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_i_t_op_i_j_3_7_18_softwareOps_clone_normal_VisualNav_Active_Fire_entry requires I_clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_2_26_t_2_26_op_j_2_26_f_38_softwareOps_clone_normal_VisualNav_Active_Fire_entry requires IctrEvars_VisualNav initial i
	junction j_3_7
	junction j_2_26
	final f
	transition t {
		from i
		to j_3_7
		action clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_i_t_op_i_j_3_7_18 ( )
	}
	transition t_3_7 {
		from j_3_7
		to j_2_26
		action clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_3_7_t_3_7_op_j_3_7_j_2_26_1 ( )
	}
	transition t_2_26 {
		from j_2_26
		to f
		action clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_2_26_t_2_26_op_j_2_26_f_38 ( )
	}
	input context { }
	output context { }
}

operation clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_3_7_t_3_7_op_j_3_7_j_2_26_1 ( ) {
	requires I_req_normal_VisualNav_Active_Fire_entry_j_3_7_t_3_7_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action movement . dy = tgt . dx
	}
	input context { }
	output context { }
}

operation clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_i_t_op_i_j_2_16_6 ( ) {
	requires I_req_normal_GimbalAim_Clamp_entry_i_t_localVars requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action cYaw = clamp ( yaw , YAW_DEAD_ZONE )
	}
	input context { }
	output context { }
}

operation clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_2_28_t_2_28_op_j_2_28_f_8 ( ) {
	requires I_req_normal_VisualNav_Active_NoFire_entry_j_2_28_t_2_28_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action movement . dz = 0
	}
	input context { }
	output context { }
}

operation clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_i_t_op_i_j_3_7_18 ( ) {
	requires I_req_normal_VisualNav_Active_Fire_entry_i_t_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action movement . dx = tgt . distance - TRACK_DIST
	}
	input context { }
	output context { }
}

operation clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_i_t_op_i_j_3_21_24 ( ) {
	requires I_req_normal_VisualNav_Active_NoFire_entry_i_t_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action movement . dx = tgt . distance - SCAN_DIST
	}
	input context { }
	output context { }
}

operation clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_j_2_6_t_2_6_op_j_2_6_f_25 ( ) {
	requires I_req_normal_GimbalAim_Calculate_entry_j_2_6_t_2_6_localVars requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action pitch = calcGimbalAxis ( tgt . distance , tgt . dy )
	}
	input context { }
	output context { }
}

operation clone_clone_normal_VisualNav_Active_NoFire_entry_normal_VisualNav_Active_NoFire_entry_j_3_21_t_3_21_op_j_3_21_j_2_28_29 ( ) {
	requires I_req_normal_VisualNav_Active_NoFire_entry_j_3_21_t_3_21_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action movement . dy = 0
	}
	input context { }
	output context { }
}

operation clone_clone_normal_VisualNav_Active_Fire_entry_normal_VisualNav_Active_Fire_entry_j_2_26_t_2_26_op_j_2_26_f_38 ( ) {
	requires I_req_normal_VisualNav_Active_Fire_entry_j_2_26_t_2_26_localVars requires IctrEvars_VisualNav initial i
	final f
	transition t {
		from i
		to f
		action movement . dz = tgt . dy
	}
	input context { }
	output context { }
}

operation clone_clone_normal_GimbalAim_Clamp_entry_normal_GimbalAim_Clamp_entry_j_2_16_t_2_16_op_j_2_16_f_47 ( ) {
	requires I_req_normal_GimbalAim_Clamp_entry_j_2_16_t_2_16_localVars requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action cPitch = clamp ( pitch , PITCH_DEAD_ZONE )
	}
	input context { }
	output context { }
}

operation clone_clone_normal_GimbalAim_Calculate_entry_normal_GimbalAim_Calculate_entry_i_t_op_i_j_2_6_48 ( ) {
	requires I_req_normal_GimbalAim_Calculate_entry_i_t_localVars requires IctrEvars_GimbalAim initial i
	final f
	transition t {
		from i
		to f
		action yaw = calcGimbalAxis ( tgt . distance , tgt . dx )
	}
	input context { }
	output context { }
}

