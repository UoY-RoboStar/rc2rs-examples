package pre_pkg_uav_sim module FirefightingUAV {
	connection Platform on fcTakeoffRet to ARaspberryPi on fcTakeoffRet ( _async )
	connection Platform on fcGoHomeRet to ARaspberryPi on fcGoHomeRet ( _async )
	connection Platform on fcLandRet to ARaspberryPi on fcLandRet ( _async )
	connection Platform on fcControlAuth to ARaspberryPi on fcControlAuth ( _async )
	connection Platform on fcWaypointFinishedMission to ARaspberryPi on fcWaypointFinishedMission ( _async )
	connection Platform on fcMoveRelativeRet to ARaspberryPi on fcMoveRelativeRet ( _async )
	connection Platform on batteryInfo to ARaspberryPi on batteryInfo ( _async )
	connection Platform on mlxHeatmap to ARaspberryPi on mlxHeatmap ( _async )
	connection Platform on rsDepthFrame to ARaspberryPi on rsDepthFrame ( _async )
	connection Platform on rsRgbFrame to ARaspberryPi on rsRgbFrame ( _async )
	connection ARaspberryPi on missionStatus to Platform on missionStatus ( _async )
	connection ARaspberryPi on gimbalYaw to AnArduino on gimbalYaw ( _async )
	connection ARaspberryPi on gimbalPitch to AnArduino on gimbalPitch ( _async )
	connection AnArduino on gimbalYawAck to ARaspberryPi on gimbalYawAck ( _async )
	connection AnArduino on gimbalPitchAck to ARaspberryPi on gimbalPitchAck ( _async )
	connection ARaspberryPi on startSpray to AnArduino on startSpray ( _async )
	connection ARaspberryPi on stopSpray to AnArduino on stopSpray ( _async )
	connection AnArduino on waterEmpty to ARaspberryPi on waterEmpty ( _async )
	robotic platform Platform {
		uses pre_pkg_::M600FlightEvents uses pre_pkg_::M600TelemetryEvents uses pre_pkg_::M600BatteryTelemetryEvents uses MLX90640Events uses RealSenseD435iEvents uses GCSMissionEvents uses GCSControlEvents provides pre_pkg_::M600Flight provides GCS provides pre_pkg_::Gimbal provides MLX90640 provides RealSenseD435i provides pre_pkg_::Pump }

	cref AnArduino = pre_pkg__sim::Arduino
	cref ARaspberryPi = pre_pkg__sim::RaspberryPi
	cycleDef cycle == 1
}

