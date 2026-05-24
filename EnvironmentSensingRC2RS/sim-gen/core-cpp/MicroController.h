#ifndef ROBOCALC_CONTROLLERS_MICROCONTROLLER_H_
#define ROBOCALC_CONTROLLERS_MICROCONTROLLER_H_

#include "SensingVehicle.h"
#include "Controller.h"
#include "ChannelTypes.h"

class MicroController: public robochart::Controller {
public:
	MicroController(
			std::shared_ptr<SensingVehicle> R_SensingVehicle, 
			std::shared_ptr<robochart::turn_channel> turn,
			std::shared_ptr<robochart::obstacle_channel> obstacle,
			std::shared_ptr<robochart::flag_channel> flag,
			std::shared_ptr<robochart::stop_channel> stop,
			std::shared_ptr<robochart::resume_channel> resume,
			std::shared_ptr<robochart::odometer_channel> odometer);
	virtual ~MicroController();
	virtual void Execute();

private:
	std::shared_ptr<robochart::turn_channel> turn;
	std::shared_ptr<robochart::obstacle_channel> obstacle;
	std::shared_ptr<robochart::flag_channel> flag;
	std::shared_ptr<robochart::stop_channel> stop;
	std::shared_ptr<robochart::resume_channel> resume;
	std::shared_ptr<robochart::odometer_channel> odometer;
private:
	std::shared_ptr<SensingVehicle> R_SensingVehicle;

};

#endif
