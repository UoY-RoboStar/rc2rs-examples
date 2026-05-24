package pkg1126__sim  interface I_events_normal_SourceAnalysis_SourceDetected_t8_op_outEvs {
	event stop
}

interface I_events_normal_SourceAnalysis_Analysis_t3_op_outEvs {
	event resume
}

interface I_events_normal_SourceAnalysis_SourceDetected_t9a_op_outEvs {
	event turn : real
}

interface req_normal_SourceAnalysis_SourceDetected_t9a_op_localVars {
	var gs : Seq( real )
}

interface I_inpEvs_SourceAnalysis {
	event s : Seq( real )
}

interface I_clone_normal_SourceAnalysis_Analysis_t3_op_softwareOps_SourceAnalysis {
	clone_normal_SourceAnalysis_Analysis_t3_op ( )
}

interface I_clone_normal_SourceAnalysis_SourceDetected_t9a_op_softwareOps_SourceAnalysis {
	clone_normal_SourceAnalysis_SourceDetected_t9a_op ( )
}

interface IctrEvars_SourceAnalysis {
	var sF : boolean = true
}

interface I_outEvs_SourceAnalysis {
	event resume
	event turn : real
	event stop
}

interface I_clone_normal_SourceAnalysis_SourceDetected_t8_op_softwareOps_SourceAnalysis {
	clone_normal_SourceAnalysis_SourceDetected_t8_op ( )
}

stm SourceAnalysis {
	uses IctrEvars_SourceAnalysis requires I_clone_normal_SourceAnalysis_SourceDetected_t8_op_softwareOps_SourceAnalysis requires I_clone_normal_SourceAnalysis_Analysis_t3_op_softwareOps_SourceAnalysis requires I_clone_normal_SourceAnalysis_SourceDetected_t9a_op_softwareOps_SourceAnalysis var gs : Seq( real )
	const thr : real
	input context { uses I_inpEvs_SourceAnalysis }
	output context { uses I_outEvs_SourceAnalysis }
	cycleDef cycle == 1
	initial i1
	state NoSource {
		initial i
		state EmptyCycle {
		}
		transition tNoSource {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_SourceAnalysis_NoSource_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ s ? gs /\ sF ) ) )
			action exec ; sF = true
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
		transition tEmptyCycle_SourceAnalysis_Analysis_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( analysis ( gs ) == Status :: sourceD ) \/ ( analysis ( gs ) == Status :: noSource ) )
			action exec ; sF = true
		}
	}
	state SourceDetected {
		initial i
		state EmptyCycle {
		}
		transition tSourceDetected {
			from i
			to EmptyCycle
		}
		transition tEmptyCycle_SourceAnalysis_SourceDetected_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( ( gt ( intensity ( gs ) , thr ) ) \/ ( not gt ( intensity ( gs ) , thr ) ) )
			action exec ; sF = true
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
		transition tEmptyCycle_SourceAnalysis_Reading_EmptyCycle {
			from EmptyCycle
			to EmptyCycle
			condition not ( true /\ ( ( $ s ? gs /\ sF ) ) )
			action exec ; sF = true
		}
	}
	transition t1 {
		from i1
		to NoSource
	}
	transition t2 {
		from NoSource
		to Analysis
		condition ( $ s ? gs /\ sF )
		action sF = false
	}
	transition t4 {
		from Analysis
		to SourceDetected
		condition analysis ( gs ) == Status :: sourceD
	}
	transition t3 {
		from Analysis
		to NoSource
		condition analysis ( gs ) == Status :: noSource
	}
	transition t8 {
		from SourceDetected
		to j1
		condition gt ( intensity ( gs ) , thr )
	}
	transition t9a {
		from SourceDetected
		to Reading
		condition not gt ( intensity ( gs ) , thr )
	}
	transition t0 {
		from Reading
		to Analysis
		condition ( $ s ? gs /\ sF )
		action sF = false
	}
}

operation clone_normal_SourceAnalysis_SourceDetected_t8_op ( ) {
	requires IctrEvars_SourceAnalysis initial i
	final f
	transition t {
		from i
		to f
		action $ stop
	}
	input context { }
	output context { uses I_events_normal_SourceAnalysis_SourceDetected_t8_op_outEvs }
}

operation clone_normal_SourceAnalysis_Analysis_t3_op ( ) {
	requires IctrEvars_SourceAnalysis initial i
	final f
	transition t {
		from i
		to f
		action $ resume
	}
	input context { }
	output context { uses I_events_normal_SourceAnalysis_Analysis_t3_op_outEvs }
}

operation clone_normal_SourceAnalysis_SourceDetected_t9a_op ( ) {
	requires req_normal_SourceAnalysis_SourceDetected_t9a_op_localVars requires IctrEvars_SourceAnalysis initial i
	final f
	transition t {
		from i
		to f
		action $ turn ! location ( gs )
	}
	input context { }
	output context { uses I_events_normal_SourceAnalysis_SourceDetected_t9a_op_outEvs }
}

