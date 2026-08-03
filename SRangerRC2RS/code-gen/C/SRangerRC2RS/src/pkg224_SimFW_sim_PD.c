#define _POSIX_C_SOURCE 200112L

#include "pkg224_SimFW_sim_PD.h"


/* Implementations of channels for the terminal version */
typedef struct sm_output_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	sm_output_Enum value;
} sm_output_Enum_Channel;

sm_output_Enum_Channel* create_sm_output_Enum_Channel() {
	sm_output_Enum_Channel* aux = (sm_output_Enum_Channel*)malloc(sizeof(sm_output_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_sm_output_Enum_Channel(sm_output_Enum_Channel* ch, sm_output_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

sm_output_Enum receive_sm_output_Enum_Channel(sm_output_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	sm_output_Enum aux = ch->value;
	return aux;
}
typedef struct M_SimCMovement_input_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	M_SimCMovement_input_Enum value;
} M_SimCMovement_input_Enum_Channel;

M_SimCMovement_input_Enum_Channel* create_M_SimCMovement_input_Enum_Channel() {
	M_SimCMovement_input_Enum_Channel* aux = (M_SimCMovement_input_Enum_Channel*)malloc(sizeof(M_SimCMovement_input_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch, M_SimCMovement_input_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

M_SimCMovement_input_Enum receive_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	M_SimCMovement_input_Enum aux = ch->value;
	return aux;
}
typedef struct C_ctrl_ref0_input_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	C_ctrl_ref0_input_Enum value;
} C_ctrl_ref0_input_Enum_Channel;

C_ctrl_ref0_input_Enum_Channel* create_C_ctrl_ref0_input_Enum_Channel() {
	C_ctrl_ref0_input_Enum_Channel* aux = (C_ctrl_ref0_input_Enum_Channel*)malloc(sizeof(C_ctrl_ref0_input_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_C_ctrl_ref0_input_Enum_Channel(C_ctrl_ref0_input_Enum_Channel* ch, C_ctrl_ref0_input_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

C_ctrl_ref0_input_Enum receive_C_ctrl_ref0_input_Enum_Channel(C_ctrl_ref0_input_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	C_ctrl_ref0_input_Enum aux = ch->value;
	return aux;
}
typedef struct stm_ref0_input_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	stm_ref0_input_Enum value;
} stm_ref0_input_Enum_Channel;

stm_ref0_input_Enum_Channel* create_stm_ref0_input_Enum_Channel() {
	stm_ref0_input_Enum_Channel* aux = (stm_ref0_input_Enum_Channel*)malloc(sizeof(stm_ref0_input_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_stm_ref0_input_Enum_Channel(stm_ref0_input_Enum_Channel* ch, stm_ref0_input_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

stm_ref0_input_Enum receive_stm_ref0_input_Enum_Channel(stm_ref0_input_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	stm_ref0_input_Enum aux = ch->value;
	return aux;
}
typedef struct C_cm_input_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	C_cm_input_Enum value;
} C_cm_input_Enum_Channel;

C_cm_input_Enum_Channel* create_C_cm_input_Enum_Channel() {
	C_cm_input_Enum_Channel* aux = (C_cm_input_Enum_Channel*)malloc(sizeof(C_cm_input_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch, C_cm_input_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

C_cm_input_Enum receive_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	C_cm_input_Enum aux = ch->value;
	return aux;
}
typedef struct sm_input_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	sm_input_Enum value;
} sm_input_Enum_Channel;

sm_input_Enum_Channel* create_sm_input_Enum_Channel() {
	sm_input_Enum_Channel* aux = (sm_input_Enum_Channel*)malloc(sizeof(sm_input_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_sm_input_Enum_Channel(sm_input_Enum_Channel* ch, sm_input_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

sm_input_Enum receive_sm_input_Enum_Channel(sm_input_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	sm_input_Enum aux = ch->value;
	return aux;
}
typedef struct M_SimCMovement_output_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	M_SimCMovement_output_Enum value;
} M_SimCMovement_output_Enum_Channel;

M_SimCMovement_output_Enum_Channel* create_M_SimCMovement_output_Enum_Channel() {
	M_SimCMovement_output_Enum_Channel* aux = (M_SimCMovement_output_Enum_Channel*)malloc(sizeof(M_SimCMovement_output_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch, M_SimCMovement_output_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

M_SimCMovement_output_Enum receive_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	M_SimCMovement_output_Enum aux = ch->value;
	return aux;
}
typedef struct stm_ref0_output_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	stm_ref0_output_Enum value;
} stm_ref0_output_Enum_Channel;

stm_ref0_output_Enum_Channel* create_stm_ref0_output_Enum_Channel() {
	stm_ref0_output_Enum_Channel* aux = (stm_ref0_output_Enum_Channel*)malloc(sizeof(stm_ref0_output_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_stm_ref0_output_Enum_Channel(stm_ref0_output_Enum_Channel* ch, stm_ref0_output_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

stm_ref0_output_Enum receive_stm_ref0_output_Enum_Channel(stm_ref0_output_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	stm_ref0_output_Enum aux = ch->value;
	return aux;
}
typedef struct C_cm_output_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	C_cm_output_Enum value;
} C_cm_output_Enum_Channel;

C_cm_output_Enum_Channel* create_C_cm_output_Enum_Channel() {
	C_cm_output_Enum_Channel* aux = (C_cm_output_Enum_Channel*)malloc(sizeof(C_cm_output_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch, C_cm_output_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

C_cm_output_Enum receive_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	C_cm_output_Enum aux = ch->value;
	return aux;
}
typedef struct M_CMovement_input_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	M_CMovement_input_Enum value;
} M_CMovement_input_Enum_Channel;

M_CMovement_input_Enum_Channel* create_M_CMovement_input_Enum_Channel() {
	M_CMovement_input_Enum_Channel* aux = (M_CMovement_input_Enum_Channel*)malloc(sizeof(M_CMovement_input_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_M_CMovement_input_Enum_Channel(M_CMovement_input_Enum_Channel* ch, M_CMovement_input_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

M_CMovement_input_Enum receive_M_CMovement_input_Enum_Channel(M_CMovement_input_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	M_CMovement_input_Enum aux = ch->value;
	return aux;
}
typedef struct M_CMovement_output_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	M_CMovement_output_Enum value;
} M_CMovement_output_Enum_Channel;

M_CMovement_output_Enum_Channel* create_M_CMovement_output_Enum_Channel() {
	M_CMovement_output_Enum_Channel* aux = (M_CMovement_output_Enum_Channel*)malloc(sizeof(M_CMovement_output_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_M_CMovement_output_Enum_Channel(M_CMovement_output_Enum_Channel* ch, M_CMovement_output_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

M_CMovement_output_Enum receive_M_CMovement_output_Enum_Channel(M_CMovement_output_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	M_CMovement_output_Enum aux = ch->value;
	return aux;
}
typedef struct C_ctrl_ref0_output_Enum_Channel {
	pthread_barrier_t can_write, can_read;
	C_ctrl_ref0_output_Enum value;
} C_ctrl_ref0_output_Enum_Channel;

C_ctrl_ref0_output_Enum_Channel* create_C_ctrl_ref0_output_Enum_Channel() {
	C_ctrl_ref0_output_Enum_Channel* aux = (C_ctrl_ref0_output_Enum_Channel*)malloc(sizeof(C_ctrl_ref0_output_Enum_Channel));
	pthread_barrier_init(&aux->can_read, NULL, 2);
	pthread_barrier_init(&aux->can_write, NULL, 2);
	return aux;
}

void send_C_ctrl_ref0_output_Enum_Channel(C_ctrl_ref0_output_Enum_Channel* ch, C_ctrl_ref0_output_Enum value) {
	pthread_barrier_wait(&ch->can_write);
	ch->value = value;
	pthread_barrier_wait(&ch->can_read);
}

C_ctrl_ref0_output_Enum receive_C_ctrl_ref0_output_Enum_Channel(C_ctrl_ref0_output_Enum_Channel* ch) {
	pthread_barrier_wait(&ch->can_write);
	pthread_barrier_wait(&ch->can_read);
	C_ctrl_ref0_output_Enum aux = ch->value;
	return aux;
}


/* thread functions */
void *control(void *arg) {
	control_Channels* channels = (control_Channels*) arg;
	M_SimCMovement_output_Enum_Channel* end_SimCMovement = channels->end_SimCMovement;
	M_SimCMovement_input_Enum_Channel* start_SimCMovement = channels->start_SimCMovement;
{
	bool terminate__ = false;
	while (!terminate__) {
		{
			bool inputdone = false;
			while (!inputdone) {
				{
					char _s0[256];
					sprintf(_s0, "%s", "Enter an event:");
					printf("%s", _s0);
				}
				char* _event_;
				char _temp_0[256];
				if (fgets(_temp_0, sizeof(_temp_0), stdin) == NULL) exit (0);
				_event_ = trim(_temp_0,NULL);
				if (strcmp(_event_, "") == 0) {
					{
						send_M_SimCMovement_input_Enum_Channel(start_SimCMovement, create_M_SimCMovement_input__done_());
					}
					inputdone = true;
				}
				else if (strcmp(_event_, "obstacle") == 0) {
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "Found event obstacle");
				     		printf("%s\n", _s0);}
				     	{
				     		send_M_SimCMovement_input_Enum_Channel(start_SimCMovement, create_M_SimCMovement_input_obstacle());
				     	}
				     }
				else if (strcmp(_event_, "$end") == 0) {
				     	{
				     		send_M_SimCMovement_input_Enum_Channel(start_SimCMovement, create_M_SimCMovement_input__terminate_());
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "Terminating system. Final cycle will run before this program ends.");
				     		printf("%s\n", _s0);}
				     	terminate__ = true;
				     	inputdone = true;
				     }
				else {
					{
						char _s0[256];
						sprintf(_s0, "%s%s", "Unknown event: ", _event_);
						printf("%s\n", _s0);}
				}
			}
		}
		{
			bool outputdone = false;
			while (!outputdone) {
				M_SimCMovement_output_Enum _output_;
				{	
					_output_ = receive_M_SimCMovement_output_Enum_Channel(end_SimCMovement);	
				}
				if (_output_.type == M_SimCMovement_output_stop) {
					{
						char _s0[256];
						sprintf(_s0, "%s", "output stop");
						printf("%s\n", _s0);}
				}
				else if (_output_.type == M_SimCMovement_output__move) {
				     	float _aux1_ = _output_.data._move.v1;	
				     	float _aux2_ = _output_.data._move.v2;	
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "output move");
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "(");
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%f", _aux1_);
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", ",");
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%f", _aux2_);
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", ")");
				     		printf("%s\n", _s0);}
				     }
				else if (_output_.type == M_SimCMovement_output__done_) {
				     	outputdone = true;
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "---------------------");
				     		printf("%s\n", _s0);}
				     }
			}
			
		}
	}
}
}

/* thread functions */
void *stm_stm_ref0(void *arg) {
	stm_stm_ref0_Channels* channels = (stm_stm_ref0_Channels*) arg;
	stm_ref0_input_Enum_Channel* start_stm_ref0 = channels->start_stm_ref0;
	stm_ref0_output_Enum_Channel* end_stm_ref0 = channels->end_stm_ref0;
{
	// state machine variable declarations;
	struct stm_ref0_inputstate inputstate = (struct stm_ref0_inputstate) {
	                                        	.obstacle = false,
	                                        	._clock_MBC = 0,
	                                        	._transition_ = create_TRANSITIONS_stm_ref0_NONE()
	                                        };
	struct stm_ref0_state state = (struct stm_ref0_state) {
	                              	.done = false,
	                              	.state = create_STATES_stm_ref0_NONE(),
	                              	.target_state = create_STATES_stm_ref0_NONE(),
	                              	.status = create_STATUS_ENTER_STATE(),
	                              	.s_Moving = (struct stm_ref0_Moving_state) {
	                              		.done = false,
	                              		.state = create_STATES_stm_ref0_Moving_NONE(),
	                              		.target_state = create_STATES_stm_ref0_Moving_NONE(),
	                              		.status = create_STATUS_ENTER_STATE(),
	                              		.tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_done = false,
	                              		.tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_counter = 0
	                              	},
	                              	.s_Turning = (struct stm_ref0_Turning_state) {
	                              		.done = false,
	                              		.state = create_STATES_stm_ref0_Turning_NONE(),
	                              		.target_state = create_STATES_stm_ref0_Turning_NONE(),
	                              		.status = create_STATUS_ENTER_STATE(),
	                              		.tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_done = false,
	                              		.tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_counter = 0
	                              	},
	                              	.en_SMovement_Turning_1_done = false,
	                              	.en_SMovement_Turning_1_counter = 0,
	                              	.en_SMovement_Moving_1_done = false,
	                              	.en_SMovement_Moving_1_counter = 0,
	                              	.tr_SMovement_t2_done = false,
	                              	.tr_SMovement_t2_counter = 0
	                              };
	struct stm_ref0_memory memorystate = (struct stm_ref0_memory) {
	                                     	.PI = 0.0,
	                                     	.obstacleF = true,
	                                     	.lv = 0.0,
	                                     	.av = 0.0
	                                     };
	// state machine loop;
	while (!(state).done) {
		{
			{
				char _s0[256];
				sprintf(_s0, "%s", "- Waiting for input on channel start_stm_ref0");
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			bool inputDone = false;
			while (!inputDone) {
				stm_ref0_input_Enum _input_;
				{	
					_input_ = receive_stm_ref0_input_Enum_Channel(start_stm_ref0);	
				}
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Read input on channel start_stm_ref0");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				if (_input_.type == stm_ref0_input_obstacle) {
					(inputstate).obstacle = true;
				}
				else if (_input_.type == stm_ref0_input__done_) {
				     	inputDone = true;
				     }
				else if (_input_.type == stm_ref0_input__terminate_) {
				     	inputDone = true;
				     	(state).done = true;
				     }
			}
		}
		RESULT_Enum ret = create_RESULT_CONT();
		while (	ret.type == create_RESULT_CONT().type
		        ) {
			char* temp_;
			temp_ = print_stm_ref0_state(&state);
			{
				char _s0[256];
				sprintf(_s0, "%s", temp_);
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			free(temp_);
			ret = stm_stm_ref0_step(&state, &inputstate, &memorystate, end_stm_ref0);
		}
		{
			send_stm_ref0_output_Enum_Channel(end_stm_ref0, create_stm_ref0_output__done_());
		}
		// update clocks;
		(inputstate)._clock_MBC = ((inputstate)._clock_MBC + 1);
		// reset input events;
		(inputstate).obstacle = false;
		{
			char _s0[256];
			sprintf(_s0, "%s", "		Sent output _done_ on channel end_stm_ref0");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		
	}
}
}

/* thread functions */
void *ctrl_ctrl_ref0_thread(void *arg) {
	ctrl_ctrl_ref0_thread_Channels* channels = (ctrl_ctrl_ref0_thread_Channels*) arg;
	C_ctrl_ref0_input_Enum_Channel* start_ctrl_ref0 = channels->start_ctrl_ref0;
	stm_ref0_output_Enum_Channel* end_stm_ref0 = channels->end_stm_ref0;
	C_ctrl_ref0_output_Enum_Channel* end_ctrl_ref0 = channels->end_ctrl_ref0;
	stm_ref0_input_Enum_Channel* start_stm_ref0 = channels->start_stm_ref0;
{
	bool terminate__ = false;
	struct {
	    stm_ref0_input_Enum items[MAXQUEUE];
	    int start;
	    int end;
	} stm_stm_ref0_queue;
	stm_stm_ref0_queue.start = -1;
	stm_stm_ref0_queue.end = -1;
	
	stm_ref0_input_Enum stm_stm_ref0_queue_Dequeue() {
		if (stm_stm_ref0_queue.start == -1) {
			printf("ERROR: trying to dequeue value from an empty queue.\n");
			exit(-1);
		} else {
			stm_ref0_input_Enum value = stm_stm_ref0_queue.items[stm_stm_ref0_queue.start];
		    if (stm_stm_ref0_queue.start == stm_stm_ref0_queue.end) {
		        stm_stm_ref0_queue.start = stm_stm_ref0_queue.end = -1;
		    } else {
		        stm_stm_ref0_queue.start = (stm_stm_ref0_queue.start + 1)%MAXQUEUE;
		    }
		    return value;
		}
	}
	
	void stm_stm_ref0_queue_Enqueue(stm_ref0_input_Enum value) {
		if (stm_stm_ref0_queue.start == (stm_stm_ref0_queue.end +1)%MAXQUEUE) {
	        printf("ERROR: trying to enqueue a value on a full queue.\n");
	        return;
	    }
	
	    if (stm_stm_ref0_queue.start == -1) {
	        stm_stm_ref0_queue.start = 0;
	    }
	    stm_stm_ref0_queue.end = (stm_stm_ref0_queue.end + 1)%MAXQUEUE;
	    stm_stm_ref0_queue.items[stm_stm_ref0_queue.end] = value;
	}
	
	bool stm_stm_ref0_queue_isEmpty() {
		return stm_stm_ref0_queue.start == -1;
	}
	
	void stm_stm_ref0_queue_Clear() {
		stm_stm_ref0_queue.start = -1;
		stm_stm_ref0_queue.end = -1;
	}
	while (!terminate__) {
		while (!stm_stm_ref0_queue_isEmpty()) {
			stm_ref0_input_Enum ev = stm_stm_ref0_queue_Dequeue();
			{
				send_stm_ref0_input_Enum_Channel(start_stm_ref0, ev);
			}
		}
		{
			bool inputDone = false;
			while (!inputDone) {
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Waiting for input on channel start_ctrl_ref0");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				C_ctrl_ref0_input_Enum _input_;
				{	
					_input_ = receive_C_ctrl_ref0_input_Enum_Channel(start_ctrl_ref0);	
				}
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Read input on channel start_ctrl_ref0");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				if (_input_.type == C_ctrl_ref0_input_obstacle) {
					{
						send_stm_ref0_input_Enum_Channel(start_stm_ref0, create_stm_ref0_input_obstacle());
					}
				}
				else if (_input_.type == C_ctrl_ref0_input__done_) {
				     	{
				     		send_stm_ref0_input_Enum_Channel(start_stm_ref0, create_stm_ref0_input__done_());
				     	}
				     	inputDone = true;
				     }
				else if (_input_.type == C_ctrl_ref0_input__terminate_) {
				     	{
				     		send_stm_ref0_input_Enum_Channel(start_stm_ref0, create_stm_ref0_input__terminate_());
				     	}
				     	terminate__ = true;
				     	inputDone = true;
				     }
			}
			
		}
		{
			char _s0[256];
			sprintf(_s0, "%s", "	Finished reading inputs of controller ctrl_ref0");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		ctrl_ctrl_ref0_step(start_stm_ref0, end_stm_ref0);
		{
			bool outputDone = false;
			while (!outputDone) {
				stm_ref0_output_Enum _output_;
				{	
					_output_ = receive_stm_ref0_output_Enum_Channel(end_stm_ref0);	
				}
				if (_output_.type == stm_ref0_output__move) {
					float _aux1_ = _output_.data._move.v1;	
					float _aux2_ = _output_.data._move.v2;	
					{
						send_C_ctrl_ref0_output_Enum_Channel(end_ctrl_ref0, create_C_ctrl_ref0_output__move(_aux1_,_aux2_));
					}
				}
				else if (_output_.type == stm_ref0_output_stop) {
				     	{
				     		send_C_ctrl_ref0_output_Enum_Channel(end_ctrl_ref0, create_C_ctrl_ref0_output_stop());
				     	}
				     }
				else if (_output_.type == stm_ref0_output__done_) {
				     	outputDone = true;
				     }
			}
			
		}
		{
			send_C_ctrl_ref0_output_Enum_Channel(end_ctrl_ref0, create_C_ctrl_ref0_output__done_());
		}
	}
}
}

/* thread functions */
void *stm_sm(void *arg) {
	stm_sm_Channels* channels = (stm_sm_Channels*) arg;
	sm_input_Enum_Channel* start_sm = channels->start_sm;
	sm_output_Enum_Channel* end_sm = channels->end_sm;
{
	// state machine variable declarations;
	struct sm_inputstate inputstate = (struct sm_inputstate) {
	                                  	.obstacle = false,
	                                  	._clock_MBC = 0,
	                                  	._transition_ = create_TRANSITIONS_sm_NONE()
	                                  };
	struct sm_state state = (struct sm_state) {
	                        	.done = false,
	                        	.state = create_STATES_sm_NONE(),
	                        	.target_state = create_STATES_sm_NONE(),
	                        	.status = create_STATUS_ENTER_STATE(),
	                        	.en_SimSMovement_STurning_1_done = false,
	                        	.en_SimSMovement_STurning_1_counter = 0,
	                        	.en_SimSMovement_SMoving_1_done = false,
	                        	.en_SimSMovement_SMoving_1_counter = 0,
	                        	.tr_SimSMovement_t5_done = false,
	                        	.tr_SimSMovement_t5_counter = 0
	                        };
	struct sm_memory memorystate = (struct sm_memory) {
	                               	.PI = 0.0,
	                               	.lv = 0.0,
	                               	.av = 0.0
	                               };
	// state machine loop;
	while (!(state).done) {
		{
			{
				char _s0[256];
				sprintf(_s0, "%s", "- Waiting for input on channel start_sm");
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			bool inputDone = false;
			while (!inputDone) {
				sm_input_Enum _input_;
				{	
					_input_ = receive_sm_input_Enum_Channel(start_sm);	
				}
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Read input on channel start_sm");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				if (_input_.type == sm_input_obstacle) {
					(inputstate).obstacle = true;
				}
				else if (_input_.type == sm_input__done_) {
				     	inputDone = true;
				     }
				else if (_input_.type == sm_input__terminate_) {
				     	inputDone = true;
				     	(state).done = true;
				     }
			}
		}
		RESULT_Enum ret = create_RESULT_CONT();
		while (	ret.type == create_RESULT_CONT().type
		        ) {
			char* temp_;
			temp_ = print_sm_state(&state);
			{
				char _s0[256];
				sprintf(_s0, "%s", temp_);
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			free(temp_);
			ret = stm_sm_step(&state, &inputstate, &memorystate, end_sm);
		}
		{
			send_sm_output_Enum_Channel(end_sm, create_sm_output__done_());
		}
		// update clocks;
		(inputstate)._clock_MBC = ((inputstate)._clock_MBC + 1);
		// reset input events;
		(inputstate).obstacle = false;
		{
			char _s0[256];
			sprintf(_s0, "%s", "		Sent output _done_ on channel end_sm");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		
	}
}
}

/* thread functions */
void *mod_SimCMovement_thread(void *arg) {
	mod_SimCMovement_thread_Channels* channels = (mod_SimCMovement_thread_Channels*) arg;
	M_SimCMovement_input_Enum_Channel* start_SimCMovement = channels->start_SimCMovement;
	C_cm_output_Enum_Channel* end_cm = channels->end_cm;
	M_SimCMovement_output_Enum_Channel* end_SimCMovement = channels->end_SimCMovement;
	C_cm_input_Enum_Channel* start_cm = channels->start_cm;
{
	bool terminate__ = false;
	while (!terminate__) {
		{
			bool inputDone = false;
			while (!inputDone) {
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Waiting for input on channel start_SimCMovement");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				M_SimCMovement_input_Enum _input_;
				{	
					_input_ = receive_M_SimCMovement_input_Enum_Channel(start_SimCMovement);	
				}
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Read input on channel start_SimCMovement");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				if (_input_.type == M_SimCMovement_input_obstacle) {
					{
						send_C_cm_input_Enum_Channel(start_cm, create_C_cm_input_obstacle());
					}
				}
				else if (_input_.type == M_SimCMovement_input__done_) {
				     	{
				     		send_C_cm_input_Enum_Channel(start_cm, create_C_cm_input__done_());
				     	}
				     	inputDone = true;
				     }
				else if (_input_.type == M_SimCMovement_input__terminate_) {
				     	{
				     		send_C_cm_input_Enum_Channel(start_cm, create_C_cm_input__terminate_());
				     	}
				     	terminate__ = true;
				     	inputDone = true;
				     }
			}
			
		}
		{
			char _s0[256];
			sprintf(_s0, "%s", "Finished reading inputs of module SimCMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		mod_SimCMovement_step(start_cm, end_cm);
		{
			bool outputDone = false;
			while (!outputDone) {
				C_cm_output_Enum _output_;
				{	
					_output_ = receive_C_cm_output_Enum_Channel(end_cm);	
				}
				if (_output_.type == C_cm_output_stop) {
					{
						send_M_SimCMovement_output_Enum_Channel(end_SimCMovement, create_M_SimCMovement_output_stop());
					}
				}
				else if (_output_.type == C_cm_output__move) {
				     	float _aux1_ = _output_.data._move.v1;	
				     	float _aux2_ = _output_.data._move.v2;	
				     	{
				     		send_M_SimCMovement_output_Enum_Channel(end_SimCMovement, create_M_SimCMovement_output__move(_aux1_,_aux2_));
				     	}
				     }
				else if (_output_.type == C_cm_output__done_) {
				     	outputDone = true;
				     }
			}
			
		}
		{
			send_M_SimCMovement_output_Enum_Channel(end_SimCMovement, create_M_SimCMovement_output__done_());
		}
	}
}
}

/* thread functions */
void *control(void *arg) {
	control_Channels* channels = (control_Channels*) arg;
	M_CMovement_output_Enum_Channel* end_CMovement = channels->end_CMovement;
	M_CMovement_input_Enum_Channel* start_CMovement = channels->start_CMovement;
{
	bool terminate__ = false;
	while (!terminate__) {
		{
			bool inputdone = false;
			while (!inputdone) {
				{
					char _s0[256];
					sprintf(_s0, "%s", "Enter an event:");
					printf("%s", _s0);
				}
				char* _event_;
				char _temp_6[256];
				if (fgets(_temp_6, sizeof(_temp_6), stdin) == NULL) exit (0);
				_event_ = trim(_temp_6,NULL);
				if (strcmp(_event_, "") == 0) {
					{
						send_M_CMovement_input_Enum_Channel(start_CMovement, create_M_CMovement_input__done_());
					}
					inputdone = true;
				}
				else if (strcmp(_event_, "obstacle") == 0) {
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "Found event obstacle");
				     		printf("%s\n", _s0);}
				     	{
				     		send_M_CMovement_input_Enum_Channel(start_CMovement, create_M_CMovement_input_obstacle());
				     	}
				     }
				else if (strcmp(_event_, "$end") == 0) {
				     	{
				     		send_M_CMovement_input_Enum_Channel(start_CMovement, create_M_CMovement_input__terminate_());
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "Terminating system. Final cycle will run before this program ends.");
				     		printf("%s\n", _s0);}
				     	terminate__ = true;
				     	inputdone = true;
				     }
				else {
					{
						char _s0[256];
						sprintf(_s0, "%s%s", "Unknown event: ", _event_);
						printf("%s\n", _s0);}
				}
			}
		}
		{
			bool outputdone = false;
			while (!outputdone) {
				M_CMovement_output_Enum _output_;
				{	
					_output_ = receive_M_CMovement_output_Enum_Channel(end_CMovement);	
				}
				if (_output_.type == M_CMovement_output_stop) {
					{
						char _s0[256];
						sprintf(_s0, "%s", "output stop");
						printf("%s\n", _s0);}
				}
				else if (_output_.type == M_CMovement_output__move) {
				     	float _aux1_ = _output_.data._move.v1;	
				     	float _aux2_ = _output_.data._move.v2;	
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "output move");
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "(");
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%f", _aux1_);
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", ",");
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%f", _aux2_);
				     		printf("%s", _s0);
				     	}
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", ")");
				     		printf("%s\n", _s0);}
				     }
				else if (_output_.type == M_CMovement_output__done_) {
				     	outputdone = true;
				     	{
				     		char _s0[256];
				     		sprintf(_s0, "%s", "---------------------");
				     		printf("%s\n", _s0);}
				     }
			}
			
		}
	}
}
}

/* thread functions */
void *ctrl_cm_thread(void *arg) {
	ctrl_cm_thread_Channels* channels = (ctrl_cm_thread_Channels*) arg;
	C_cm_input_Enum_Channel* start_cm = channels->start_cm;
	sm_output_Enum_Channel* end_sm = channels->end_sm;
	C_cm_output_Enum_Channel* end_cm = channels->end_cm;
	sm_input_Enum_Channel* start_sm = channels->start_sm;
{
	bool terminate__ = false;
	struct {
	    sm_input_Enum items[MAXQUEUE];
	    int start;
	    int end;
	} stm_sm_queue;
	stm_sm_queue.start = -1;
	stm_sm_queue.end = -1;
	
	sm_input_Enum stm_sm_queue_Dequeue() {
		if (stm_sm_queue.start == -1) {
			printf("ERROR: trying to dequeue value from an empty queue.\n");
			exit(-1);
		} else {
			sm_input_Enum value = stm_sm_queue.items[stm_sm_queue.start];
		    if (stm_sm_queue.start == stm_sm_queue.end) {
		        stm_sm_queue.start = stm_sm_queue.end = -1;
		    } else {
		        stm_sm_queue.start = (stm_sm_queue.start + 1)%MAXQUEUE;
		    }
		    return value;
		}
	}
	
	void stm_sm_queue_Enqueue(sm_input_Enum value) {
		if (stm_sm_queue.start == (stm_sm_queue.end +1)%MAXQUEUE) {
	        printf("ERROR: trying to enqueue a value on a full queue.\n");
	        return;
	    }
	
	    if (stm_sm_queue.start == -1) {
	        stm_sm_queue.start = 0;
	    }
	    stm_sm_queue.end = (stm_sm_queue.end + 1)%MAXQUEUE;
	    stm_sm_queue.items[stm_sm_queue.end] = value;
	}
	
	bool stm_sm_queue_isEmpty() {
		return stm_sm_queue.start == -1;
	}
	
	void stm_sm_queue_Clear() {
		stm_sm_queue.start = -1;
		stm_sm_queue.end = -1;
	}
	while (!terminate__) {
		while (!stm_sm_queue_isEmpty()) {
			sm_input_Enum ev = stm_sm_queue_Dequeue();
			{
				send_sm_input_Enum_Channel(start_sm, ev);
			}
		}
		{
			bool inputDone = false;
			while (!inputDone) {
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Waiting for input on channel start_cm");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				C_cm_input_Enum _input_;
				{	
					_input_ = receive_C_cm_input_Enum_Channel(start_cm);	
				}
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Read input on channel start_cm");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				if (_input_.type == C_cm_input_obstacle) {
					{
						send_sm_input_Enum_Channel(start_sm, create_sm_input_obstacle());
					}
				}
				else if (_input_.type == C_cm_input__done_) {
				     	{
				     		send_sm_input_Enum_Channel(start_sm, create_sm_input__done_());
				     	}
				     	inputDone = true;
				     }
				else if (_input_.type == C_cm_input__terminate_) {
				     	{
				     		send_sm_input_Enum_Channel(start_sm, create_sm_input__terminate_());
				     	}
				     	terminate__ = true;
				     	inputDone = true;
				     }
			}
			
		}
		{
			char _s0[256];
			sprintf(_s0, "%s", "	Finished reading inputs of controller cm");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		ctrl_cm_step(start_sm, end_sm);
		{
			bool outputDone = false;
			while (!outputDone) {
				sm_output_Enum _output_;
				{	
					_output_ = receive_sm_output_Enum_Channel(end_sm);	
				}
				if (_output_.type == sm_output__move) {
					float _aux1_ = _output_.data._move.v1;	
					float _aux2_ = _output_.data._move.v2;	
					{
						send_C_cm_output_Enum_Channel(end_cm, create_C_cm_output__move(_aux1_,_aux2_));
					}
				}
				else if (_output_.type == sm_output_stop) {
				     	{
				     		send_C_cm_output_Enum_Channel(end_cm, create_C_cm_output_stop());
				     	}
				     }
				else if (_output_.type == sm_output__done_) {
				     	outputDone = true;
				     }
			}
			
		}
		{
			send_C_cm_output_Enum_Channel(end_cm, create_C_cm_output__done_());
		}
	}
}
}

/* thread functions */
void *mod_CMovement_thread(void *arg) {
	mod_CMovement_thread_Channels* channels = (mod_CMovement_thread_Channels*) arg;
	M_CMovement_input_Enum_Channel* start_CMovement = channels->start_CMovement;
	C_ctrl_ref0_output_Enum_Channel* end_ctrl_ref0 = channels->end_ctrl_ref0;
	M_CMovement_output_Enum_Channel* end_CMovement = channels->end_CMovement;
	C_ctrl_ref0_input_Enum_Channel* start_ctrl_ref0 = channels->start_ctrl_ref0;
{
	bool terminate__ = false;
	while (!terminate__) {
		{
			bool inputDone = false;
			while (!inputDone) {
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Waiting for input on channel start_CMovement");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				M_CMovement_input_Enum _input_;
				{	
					_input_ = receive_M_CMovement_input_Enum_Channel(start_CMovement);	
				}
				{
					char _s0[256];
					sprintf(_s0, "%s", "- Read input on channel start_CMovement");
					fprintf(log_file, "DEBUG: %s\n", _s0);
				}
				if (_input_.type == M_CMovement_input_obstacle) {
					{
						send_C_ctrl_ref0_input_Enum_Channel(start_ctrl_ref0, create_C_ctrl_ref0_input_obstacle());
					}
				}
				else if (_input_.type == M_CMovement_input__done_) {
				     	{
				     		send_C_ctrl_ref0_input_Enum_Channel(start_ctrl_ref0, create_C_ctrl_ref0_input__done_());
				     	}
				     	inputDone = true;
				     }
				else if (_input_.type == M_CMovement_input__terminate_) {
				     	{
				     		send_C_ctrl_ref0_input_Enum_Channel(start_ctrl_ref0, create_C_ctrl_ref0_input__terminate_());
				     	}
				     	terminate__ = true;
				     	inputDone = true;
				     }
			}
			
		}
		{
			char _s0[256];
			sprintf(_s0, "%s", "Finished reading inputs of module CMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		mod_CMovement_step(start_ctrl_ref0, end_ctrl_ref0);
		{
			bool outputDone = false;
			while (!outputDone) {
				C_ctrl_ref0_output_Enum _output_;
				{	
					_output_ = receive_C_ctrl_ref0_output_Enum_Channel(end_ctrl_ref0);	
				}
				if (_output_.type == C_ctrl_ref0_output_stop) {
					{
						send_M_CMovement_output_Enum_Channel(end_CMovement, create_M_CMovement_output_stop());
					}
				}
				else if (_output_.type == C_ctrl_ref0_output__move) {
				     	float _aux1_ = _output_.data._move.v1;	
				     	float _aux2_ = _output_.data._move.v2;	
				     	{
				     		send_M_CMovement_output_Enum_Channel(end_CMovement, create_M_CMovement_output__move(_aux1_,_aux2_));
				     	}
				     }
				else if (_output_.type == C_ctrl_ref0_output__done_) {
				     	outputDone = true;
				     }
			}
			
		}
		{
			send_M_CMovement_output_Enum_Channel(end_CMovement, create_M_CMovement_output__done_());
		}
	}
}
}
