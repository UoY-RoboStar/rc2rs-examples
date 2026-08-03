#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/bool.hpp"

#include "SimMovement_interface/msg/stop.hpp"
#include "SimMovement_interface/msg/move.hpp"


extern "C" {
#include "SimMovement_PI.h"
}

FILE* log_file;

using namespace std::chrono_literals;

/*
	for each channel of the parallel block (likely start and end), define the create, send
	and receive functions. The receive function is not likely to be used in the ROS
	implementation, but the send function should use the publisher of the appropriate
	platform event.
*/

typedef struct sm_input_Enum_Channel{
	/* 
		for each input event, declare variable of type subscription. e.g.,
		rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr SetQuietCleaningModeEnd;  	
	*/
	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr obstacle;

	/*	
		for each input variable, declare variable of type publisher. e.g.,
		rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr set_nightTime;
	*/
} sm_input_Enum_Channel;

typedef struct sm_output_Enum_Channel {
	/* 
		for each output event, declare variable of type publisher. e.g.,
		rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr UndockStart;
	*/

	/*	
		for each output variable, declare variable of type publisher. e.g.,
		rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr UndockStart;
	*/
	
	/*	
		for each output operation, declare variable of type publisher.
	*/
	rclcpp::Publisher<SimMovement_interface::msg::Stop>::SharedPtr stop;
	rclcpp::Publisher<SimMovement_interface::msg::Move>::SharedPtr move;
} sm_output_Enum_Channel;

namespace SimMovement
{
	class Sm : public rclcpp::Node
	{
	public:
		Sm() : Node("sm")
	    {
	    	RCLCPP_INFO(this->get_logger(), "Initialising node Sm");      
			/* initialise state, inputstate, and memory */
			
			inputstate = init_inputstate();
			state = init_state();
			memory = init_memorystate();
			
			start_sm = create_sm_input_Enum_Channel();
			end_sm = create_sm_output_Enum_Channel();    	
			
			auto timer_callback = [this]() -> void {
        		this->cycle_step();
      		};
      		
      		timer_ = this->create_wall_timer(500ms, timer_callback);
		};
		
		void reset_inputs() {
			// for each input platform event, set it to false in inputstate.
			inputstate.obstacle = false;
		}
	
	private:
		sm_inputstate inputstate;
    	sm_state state;
    	sm_memory memory;
    	
    	sm_input_Enum_Channel* start_sm;
    	sm_output_Enum_Channel* end_sm;    	
    	
    	sm_input_Enum_Channel* create_sm_input_Enum_Channel() {
    		sm_input_Enum_Channel* aux = new sm_input_Enum_Channel();
    		auto obstacle_callback = [this](std_msgs::msg::Bool::UniquePtr msg) -> void
    		{
    			RCLCPP_INFO(this->get_logger(), "Input event obstacle received.");
    			inputstate.obstacle = true;
    		};
    		aux->obstacle = this->create_subscription<std_msgs::msg::Bool>("obstacle", 10, obstacle_callback);
    		
    		/*
				for each input variable, create a callback function that records the occurrence of the event and
				its value in inputstate, and subscribe to the appropriate topic.
			*/
			
			
			return aux;	
    	}
    	
    	sm_output_Enum_Channel* create_sm_output_Enum_Channel() {
    		sm_output_Enum_Channel* aux = new sm_output_Enum_Channel();
			
			
			
			/* 
				TODO: Define publisher for operation call stop. 
				This requires the definition of tailored messages for the parameters of the
				operation. Alternatively, we could use ROS Actions, but the extra facilities
				(feedback, preemption, etc) are not needed.
			*/
			aux->stop = this->create_publisher<SimMovement_interface::msg::stop>("stop", 10);
			/* 
				TODO: Define publisher for operation call move. 
				This requires the definition of tailored messages for the parameters of the
				operation. Alternatively, we could use ROS Actions, but the extra facilities
				(feedback, preemption, etc) are not needed.
			*/
			aux->move = this->create_publisher<SimMovement_interface::msg::move>("move", 10);
			
			return aux;
    	}	
    	
    	rclcpp::TimerBase::SharedPtr timer_;
    	
    	void cycle_step() {
    		RCLCPP_INFO(this->get_logger(), "Running one step of sm.");
    		RESULT_Enum ret = create_RESULT_CONT();
    		while (	ret.type == create_RESULT_CONT().type) {
    			char* temp_;
    			temp_ = print_sm_state(&state);
				{
					char _s0[256];
					sprintf(_s0, "%s", temp_);
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				free(temp_);
				ret = stm_sm_step(&state, &inputstate, &memory, end_sm);
			}
			{
				send_sm_output_Enum_Channel(end_sm, create_sm_output__done_());
			}
			reset_inputs();
    	}
};
}

int main(int argc, char **argv)
{
  log_file = fopen("sm.log", "w");
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimMovement::Sm>());
  rclcpp::shutdown();
  return 0;
}

void send_sm_output_Enum_Channel(sm_output_Enum_Channel* ch, sm_output_Enum value) {
	// Pattern match events, and send them through the appropriate publisher
	switch (value.type) {
		
		case sm_output_stop: {
			auto msg = SimMovement_interface::msg::Stop();
			msg.enabled = true;
			ch->stop->publish(msg);
			break;
		}
		case sm_output_move: {
			auto msg = SimMovement_interface::msg::Move();
			auto data = value.data.move;
			msg.enabled = true;
			msg.lv = data.v1;
			msg.av = data.v2;
			ch->move->publish(msg);
			break;
		}
		default:
			break;
	}
}

sm_output_Enum receive_sm_output_Enum_Channel(sm_output_Enum_Channel* ch) {
	// This does not make sense, but may be needed because of the platform independent definition.
	// Log an error message in case it is ever used.
	fprintf(log_file, "ERROR: Function call 'receive_sm_output_Enum_Channel'. Attempting to receive data on an output event.\n");
	throw std::runtime_error("Attempting to receive data on an output event.");
}



void send_sm_input_Enum_Channel(sm_input_Enum_Channel* ch, sm_input_Enum value) {
	// This does not make sense, but may be needed because of the platform independent definition.
	// Log an error message in case it is ever used.
	fprintf(log_file, "ERROR: Function call 'send_sm_input_Enum_Channel'. Attempting to send data on an input event.\n");
	throw std::runtime_error("Attempting to send data on an input event.");
}

sm_input_Enum receive_sm_input_Enum_Channel(sm_input_Enum_Channel* ch) {
	// This is not needed as the input event handlers directly record the event in the inputstate.
	// Log a message indicating that this function was called.
	fprintf(log_file, "ERROR: Function call 'receive_sm_input_Enum_Channel'. Function receive_stm0_input_Enum_Channel is not needed and should not be used in PD ROS code.\n");
	throw std::runtime_error("Function receive_stm0_input_Enum_Channel is not needed and should not be used in PD ROS code.");	
}

