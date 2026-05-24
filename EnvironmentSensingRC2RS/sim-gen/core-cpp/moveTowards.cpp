#include "moveTowards.h"  

moveTowards::moveTowards(
			std::shared_ptr<SensingVehicle> R_SensingVehicle) :R_SensingVehicle(R_SensingVehicle), StateMachine("moveTowards"), a(0)
{
	std::shared_ptr<moveTowards> ptr(this);
	// instantiate states && add substates of machine


	stage = s_Enter;
}

moveTowards::~moveTowards() {
}

int moveTowards::initial() {
	return 0;
}

void moveTowards::Execute() {
	StateMachine::Execute();
}
