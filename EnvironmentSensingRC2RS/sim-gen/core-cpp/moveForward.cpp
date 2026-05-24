#include "moveForward.h"  

moveForward::moveForward(
			std::shared_ptr<SensingVehicle> R_SensingVehicle) :R_SensingVehicle(R_SensingVehicle), StateMachine("moveForward"){
	std::shared_ptr<moveForward> ptr(this);
	// instantiate states && add substates of machine


	stage = s_Enter;
}

moveForward::~moveForward() {
}

int moveForward::initial() {
	return 0;
}

void moveForward::Execute() {
	StateMachine::Execute();
}
