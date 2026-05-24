#include "SensingVehicle.h"

SensingVehicle::SensingVehicle(
		std::shared_ptr<robochart::flag_channel> flag,
		std::shared_ptr<robochart::s_channel> s,
		std::shared_ptr<robochart::obstacle_channel> obstacle,
		std::shared_ptr<robochart::odometer_channel> odometer):
		flag(flag), s(s), obstacle(obstacle), odometer(odometer), Operations() 
		{}

SensingVehicle::~SensingVehicle() {}


void SensingVehicle::Sensors() {
	Operations::Sensors();
}

void SensingVehicle::Actuators() {
	Operations::Actuators();
}

