#include "MainController.h"

MainController::MainController(
		std::shared_ptr<SensingVehicle> R_SensingVehicle, 
		std::shared_ptr<robochart::turn_channel> turn,
		std::shared_ptr<robochart::stop_channel> stop,
		std::shared_ptr<robochart::s_channel> s,
		std::shared_ptr<robochart::resume_channel> resume): R_SensingVehicle(R_SensingVehicle), turn(turn), stop(stop), s(s), resume(resume) {}

MainController::~MainController() {
}

void MainController::Execute() {
	Controller::Execute();
}
