#ifndef ROBOCALC_OPERATIONS_STOP_H_
#define ROBOCALC_OPERATIONS_STOP_H_

#include "State.h"
#include "SensingVehicle.h"
#include "Functions.h"

#define OP_DEBUG

class stop: public robochart::StateMachine {
	public:
		std::shared_ptr<SensingVehicle> R_SensingVehicle;

	public:
		stop(
				std::shared_ptr<SensingVehicle> R_SensingVehicle);
		~stop();
		int initial();
		virtual void Execute();

	public:

	public:
};

#endif
