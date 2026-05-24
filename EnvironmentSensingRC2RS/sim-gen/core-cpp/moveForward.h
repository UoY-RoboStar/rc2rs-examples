#ifndef ROBOCALC_OPERATIONS_MOVEFORWARD_H_
#define ROBOCALC_OPERATIONS_MOVEFORWARD_H_

#include "State.h"
#include "SensingVehicle.h"
#include "Functions.h"

#define OP_DEBUG

class moveForward: public robochart::StateMachine {
	public:
		std::shared_ptr<SensingVehicle> R_SensingVehicle;

	public:
		moveForward(
				std::shared_ptr<SensingVehicle> R_SensingVehicle);
		~moveForward();
		int initial();
		virtual void Execute();

	public:

	public:
};

#endif
