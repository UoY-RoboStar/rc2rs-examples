package pkg994__sim import Chemical::analysis import Chemical::Angle import Chemical::goreq import Chemical::intensity import Chemical::location import Chemical::Status import Location::Loc import Chemical::analysis import Chemical::goreq import Chemical::intensity import Chemical::location import Chemical::Status interface I_events_normal_GasAnalysis_GasDetected_t8_op_outEvs {
	event stop
}

interface I_events_normal_GasAnalysis_Analysis_t3_op_outEvs {
	event resume
}

interface I_events_normal_GasAnalysis_GasDetected_t9a_op_outEvs {
	event turn : Angle
}

interface req_normal_GasAnalysis_GasDetected_t9a_op_localVars {
	var gs : Seq( Chemical::GasSensor )
}

interface I_clone_normal_GasAnalysis_GasDetected_t9a_op_softwareOps_GasAnalysis {
	clone_normal_GasAnalysis_GasDetected_t9a_op ( )
}

interface I_outEvs_GasAnalysis {
	event resume
	event turn : Angle
	event stop
}

interface I_inpEvs_GasAnalysis {
	event gas : Seq( Chemical::GasSensor )
}

interface IctrEvars_GasAnalysis {
	var gasF : boolean = true
}

interface I_clone_normal_GasAnalysis_GasDetected_t8_op_softwareOps_GasAnalysis {
	clone_normal_GasAnalysis_GasDetected_t8_op ( )
}

interface I_clone_normal_GasAnalysis_Analysis_t3_op_softwareOps_GasAnalysis {
	clone_normal_GasAnalysis_Analysis_t3_op ( )
}

stm GasAnalysis {
	uses IctrEvars_GasAnalysis requires I_clone_normal_GasAnalysis_GasDetected_t8_op_softwareOps_GasAnalysis requires I_clone_normal_GasAnalysis_Analysis_t3_op_softwareOps_GasAnalysis requires I_clone_normal_GasAnalysis_GasDetected_t9a_op_softwareOps_GasAnalysis var gs : Seq( Chemical::GasSensor )
	const thr : Chemical::Intensity
	input context { uses I_inpEvs_GasAnalysis }
	output context { uses I_outEvs_GasAnalysis }
	cycleDef cycle == 1
	initial i1 
	state NoGas {
		initial i
		state EmptyCycle {
		}
		transition tNoGas {
			from i
			to EmptyCycle 
		}
		transition tEmptyCycle_GasAnalysis_NoGas_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ gas ? gs /\ gasF ) ) )
			action exec ; gasF = true
		}
	}
	state Analysis {
		initial i
		state EmptyCycle {
		}
		transition tAnalysis {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GasAnalysis_Analysis_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition ( not ( analysis ( gs ) == Status :: gasD ) /\ not ( analysis ( gs ) == Status :: noGas ) )
			action exec ; gasF = true
		}
	}
	state GasDetected {
		initial i
		state EmptyCycle {
		}
		transition tGasDetected {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GasAnalysis_GasDetected_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition ( not ( not goreq ( intensity ( gs ) , thr ) ) /\ not ( goreq ( intensity ( gs ) , thr ) ) )
			action exec ; gasF = true
		}
	}
	final j1
	state Reading {
		initial i
		state EmptyCycle {
		}
		transition tReading {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_GasAnalysis_Reading_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ gas ? gs /\ gasF ) ) )
			action exec ; gasF = true
		}
	}
	transition t1 {
		from i1
		to NoGas
	}
	transition t2 {
		from NoGas
		to Analysis
		condition ( $ gas ? gs /\ gasF )
		action gasF = false
	}
	transition t4 {
		from Analysis
		to GasDetected
		condition analysis ( gs ) == Status :: gasD
	}
	transition t3 {
		from Analysis
		to NoGas
		condition analysis ( gs ) == Status :: noGas
	}
	transition t9a {
		from GasDetected
		to Reading
		condition not goreq ( intensity ( gs ) , thr )
	}
	transition t8 {
		from GasDetected
		to j1
		condition goreq ( intensity ( gs ) , thr )
	}
	transition t0 {
		from Reading
		to Analysis
		condition ( $ gas ? gs /\ gasF )
		action gasF = false
	}
}

operation clone_normal_GasAnalysis_GasDetected_t8_op ( ) {
	requires IctrEvars_GasAnalysis initial i
	final f
	transition t {
		from i
		to f
		action $ stop
	}
	input context { }
	output context { uses I_events_normal_GasAnalysis_GasDetected_t8_op_outEvs }
}

operation clone_normal_GasAnalysis_Analysis_t3_op ( ) {
	requires IctrEvars_GasAnalysis initial i
	final f
	transition t {
		from i
		to f
		action $ resume
	}
	input context { }
	output context { uses I_events_normal_GasAnalysis_Analysis_t3_op_outEvs }
}

operation clone_normal_GasAnalysis_GasDetected_t9a_op ( ) {
	requires req_normal_GasAnalysis_GasDetected_t9a_op_localVars requires IctrEvars_GasAnalysis initial i
	final f
	transition t {
		from i
		to f
		action $ turn ! location ( gs )
	}
	input context { }
	output context { uses I_events_normal_GasAnalysis_GasDetected_t9a_op_outEvs }
}

