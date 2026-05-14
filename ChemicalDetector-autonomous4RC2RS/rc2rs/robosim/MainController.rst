package pkg994__sim import Chemical::Angle import Chemical::Status import Location::Loc 
controller MainController {
	event turn : Angle
	event stop
	event gas : Seq( Chemical::GasSensor )
	event resume 
	sref stm_ref0 = pkg994__sim::GasAnalysis
	connection MainController on gas to stm_ref0 on gas
	connection stm_ref0 on turn to MainController on turn
	connection stm_ref0 on stop to MainController on stop
	connection stm_ref0 on resume to MainController on resume
	opref MainController_ref_clone_normal_GasAnalysis_GasDetected_t8_op = pkg994__sim::clone_normal_GasAnalysis_GasDetected_t8_op
	opref MainController_ref_clone_normal_GasAnalysis_Analysis_t3_op = pkg994__sim::clone_normal_GasAnalysis_Analysis_t3_op
	opref MainController_ref_clone_normal_GasAnalysis_GasDetected_t9a_op = pkg994__sim::clone_normal_GasAnalysis_GasDetected_t9a_op
	cycleDef cycle == 1
} 

