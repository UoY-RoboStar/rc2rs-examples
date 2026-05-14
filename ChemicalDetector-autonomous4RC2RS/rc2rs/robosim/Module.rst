package pkg994_ChemicalDetector_sim import Chemical::Angle import Chemical::Status import Location::Loc module ChemicalDetector {
	connection Vehicle on gas to ctrl_ref1 on gas ( _async )
	connection ctrl_ref1 on turn to ctrl_ref0 on turn ( _async )
	connection ctrl_ref1 on stop to ctrl_ref0 on stop
	connection Vehicle on obstacle to ctrl_ref0 on obstacle ( _async )
	connection ctrl_ref0 on flag to Vehicle on flag ( _async )
	connection ctrl_ref1 on resume to ctrl_ref0 on resume
	connection Vehicle on odometer to ctrl_ref0 on odometer ( _async )
	robotic platform Vehicle {
		provides pkg994_ChemicalDetector::Operations event flag
		event gas : Seq( Chemical::GasSensor )
		event obstacle : Loc
		event odometer : real
	}
 
	cref ctrl_ref0 = pkg994__sim::MicroController
	cref ctrl_ref1 = pkg994__sim::MainController
	cycleDef cycle == 1
}

