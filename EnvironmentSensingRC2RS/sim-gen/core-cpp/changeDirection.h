#ifndef ROBOCALC_OPERATIONS_CHANGEDIRECTION_H_
#define ROBOCALC_OPERATIONS_CHANGEDIRECTION_H_

#include "State.h"
#include "SensingVehicle.h"
#include "Functions.h"
#include "DataTypes.h"

#define OP_DEBUG

class changeDirection: public robochart::StateMachine {
	public:
		std::shared_ptr<SensingVehicle> R_SensingVehicle;

	public:
		Loc l;
	public:
		changeDirection(
				std::shared_ptr<SensingVehicle> R_SensingVehicle);
		~changeDirection();
		int initial();
		virtual void Execute();

	public:

	public:
};

#endif
