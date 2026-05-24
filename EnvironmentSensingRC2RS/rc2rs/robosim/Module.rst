package pkg1126_EnvironmentalSensing_sim module EnvironmentalSensing {
	connection SensingVehicle on s to ctrl_ref1 on s ( _async )
	connection ctrl_ref1 on stop to ctrl_ref0 on stop
	connection SensingVehicle on obstacle to ctrl_ref0 on obstacle ( _async )
	connection ctrl_ref0 on flag to SensingVehicle on flag ( _async )
	connection ctrl_ref1 on resume to ctrl_ref0 on resume
	connection SensingVehicle on odometer to ctrl_ref0 on odometer ( _async )
	connection ctrl_ref1 on turn to ctrl_ref0 on turn
	robotic platform SensingVehicle {
		provides pkg1126_EnvironmentalSensing::Operations event flag
		event s : Seq( real )
		event obstacle : Loc
		event odometer : real
	}

	cref ctrl_ref0 = pkg1126__sim::MicroController
	cref ctrl_ref1 = pkg1126__sim::MainController
	cycleDef cycle == 1
}

