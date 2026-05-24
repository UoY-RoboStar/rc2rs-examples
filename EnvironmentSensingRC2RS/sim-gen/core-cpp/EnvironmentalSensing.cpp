#include "EnvironmentalSensing.h"
#include "Movement.h"
#include "SourceAnalysis.h"

void EnvironmentalSensing::Init() {
	EnvironmentalSensing_SensingVehicle = std::make_shared<SensingVehicle> (flag, s, obstacle, odometer);
	EnvironmentalSensing_MicroController = std::make_shared<MicroController> (EnvironmentalSensing_SensingVehicle, turn, obstacle, flag, stop, resume, odometer);
	std::shared_ptr<Movement> MicroController_Movement = std::make_shared<Movement>(EnvironmentalSensing_SensingVehicle, EnvironmentalSensing_MicroController, obstacle, odometer, resume, turn, stop, flag);
	EnvironmentalSensing_MicroController->stm = MicroController_Movement;
	EnvironmentalSensing_MainController = std::make_shared<MainController> (EnvironmentalSensing_SensingVehicle, turn, stop, s, resume);
	std::shared_ptr<SourceAnalysis> MainController_SourceAnalysis = std::make_shared<SourceAnalysis>(EnvironmentalSensing_SensingVehicle, EnvironmentalSensing_MainController, s, resume, turn, stop);
	EnvironmentalSensing_MainController->stm = MainController_SourceAnalysis;
}

void EnvironmentalSensing::Execute() {
	EnvironmentalSensing_SensingVehicle->Sensors();
	EnvironmentalSensing_MicroController->Execute();EnvironmentalSensing_MainController->Execute();
	EnvironmentalSensing_SensingVehicle->Actuators();
}

