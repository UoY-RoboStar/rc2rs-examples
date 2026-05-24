#ifndef ROBOCALC_CHANNEL_TYPES_H_
#define ROBOCALC_CHANNEL_TYPES_H_

#include "Channel.h"
#include "Event.h"

namespace robochart {
	typedef Channel<> resume_channel;
	typedef Event<> resume_event;
	typedef Channel<Optional<std::vector<double>>> s_channel;
	typedef Event<Optional<std::vector<double>>> s_event;
	typedef Channel<> flag_channel;
	typedef Event<> flag_event;
	typedef Channel<> stop_channel;
	typedef Event<> stop_event;
	typedef Channel<Optional<double>> odometer_channel;
	typedef Event<Optional<double>> odometer_event;
	typedef Channel<Optional<double>> turn_channel;
	typedef Event<Optional<double>> turn_event;
	typedef Channel<Optional<Loc>> obstacle_channel;
	typedef Event<Optional<Loc>> obstacle_event;
}

#endif

