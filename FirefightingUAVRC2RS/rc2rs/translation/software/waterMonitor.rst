
/* 
package pre_pkg__sim interface I_events_normal_WaterMonitor_Off_OffOut_op_outEvs {
	event monitorEmpty
}

interface req_normal_WaterMonitor_On_Tick_op_localVars {
	const WATER_FLOW : real
	var water : real
}

interface req_normal_WaterMonitor_On_exit_localVars {
	var inact_WaterMonitor_On : boolean = true
}

interface I_events_normal_WaterMonitor_On_Out_op_outEvs {
	event monitorEmpty
}

interface req_normal_WaterMonitor_On_entry_localVars {
	var inact_WaterMonitor_On : boolean = true
}

interface I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_12_t_2_12_op_j_2_12_f_40_softwareOps_clone_normal_WaterMonitor_On_entry {
	clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_12_t_2_12_op_j_2_12_f_40 ( )
}

interface I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_12_41_softwareOps_clone_normal_WaterMonitor_On_entry {
	clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_12_41 ( )
}

interface req_normal_WaterMonitor_On_entry_clocks {
	clock clk_WaterMonitor_On
}

interface I_req_normal_WaterMonitor_On_entry_j_2_12_t_2_12_localVars {
	var inact_WaterMonitor_On : boolean = true
}

interface I_req_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__clocks {
	clock clk_WaterMonitor_On
}

interface I_inpEvs_WaterMonitor {
	event monitorOn
	event monitorOff
}

interface I_normal_WaterMonitor_On_inact_sinceEntry_usedVars_WaterMonitor {
	var inact_WaterMonitor_On : boolean = true
}

interface IctrEvars_WaterMonitor {
	var monitorOffF : boolean = true , monitorOnF : boolean = true
}

interface I_outEvs_WaterMonitor {
	event monitorEmpty
}

interface I_clone_normal_WaterMonitor_On_Out_op_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_Out_op ( )
}

interface I_normal_WaterMonitor_On_inact_sinceEntry_clocks_WaterMonitor {
	clock clk_WaterMonitor_On
}

interface I_clone_normal_WaterMonitor_On_exit_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_exit ( )
}

interface I_clone_normal_WaterMonitor_Off_OffOut_op_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_Off_OffOut_op ( )
}

interface I_clone_normal_WaterMonitor_On_Tick_op_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_Tick_op ( )
}

interface I_clone_normal_WaterMonitor_On_entry_softwareOps_WaterMonitor {
	clone_normal_WaterMonitor_On_entry ( )
}

stm WaterMonitor {
	uses I_normal_WaterMonitor_On_inact_sinceEntry_usedVars_WaterMonitor uses I_normal_WaterMonitor_On_inact_sinceEntry_clocks_WaterMonitor uses IctrEvars_WaterMonitor requires I_clone_normal_WaterMonitor_Off_OffOut_op_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_On_Tick_op_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_On_exit_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_On_Out_op_softwareOps_WaterMonitor requires I_clone_normal_WaterMonitor_On_entry_softwareOps_WaterMonitor const WATER_FLOW : real
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
			condition not ( ( water <= 0 ) \/ ( 0 < water /\ ( ( $ monitorOn /\ monitorOnF ) ) ) )
			action exec ; ( monitorOnF = true ; monitorOffF = true )
		}
	}
	final F
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
			condition not ( ( ( water <= 0 ) \/ ( since ( clk_WaterMonitor_On ) < TIME_PER_UNIT /\ ( ( $ monitorOff /\ monitorOffF ) ) ) ) \/ ( TIME_PER_UNIT <= since ( clk_WaterMonitor_On ) ) )
			action exec ; ( monitorOnF = true ; monitorOffF = true )
		}
		exit clone_normal_WaterMonitor_On_exit ( )
		entry clone_normal_WaterMonitor_On_entry ( )
	}
	transition Init {
		from I
		to Off
	}
	transition OffOut {
		from Off
		to F
		condition water <= 0
		action clone_normal_WaterMonitor_Off_OffOut_op ( )
	}
	transition SwitchOn {
		from Off
		to On
		condition ( $ monitorOn /\ monitorOnF ) /\ 0 < water
		action monitorOnF = false
	}
	transition Out {
		from On
		to F
		condition water <= 0
		action clone_normal_WaterMonitor_On_Out_op ( )
	}
	transition SwitchOff {
		from On
		to Off
		condition ( $ monitorOff /\ monitorOffF ) /\ since ( clk_WaterMonitor_On ) < TIME_PER_UNIT
		action monitorOffF = false
	}
	transition Tick {
		from On
		to On
		condition TIME_PER_UNIT <= since ( clk_WaterMonitor_On )
		action clone_normal_WaterMonitor_On_Tick_op ( )
	}
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

operation clone_normal_WaterMonitor_On_entry ( ) {
	requires req_normal_WaterMonitor_On_entry_localVars requires req_normal_WaterMonitor_On_entry_clocks requires I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_12_t_2_12_op_j_2_12_f_40_softwareOps_clone_normal_WaterMonitor_On_entry requires I_clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_12_41_softwareOps_clone_normal_WaterMonitor_On_entry requires IctrEvars_WaterMonitor initial i
	junction t_initialJunction_
	junction t_elseJ_
	junction t_thenJ_
	junction j_2_12
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
	transition t_elseTA_ {
		from t_elseJ_
		to j_2_12
	}
	transition t_thenTA_ {
		from t_thenJ_
		to j_2_12
		action clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_12_41 ( )
	}
	transition t_2_12 {
		from j_2_12
		to f
		action clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_12_t_2_12_op_j_2_12_f_40 ( )
	}
	input context { }
	output context { }
}

operation clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_j_2_12_t_2_12_op_j_2_12_f_40 ( ) {
	requires I_req_normal_WaterMonitor_On_entry_j_2_12_t_2_12_localVars requires IctrEvars_WaterMonitor initial i
	final f
	transition t {
		from i
		to f
		action inact_WaterMonitor_On = false
	}
	input context { }
	output context { }
}

operation clone_clone_normal_WaterMonitor_On_entry_normal_WaterMonitor_On_entry_t_thenJ__t_thenTA__op_t_thenJ__j_2_12_41 ( ) {
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
*/
