#ifndef ROBOCALC_CONTROLLERS_FINDER_H_
#define ROBOCALC_CONTROLLERS_FINDER_H_

#include "Drone.h"
#include "RoboCalcAPI/Controller.h"
#include "DataTypes.h"

#include "FinderM.h"

class Finder: public robocalc::Controller 
{
public:
	Finder(Drone& _platform) : platform(&_platform){};
	Finder() : platform(nullptr){};
	
	~Finder() = default;
	
	void Execute()
	{
		finderM.execute();
	}
	
	struct Channels
	{
		Finder& instance;
		Channels(Finder& _instance) : instance(_instance) {}
		
		EventBuffer* tryEmitFound(void* sender, std::tuple<> args)
		{
			if(instance.finderM.canReceiveFound(args))
				instance.finderM.found_in.trigger(sender, args);
				
			return &instance.finderM.found_in;
		}
		
		EventBuffer* tryEmitLand(void* sender, std::tuple<> args)
		{
			land_in.trigger(sender, args);
			return &land_in;
		}
		
		EventBuffer* tryEmitTakeoff(void* sender, std::tuple<> args)
		{
			takeoff_in.trigger(sender, args);
			return &takeoff_in;
		}
		
		EventBuffer* tryEmitSwitchOn(void* sender, std::tuple<> args)
		{
			if(instance.finderM.canReceiveSwitchOn(args))
				instance.finderM.switchOn_in.trigger(sender, args);
				
			return &instance.finderM.switchOn_in;
		}
		
		EventBuffer* tryEmitOrigin(void* sender, std::tuple<> args)
		{
			if(instance.finderM.canReceiveOrigin(args))
				instance.finderM.origin_in.trigger(sender, args);
				
			return &instance.finderM.origin_in;
		}
		
		struct Land_t : public EventBuffer
		{
			THREAD_SAFE_ONLY(std::mutex _mutex;)
			std::tuple<> _args;
			void* _sender = nullptr;
			void* getSender() override
			{
				THREAD_SAFE_ONLY(std::lock_guard<std::mutex> lock{_mutex};)
				return _sender;
			}
			
			void reset() override
			{
				THREAD_SAFE_ONLY(std::lock_guard<std::mutex> lock{_mutex};)
				_sender = nullptr;
			}
			
			void trigger(void* sender, std::tuple<> args)
			{
				THREAD_SAFE_ONLY(std::lock_guard<std::mutex> lock{_mutex};)
				_sender = sender;
			}
		} land_in;
		struct Takeoff_t : public EventBuffer
		{
			THREAD_SAFE_ONLY(std::mutex _mutex;)
			std::tuple<> _args;
			void* _sender = nullptr;
			void* getSender() override
			{
				THREAD_SAFE_ONLY(std::lock_guard<std::mutex> lock{_mutex};)
				return _sender;
			}
			
			void reset() override
			{
				THREAD_SAFE_ONLY(std::lock_guard<std::mutex> lock{_mutex};)
				_sender = nullptr;
			}
			
			void trigger(void* sender, std::tuple<> args)
			{
				THREAD_SAFE_ONLY(std::lock_guard<std::mutex> lock{_mutex};)
				_sender = sender;
			}
		} takeoff_in;
	};
	
	Channels channels{*this};
	
	Drone* platform;
	FinderM_StateMachine<Finder> finderM{*platform, *this, &finderM};
};

#endif
