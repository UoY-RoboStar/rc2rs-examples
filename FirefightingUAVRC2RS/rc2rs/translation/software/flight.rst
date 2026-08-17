package pre_pkg__sim interface I_events_normal_Flight_Connect_CI_op_outEvs {
	event uavStatus : AircraftStatus
}

interface req_normal_BatteryMonitor_Monitoring_entry_localVars {
	var battery : Battery
	const BATTERY_LOW_THRESHOLD : int
}

interface I_events_normal_BatteryMonitor_Monitoring_entry_outEvs {
	event batteryLow
}

interface I_clone_clone_normal_BatteryMonitor_Monitoring_entry_normal_BatteryMonitor_Monitoring_entry_t_thenJ__t_thenTA__op_t_thenJ__f_14_softwareOps_clone_normal_BatteryMonitor_Monitoring_entry {
	clone_clone_normal_BatteryMonitor_Monitoring_entry_normal_BatteryMonitor_Monitoring_entry_t_thenJ__t_thenTA__op_t_thenJ__f_14 ( )
}

interface I_clone_clone_normal_Flight_Landing_Landed_op_waitOp_j_3_24_j_2_29_32_softwareOps_clone_normal_Flight_Landing_Landed_op {
	clone_clone_normal_Flight_Landing_Landed_op_waitOp_j_3_24_j_2_29_32 ( i : nat )
}

interface I_events_normal_Flight_Landing_Landed_op_outEvs {
	event uavStatus : AircraftStatus
}

interface I_clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_i_t_op_i_j_3_24_34_softwareOps_clone_normal_Flight_Landing_Landed_op {
	clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_i_t_op_i_j_3_24_34 ( )
}

interface req_normal_Flight_Landing_Landed_op_localVars {
	const DELAY_DISARM : int
}

interface I_clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_j_2_29_t_2_29_op_j_2_29_f_22_softwareOps_clone_normal_Flight_Landing_Landed_op {
	clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_j_2_29_t_2_29_op_j_2_29_f_22 ( )
}

interface I_events_normal_Flight_Climbing_Climbed_op_outEvs {
	event uavStatus : AircraftStatus
}

interface req_normal_Flight_Waypoint_entry_localVars {
	var wp : Position , start : Position , gotStart : boolean = false
}

interface I_clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_j_2_36_t_2_36_op_j_2_36_j_2_23_20_softwareOps_clone_normal_Flight_Waypoint_entry {
	clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_j_2_36_t_2_36_op_j_2_36_j_2_23_20 ( )
}

interface I_clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_36_11_softwareOps_clone_normal_Flight_Waypoint_entry {
	clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_36_11 ( )
}

interface req_normal_Flight_Waypoint_entry_platformOps_clone_normal_Flight_Waypoint_entry {
	fcWaypointCall ( pos : Position )
}

interface req_normal_Flight_Climbing_entry_platformOps_clone_normal_Flight_Climbing_entry {
	fcWaypointCall ( pos : Position )
}

interface I_clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_i_t_op_i_j_3_12_27_softwareOps_clone_normal_Flight_Climbing_entry {
	clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_i_t_op_i_j_3_12_27 ( )
}

interface I_clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_j_3_12_t_3_12_op_j_3_12_j_2_31_21_softwareOps_clone_normal_Flight_Climbing_entry {
	clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_j_3_12_t_3_12_op_j_3_12_j_2_31_21 ( )
}

interface req_normal_Flight_Climbing_entry_localVars {
	const CLIMB_LIFT : real , HOME : Position
	var wp : Position
}

interface I_events_normal_Flight_TakingOff_TakenOff_op_outEvs {
	event uavStatus : AircraftStatus
}

interface I_events_normal_Flight_GoingHome_ReturnedHome_op_outEvs {
	event uavStatus : AircraftStatus
}

interface I_events_normal_Flight_Waiting_WaypointNotify_op_outEvs {
	event uavStatus : AircraftStatus
}

interface I_req_normal_Flight_Waypoint_entry_t_thenJ__t_thenTA__localVars {
	var start : Position , wp : Position
}

interface I_events_normal_BatteryMonitor_Monitoring_entry_t_thenJ__t_thenTA__outEvs {
	event batteryLow
}

interface I_req_normal_Flight_Waypoint_entry_j_2_36_t_2_36_localVars {
	var gotStart : boolean = false
}

interface I_req_normal_Flight_Climbing_entry_j_3_12_t_3_12_localVars {
	var wp : Position
	const CLIMB_LIFT : real
}

interface I_events_normal_Flight_Landing_Landed_op_j_2_29_t_2_29_outEvs {
	event uavStatus : AircraftStatus
}

interface I_req_normal_Flight_Climbing_entry_i_t_localVars {
	const HOME : Position
	var wp : Position
}

interface I_events_normal_Flight_Landing_Landed_op_i_t_outEvs {
	event uavStatus : AircraftStatus
}

interface IctrEvars_Flight {
	var fcWaypointFinishedMissionF : boolean = true , visualPositionF : boolean = true , navCommandF : boolean = true , waypointF : boolean = true , fcControlAuthF : boolean = true , fcTakeoffRetF : boolean = true , fcLandRetF : boolean = true
}

interface I_clone_normal_Flight_Waypoint_entry_softwareOps_Flight {
	clone_normal_Flight_Waypoint_entry ( )
}

interface M600FlightEvents_inpEvs_Flight {
	event fcControlAuth
	event fcTakeoffRet
	event fcLandRet
	event fcWaypointFinishedMission
}

interface FlightPlanningEvents_outEvs_Flight {
	event uavStatus : AircraftStatus
}

interface VisualFlightEvents_inpEvs_Flight {
	event visualPosition : RelativeMotion
}

interface I_clone_normal_Flight_Connect_CI_op_softwareOps_Flight {
	clone_normal_Flight_Connect_CI_op ( )
}

interface I_clone_normal_Flight_Climbing_entry_softwareOps_Flight {
	clone_normal_Flight_Climbing_entry ( )
}

interface I_clone_normal_Flight_Climbing_Climbed_op_softwareOps_Flight {
	clone_normal_Flight_Climbing_Climbed_op ( )
}

interface I_clone_normal_Flight_TakingOff_TakenOff_op_softwareOps_Flight {
	clone_normal_Flight_TakingOff_TakenOff_op ( )
}

interface M600Flight_platformOps_Flight {
	fcTakeoffCall ( )
	fcGoHomeCall ( )
	fcLandCall ( )
	fcWaypointCall ( pos : Position )
	fcMoveRelativeCall ( movement : RelativeMotion )
}

interface I_clone_normal_Flight_GoingHome_ReturnedHome_op_softwareOps_Flight {
	clone_normal_Flight_GoingHome_ReturnedHome_op ( )
}

interface I_clone_normal_Flight_Landing_Landed_op_softwareOps_Flight {
	clone_normal_Flight_Landing_Landed_op ( )
}

interface I_clone_normal_Flight_Waiting_WaypointNotify_op_softwareOps_Flight {
	clone_normal_Flight_Waiting_WaypointNotify_op ( )
}

interface FlightPlanningEvents_inpEvs_Flight {
	event navCommand : NavCommand
	event waypoint : Position
}

interface I_clone_normal_BatteryMonitor_Monitoring_entry_softwareOps_BatteryMonitor {
	clone_normal_BatteryMonitor_Monitoring_entry ( )
}

interface M600BatteryTelemetryEvents_inpEvs_BatteryMonitor {
	event batteryInfo : Battery
}

interface IctrEvars_BatteryMonitor {
	var batteryInfoF : boolean = true
}

interface BatteryPlanningEvents_outEvs_BatteryMonitor {
	event batteryLow
}

stm Flight {
	uses IctrEvars_Flight requires I_clone_normal_Flight_Connect_CI_op_softwareOps_Flight requires I_clone_normal_Flight_Landing_Landed_op_softwareOps_Flight requires I_clone_normal_Flight_Climbing_Climbed_op_softwareOps_Flight requires I_clone_normal_Flight_Waypoint_entry_softwareOps_Flight requires I_clone_normal_Flight_Climbing_entry_softwareOps_Flight requires I_clone_normal_Flight_TakingOff_TakenOff_op_softwareOps_Flight requires I_clone_normal_Flight_GoingHome_ReturnedHome_op_softwareOps_Flight requires I_clone_normal_Flight_Waiting_WaypointNotify_op_softwareOps_Flight const CLIMB_LIFT : real
	const DELAY_DISARM : int
	const HOME : Position
	var h : real , cmd : NavCommand , vp : RelativeMotion , wp : Position
	var start : Position , gotStart : boolean = false
	input context { uses M600FlightEvents_inpEvs_Flight uses FlightPlanningEvents_inpEvs_Flight uses VisualFlightEvents_inpEvs_Flight }
	output context { uses FlightPlanningEvents_outEvs_Flight requires M600Flight_platformOps_Flight }
	cycleDef cycle == 1
	initial I
	state Connect {
		initial i
		state EmptyCycle {
		}
		transition tConnect {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_Connect_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ fcControlAuth /\ fcControlAuthF ) ) )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
	}
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition tWaiting {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( ( ( true /\ ( ( $ visualPosition ? vp /\ visualPositionF ) ) ) \/ ( true /\ ( ( $ waypoint ? wp /\ waypointF ) ) ) ) \/ ( true /\ ( ( $ navCommand ? cmd /\ navCommandF ) ) ) ) \/ ( true /\ ( ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF ) ) ) )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
	}
	junction ProcessingCommand
	state Waypoint {
		initial i
		state EmptyCycle {
		}
		transition tWaypoint {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_Waypoint_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
		entry clone_normal_Flight_Waypoint_entry ( )
	}
	state Relative {
		initial i
		state EmptyCycle {
		}
		transition tRelative {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_Relative_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
		entry $ fcMoveRelativeCall ( vp )
	}
	junction GoHome
	state TakingOff {
		initial i
		state EmptyCycle {
		}
		transition tTakingOff {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_TakingOff_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ fcTakeoffRet /\ fcTakeoffRetF ) ) )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
		entry $ fcTakeoffCall ( )
	}
	state Landing {
		initial i
		state EmptyCycle {
		}
		transition tLanding {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_Landing_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ fcLandRet /\ fcLandRetF ) ) )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
		entry $ fcLandCall ( )
	}
	state Climbing {
		initial i
		state EmptyCycle {
		}
		transition tClimbing {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_Climbing_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF ) ) )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
		entry clone_normal_Flight_Climbing_entry ( )
	}
	state GoingHome {
		initial i
		state EmptyCycle {
		}
		transition tGoingHome {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_GoingHome_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF ) ) )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
		entry $ fcGoHomeCall ( )
	}
	final Disarmed
	state BackToStart {
		initial i
		state EmptyCycle {
		}
		transition tBackToStart {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Flight_BackToStart_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF ) ) )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
		}
		entry $ fcWaypointCall ( start )
	}
	transition II {
		from I
		to Connect
	}
	transition CI {
		from Connect
		to Waiting
		condition ( $ fcControlAuth /\ fcControlAuthF )
		action clone_normal_Flight_Connect_CI_op ( ) ; fcControlAuthF = false
	}
	transition GotRelative {
		from Waiting
		to Relative
		condition ( $ visualPosition ? vp /\ visualPositionF )
		action visualPositionF = false
	}
	transition GotWaypoint {
		from Waiting
		to Waypoint
		condition ( $ waypoint ? wp /\ waypointF )
		action waypointF = false
	}
	transition Command {
		from Waiting
		to ProcessingCommand
		condition ( $ navCommand ? cmd /\ navCommandF )
		action navCommandF = false
	}
	transition WaypointNotify {
		from Waiting
		to Waiting
		condition ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF )
		action clone_normal_Flight_Waiting_WaypointNotify_op ( ) ; fcWaypointFinishedMissionF = false
	}
	transition CoRH {
		from ProcessingCommand
		to GoHome
		condition cmd == NavCommand :: GoHome
	}
	transition CoTO {
		from ProcessingCommand
		to TakingOff
		condition cmd == NavCommand :: TakeOff
	}
	transition CoLD {
		from ProcessingCommand
		to Landing
		condition cmd == NavCommand :: Land
	}
	transition WaypointOff {
		from Waypoint
		to Waiting
	}
	transition RelativeOff {
		from Relative
		to Waiting
	}
	transition GoHomeW {
		from GoHome
		to BackToStart
		condition gotStart
	}
	transition GoHomeNW {
		from GoHome
		to GoingHome
		condition not gotStart
	}
	transition TakenOff {
		from TakingOff
		to Climbing
		condition ( $ fcTakeoffRet /\ fcTakeoffRetF )
		action clone_normal_Flight_TakingOff_TakenOff_op ( ) ; fcTakeoffRetF = false
	}
	transition Landed {
		from Landing
		to Disarmed
		condition ( $ fcLandRet /\ fcLandRetF )
		action clone_normal_Flight_Landing_Landed_op ( ) ; fcLandRetF = false
	}
	transition Climbed {
		from Climbing
		to Waiting
		condition ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF )
		action clone_normal_Flight_Climbing_Climbed_op ( ) ; fcWaypointFinishedMissionF = false
	}
	transition ReturnedHome {
		from GoingHome
		to Waiting
		condition ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF )
		action clone_normal_Flight_GoingHome_ReturnedHome_op ( ) ; fcWaypointFinishedMissionF = false
	}
	transition GoHomeWD {
		from BackToStart
		to GoingHome
		condition ( $ fcWaypointFinishedMission /\ fcWaypointFinishedMissionF )
		action fcWaypointFinishedMissionF = false
	}
}

stm BatteryMonitor {
	uses IctrEvars_BatteryMonitor requires I_clone_normal_BatteryMonitor_Monitoring_entry_softwareOps_BatteryMonitor const BATTERY_LOW_THRESHOLD : int , BATTERY_UNSAFE_THRESHOLD : int
	var battery : Battery
	input context { uses M600BatteryTelemetryEvents_inpEvs_BatteryMonitor }
	output context { uses BatteryPlanningEvents_outEvs_BatteryMonitor }
	cycleDef cycle == 1
	initial I
	state Monitoring {
		initial i
		state EmptyCycle {
		}
		transition tMonitoring {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_BatteryMonitor_Monitoring_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ batteryInfo ? battery /\ batteryInfoF ) ) )
			action exec ; batteryInfoF = true
		}
		entry clone_normal_BatteryMonitor_Monitoring_entry ( )
	}
	transition M {
		from I
		to Monitoring
	}
	transition SenseBatteryW {
		from Monitoring
		to Monitoring
		condition ( $ batteryInfo ? battery /\ batteryInfoF )
		action batteryInfoF = false
	}
}

operation clone_normal_Flight_Connect_CI_op ( ) {
	requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action $ uavStatus ! AircraftStatus :: Connected
	}
	input context { }
	output context { uses I_events_normal_Flight_Connect_CI_op_outEvs }
}

operation clone_normal_BatteryMonitor_Monitoring_entry ( ) {
	requires req_normal_BatteryMonitor_Monitoring_entry_localVars requires I_clone_clone_normal_BatteryMonitor_Monitoring_entry_normal_BatteryMonitor_Monitoring_entry_t_thenJ__t_thenTA__op_t_thenJ__f_14_softwareOps_clone_normal_BatteryMonitor_Monitoring_entry requires IctrEvars_BatteryMonitor initial i
	junction t_initialJunction_
	junction t_elseJ_
	junction t_thenJ_
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not battery . percentage < BATTERY_LOW_THRESHOLD
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition battery . percentage < BATTERY_LOW_THRESHOLD
	}
	transition t_elseTA_ {
		from t_elseJ_
		to f
	}
	transition t_thenTA_ {
		from t_thenJ_
		to f
		action clone_clone_normal_BatteryMonitor_Monitoring_entry_normal_BatteryMonitor_Monitoring_entry_t_thenJ__t_thenTA__op_t_thenJ__f_14 ( )
	}
	input context { }
	output context { uses I_events_normal_BatteryMonitor_Monitoring_entry_outEvs }
}

operation clone_normal_Flight_Landing_Landed_op ( ) {
	requires req_normal_Flight_Landing_Landed_op_localVars requires I_clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_j_2_29_t_2_29_op_j_2_29_f_22_softwareOps_clone_normal_Flight_Landing_Landed_op requires I_clone_clone_normal_Flight_Landing_Landed_op_waitOp_j_3_24_j_2_29_32_softwareOps_clone_normal_Flight_Landing_Landed_op requires I_clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_i_t_op_i_j_3_24_34_softwareOps_clone_normal_Flight_Landing_Landed_op requires IctrEvars_Flight initial i
	junction j_3_24
	junction j_2_29
	final f
	transition t {
		from i
		to j_3_24
		action clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_i_t_op_i_j_3_24_34 ( )
	}
	transition t_3_24 {
		from j_3_24
		to j_2_29
		action clone_clone_normal_Flight_Landing_Landed_op_waitOp_j_3_24_j_2_29_32 ( 1 ) //DELAY_DISARM )
	}
	transition t_2_29 {
		from j_2_29
		to f
		action clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_j_2_29_t_2_29_op_j_2_29_f_22 ( )
	}
	input context { }
	output context { uses I_events_normal_Flight_Landing_Landed_op_outEvs }
}

operation clone_normal_Flight_Climbing_Climbed_op ( ) {
	requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action $ uavStatus ! AircraftStatus :: AtAltitude
	}
	input context { }
	output context { uses I_events_normal_Flight_Climbing_Climbed_op_outEvs }
}

operation clone_normal_Flight_Waypoint_entry ( ) {
	requires req_normal_Flight_Waypoint_entry_localVars requires I_clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_36_11_softwareOps_clone_normal_Flight_Waypoint_entry requires I_clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_j_2_36_t_2_36_op_j_2_36_j_2_23_20_softwareOps_clone_normal_Flight_Waypoint_entry requires IctrEvars_Flight initial i
	junction t_initialJunction_
	junction t_thenJ_
	junction t_elseJ_
	junction j_2_23
	junction j_2_36
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not not gotStart
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition not gotStart
	}
	transition t_thenTA_ {
		from t_thenJ_
		to j_2_36
		action clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_36_11 ( )
	}
	transition t_elseTA_ {
		from t_elseJ_
		to j_2_23
	}
	transition t_2_23 {
		from j_2_23
		to f
		action $ fcWaypointCall ( wp )
	}
	transition t_2_36 {
		from j_2_36
		to j_2_23
		action clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_j_2_36_t_2_36_op_j_2_36_j_2_23_20 ( )
	}
	input context { }
	output context { requires req_normal_Flight_Waypoint_entry_platformOps_clone_normal_Flight_Waypoint_entry }
}

operation clone_normal_Flight_Climbing_entry ( ) {
	requires req_normal_Flight_Climbing_entry_localVars requires I_clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_j_3_12_t_3_12_op_j_3_12_j_2_31_21_softwareOps_clone_normal_Flight_Climbing_entry requires I_clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_i_t_op_i_j_3_12_27_softwareOps_clone_normal_Flight_Climbing_entry requires IctrEvars_Flight initial i
	junction j_3_12
	junction j_2_31
	final f
	transition t {
		from i
		to j_3_12
		action clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_i_t_op_i_j_3_12_27 ( )
	}
	transition t_3_12 {
		from j_3_12
		to j_2_31
		action clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_j_3_12_t_3_12_op_j_3_12_j_2_31_21 ( )
	}
	transition t_2_31 {
		from j_2_31
		to f
		action $ fcWaypointCall ( wp )
	}
	input context { }
	output context { requires req_normal_Flight_Climbing_entry_platformOps_clone_normal_Flight_Climbing_entry }
}

operation clone_normal_Flight_TakingOff_TakenOff_op ( ) {
	requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action $ uavStatus ! AircraftStatus :: TakenOff
	}
	input context { }
	output context { uses I_events_normal_Flight_TakingOff_TakenOff_op_outEvs }
}

operation clone_normal_Flight_GoingHome_ReturnedHome_op ( ) {
	requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action $ uavStatus ! AircraftStatus :: AtHome
	}
	input context { }
	output context { uses I_events_normal_Flight_GoingHome_ReturnedHome_op_outEvs }
}

operation clone_normal_Flight_Waiting_WaypointNotify_op ( ) {
	requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action $ uavStatus ! AircraftStatus :: AtWaypoint
	}
	input context { }
	output context { uses I_events_normal_Flight_Waiting_WaypointNotify_op_outEvs }
}

operation clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_36_11 ( ) {
	requires I_req_normal_Flight_Waypoint_entry_t_thenJ__t_thenTA__localVars requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action start = wp
	}
	input context { }
	output context { }
}

operation clone_clone_normal_BatteryMonitor_Monitoring_entry_normal_BatteryMonitor_Monitoring_entry_t_thenJ__t_thenTA__op_t_thenJ__f_14 ( ) {
	requires IctrEvars_BatteryMonitor initial i
	final f
	transition t {
		from i
		to f
		action $ batteryLow
	}
	input context { }
	output context { uses I_events_normal_BatteryMonitor_Monitoring_entry_t_thenJ__t_thenTA__outEvs }
}

operation clone_clone_normal_Flight_Waypoint_entry_normal_Flight_Waypoint_entry_j_2_36_t_2_36_op_j_2_36_j_2_23_20 ( ) {
	requires I_req_normal_Flight_Waypoint_entry_j_2_36_t_2_36_localVars requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action gotStart = true
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_j_3_12_t_3_12_op_j_3_12_j_2_31_21 ( ) {
	requires I_req_normal_Flight_Climbing_entry_j_3_12_t_3_12_localVars requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action wp . alt = wp . alt + CLIMB_LIFT
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_j_2_29_t_2_29_op_j_2_29_f_22 ( ) {
	requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action $ uavStatus ! AircraftStatus :: Disarmed
	}
	input context { }
	output context { uses I_events_normal_Flight_Landing_Landed_op_j_2_29_t_2_29_outEvs }
}

operation clone_clone_normal_Flight_Climbing_entry_normal_Flight_Climbing_entry_i_t_op_i_j_3_12_27 ( ) {
	requires I_req_normal_Flight_Climbing_entry_i_t_localVars requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action wp = HOME
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Flight_Landing_Landed_op_waitOp_j_3_24_j_2_29_32 ( i : nat
) {
	requires IctrEvars_Flight initial i0
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_clone_normal_Flight_Landing_Landed_op_waitOp_j_3_24_j_2_29_32_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( since ( C ) == i )
			action exec ; ( fcLandRetF = true ; ( fcTakeoffRetF = true ; ( fcControlAuthF = true ; ( waypointF = true ; ( navCommandF = true ; ( visualPositionF = true ; fcWaypointFinishedMissionF = true ) ) ) ) ) )
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

operation clone_clone_normal_Flight_Landing_Landed_op_normal_Flight_Landing_Landed_op_i_t_op_i_j_3_24_34 ( ) {
	requires IctrEvars_Flight initial i
	final f
	transition t {
		from i
		to f
		action $ uavStatus ! AircraftStatus :: Landed
	}
	input context { }
	output context { uses I_events_normal_Flight_Landing_Landed_op_i_t_outEvs }
}

