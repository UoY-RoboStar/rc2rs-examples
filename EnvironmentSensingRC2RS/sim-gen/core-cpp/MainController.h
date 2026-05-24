#ifndef ROBOCALC_CONTROLLERS_MAINCONTROLLER_H_
#define ROBOCALC_CONTROLLERS_MAINCONTROLLER_H_

#include "SensingVehicle.h"
#include "Controller.h"
#include "ChannelTypes.h"

class MainController: public robochart::Controller {
public:
	MainController(
			std::shared_ptr<SensingVehicle> R_SensingVehicle, 
			std::shared_ptr<robochart::turn_channel> turn,
			std::shared_ptr<robochart::stop_channel> stop,
			std::shared_ptr<robochart::s_channel> s,
			std::shared_ptr<robochart::resume_channel> resume);
	virtual ~MainController();
	virtual void Execute();

private:
	std::shared_ptr<robochart::turn_channel> turn;
	std::shared_ptr<robochart::stop_channel> stop;
	std::shared_ptr<robochart::s_channel> s;
	std::shared_ptr<robochart::resume_channel> resume;
private:
	std::shared_ptr<SensingVehicle> R_SensingVehicle;

};

#endif
