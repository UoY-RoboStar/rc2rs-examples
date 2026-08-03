package pre_pkg_main_sim module EnvironmentalSensing {
	connection SensingVehicle on s to ctrl_ref1 on s ( _async )
	connection ctrl_ref1 on stop to ctrl_ref0 on stop
	connection SensingVehicle on obstacle to ctrl_ref0 on obstacle ( _async )
	connection ctrl_ref0 on flag to SensingVehicle on flag ( _async )
	connection ctrl_ref1 on resume to ctrl_ref0 on resume
	connection SensingVehicle on odometer to ctrl_ref0 on odometer ( _async )
	connection ctrl_ref1 on turn to ctrl_ref0 on turn
	robotic platform SensingVehicle {
		provides pre_pkg_main::Operations event flag
		event s : Seq( real )
		event obstacle : Loc
		event odometer : real
	}

	cref ctrl_ref0 = pre_pkg_MicroControllerPkg_sim::MicroController
	cref ctrl_ref1 = pre_pkg_MainControllerPkg_sim::MainController
	cycleDef cycle == 1
}

