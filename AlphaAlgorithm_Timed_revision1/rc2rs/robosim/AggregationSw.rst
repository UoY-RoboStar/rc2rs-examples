package pkg1096_AggregationSoftware_sim module AggregationSoftware {
	connection ePuck on obstacle to ctrl_ref0 on obstacle ( _async )
	connection ePuck on receive to ctrl_ref1 on receive ( _async ) [ mult ]
	connection ePuck on broadcast to ctrl_ref1 on broadcast ( _async ) [ mult ]
	connection ctrl_ref1 on robots to ctrl_ref0 on neighbours ( _async )
	robotic platform ePuck {
		provides pkg1096_::MovingHw event obstacle : AggregationSoftware::Position
		event broadcast : AggregationSoftware::ID
		event receive : AggregationSoftware::ID * AggregationSoftware::ID
	}

	cref ctrl_ref0 = pkg1096__sim::MovementC
	cref ctrl_ref1 = pkg1096__sim::CommunicationC
	cycleDef cycle == 1
}

