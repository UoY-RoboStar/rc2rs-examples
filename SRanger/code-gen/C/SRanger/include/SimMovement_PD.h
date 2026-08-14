#ifndef SimMovement_PD__H
#define SimMovement_PD__H

// This is the generated header file

#define _POSIX_C_SOURCE 200112L

#include "SimMovement_PI.h"

#define DEBUG

extern FILE* log_file;


/* Records encoding a channel */
typedef struct sm_output_Enum_Channel sm_output_Enum_Channel; 
sm_output_Enum_Channel* create_sm_output_Enum_Channel();
void send_sm_output_Enum_Channel(sm_output_Enum_Channel* ch, sm_output_Enum value);
sm_output_Enum receive_sm_output_Enum_Channel(sm_output_Enum_Channel* ch);

typedef struct C_cm_output_Enum_Channel C_cm_output_Enum_Channel; 
C_cm_output_Enum_Channel* create_C_cm_output_Enum_Channel();
void send_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch, C_cm_output_Enum value);
C_cm_output_Enum receive_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch);

typedef struct C_cm_input_Enum_Channel C_cm_input_Enum_Channel; 
C_cm_input_Enum_Channel* create_C_cm_input_Enum_Channel();
void send_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch, C_cm_input_Enum value);
C_cm_input_Enum receive_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch);

typedef struct M_SimCMovement_output_Enum_Channel M_SimCMovement_output_Enum_Channel; 
M_SimCMovement_output_Enum_Channel* create_M_SimCMovement_output_Enum_Channel();
void send_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch, M_SimCMovement_output_Enum value);
M_SimCMovement_output_Enum receive_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch);

typedef struct sm_input_Enum_Channel sm_input_Enum_Channel; 
sm_input_Enum_Channel* create_sm_input_Enum_Channel();
void send_sm_input_Enum_Channel(sm_input_Enum_Channel* ch, sm_input_Enum value);
sm_input_Enum receive_sm_input_Enum_Channel(sm_input_Enum_Channel* ch);

typedef struct M_SimCMovement_input_Enum_Channel M_SimCMovement_input_Enum_Channel; 
M_SimCMovement_input_Enum_Channel* create_M_SimCMovement_input_Enum_Channel();
void send_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch, M_SimCMovement_input_Enum value);
M_SimCMovement_input_Enum receive_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch);


/* Records grouping channels per parallel block */

typedef struct mod_SimCMovement_thread_Channels {
	M_SimCMovement_input_Enum_Channel* start_SimCMovement;
	C_cm_output_Enum_Channel* end_cm;
	M_SimCMovement_output_Enum_Channel* end_SimCMovement;
	C_cm_input_Enum_Channel* start_cm;
} mod_SimCMovement_thread_Channels;

void *mod_SimCMovement_thread(void *arg);

typedef struct ctrl_cm_thread_Channels {
	C_cm_input_Enum_Channel* start_cm;
	sm_output_Enum_Channel* end_sm;
	C_cm_output_Enum_Channel* end_cm;
	sm_input_Enum_Channel* start_sm;
} ctrl_cm_thread_Channels;

void *ctrl_cm_thread(void *arg);

typedef struct stm_sm_Channels {
	sm_input_Enum_Channel* start_sm;
	sm_output_Enum_Channel* end_sm;
} stm_sm_Channels;

void *stm_sm(void *arg);

typedef struct control_Channels {
	M_SimCMovement_output_Enum_Channel* end_SimCMovement;
	M_SimCMovement_input_Enum_Channel* start_SimCMovement;
} control_Channels;

void *control(void *arg);

/* Declaration of function signatures */
	char* print_STATUS(STATUS_Enum* value);
	void mod_SimCMovement_step(C_cm_input_Enum_Channel* start_cm
	                           , C_cm_output_Enum_Channel* end_cm);
	RESULT_Enum en_SimSMovement_STurning_1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output);
	char* print_STATES_sm(STATES_sm_Enum* value);
	void ctrl_cm_step(sm_input_Enum_Channel* start_sm
	                  , sm_output_Enum_Channel* end_sm);
	char* print_sm_state(struct sm_state* state);
	RESULT_Enum stm_sm_step(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output);
	struct sm_state init_state();
	struct sm_memory init_memorystate();
	RESULT_Enum en_SimSMovement_SMoving_1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output);
	RESULT_Enum tr_SimSMovement_t5(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output);
	struct sm_inputstate init_inputstate();
	RESULT_Enum SimSMovement_J1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output);
	RESULT_Enum SimSMovement_J2(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output);

#endif