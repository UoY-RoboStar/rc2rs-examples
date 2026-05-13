package pkg254_main_sim module ChemicalDetector {
	connection Vehicle on gas to ctrl_ref1 on gas ( _async )
	connection ctrl_ref1 on turn to ctrl_ref0 on turn ( _async )
	connection ctrl_ref1 on stop to ctrl_ref0 on stop
	connection Vehicle on obstacle to ctrl_ref0 on obstacle ( _async )
	connection ctrl_ref0 on flag to Vehicle on flag ( _async )
	connection ctrl_ref1 on resume to ctrl_ref0 on resume
	connection Vehicle on odometer to ctrl_ref0 on odometer ( _async )
	robotic platform Vehicle {
		provides pkg254_main::Operations event flag
		event gas : Seq( Chemical::GasSensor )
		event obstacle : Location::Loc
		event odometer : real
	}

	cref ctrl_ref0 = pkg254__sim::MicroController
	cref ctrl_ref1 = pkg254__sim::MainController
	cycleDef cycle == 1
}

