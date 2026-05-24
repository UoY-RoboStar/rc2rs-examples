#ifndef ROBOCALC_MODULE_ENVIRONMENTALSENSING_H_
#define ROBOCALC_MODULE_ENVIRONMENTALSENSING_H_

#include "SensingVehicle.h"
#include "MicroController.h"
#include "MainController.h"
#include "ChannelTypes.h"

class EnvironmentalSensing {
public:
	EnvironmentalSensing() :
			EnvironmentalSensing_SensingVehicle(nullptr),
			EnvironmentalSensing_MicroController(nullptr),
			EnvironmentalSensing_MainController(nullptr),
			s(std::make_shared<robochart::s_channel>("s")),
			stop(std::make_shared<robochart::stop_channel>("stop")),
			obstacle(std::make_shared<robochart::obstacle_channel>("obstacle")),
			flag(std::make_shared<robochart::flag_channel>("flag")),
			resume(std::make_shared<robochart::resume_channel>("resume")),
			odometer(std::make_shared<robochart::odometer_channel>("odometer")),
			turn(std::make_shared<robochart::turn_channel>("turn"))
			 {}
	virtual ~EnvironmentalSensing() {}

	void Init();
	void Execute();

private:
	std::shared_ptr<robochart::s_channel> s;
	std::shared_ptr<robochart::stop_channel> stop;
	std::shared_ptr<robochart::obstacle_channel> obstacle;
	std::shared_ptr<robochart::flag_channel> flag;
	std::shared_ptr<robochart::resume_channel> resume;
	std::shared_ptr<robochart::odometer_channel> odometer;
	std::shared_ptr<robochart::turn_channel> turn;
	std::shared_ptr<SensingVehicle> EnvironmentalSensing_SensingVehicle;
	std::shared_ptr<MicroController> EnvironmentalSensing_MicroController;
	std::shared_ptr<MainController> EnvironmentalSensing_MainController;
};

#endif
