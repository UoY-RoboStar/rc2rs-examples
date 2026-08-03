#ifndef ROBOCALC_CONTROLLERS_MOVEMENTC_H_
#define ROBOCALC_CONTROLLERS_MOVEMENTC_H_

#include "ePuck.h"
#include "RoboCalcAPI/Controller.h"
#include "DataTypes.h"

#include "Movement.h"

class MovementC: public robocalc::Controller 
{
public:
	MovementC(ePuck& _platform) : platform(&_platform){};
	MovementC() : platform(nullptr){};
	
	~MovementC() = default;
	
	void Execute()
	{
		movement.execute();
	}
	
	struct Channels
	{
		MovementC& instance;
		Channels(MovementC& _instance) : instance(_instance) {}
		
		EventBuffer* tryEmitNeighbours(void* sender, std::tuple<unsigned int> args)
		{
			if(instance.movement.canReceiveNeighbours(args))
				instance.movement.neighbours_in.trigger(sender, args);
				
			return &instance.movement.neighbours_in;
		}
		
		EventBuffer* tryEmitObstacle(void* sender, std::tuple<Position> args)
		{
			if(instance.movement.canReceiveObstacle(args))
				instance.movement.obstacle_in.trigger(sender, args);
				
			return &instance.movement.obstacle_in;
		}
		
	};
	
	Channels channels{*this};
	
	ePuck* platform;
	Movement_StateMachine<MovementC> movement{*platform, *this, &movement};
};

#endif
