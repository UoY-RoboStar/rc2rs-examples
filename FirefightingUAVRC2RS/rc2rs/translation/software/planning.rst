package pre_pkg__sim 
//import ::AircraftStatus import ::MissionStatus import ::NavCommand 
interface I_events_normal_Planning_Connected_Mission_Search_SETF_op_outEvs {
	event vnavEnable
}

interface I_events_normal_Planning_Connected_Mission_Spray_entry_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Mission_exit_outEvs {
	event vnavDisable
}
 
interface I_events_normal_Planning_Connected_Mission_Search_entry_outEvs {
	event missionStatus : MissionStatus
}

interface I_clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_i_t_op_i_j_2_17_45_softwareOps_clone_normal_Planning_Connected_Land_entry {
	clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_i_t_op_i_j_2_17_45 ( )
}

interface I_clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_j_2_17_t_2_17_op_j_2_17_f_26_softwareOps_clone_normal_Planning_Connected_Land_entry {
	clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_j_2_17_t_2_17_op_j_2_17_f_26 ( )
}

interface I_events_normal_Planning_Connected_Land_entry_outEvs {
	event missionStatus : MissionStatus
	event navCommand : NavCommand
}

interface req_normal_Planning_Connected_Mission_LosingFire_exit_localVars {
	var inact_Planning_Connected_Mission_LosingFire : boolean = true
}

interface I_clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_i_t_op_i_j_2_9_19_softwareOps_clone_normal_Planning_Connected_TakeOffAndClimb_entry {
	clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_i_t_op_i_j_2_9_19 ( )
}

interface I_events_normal_Planning_Connected_TakeOffAndClimb_entry_outEvs {
	event missionStatus : MissionStatus
	event navCommand : NavCommand
}

interface I_clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_j_2_9_t_2_9_op_j_2_9_f_30_softwareOps_clone_normal_Planning_Connected_TakeOffAndClimb_entry {
	clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_j_2_9_t_2_9_op_j_2_9_f_30 ( )
}

interface I_events_normal_Planning_Connected_Mission_SPRT_op_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Mission_BatMS_op_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Mission_WatMS_op_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Mission_TrackFire_entry_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connect_ConnectTO_op_outEvs {
	event missionStatus : MissionStatus
}

interface I_clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_i_t_op_i_j_2_11_9_softwareOps_clone_normal_Planning_Connected_GoHome_entry {
	clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_i_t_op_i_j_2_11_9 ( )
}

interface I_events_normal_Planning_Connected_GoHome_entry_outEvs {
	event missionStatus : MissionStatus
	event navCommand : NavCommand
}

interface I_clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_j_2_11_t_2_11_op_j_2_11_f_16_softwareOps_clone_normal_Planning_Connected_GoHome_entry {
	clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_j_2_11_t_2_11_op_j_2_11_f_16 ( )
}

interface I_events_normal_Planning_Connect_ConnectOK_op_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Disarm_entry_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Mission_Spray_Spraying_exit_outEvs {
	event stopSpray
}

interface I_clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_i_t_op_i_j_2_4_4_softwareOps_clone_normal_Planning_Connected_Mission_FlyToWall_entry {
	clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_i_t_op_i_j_2_4_4 ( )
}

interface I_clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_op_j_2_4_f_46_softwareOps_clone_normal_Planning_Connected_Mission_FlyToWall_entry {
	clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_op_j_2_4_f_46 ( )
}

interface req_normal_Planning_Connected_Mission_FlyToWall_entry_localVars {
	const WALL_LOC : Position
}

interface I_events_normal_Planning_Connected_Mission_FlyToWall_entry_outEvs {
	event missionStatus : MissionStatus
	event waypoint : Position
}

interface I_events_normal_Planning_Connected_Mission_LosingFire_LostFire_op_outEvs {
	event vnavDisable
}

interface req_normal_Planning_Connect_entry_clocks {
	clock clk_Planning_Connect
}

interface I_clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_j_2_15_t_2_15_op_j_2_15_f_42_softwareOps_clone_normal_Planning_Connect_entry {
	clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_j_2_15_t_2_15_op_j_2_15_f_42 ( )
}

interface I_clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_15_39_softwareOps_clone_normal_Planning_Connect_entry {
	clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_15_39 ( )
}

interface req_normal_Planning_Connect_entry_localVars {
	var inact_Planning_Connect : boolean = true
}

interface I_events_normal_Planning_Connected_Mission_FlyToWall_entry_i_t_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_GoHome_entry_i_t_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Mission_Spray_Spraying_entry_outEvs {
	event startSpray
}

interface I_events_normal_Planning_Connected_GoHome_entry_j_2_11_t_2_11_outEvs {
	event navCommand : NavCommand
}

interface I_events_normal_Planning_Connected_TakeOffAndClimb_entry_i_t_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Land_entry_j_2_17_t_2_17_outEvs {
	event navCommand : NavCommand
}

interface I_events_normal_Planning_Connected_TakeOffAndClimb_entry_j_2_9_t_2_9_outEvs {
	event navCommand : NavCommand
}

interface req_normal_Planning_Connect_exit_localVars {
	var inact_Planning_Connect : boolean = true
}

interface req_normal_Planning_Connected_Mission_entry_localVars {
	var searchComplete : boolean
}

interface I_req_normal_Planning_Connect_entry_t_thenJ__t_thenTA__clocks {
	clock clk_Planning_Connect
}

interface I_req_normal_Planning_Connect_entry_j_2_15_t_2_15_localVars {
	var inact_Planning_Connect : boolean = true
}

interface I_events_normal_Planning_Connected_Land_entry_i_t_outEvs {
	event missionStatus : MissionStatus
}

interface I_events_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_outEvs {
	event waypoint : Position
}

interface I_req_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_localVars {
	const WALL_LOC : Position
}

interface req_normal_Planning_Connected_Mission_LosingFire_entry_localVars {
	var inact_Planning_Connected_Mission_LosingFire : boolean = true
}

interface req_normal_Planning_Connected_Mission_LosingFire_entry_clocks {
	clock clk_Planning_Connected_Mission_LosingFire
}

interface I_clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_8_52_softwareOps_clone_normal_Planning_Connected_Mission_LosingFire_entry {
	clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_8_52 ( )
}

interface I_clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_j_2_8_t_2_8_op_j_2_8_f_53_softwareOps_clone_normal_Planning_Connected_Mission_LosingFire_entry {
	clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_j_2_8_t_2_8_op_j_2_8_f_53 ( )
}

interface I_req_normal_Planning_Connected_Mission_LosingFire_entry_t_thenJ__t_thenTA__clocks {
	clock clk_Planning_Connected_Mission_LosingFire
}

interface I_req_normal_Planning_Connected_Mission_LosingFire_entry_j_2_8_t_2_8_localVars {
	var inact_Planning_Connected_Mission_LosingFire : boolean = true
}

interface I_clone_normal_Planning_Connected_Mission_TrackFire_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_TrackFire_entry ( )
}

interface I_clone_normal_Planning_Connected_Mission_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_entry ( )
}

interface IctrEvars_Planning {
	var trackingGainedF : boolean = true , batteryLowF : boolean = true , fireLostF : boolean = true , waterEmptyF : boolean = true , trackingLostF : boolean = true , fireDetectedF : boolean = true , uavStatusF : boolean = true , gimbalAimedF : boolean = true
}

interface I_clone_normal_Planning_Connect_exit_softwareOps_Planning {
	clone_normal_Planning_Connect_exit ( )
}

interface VisualPlanningEvents_outEvs_Planning {
	event vnavEnable
	event vnavDisable
}

interface I_clone_normal_Planning_Connected_Mission_Spray_Spraying_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_Spray_Spraying_entry ( )
}

interface I_normal_Planning_Connect_inact_sinceEntry_clocks_Planning {
	clock clk_Planning_Connect
}

interface GCSMissionEvents_outEvs_Planning {
	event missionStatus : MissionStatus
}

interface I_clone_normal_Planning_Connected_Mission_Spray_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_Spray_entry ( )
}

interface GimbalPlanningEvents_inpEvs_Planning {
	event gimbalAimed
}

interface I_clone_normal_Planning_Connected_Mission_exit_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_exit ( )
}

interface FlightPlanningEvents_outEvs_Planning {
	event navCommand : NavCommand
	event waypoint : Position
}

interface I_normal_Planning_Connected_Mission_LosingFire_inact_sinceEntry_usedVars_Planning {
	var inact_Planning_Connected_Mission_LosingFire : boolean = true
}

interface I_clone_normal_Planning_Connected_Mission_Search_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_Search_entry ( )
}

interface I_clone_normal_Planning_Connected_Disarm_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Disarm_entry ( )
}

interface FlightPlanningEvents_inpEvs_Planning {
	event uavStatus : AircraftStatus
}

interface I_clone_normal_Planning_Connected_GoHome_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_GoHome_entry ( )
}

interface I_clone_normal_Planning_Connected_Mission_Spray_Spraying_exit_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_Spray_Spraying_exit ( )
}

interface I_clone_normal_Planning_Connected_TakeOffAndClimb_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_TakeOffAndClimb_entry ( )
}

interface I_clone_normal_Planning_Connected_Mission_SPRT_op_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_SPRT_op ( )
}

interface SprayPlanningEvents_inpEvs_Planning {
	event waterEmpty
}

interface I_clone_normal_Planning_Connected_Mission_LosingFire_LostFire_op_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_LosingFire_LostFire_op ( )
}

interface I_clone_normal_Planning_Connected_Mission_Search_SETF_op_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_Search_SETF_op ( )
}

interface I_clone_normal_Planning_Connect_entry_softwareOps_Planning {
	clone_normal_Planning_Connect_entry ( )
}

interface I_clone_normal_Planning_Connected_Mission_LosingFire_exit_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_LosingFire_exit ( )
}

interface I_clone_normal_Planning_Connected_Mission_FlyToWall_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_FlyToWall_entry ( )
}

interface I_clone_normal_Planning_Connected_Mission_WatMS_op_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_WatMS_op ( )
}

interface I_clone_normal_Planning_Connected_Mission_BatMS_op_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_BatMS_op ( )
}

interface I_clone_normal_Planning_Connected_Mission_LosingFire_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Mission_LosingFire_entry ( )
}

interface FirePlanningEvents_inpEvs_Planning {
	event fireDetected
	event fireLost
	event trackingGained
	event trackingLost
}

interface I_normal_Planning_Connected_Mission_LosingFire_inact_sinceEntry_clocks_Planning {
	clock clk_Planning_Connected_Mission_LosingFire
}

interface I_clone_normal_Planning_Connected_Land_entry_softwareOps_Planning {
	clone_normal_Planning_Connected_Land_entry ( )
}

interface I_clone_normal_Planning_Connect_ConnectTO_op_softwareOps_Planning {
	clone_normal_Planning_Connect_ConnectTO_op ( )
}

interface I_normal_Planning_Connect_inact_sinceEntry_usedVars_Planning {
	var inact_Planning_Connect : boolean = true
}

interface I_clone_normal_Planning_Connect_ConnectOK_op_softwareOps_Planning {
	clone_normal_Planning_Connect_ConnectOK_op ( )
}

interface SprayPlanningEvents_outEvs_Planning {
	event startSpray
	event stopSpray
}

interface SearchVars_usedVars_Planning {
	var searchComplete : boolean
}

//interface Search_softwareOps_Planning {
//	search ( )
//}

interface BatteryPlanningEvents_inpEvs_Planning {
	event batteryLow
}

stm Planning {
	uses SearchVars_usedVars_Planning uses I_normal_Planning_Connected_Mission_LosingFire_inact_sinceEntry_usedVars_Planning uses I_normal_Planning_Connected_Mission_LosingFire_inact_sinceEntry_clocks_Planning uses I_normal_Planning_Connect_inact_sinceEntry_usedVars_Planning uses I_normal_Planning_Connect_inact_sinceEntry_clocks_Planning uses IctrEvars_Planning 
	//requires Search_softwareOps_Planning 
	requires I_clone_normal_Planning_Connected_Mission_Search_SETF_op_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_Spray_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_exit_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_Search_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Land_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_LosingFire_exit_softwareOps_Planning requires I_clone_normal_Planning_Connected_TakeOffAndClimb_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_SPRT_op_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_BatMS_op_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_WatMS_op_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_TrackFire_entry_softwareOps_Planning requires I_clone_normal_Planning_Connect_ConnectTO_op_softwareOps_Planning requires I_clone_normal_Planning_Connected_GoHome_entry_softwareOps_Planning requires I_clone_normal_Planning_Connect_ConnectOK_op_softwareOps_Planning requires I_clone_normal_Planning_Connected_Disarm_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_Spray_Spraying_exit_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_FlyToWall_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_LosingFire_LostFire_op_softwareOps_Planning requires I_clone_normal_Planning_Connect_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_Spray_Spraying_entry_softwareOps_Planning requires I_clone_normal_Planning_Connect_exit_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_entry_softwareOps_Planning requires I_clone_normal_Planning_Connected_Mission_LosingFire_entry_softwareOps_Planning const WALL_LOC : Position
	const FIRE_TO : nat , INIT_TO : nat
	var astatus : AircraftStatus
	input context { uses SprayPlanningEvents_inpEvs_Planning uses FirePlanningEvents_inpEvs_Planning uses FlightPlanningEvents_inpEvs_Planning uses BatteryPlanningEvents_inpEvs_Planning uses GimbalPlanningEvents_inpEvs_Planning }
	output context { uses GCSMissionEvents_outEvs_Planning uses SprayPlanningEvents_outEvs_Planning uses FlightPlanningEvents_outEvs_Planning uses VisualPlanningEvents_outEvs_Planning }
	cycleDef cycle == 1
	initial I
	state Connect {
		initial I
		state Waiting {
			initial i
			state EmptyCycle {
			}
			transition tWaiting {
				from i
				to EmptyCycle
			}
			transition tEmptyCycle_Planning_Connect_Waiting_EmptyCycle {
				from EmptyCycle
				to EmptyCycle
				condition not ( ( ( true /\ ( ( $ uavStatus ? astatus /\ uavStatusF ) ) ) \/ ( astatus == AircraftStatus :: Connected ) ) \/ ( INIT_TO < since ( clk_Planning_Connect ) ) )
				action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
			}
		}
		transition IW {
			from I
			to Waiting
		}
		transition PollS {
			from Waiting
			to Waiting
			condition ( $ uavStatus ? astatus /\ uavStatusF )
			action uavStatusF = false
		}
		exit clone_normal_Planning_Connect_exit ( )
		entry clone_normal_Planning_Connect_entry ( )
	}
	state Connected {
		initial I
		state TakeOffAndClimb {
			initial I
			state Waiting {
				initial i
				state EmptyCycle {
				}
				transition tWaiting {
					from i
					to EmptyCycle
				}
				transition tEmptyCycle_Planning_Connected_TakeOffAndClimb_Waiting_EmptyCycle {
					from EmptyCycle
					to EmptyCycle
					condition not ( ( ( true /\ ( ( $ uavStatus ? astatus /\ uavStatusF ) ) ) \/ ( astatus == AircraftStatus :: AtAltitude ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
					action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
				}
			}
			transition IW {
				from I
				to Waiting
			}
			transition PollS {
				from Waiting
				to Waiting
				condition ( $ uavStatus ? astatus /\ uavStatusF )
				action uavStatusF = false
			}
			entry clone_normal_Planning_Connected_TakeOffAndClimb_entry ( )
		}
		state Mission {
			initial I
			state FlyToWall {
				initial I
				state Waiting {
					initial i
					state EmptyCycle {
					}
					transition tWaiting {
						from i
						to EmptyCycle
					}
					transition tEmptyCycle_Planning_Connected_Mission_FlyToWall_Waiting_EmptyCycle {
						from EmptyCycle
						to EmptyCycle
						condition not ( ( ( ( ( ( true /\ ( ( $ uavStatus ? astatus /\ uavStatusF ) ) ) \/ ( astatus == AircraftStatus :: AtWaypoint ) ) \/ ( searchComplete ) ) \/ ( true /\ ( ( $ batteryLow /\ batteryLowF ) ) ) ) \/ ( true /\ ( ( $ waterEmpty /\ waterEmptyF ) ) ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
						action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
					}
				}
				transition IW {
					from I
					to Waiting
				}
				transition PollS {
					from Waiting
					to Waiting
					condition ( $ uavStatus ? astatus /\ uavStatusF )
					action uavStatusF = false
				}
				entry clone_normal_Planning_Connected_Mission_FlyToWall_entry ( )
			}
			state Search {
				initial i
				state EmptyCycle {
				}
				transition tSearch {
					from i
					to EmptyCycle
				}
				transition tEmptyCycle_Planning_Connected_Mission_Search_EmptyCycle {
					from EmptyCycle
					to EmptyCycle
					condition not ( ( ( ( ( true /\ ( ( $ fireDetected /\ fireDetectedF ) ) ) \/ ( searchComplete ) ) \/ ( true /\ ( ( $ batteryLow /\ batteryLowF ) ) ) ) \/ ( true /\ ( ( $ waterEmpty /\ waterEmptyF ) ) ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
					action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
				}
				entry clone_normal_Planning_Connected_Mission_Search_entry ( )
			}
			state TrackFire {
				initial i
				state EmptyCycle {
				}
				transition tTrackFire {
					from i
					to EmptyCycle
				}
				transition tEmptyCycle_Planning_Connected_Mission_TrackFire_EmptyCycle {
					from EmptyCycle
					to EmptyCycle
					condition not ( ( ( ( ( ( true /\ ( ( $ trackingGained /\ trackingGainedF ) ) ) \/ ( true /\ ( ( $ fireLost /\ fireLostF ) ) ) ) \/ ( searchComplete ) ) \/ ( true /\ ( ( $ batteryLow /\ batteryLowF ) ) ) ) \/ ( true /\ ( ( $ waterEmpty /\ waterEmptyF ) ) ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
					action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
				}
				entry clone_normal_Planning_Connected_Mission_TrackFire_entry ( )
			}
			state Spray {
				initial I
				state WaitGimbal {
					initial i
					state EmptyCycle {
					}
					transition tWaitGimbal {
						from i
						to EmptyCycle
					}
					transition tEmptyCycle_Planning_Connected_Mission_Spray_WaitGimbal_EmptyCycle {
						from EmptyCycle
						to EmptyCycle
						condition not ( ( ( ( ( ( true /\ ( ( $ gimbalAimed /\ gimbalAimedF ) ) ) \/ ( true /\ ( ( $ trackingLost /\ trackingLostF ) ) ) ) \/ ( searchComplete ) ) \/ ( true /\ ( ( $ batteryLow /\ batteryLowF ) ) ) ) \/ ( true /\ ( ( $ waterEmpty /\ waterEmptyF ) ) ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
						action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
					}
				}
				state Spraying {
					initial i
					state EmptyCycle {
					}
					transition tSpraying {
						from i
						to EmptyCycle
					}
					transition tEmptyCycle_Planning_Connected_Mission_Spray_Spraying_EmptyCycle {
						from EmptyCycle
						to EmptyCycle
						condition not ( ( ( ( ( true /\ ( ( $ trackingLost /\ trackingLostF ) ) ) \/ ( searchComplete ) ) \/ ( true /\ ( ( $ batteryLow /\ batteryLowF ) ) ) ) \/ ( true /\ ( ( $ waterEmpty /\ waterEmptyF ) ) ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
						action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
					}
					entry clone_normal_Planning_Connected_Mission_Spray_Spraying_entry ( )
					exit clone_normal_Planning_Connected_Mission_Spray_Spraying_exit ( )
				}
				transition Init {
					from I
					to WaitGimbal
				}
				transition DoSpray {
					from WaitGimbal
					to Spraying
					condition ( $ gimbalAimed /\ gimbalAimedF )
					action gimbalAimedF = false
				}
				entry clone_normal_Planning_Connected_Mission_Spray_entry ( )
			}
			state LosingFire {
				initial i
				state EmptyCycle {
				}
				transition tLosingFire {
					from i
					to EmptyCycle
				}
				transition tEmptyCycle_Planning_Connected_Mission_LosingFire_EmptyCycle {
					from EmptyCycle
					to EmptyCycle
					condition not ( ( ( ( ( ( true /\ ( ( $ fireDetected /\ fireDetectedF ) ) ) \/ ( FIRE_TO < since ( clk_Planning_Connected_Mission_LosingFire ) ) ) \/ ( searchComplete ) ) \/ ( true /\ ( ( $ batteryLow /\ batteryLowF ) ) ) ) \/ ( true /\ ( ( $ waterEmpty /\ waterEmptyF ) ) ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
					action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
				}
				exit clone_normal_Planning_Connected_Mission_LosingFire_exit ( )
				entry clone_normal_Planning_Connected_Mission_LosingFire_entry ( )
			}
			transition Init {
				from I
				to FlyToWall
			}
			transition FWSE {
				from FlyToWall
				to Search
				condition astatus == AircraftStatus :: AtWaypoint
			}
			transition SETF {
				from Search
				to TrackFire
				condition ( $ fireDetected /\ fireDetectedF )
				action clone_normal_Planning_Connected_Mission_Search_SETF_op ( ) ; fireDetectedF = false
			}
			transition TFSP {
				from TrackFire
				to Spray
				condition ( $ trackingGained /\ trackingGainedF )
				action trackingGainedF = false
			}
			transition TFSE {
				from TrackFire
				to LosingFire
				condition ( $ fireLost /\ fireLostF )
				action fireLostF = false
			}
			transition SPTF {
				from Spray
				to TrackFire
				condition ( $ trackingLost /\ trackingLostF )
				action trackingLostF = false
			}
			transition RegainedFire {
				from LosingFire
				to TrackFire
				condition ( $ fireDetected /\ fireDetectedF )
				action fireDetectedF = false
			}
			transition LostFire {
				from LosingFire
				to Search
				condition FIRE_TO < since ( clk_Planning_Connected_Mission_LosingFire )
				action clone_normal_Planning_Connected_Mission_LosingFire_LostFire_op ( )
			}
			entry clone_normal_Planning_Connected_Mission_entry ( )
			exit clone_normal_Planning_Connected_Mission_exit ( )
		}
		state GoHome {
			initial I
			state Waiting {
				initial i
				state EmptyCycle {
				}
				transition tWaiting {
					from i
					to EmptyCycle
				}
				transition tEmptyCycle_Planning_Connected_GoHome_Waiting_EmptyCycle {
					from EmptyCycle
					to EmptyCycle
					condition not ( ( ( true /\ ( ( $ uavStatus ? astatus /\ uavStatusF ) ) ) \/ ( astatus == AircraftStatus :: AtHome ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
					action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
				}
			}
			transition IW {
				from I
				to Waiting
			}
			transition Poll {
				from Waiting
				to Waiting
				condition ( $ uavStatus ? astatus /\ uavStatusF )
				action uavStatusF = false
			}
			entry clone_normal_Planning_Connected_GoHome_entry ( )
		}
		state Land {
			initial I
			state Waiting {
				initial i
				state EmptyCycle {
				}
				transition tWaiting {
					from i
					to EmptyCycle
				}
				transition tEmptyCycle_Planning_Connected_Land_Waiting_EmptyCycle {
					from EmptyCycle
					to EmptyCycle
					condition not ( ( ( true /\ ( ( $ uavStatus ? astatus /\ uavStatusF ) ) ) \/ ( astatus == AircraftStatus :: Landed ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
					action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
				}
			}
			transition IW {
				from I
				to Waiting
			}
			transition Poll {
				from Waiting
				to Waiting
				condition ( $ uavStatus ? astatus /\ uavStatusF )
				action uavStatusF = false
			}
			entry clone_normal_Planning_Connected_Land_entry ( )
		}
		state Disarm {
			initial I
			state Waiting {
				initial i
				state EmptyCycle {
				}
				transition tWaiting {
					from i
					to EmptyCycle
				}
				transition tEmptyCycle_Planning_Connected_Disarm_Waiting_EmptyCycle {
					from EmptyCycle
					to EmptyCycle
					condition not ( ( true /\ ( ( $ uavStatus ? astatus /\ uavStatusF ) ) ) \/ ( astatus == AircraftStatus :: Disarmed ) )
					action exec ; ( gimbalAimedF = true ; ( uavStatusF = true ; ( fireDetectedF = true ; ( trackingLostF = true ; ( waterEmptyF = true ; ( fireLostF = true ; ( batteryLowF = true ; trackingGainedF = true ) ) ) ) ) ) )
				}
			}
			transition IW {
				from I
				to Waiting
			}
			transition Poll {
				from Waiting
				to Waiting
				condition ( $ uavStatus ? astatus /\ uavStatusF )
				action uavStatusF = false
			}
			entry clone_normal_Planning_Connected_Disarm_entry ( )
		}
		transition Start {
			from I
			to TakeOffAndClimb
		}
		transition TOFW {
			from TakeOffAndClimb
			to Mission
			condition astatus == AircraftStatus :: AtAltitude
		}
		transition SPRT {
			from Mission
			to GoHome
			condition searchComplete
			action clone_normal_Planning_Connected_Mission_SPRT_op ( )
		}
		transition BatMS {
			from Mission
			to GoHome
			condition ( $ batteryLow /\ batteryLowF )
			action clone_normal_Planning_Connected_Mission_BatMS_op ( ) ; batteryLowF = false
		}
		transition WatMS {
			from Mission
			to GoHome
			condition ( $ waterEmpty /\ waterEmptyF )
			action clone_normal_Planning_Connected_Mission_WatMS_op ( ) ; waterEmptyF = false
		}
		transition Retreated {
			from GoHome
			to Land
			condition astatus == AircraftStatus :: AtHome
		}
		transition Landed {
			from Land
			to Disarm
			condition astatus == AircraftStatus :: Landed
		}
	}
	final SwitchedOff
	transition On {
		from I
		to Connect
	}
	transition ConnectOK {
		from Connect
		to Connected
		condition astatus == AircraftStatus :: Connected
		action clone_normal_Planning_Connect_ConnectOK_op ( )
	}
	transition ConnectTO {
		from Connect
		to SwitchedOff
		condition INIT_TO < since ( clk_Planning_Connect )
		action clone_normal_Planning_Connect_ConnectTO_op ( )
	}
	transition SwitchOff {
		from Connected
		to SwitchedOff
		condition astatus == AircraftStatus :: Disarmed
	}
}

operation clone_normal_Planning_Connected_Mission_Search_SETF_op ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ vnavEnable
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_Search_SETF_op_outEvs }
}

operation clone_normal_Planning_Connected_Mission_Spray_entry ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: Spraying
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_Spray_entry_outEvs }
}

operation clone_normal_Planning_Connected_Mission_exit ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ vnavDisable
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_exit_outEvs }
}

operation clone_normal_Planning_Connected_Mission_Search_entry ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: Searching
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_Search_entry_outEvs }
}

operation clone_normal_Planning_Connected_Land_entry ( ) {
	requires I_clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_j_2_17_t_2_17_op_j_2_17_f_26_softwareOps_clone_normal_Planning_Connected_Land_entry requires I_clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_i_t_op_i_j_2_17_45_softwareOps_clone_normal_Planning_Connected_Land_entry requires IctrEvars_Planning initial i
	junction j_2_17
	final f
	transition t {
		from i
		to j_2_17
		action clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_i_t_op_i_j_2_17_45 ( )
	}
	transition t_2_17 {
		from j_2_17
		to f
		action clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_j_2_17_t_2_17_op_j_2_17_f_26 ( )
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Land_entry_outEvs }
}

operation clone_normal_Planning_Connected_Mission_LosingFire_exit ( ) {
	requires req_normal_Planning_Connected_Mission_LosingFire_exit_localVars requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action inact_Planning_Connected_Mission_LosingFire = true
	}
	input context { }
	output context { }
}

operation clone_normal_Planning_Connected_TakeOffAndClimb_entry ( ) {
	requires I_clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_i_t_op_i_j_2_9_19_softwareOps_clone_normal_Planning_Connected_TakeOffAndClimb_entry requires I_clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_j_2_9_t_2_9_op_j_2_9_f_30_softwareOps_clone_normal_Planning_Connected_TakeOffAndClimb_entry requires IctrEvars_Planning initial i
	junction j_2_9
	final f
	transition t {
		from i
		to j_2_9
		action clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_i_t_op_i_j_2_9_19 ( )
	}
	transition t_2_9 {
		from j_2_9
		to f
		action clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_j_2_9_t_2_9_op_j_2_9_f_30 ( )
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_TakeOffAndClimb_entry_outEvs }
}

operation clone_normal_Planning_Connected_Mission_SPRT_op ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: SearchComplete
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_SPRT_op_outEvs }
}

operation clone_normal_Planning_Connected_Mission_BatMS_op ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: BatteryError
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_BatMS_op_outEvs }
}

operation clone_normal_Planning_Connected_Mission_WatMS_op ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: WaterError
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_WatMS_op_outEvs }
}

operation clone_normal_Planning_Connected_Mission_TrackFire_entry ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: TrackingFire
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_TrackFire_entry_outEvs }
}

operation clone_normal_Planning_Connect_ConnectTO_op ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: ConnectTimeout
	}
	input context { }
	output context { uses I_events_normal_Planning_Connect_ConnectTO_op_outEvs }
}

operation clone_normal_Planning_Connected_GoHome_entry ( ) {
	requires I_clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_i_t_op_i_j_2_11_9_softwareOps_clone_normal_Planning_Connected_GoHome_entry requires I_clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_j_2_11_t_2_11_op_j_2_11_f_16_softwareOps_clone_normal_Planning_Connected_GoHome_entry requires IctrEvars_Planning initial i
	junction j_2_11
	final f
	transition t {
		from i
		to j_2_11
		action clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_i_t_op_i_j_2_11_9 ( )
	}
	transition t_2_11 {
		from j_2_11
		to f
		action clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_j_2_11_t_2_11_op_j_2_11_f_16 ( )
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_GoHome_entry_outEvs }
}

operation clone_normal_Planning_Connect_ConnectOK_op ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: Connected
	}
	input context { }
	output context { uses I_events_normal_Planning_Connect_ConnectOK_op_outEvs }
}

operation clone_normal_Planning_Connected_Disarm_entry ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: Disarming
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Disarm_entry_outEvs }
}

operation clone_normal_Planning_Connected_Mission_Spray_Spraying_exit ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ stopSpray
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_Spray_Spraying_exit_outEvs }
}

operation clone_normal_Planning_Connected_Mission_FlyToWall_entry ( ) {
	requires req_normal_Planning_Connected_Mission_FlyToWall_entry_localVars requires I_clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_i_t_op_i_j_2_4_4_softwareOps_clone_normal_Planning_Connected_Mission_FlyToWall_entry requires I_clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_op_j_2_4_f_46_softwareOps_clone_normal_Planning_Connected_Mission_FlyToWall_entry requires IctrEvars_Planning initial i
	junction j_2_4
	final f
	transition t {
		from i
		to j_2_4
		action clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_i_t_op_i_j_2_4_4 ( )
	}
	transition t_2_4 {
		from j_2_4
		to f
		action clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_op_j_2_4_f_46 ( )
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_FlyToWall_entry_outEvs }
}

operation clone_normal_Planning_Connected_Mission_LosingFire_LostFire_op ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ vnavDisable
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_LosingFire_LostFire_op_outEvs }
}

operation clone_normal_Planning_Connect_entry ( ) {
	requires req_normal_Planning_Connect_entry_localVars requires req_normal_Planning_Connect_entry_clocks requires I_clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_15_39_softwareOps_clone_normal_Planning_Connect_entry requires I_clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_j_2_15_t_2_15_op_j_2_15_f_42_softwareOps_clone_normal_Planning_Connect_entry requires IctrEvars_Planning initial i
	junction t_initialJunction_
	junction t_elseJ_
	junction t_thenJ_
	junction j_2_15
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not inact_Planning_Connect
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition inact_Planning_Connect
	}
	transition t_elseTA_ {
		from t_elseJ_
		to j_2_15
	}
	transition t_thenTA_ {
		from t_thenJ_
		to j_2_15
		action clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_15_39 ( )
	}
	transition t_2_15 {
		from j_2_15
		to f
		action clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_j_2_15_t_2_15_op_j_2_15_f_42 ( )
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_i_t_op_i_j_2_4_4 ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: FlyingToWall
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_FlyToWall_entry_i_t_outEvs }
}

operation clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_i_t_op_i_j_2_11_9 ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: GoingHome
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_GoHome_entry_i_t_outEvs }
}

operation clone_normal_Planning_Connected_Mission_Spray_Spraying_entry ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ startSpray
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_Spray_Spraying_entry_outEvs }
}

operation clone_clone_normal_Planning_Connected_GoHome_entry_normal_Planning_Connected_GoHome_entry_j_2_11_t_2_11_op_j_2_11_f_16 ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ navCommand ! NavCommand :: GoHome
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_GoHome_entry_j_2_11_t_2_11_outEvs }
}

operation clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_i_t_op_i_j_2_9_19 ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: TakingOff
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_TakeOffAndClimb_entry_i_t_outEvs }
}

operation clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_j_2_17_t_2_17_op_j_2_17_f_26 ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ navCommand ! NavCommand :: Land
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Land_entry_j_2_17_t_2_17_outEvs }
}

operation clone_clone_normal_Planning_Connected_TakeOffAndClimb_entry_normal_Planning_Connected_TakeOffAndClimb_entry_j_2_9_t_2_9_op_j_2_9_f_30 ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ navCommand ! NavCommand :: TakeOff
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_TakeOffAndClimb_entry_j_2_9_t_2_9_outEvs }
}

operation clone_normal_Planning_Connect_exit ( ) {
	requires req_normal_Planning_Connect_exit_localVars requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action inact_Planning_Connect = true
	}
	input context { }
	output context { }
}

operation clone_normal_Planning_Connected_Mission_entry ( ) {
	requires req_normal_Planning_Connected_Mission_entry_localVars requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action searchComplete = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_15_39 ( ) {
	requires I_req_normal_Planning_Connect_entry_t_thenJ__t_thenTA__clocks requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action # clk_Planning_Connect
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Planning_Connect_entry_normal_Planning_Connect_entry_j_2_15_t_2_15_op_j_2_15_f_42 ( ) {
	requires I_req_normal_Planning_Connect_entry_j_2_15_t_2_15_localVars requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action inact_Planning_Connect = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Planning_Connected_Land_entry_normal_Planning_Connected_Land_entry_i_t_op_i_j_2_17_45 ( ) {
	requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ missionStatus ! MissionStatus :: Landing
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Land_entry_i_t_outEvs }
}

operation clone_clone_normal_Planning_Connected_Mission_FlyToWall_entry_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_op_j_2_4_f_46 ( ) {
	requires I_req_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_localVars requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action $ waypoint ! WALL_LOC
	}
	input context { }
	output context { uses I_events_normal_Planning_Connected_Mission_FlyToWall_entry_j_2_4_t_2_4_outEvs }
}

operation clone_normal_Planning_Connected_Mission_LosingFire_entry ( ) {
	requires req_normal_Planning_Connected_Mission_LosingFire_entry_localVars requires req_normal_Planning_Connected_Mission_LosingFire_entry_clocks requires I_clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_8_52_softwareOps_clone_normal_Planning_Connected_Mission_LosingFire_entry requires I_clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_j_2_8_t_2_8_op_j_2_8_f_53_softwareOps_clone_normal_Planning_Connected_Mission_LosingFire_entry requires IctrEvars_Planning initial i
	junction t_initialJunction_
	junction t_thenJ_
	junction t_elseJ_
	junction j_2_8
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not inact_Planning_Connected_Mission_LosingFire
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition inact_Planning_Connected_Mission_LosingFire
	}
	transition t_thenTA_ {
		from t_thenJ_
		to j_2_8
		action clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_8_52 ( )
	}
	transition t_elseTA_ {
		from t_elseJ_
		to j_2_8
	}
	transition t_2_8 {
		from j_2_8
		to f
		action clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_j_2_8_t_2_8_op_j_2_8_f_53 ( )
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_8_52 ( ) {
	requires I_req_normal_Planning_Connected_Mission_LosingFire_entry_t_thenJ__t_thenTA__clocks requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action # clk_Planning_Connected_Mission_LosingFire
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Planning_Connected_Mission_LosingFire_entry_normal_Planning_Connected_Mission_LosingFire_entry_j_2_8_t_2_8_op_j_2_8_f_53 ( ) {
	requires I_req_normal_Planning_Connected_Mission_LosingFire_entry_j_2_8_t_2_8_localVars requires IctrEvars_Planning initial i
	final f
	transition t {
		from i
		to f
		action inact_Planning_Connected_Mission_LosingFire = false
	}
	input context { }
	output context { }
}

