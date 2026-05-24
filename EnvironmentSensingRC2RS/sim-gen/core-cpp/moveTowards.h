#ifndef ROBOCALC_OPERATIONS_MOVETOWARDS_H_
#define ROBOCALC_OPERATIONS_MOVETOWARDS_H_

#include "State.h"
#include "SensingVehicle.h"
#include "Functions.h"
#include "DataTypes.h"

#define OP_DEBUG

class moveTowards: public robochart::StateMachine {
	public:
		std::shared_ptr<SensingVehicle> R_SensingVehicle;

	public:
		double a;
	public:
		moveTowards(
				std::shared_ptr<SensingVehicle> R_SensingVehicle);
		~moveTowards();
		int initial();
		virtual void Execute();

	public:

	public:
};

#endif
