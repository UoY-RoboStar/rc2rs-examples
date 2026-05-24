#ifndef ROBOCALC_ROBOT_SENSINGVEHICLE_H_
#define ROBOCALC_ROBOT_SENSINGVEHICLE_H_

#include "Operations.h"
#include "ChannelTypes.h"

class SensingVehicle: public Operations {
public:
	SensingVehicle(
		std::shared_ptr<robochart::flag_channel> flag,
		std::shared_ptr<robochart::s_channel> s,
		std::shared_ptr<robochart::obstacle_channel> obstacle,
		std::shared_ptr<robochart::odometer_channel> odometer);
	virtual ~SensingVehicle();
	void Sensors();
	void Actuators();
private:
	std::shared_ptr<robochart::flag_channel> flag;
	std::shared_ptr<robochart::s_channel> s;
	std::shared_ptr<robochart::obstacle_channel> obstacle;
	std::shared_ptr<robochart::odometer_channel> odometer;
};

#endif
