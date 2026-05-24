#include "reverse.h"  

reverse::reverse(
			std::shared_ptr<SensingVehicle> R_SensingVehicle) :R_SensingVehicle(R_SensingVehicle), StateMachine("reverse"){
	std::shared_ptr<reverse> ptr(this);
	// instantiate states && add substates of machine


	stage = s_Enter;
}

reverse::~reverse() {
}

int reverse::initial() {
	return 0;
}

void reverse::Execute() {
	StateMachine::Execute();
}
