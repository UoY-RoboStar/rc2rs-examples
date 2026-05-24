#include "MicroController.h"

MicroController::MicroController(
		std::shared_ptr<SensingVehicle> R_SensingVehicle, 
		std::shared_ptr<robochart::turn_channel> turn,
		std::shared_ptr<robochart::obstacle_channel> obstacle,
		std::shared_ptr<robochart::flag_channel> flag,
		std::shared_ptr<robochart::stop_channel> stop,
		std::shared_ptr<robochart::resume_channel> resume,
		std::shared_ptr<robochart::odometer_channel> odometer): R_SensingVehicle(R_SensingVehicle), turn(turn), obstacle(obstacle), flag(flag), stop(stop), resume(resume), odometer(odometer) {}

MicroController::~MicroController() {
}

void MicroController::Execute() {
	Controller::Execute();
}
