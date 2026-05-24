#include "stop.h"  

stop::stop(
			std::shared_ptr<SensingVehicle> R_SensingVehicle) :R_SensingVehicle(R_SensingVehicle), StateMachine("stop"){
	std::shared_ptr<stop> ptr(this);
	// instantiate states && add substates of machine


	stage = s_Enter;
}

stop::~stop() {
}

int stop::initial() {
	return 0;
}

void stop::Execute() {
	StateMachine::Execute();
}
