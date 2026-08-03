#ifndef ROBOCALC_CONTROLLERS_CTRLTAXI_H_
#define ROBOCALC_CONTROLLERS_CTRLTAXI_H_

#include "robotTaxi.h"
#include "RoboCalcAPI/Controller.h"
#include "DataTypes.h"

#include "SwarmTaxisFSM.h"

class ctrlTaxi: public robocalc::Controller 
{
public:
	ctrlTaxi(robotTaxi& _platform) : platform(&_platform){};
	ctrlTaxi() : platform(nullptr){};
	
	~ctrlTaxi() = default;
	
	void Execute()
	{
		swarmTaxisFSM.execute();
	}
	
	struct Channels
	{
		ctrlTaxi& instance;
		Channels(ctrlTaxi& _instance) : instance(_instance) {}
		
	};
	
	Channels channels{*this};
	
	robotTaxi* platform;
	SwarmTaxisFSM_StateMachine<ctrlTaxi> swarmTaxisFSM{*platform, *this, &swarmTaxisFSM};
};

#endif
