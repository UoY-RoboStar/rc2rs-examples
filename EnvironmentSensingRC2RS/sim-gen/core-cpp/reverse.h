#ifndef ROBOCALC_OPERATIONS_REVERSE_H_
#define ROBOCALC_OPERATIONS_REVERSE_H_

#include "State.h"
#include "SensingVehicle.h"
#include "Functions.h"

#define OP_DEBUG

class reverse: public robochart::StateMachine {
	public:
		std::shared_ptr<SensingVehicle> R_SensingVehicle;

	public:
		reverse(
				std::shared_ptr<SensingVehicle> R_SensingVehicle);
		~reverse();
		int initial();
		virtual void Execute();

	public:

	public:
};

#endif
