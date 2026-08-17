package pre_pkg__sim interface req_normal_Aim_SetPitch_entry_localVars {
	var angle : nat
	const GIMBAL_FLOOD_DELAY : nat
}

interface I_clone_clone_normal_Aim_SetPitch_entry_waitOp_j_2_13_f_2_softwareOps_clone_normal_Aim_SetPitch_entry {
	clone_clone_normal_Aim_SetPitch_entry_waitOp_j_2_13_f_2 ( i : nat )
}

interface req_normal_Aim_SetPitch_entry_platformOps_clone_normal_Aim_SetPitch_entry {
	gimbalWriteTilt ( angle : int )
}

interface req_normal_Aim_SetYaw_entry_platformOps_clone_normal_Aim_SetYaw_entry {
	gimbalWritePan ( angle : int )
}

interface I_clone_clone_normal_Aim_SetYaw_entry_waitOp_j_2_19_f_49_softwareOps_clone_normal_Aim_SetYaw_entry {
	clone_clone_normal_Aim_SetYaw_entry_waitOp_j_2_19_f_49 ( i : nat )
}

interface req_normal_Aim_SetYaw_entry_localVars {
	const GIMBAL_FLOOD_DELAY : nat
	var angle : nat
}

interface req_normal_WaterMonitor_On_Tick_op_localVars {
	const WATER_FLOW : real
	var water : real
}

interface I_events_normal_Aim_SetPitch_GimbalPitchAck_op_outEvs {
	event gimbalPitchAck
}

interface I_events_normal_WaterMonitor_Off_OffOut_op_outEvs {
	event monitorEmpty
}

interface I_clone_clone_normal_Spray_Off_SwitchOn_op_normal_Spray_Off_SwitchOn_op_j_2_5_t_2_5_op_j_2_5_f_35_softwareOps_clone_normal_Spray_Off_SwitchOn_op {
	clone_clone_normal_Spray_Off_SwitchOn_op_normal_Spray_Off_SwitchOn_op_j_2_5_t_2_5_op_j_2_5_f_35 ( )
}

interface req_normal_Spray_Off_SwitchOn_op_platformOps_clone_normal_Spray_Off_SwitchOn_op {
	pumpOn ( )
}

interface I_events_normal_Spray_Off_SwitchOn_op_outEvs {
	event monitorOn
}

interface I_events_normal_Spray_Off_OffOut_op_outEvs {
	event waterEmpty
}

interface I_events_normal_WaterMonitor_On_Out_op_outEvs {
	event monitorEmpty
}

interface I_events_normal_Aim_SetYaw_GimbalYawAck_op_outEvs {
	event gimbalYawAck
}

interface I_events_normal_Spray_On_SwitchOff_op_outEvs {
	event monitorOff
}

interface I_clone_clone_normal_Spray_On_SwitchOff_op_normal_Spray_On_SwitchOff_op_i_t_op_i_j_2_10_3_softwareOps_clone_normal_Spray_On_SwitchOff_op {
	clone_clone_normal_Spray_On_SwitchOff_op_normal_Spray_On_SwitchOff_op_i_t_op_i_j_2_10_3 ( )
}

interface req_normal_Spray_On_SwitchOff_op_platformOps_clone_normal_Spray_On_SwitchOff_op {
	pumpOff ( )
}

interface I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_18_t_2_18_op_j_2_18_f_44_softwareOps_clone_normal_WaterMonitor_On_entry {
	clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_18_t_2_18_op_j_2_18_f_44 ( )
}

interface req_normal_WaterMonitor_On_entry_clocks {
	clock clk_WaterMonitor_On
}

interface req_normal_WaterMonitor_On_entry_localVars {
	var inact_WaterMonitor_On : boolean = true
}

interface I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_18_28_softwareOps_clone_normal_WaterMonitor_On_entry {
	clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_18_28 ( )
}

interface I_events_normal_Spray_On_OnOut_op_outEvs {
	event waterEmpty
}

interface req_normal_Spray_On_OnOut_op_platformOps_clone_normal_Spray_On_OnOut_op {
	pumpOff ( )
}

interface I_clone_clone_normal_Spray_On_OnOut_op_normal_Spray_On_OnOut_op_i_t_op_i_j_2_25_40_softwareOps_clone_normal_Spray_On_OnOut_op {
	clone_clone_normal_Spray_On_OnOut_op_normal_Spray_On_OnOut_op_i_t_op_i_j_2_25_40 ( )
}

interface I_events_normal_Spray_On_SwitchOff_op_i_t_outEvs {
	event monitorOff
}

interface req_normal_WaterMonitor_On_exit_localVars {
	var inact_WaterMonitor_On : boolean = true
}

interface I_req_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__clocks {
	clock clk_WaterMonitor_On
}

interface I_events_normal_Spray_Off_SwitchOn_op_j_2_5_t_2_5_outEvs {
	event monitorOn
}

interface I_events_normal_Spray_On_OnOut_op_i_t_outEvs {
	event waterEmpty
}

interface I_req_normal_WaterMonitor_On_entry_j_2_18_t_2_18_localVars {
	var inact_WaterMonitor_On : boolean = true
}

interface I_clone_normal_Aim_SetPitch_entry_softwareOps_Aim {
	clone_normal_Aim_SetPitch_entry ( )
}

interface I_clone_normal_Aim_SetPitch_GimbalPitchAck_op_softwareOps_Aim {
	clone_normal_Aim_SetPitch_GimbalPitchAck_op ( )
}

interface I_clone_normal_Aim_SetYaw_GimbalYawAck_op_softwareOps_Aim {
	clone_normal_Aim_SetYaw_GimbalYawAck_op ( )
}

interface GimbalSprayEvents_inpEvs_Aim {
	event gimbalYaw : nat
	event gimbalPitch : nat
}

interface Gimbal_platformOps_Aim {
	gimbalWritePan ( angle : int )
	gimbalWriteTilt ( angle : int )
}

interface GimbalSprayEvents_outEvs_Aim {
	event gimbalYawAck
	event gimbalPitchAck
}

interface I_clone_normal_Aim_SetYaw_entry_softwareOps_Aim {
	clone_normal_Aim_SetYaw_entry ( )
}

interface IctrEvars_Aim {
	var gimbalYawF : boolean = true , gimbalPitchF : boolean = true
}

interface I_inpEvs_Spray {
	event monitorEmpty
}

interface I_clone_normal_Spray_Off_SwitchOn_op_softwareOps_Spray {
	clone_normal_Spray_Off_SwitchOn_op ( )
}

interface I_clone_normal_Spray_On_OnOut_op_softwareOps_Spray {
	clone_normal_Spray_On_OnOut_op ( )
}

interface Pump_platformOps_Spray {
	pumpOn ( )
	pumpOff ( )
}

interface SprayPlanningEvents_outEvs_Spray {
	event waterEmpty
}

interface I_clone_normal_Spray_On_SwitchOff_op_softwareOps_Spray {
	clone_normal_Spray_On_SwitchOff_op ( )
}

interface I_clone_normal_Spray_Off_OffOut_op_softwareOps_Spray {
	clone_normal_Spray_Off_OffOut_op ( )
}

interface IctrEvars_Spray {
	var stopSprayF : boolean = true , monitorEmptyF : boolean = true , startSprayF : boolean = true
}

interface I_outEvs_Spray {
	event monitorOn
	event monitorOff
}

interface SprayPlanningEvents_inpEvs_Spray {
	event startSpray
	event stopSpray
}

interface I_outEvs_WaterMonitor {
	event monitorEmpty
}

interface I_normal_WaterMonitor_On_inact_sinceEntry_clocks_WaterMonitor {
	clock clk_WaterMonitor_On
}

interface IctrEvars_WaterMonitor {
	var monitorOffF : boolean = true , monitorOnF : boolean = true
}

interface I_clone_normal_WaterMonitor_On_entry_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_entry ( )
}

interface I_clone_normal_WaterMonitor_On_Tick_op_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_Tick_op ( )
}

interface I_clone_normal_WaterMonitor_Off_OffOut_op_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_Off_OffOut_op ( )
}

interface I_inpEvs_WaterMonitor {
	event monitorOn
	event monitorOff
}

interface I_clone_normal_WaterMonitor_On_Out_op_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_Out_op ( )
}

interface I_normal_WaterMonitor_On_inact_sinceEntry_usedVars_WaterMonitor {
	var inact_WaterMonitor_On : boolean = true
}

interface I_clone_normal_WaterMonitor_On_exit_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_exit ( )
}

stm Aim {
	uses IctrEvars_Aim requires I_clone_normal_Aim_SetPitch_entry_softwareOps_Aim requires I_clone_normal_Aim_SetYaw_entry_softwareOps_Aim requires I_clone_normal_Aim_SetPitch_GimbalPitchAck_op_softwareOps_Aim requires I_clone_normal_Aim_SetYaw_GimbalYawAck_op_softwareOps_Aim const GIMBAL_FLOOD_DELAY : nat
	var angle : nat
	input context { uses GimbalSprayEvents_inpEvs_Aim }
	output context { uses GimbalSprayEvents_outEvs_Aim requires Gimbal_platformOps_Aim }
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
		transition tEmptyCycle_Aim_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( true /\ ( ( $ gimbalPitch ? angle /\ gimbalPitchF ) ) ) \/ ( true /\ ( ( $ gimbalYaw ? angle /\ gimbalYawF ) ) ) )
			action exec ; ( gimbalPitchF = true ; gimbalYawF = true )
		}
	}
	state SetPitch {
		initial i
		state EmptyCycle {
		}
		transition tSetPitch {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Aim_SetPitch_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( gimbalPitchF = true ; gimbalYawF = true )
		}
		entry clone_normal_Aim_SetPitch_entry ( )
	}
	state SetYaw {
		initial i
		state EmptyCycle {
		}
		transition tSetYaw {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Aim_SetYaw_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true )
			action exec ; ( gimbalPitchF = true ; gimbalYawF = true )
		}
		entry clone_normal_Aim_SetYaw_entry ( )
	}
	transition Init {
		from I
		to Waiting
	}
	transition GimbalPitch {
		from Waiting
		to SetPitch
		condition ( $ gimbalPitch ? angle /\ gimbalPitchF )
		action gimbalPitchF = false
	}
	transition GimbalYaw {
		from Waiting
		to SetYaw
		condition ( $ gimbalYaw ? angle /\ gimbalYawF )
		action gimbalYawF = false
	}
	transition GimbalPitchAck {
		from SetPitch
		to Waiting
		action clone_normal_Aim_SetPitch_GimbalPitchAck_op ( )
	}
	transition GimbalYawAck {
		from SetYaw
		to Waiting
		action clone_normal_Aim_SetYaw_GimbalYawAck_op ( )
	}
}

stm Spray {
	uses IctrEvars_Spray requires I_clone_normal_Spray_Off_SwitchOn_op_softwareOps_Spray requires I_clone_normal_Spray_Off_OffOut_op_softwareOps_Spray requires I_clone_normal_Spray_On_SwitchOff_op_softwareOps_Spray requires I_clone_normal_Spray_On_OnOut_op_softwareOps_Spray input context { uses I_inpEvs_Spray uses SprayPlanningEvents_inpEvs_Spray }
	output context { uses I_outEvs_Spray uses SprayPlanningEvents_outEvs_Spray requires Pump_platformOps_Spray }
	cycleDef cycle == 1
	initial I
	state Off {
		initial i
		state EmptyCycle {
		}
		transition tOff {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Spray_Off_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( true /\ ( ( $ startSpray /\ startSprayF ) ) ) \/ ( true /\ ( ( $ monitorEmpty /\ monitorEmptyF ) ) ) )
			action exec ; ( startSprayF = true ; ( monitorEmptyF = true ; stopSprayF = true ) )
		}
	}
	final Out
	state On {
		initial i
		state EmptyCycle {
		}
		transition tOn {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_Spray_On_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( true /\ ( ( $ stopSpray /\ stopSprayF ) ) ) \/ ( true /\ ( ( $ monitorEmpty /\ monitorEmptyF ) ) ) )
			action exec ; ( startSprayF = true ; ( monitorEmptyF = true ; stopSprayF = true ) )
		}
	}
	transition Init {
		from I
		to Off
	}
	transition SwitchOn {
		from Off
		to On
		condition ( $ startSpray /\ startSprayF )
		action clone_normal_Spray_Off_SwitchOn_op ( ) ; startSprayF = false
	}
	transition OffOut {
		from Off
		to Out
		condition ( $ monitorEmpty /\ monitorEmptyF )
		action clone_normal_Spray_Off_OffOut_op ( ) ; monitorEmptyF = false
	}
	transition SwitchOff {
		from On
		to Off
		condition ( $ stopSpray /\ stopSprayF )
		action clone_normal_Spray_On_SwitchOff_op ( ) ; stopSprayF = false
	}
	transition OnOut {
		from On
		to Out
		condition ( $ monitorEmpty /\ monitorEmptyF )
		action clone_normal_Spray_On_OnOut_op ( ) ; monitorEmptyF = false
	}
}

stm WaterMonitor {
	uses I_normal_WaterMonitor_On_inact_sinceEntry_usedVars_WaterMonitor uses I_normal_WaterMonitor_On_inact_sinceEntry_clocks_WaterMonitor uses IctrEvars_WaterMonitor requires I_clone_normal_WaterMonitor_On_Tick_op_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_Off_OffOut_op_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_On_Out_op_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_On_entry_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_On_exit_softwareOps_WaterMonitor const WATER_FLOW : real
	const TIME_PER_UNIT : nat = 1
	var water : real = 1
	input context { uses I_inpEvs_WaterMonitor }
	output context { uses I_outEvs_WaterMonitor }
	cycleDef cycle == 1
	initial I
	state Off {
		initial i
		state EmptyCycle {
		}
		transition tOff {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_WaterMonitor_Off_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( 0 < water /\ ( ( $ monitorOn /\ monitorOnF ) ) ) \/ ( water <= 0 ) )
			action exec ; ( monitorOnF = true ; monitorOffF = true )
		}
	}
	state On {
		initial i
		state EmptyCycle {
		}
		transition tOn {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_WaterMonitor_On_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( ( water <= 0 ) \/ ( TIME_PER_UNIT <= since ( clk_WaterMonitor_On ) ) ) \/ ( since ( clk_WaterMonitor_On ) < TIME_PER_UNIT /\ ( ( $ monitorOff /\ monitorOffF ) ) ) )
			action exec ; ( monitorOnF = true ; monitorOffF = true )
		}
		exit clone_normal_WaterMonitor_On_exit ( )
		entry clone_normal_WaterMonitor_On_entry ( )
	}
	final F
	transition Init {
		from I
		to Off
	}
	transition SwitchOn {
		from Off
		to On
		condition ( $ monitorOn /\ monitorOnF ) /\ 0 < water
		action monitorOnF = false
	}
	transition OffOut {
		from Off
		to F
		condition water <= 0
		action clone_normal_WaterMonitor_Off_OffOut_op ( )
	}
	transition Out {
		from On
		to F
		condition water <= 0
		action clone_normal_WaterMonitor_On_Out_op ( )
	}
	transition Tick {
		from On
		to On
		condition TIME_PER_UNIT <= since ( clk_WaterMonitor_On )
		action clone_normal_WaterMonitor_On_Tick_op ( )
	}
	transition SwitchOff {
		from On
		to Off
		condition ( $ monitorOff /\ monitorOffF ) /\ since ( clk_WaterMonitor_On ) < TIME_PER_UNIT
		action monitorOffF = false
	}
}

operation clone_normal_Aim_SetPitch_entry ( ) {
	requires req_normal_Aim_SetPitch_entry_localVars requires I_clone_clone_normal_Aim_SetPitch_entry_waitOp_j_2_13_f_2_softwareOps_clone_normal_Aim_SetPitch_entry requires IctrEvars_Aim initial i
	junction j_2_13
	final f
	transition t {
		from i
		to j_2_13
		action $ gimbalWriteTilt ( angle )
	}
	transition t_2_13 {
		from j_2_13
		to f
		action clone_clone_normal_Aim_SetPitch_entry_waitOp_j_2_13_f_2 ( GIMBAL_FLOOD_DELAY )
	}
	input context { }
	output context { requires req_normal_Aim_SetPitch_entry_platformOps_clone_normal_Aim_SetPitch_entry }
}

operation clone_normal_Aim_SetYaw_entry ( ) {
	requires req_normal_Aim_SetYaw_entry_localVars requires I_clone_clone_normal_Aim_SetYaw_entry_waitOp_j_2_19_f_49_softwareOps_clone_normal_Aim_SetYaw_entry requires IctrEvars_Aim initial i
	junction j_2_19
	final f
	transition t {
		from i
		to j_2_19
		action $ gimbalWritePan ( angle )
	}
	transition t_2_19 {
		from j_2_19
		to f
		action clone_clone_normal_Aim_SetYaw_entry_waitOp_j_2_19_f_49 ( GIMBAL_FLOOD_DELAY )
	}
	input context { }
	output context { requires req_normal_Aim_SetYaw_entry_platformOps_clone_normal_Aim_SetYaw_entry }
}

operation clone_normal_WaterMonitor_On_Tick_op ( ) {
	requires req_normal_WaterMonitor_On_Tick_op_localVars requires IctrEvars_WaterMonitor initial i
	final f
	transition t {
		from i
		to f
		action water = water - WATER_FLOW
	}
	input context { }
	output context { }
}

operation clone_normal_Aim_SetPitch_GimbalPitchAck_op ( ) {
	requires IctrEvars_Aim initial i
	final f
	transition t {
		from i
		to f
		action $ gimbalPitchAck
	}
	input context { }
	output context { uses I_events_normal_Aim_SetPitch_GimbalPitchAck_op_outEvs }
}

operation clone_normal_WaterMonitor_Off_OffOut_op ( ) {
	requires IctrEvars_WaterMonitor initial i
	final f
	transition t {
		from i
		to f
		action $ monitorEmpty
	}
	input context { }
	output context { uses I_events_normal_WaterMonitor_Off_OffOut_op_outEvs }
}

operation clone_normal_Spray_Off_SwitchOn_op ( ) {
	requires I_clone_clone_normal_Spray_Off_SwitchOn_op_normal_Spray_Off_SwitchOn_op_j_2_5_t_2_5_op_j_2_5_f_35_softwareOps_clone_normal_Spray_Off_SwitchOn_op requires IctrEvars_Spray initial i
	junction j_2_5
	final f
	transition t {
		from i
		to j_2_5
		action $ pumpOn ( )
	}
	transition t_2_5 {
		from j_2_5
		to f
		action clone_clone_normal_Spray_Off_SwitchOn_op_normal_Spray_Off_SwitchOn_op_j_2_5_t_2_5_op_j_2_5_f_35 ( )
	}
	input context { }
	output context { uses I_events_normal_Spray_Off_SwitchOn_op_outEvs requires req_normal_Spray_Off_SwitchOn_op_platformOps_clone_normal_Spray_Off_SwitchOn_op }
}

operation clone_normal_Spray_Off_OffOut_op ( ) {
	requires IctrEvars_Spray initial i
	final f
	transition t {
		from i
		to f
		action $ waterEmpty
	}
	input context { }
	output context { uses I_events_normal_Spray_Off_OffOut_op_outEvs }
}

operation clone_normal_WaterMonitor_On_Out_op ( ) {
	requires IctrEvars_WaterMonitor initial i
	final f
	transition t {
		from i
		to f
		action $ monitorEmpty
	}
	input context { }
	output context { uses I_events_normal_WaterMonitor_On_Out_op_outEvs }
}

operation clone_normal_Aim_SetYaw_GimbalYawAck_op ( ) {
	requires IctrEvars_Aim initial i
	final f
	transition t {
		from i
		to f
		action $ gimbalYawAck
	}
	input context { }
	output context { uses I_events_normal_Aim_SetYaw_GimbalYawAck_op_outEvs }
}

operation clone_normal_Spray_On_SwitchOff_op ( ) {
	requires I_clone_clone_normal_Spray_On_SwitchOff_op_normal_Spray_On_SwitchOff_op_i_t_op_i_j_2_10_3_softwareOps_clone_normal_Spray_On_SwitchOff_op requires IctrEvars_Spray initial i
	junction j_2_10
	final f
	transition t {
		from i
		to j_2_10
		action clone_clone_normal_Spray_On_SwitchOff_op_normal_Spray_On_SwitchOff_op_i_t_op_i_j_2_10_3 ( )
	}
	transition t_2_10 {
		from j_2_10
		to f
		action $ pumpOff ( )
	}
	input context { }
	output context { uses I_events_normal_Spray_On_SwitchOff_op_outEvs requires req_normal_Spray_On_SwitchOff_op_platformOps_clone_normal_Spray_On_SwitchOff_op }
}

operation clone_normal_WaterMonitor_On_entry ( ) {
	requires req_normal_WaterMonitor_On_entry_localVars requires req_normal_WaterMonitor_On_entry_clocks requires I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_18_28_softwareOps_clone_normal_WaterMonitor_On_entry requires I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_18_t_2_18_op_j_2_18_f_44_softwareOps_clone_normal_WaterMonitor_On_entry requires IctrEvars_WaterMonitor initial i
	junction t_initialJunction_
	junction t_thenJ_
	junction t_elseJ_
	junction j_2_18
	final f
	transition t_initial_ {
		from i
		to t_initialJunction_
	}
	transition t_elseTG_ {
		from t_initialJunction_
		to t_elseJ_
		condition not inact_WaterMonitor_On
	}
	transition t_thenTG_ {
		from t_initialJunction_
		to t_thenJ_
		condition inact_WaterMonitor_On
	}
	transition t_thenTA_ {
		from t_thenJ_
		to j_2_18
		action clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_18_28 ( )
	}
	transition t_elseTA_ {
		from t_elseJ_
		to j_2_18
	}
	transition t_2_18 {
		from j_2_18
		to f
		action clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_18_t_2_18_op_j_2_18_f_44 ( )
	}
	input context { }
	output context { }
}

operation clone_normal_Spray_On_OnOut_op ( ) {
	requires I_clone_clone_normal_Spray_On_OnOut_op_normal_Spray_On_OnOut_op_i_t_op_i_j_2_25_40_softwareOps_clone_normal_Spray_On_OnOut_op requires IctrEvars_Spray initial i
	junction j_2_25
	final f
	transition t {
		from i
		to j_2_25
		action clone_clone_normal_Spray_On_OnOut_op_normal_Spray_On_OnOut_op_i_t_op_i_j_2_25_40 ( )
	}
	transition t_2_25 {
		from j_2_25
		to f
		action $ pumpOff ( )
	}
	input context { }
	output context { uses I_events_normal_Spray_On_OnOut_op_outEvs requires req_normal_Spray_On_OnOut_op_platformOps_clone_normal_Spray_On_OnOut_op }
}

operation clone_clone_normal_Aim_SetPitch_entry_waitOp_j_2_13_f_2 ( i : nat
) {
	requires IctrEvars_Aim initial i0
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_clone_normal_Aim_SetPitch_entry_waitOp_j_2_13_f_2_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( since ( C ) == i )
			action exec ; ( gimbalPitchF = true ; gimbalYawF = true )
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

operation clone_clone_normal_Spray_On_SwitchOff_op_normal_Spray_On_SwitchOff_op_i_t_op_i_j_2_10_3 ( ) {
	requires IctrEvars_Spray initial i
	final f
	transition t {
		from i
		to f
		action $ monitorOff
	}
	input context { }
	output context { uses I_events_normal_Spray_On_SwitchOff_op_i_t_outEvs }
}

operation clone_normal_WaterMonitor_On_exit ( ) {
	requires req_normal_WaterMonitor_On_exit_localVars requires IctrEvars_WaterMonitor initial i
	final f
	transition t {
		from i
		to f
		action inact_WaterMonitor_On = true
	}
	input context { }
	output context { }
}

operation clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_18_28 ( ) {
	requires I_req_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__clocks requires IctrEvars_WaterMonitor initial i
	final f
	transition t {
		from i
		to f
		action # clk_WaterMonitor_On
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Spray_Off_SwitchOn_op_normal_Spray_Off_SwitchOn_op_j_2_5_t_2_5_op_j_2_5_f_35 ( ) {
	requires IctrEvars_Spray initial i
	final f
	transition t {
		from i
		to f
		action $ monitorOn
	}
	input context { }
	output context { uses I_events_normal_Spray_Off_SwitchOn_op_j_2_5_t_2_5_outEvs }
}

operation clone_clone_normal_Spray_On_OnOut_op_normal_Spray_On_OnOut_op_i_t_op_i_j_2_25_40 ( ) {
	requires IctrEvars_Spray initial i
	final f
	transition t {
		from i
		to f
		action $ waterEmpty
	}
	input context { }
	output context { uses I_events_normal_Spray_On_OnOut_op_i_t_outEvs }
}

operation clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_18_t_2_18_op_j_2_18_f_44 ( ) {
	requires I_req_normal_WaterMonitor_On_entry_j_2_18_t_2_18_localVars requires IctrEvars_WaterMonitor initial i
	final f
	transition t {
		from i
		to f
		action inact_WaterMonitor_On = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_Aim_SetYaw_entry_waitOp_j_2_19_f_49 ( i : nat
) {
	requires IctrEvars_Aim initial i0
	state Waiting {
		initial i
		state EmptyCycle {
		}
		transition t {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_clone_clone_normal_Aim_SetYaw_entry_waitOp_j_2_19_f_49_Waiting_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( since ( C ) == i )
			action exec ; ( gimbalPitchF = true ; gimbalYawF = true )
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

