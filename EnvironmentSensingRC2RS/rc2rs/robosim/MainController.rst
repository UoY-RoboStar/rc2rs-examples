package pkg1126__sim controller MainController {
	event turn : real
	event stop
	event s : Seq( real )
	event resume
	opref MainController_ref_clone_normal_SourceAnalysis_SourceDetected_t8_op = pkg1126__sim::clone_normal_SourceAnalysis_SourceDetected_t8_op
	opref MainController_ref_clone_normal_SourceAnalysis_Analysis_t3_op = pkg1126__sim::clone_normal_SourceAnalysis_Analysis_t3_op
	opref MainController_ref_clone_normal_SourceAnalysis_SourceDetected_t9a_op = pkg1126__sim::clone_normal_SourceAnalysis_SourceDetected_t9a_op
	sref stm_ref0 = pkg1126__sim::SourceAnalysis
	connection MainController on s to stm_ref0 on s
	connection stm_ref0 on turn to MainController on turn
	connection stm_ref0 on stop to MainController on stop
	connection stm_ref0 on resume to MainController on resume
	cycleDef cycle == 1
}

