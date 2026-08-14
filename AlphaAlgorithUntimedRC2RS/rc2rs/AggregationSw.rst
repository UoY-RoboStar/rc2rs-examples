package pre_pkg_main_sim module AggregationSoftware {
	connection ePuck on receive to ctrl_ref1 on receive ( _async ) [ mult ]
	connection ePuck on broadcast to ctrl_ref1 on broadcast ( _async ) [ mult ]
	connection ePuck on obstacle to ctrl_ref0 on obstacle ( _async )
	connection ctrl_ref1 on robots to ctrl_ref0 on neighbours ( _async )
	robotic platform ePuck {
		provides MovingHw event obstacle : main::Position
		event broadcast : main::ID
		event receive : main::ID * main::ID
	}

	cref ctrl_ref0 = pre_pkg__sim::MovementC
	cref ctrl_ref1 = pre_pkg__sim::CommunicationC
	cycleDef cycle == 1
}

 interface MovingHw { 
	move( l : real , a : real) 
}

  