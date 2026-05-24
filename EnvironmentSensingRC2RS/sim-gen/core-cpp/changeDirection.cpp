#include "changeDirection.h"  

changeDirection::changeDirection(
			std::shared_ptr<SensingVehicle> R_SensingVehicle) :R_SensingVehicle(R_SensingVehicle), StateMachine("changeDirection"), l(Loc::left)
{
	std::shared_ptr<changeDirection> ptr(this);
	// instantiate states && add substates of machine


	stage = s_Enter;
}

changeDirection::~changeDirection() {
}

int changeDirection::initial() {
	return 0;
}

void changeDirection::Execute() {
	StateMachine::Execute();
}
