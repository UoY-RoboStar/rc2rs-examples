#ifndef SimMovement_PI_PI__H
#define SimMovement_PI_PI__H
// This is the generated header file

#ifndef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200112L
#endif

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include <string.h>
#include <pthread.h>
#include <time.h>
#include <ctype.h>

#define DEBUG

#ifdef DEBUG
# define DPRINTF(arg) printf arg
#else
# define DPRINTF(arg)
#endif

#define err_abort(code,text) do { \
	fprintf(stderr, "%s at \"%s\":%d: %s\n", \
		text, __FILE__, __LINE__, strerror(code)); \
	abort(); \
	} while(0)
	
#define errno_abort(text) do { \
	fprintf(stderr, "%s at \"%s\":%d: %s\n", \
		text, __FILE__, __LINE__, strerror(errno)); \
	abort(); \
	} while (0)

extern FILE* log_file;

// Temporary solution to trim strings taken from http://www.martinbroadhurst.com/trim-a-string-in-c.html 

char *ltrim(char *str, const char *seps);
char *rtrim(char *str, const char *seps);
char *trim(char *str, const char *seps);
char* concat(char *str1, char *str2);

#define MAX_SEQ_SIZE 32
#define MAXQUEUE 32




/* Representation of enum LocalizationType */

typedef enum LocalizationType_Type {
	LocalizationType_GRAV_UP,
	LocalizationType_ENU,
	LocalizationType_GRAV_DOWN,
	LocalizationType_NWU,
	LocalizationType_NED,
	LocalizationType_CUSTOM,
} LocalizationType_Type;

typedef union LocalizationType_Data {
} LocalizationType_Data;

typedef struct LocalizationType_Enum {
	LocalizationType_Type type;
	LocalizationType_Data data;
} LocalizationType_Enum;

LocalizationType_Enum create_LocalizationType_GRAV_UP();
LocalizationType_Enum create_LocalizationType_ENU();
LocalizationType_Enum create_LocalizationType_GRAV_DOWN();
LocalizationType_Enum create_LocalizationType_NWU();
LocalizationType_Enum create_LocalizationType_NED();
LocalizationType_Enum create_LocalizationType_CUSTOM();
/* Representation of enum NoiseType */

typedef enum NoiseType_Type {
	NoiseType_GAUSSIAN,
	NoiseType_GAUSSIAN_QUANTIZED,
	NoiseType_NONE,
} NoiseType_Type;

typedef union NoiseType_Data {
} NoiseType_Data;

typedef struct NoiseType_Enum {
	NoiseType_Type type;
	NoiseType_Data data;
} NoiseType_Enum;

NoiseType_Enum create_NoiseType_GAUSSIAN();
NoiseType_Enum create_NoiseType_GAUSSIAN_QUANTIZED();
NoiseType_Enum create_NoiseType_NONE();
/* Representation of enum IMAGE_FORMAT */

typedef enum IMAGE_FORMAT_Type {
	IMAGE_FORMAT_BAYER_GBRG8,
	IMAGE_FORMAT_BAYER_RGGB8,
	IMAGE_FORMAT_BAYER_GRBG8,
	IMAGE_FORMAT_BAYER_BGGR8,
	IMAGE_FORMAT_B8G8R8,
	IMAGE_FORMAT_L8,
	IMAGE_FORMAT_R8G8B8,
} IMAGE_FORMAT_Type;

typedef union IMAGE_FORMAT_Data {
} IMAGE_FORMAT_Data;

typedef struct IMAGE_FORMAT_Enum {
	IMAGE_FORMAT_Type type;
	IMAGE_FORMAT_Data data;
} IMAGE_FORMAT_Enum;

IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_GBRG8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_RGGB8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_GRBG8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_BGGR8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_B8G8R8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_L8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_R8G8B8();
/* Representation of enum LensType */

typedef enum LensType_Type {
	LensType_gnomonical,
	LensType_orthographic,
	LensType_stereographic,
	LensType_equidistant,
	LensType_equisolid_angle,
	LensType_custom,
} LensType_Type;

typedef union LensType_Data {
} LensType_Data;

typedef struct LensType_Enum {
	LensType_Type type;
	LensType_Data data;
} LensType_Enum;

LensType_Enum create_LensType_gnomonical();
LensType_Enum create_LensType_orthographic();
LensType_Enum create_LensType_stereographic();
LensType_Enum create_LensType_equidistant();
LensType_Enum create_LensType_equisolid_angle();
LensType_Enum create_LensType_custom();
/* Representation of enum FunctionType */

typedef enum FunctionType_Type {
	FunctionType_sin,
	FunctionType_tan,
	FunctionType_id,
} FunctionType_Type;

typedef union FunctionType_Data {
} FunctionType_Data;

typedef struct FunctionType_Enum {
	FunctionType_Type type;
	FunctionType_Data data;
} FunctionType_Enum;

FunctionType_Enum create_FunctionType_sin();
FunctionType_Enum create_FunctionType_tan();
FunctionType_Enum create_FunctionType_id();
/* Representation of enum M_SimCMovement_input */

typedef enum M_SimCMovement_input_Type {
	M_SimCMovement_input_obstacle,
	M_SimCMovement_input__done_,
	M_SimCMovement_input__terminate_,
} M_SimCMovement_input_Type;

typedef union M_SimCMovement_input_Data {
} M_SimCMovement_input_Data;

typedef struct M_SimCMovement_input_Enum {
	M_SimCMovement_input_Type type;
	M_SimCMovement_input_Data data;
} M_SimCMovement_input_Enum;

M_SimCMovement_input_Enum create_M_SimCMovement_input_obstacle();
M_SimCMovement_input_Enum create_M_SimCMovement_input__done_();
M_SimCMovement_input_Enum create_M_SimCMovement_input__terminate_();
/* Representation of enum STATUS */

typedef enum STATUS_Type {
	STATUS_ENTER_STATE,
	STATUS_ENTER_CHILDREN,
	STATUS_EXECUTE_STATE,
	STATUS_EXIT_CHILDREN,
	STATUS_EXIT_STATE,
	STATUS_INACTIVE,
} STATUS_Type;

typedef union STATUS_Data {
} STATUS_Data;

typedef struct STATUS_Enum {
	STATUS_Type type;
	STATUS_Data data;
} STATUS_Enum;

STATUS_Enum create_STATUS_ENTER_STATE();
STATUS_Enum create_STATUS_ENTER_CHILDREN();
STATUS_Enum create_STATUS_EXECUTE_STATE();
STATUS_Enum create_STATUS_EXIT_CHILDREN();
STATUS_Enum create_STATUS_EXIT_STATE();
STATUS_Enum create_STATUS_INACTIVE();
/* Representation of enum RESULT */

typedef enum RESULT_Type {
	RESULT_WAIT,
	RESULT_CONT,
} RESULT_Type;

typedef union RESULT_Data {
} RESULT_Data;

typedef struct RESULT_Enum {
	RESULT_Type type;
	RESULT_Data data;
} RESULT_Enum;

RESULT_Enum create_RESULT_WAIT();
RESULT_Enum create_RESULT_CONT();
/* Representation of enum sm_input */

typedef enum sm_input_Type {
	sm_input_obstacle,
	sm_input__done_,
	sm_input__terminate_,
} sm_input_Type;

typedef union sm_input_Data {
} sm_input_Data;

typedef struct sm_input_Enum {
	sm_input_Type type;
	sm_input_Data data;
} sm_input_Enum;

sm_input_Enum create_sm_input_obstacle();
sm_input_Enum create_sm_input__done_();
sm_input_Enum create_sm_input__terminate_();
/* Representation of enum C_cm_input */

typedef enum C_cm_input_Type {
	C_cm_input_obstacle,
	C_cm_input__done_,
	C_cm_input__terminate_,
} C_cm_input_Type;

typedef union C_cm_input_Data {
} C_cm_input_Data;

typedef struct C_cm_input_Enum {
	C_cm_input_Type type;
	C_cm_input_Data data;
} C_cm_input_Enum;

C_cm_input_Enum create_C_cm_input_obstacle();
C_cm_input_Enum create_C_cm_input__done_();
C_cm_input_Enum create_C_cm_input__terminate_();
/* Representation of enum TRANSITIONS_sm */

typedef enum TRANSITIONS_sm_Type {
	TRANSITIONS_sm_NONE,
	TRANSITIONS_sm_sm_t8,
	TRANSITIONS_sm_sm_t3,
	TRANSITIONS_sm_sm_t5,
	TRANSITIONS_sm_sm_t10,
	TRANSITIONS_sm_sm_t4,
	TRANSITIONS_sm_sm_t1,
	TRANSITIONS_sm_sm_t6,
	TRANSITIONS_sm_sm_t9,
	TRANSITIONS_sm_sm_t7,
	TRANSITIONS_sm_sm_t2,
} TRANSITIONS_sm_Type;

typedef union TRANSITIONS_sm_Data {
} TRANSITIONS_sm_Data;

typedef struct TRANSITIONS_sm_Enum {
	TRANSITIONS_sm_Type type;
	TRANSITIONS_sm_Data data;
} TRANSITIONS_sm_Enum;

TRANSITIONS_sm_Enum create_TRANSITIONS_sm_NONE();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t8();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t3();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t5();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t10();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t4();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t1();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t6();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t9();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t7();
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t2();
/* Representation of enum STATES_sm */

typedef enum STATES_sm_Type {
	STATES_sm_NONE,
	STATES_sm_SMoving,
	STATES_sm_DMoving,
	STATES_sm_Waiting,
	STATES_sm_STurning,
	STATES_sm_DTurning,
} STATES_sm_Type;

typedef union STATES_sm_Data {
} STATES_sm_Data;

typedef struct STATES_sm_Enum {
	STATES_sm_Type type;
	STATES_sm_Data data;
} STATES_sm_Enum;

STATES_sm_Enum create_STATES_sm_NONE();
STATES_sm_Enum create_STATES_sm_SMoving();
STATES_sm_Enum create_STATES_sm_DMoving();
STATES_sm_Enum create_STATES_sm_Waiting();
STATES_sm_Enum create_STATES_sm_STurning();
STATES_sm_Enum create_STATES_sm_DTurning();
/* Representation of enum Pitch */

typedef enum Pitch_Type {
	Pitch_Finite,
	Pitch_Infinite,
} Pitch_Type;

typedef struct Pitch_Finite_Data {
	float v1;
} Pitch_Finite_Data;

typedef union Pitch_Data {
	Pitch_Finite_Data Finite;
} Pitch_Data;

typedef struct Pitch_Enum {
	Pitch_Type type;
	Pitch_Data data;
} Pitch_Enum;

Pitch_Enum create_Pitch_Finite(float v1);
Pitch_Enum create_Pitch_Infinite();
/* Representation of enum Colour */

typedef enum Colour_Type {
	Colour_rgb,
} Colour_Type;

typedef struct Colour_rgb_Data {
	float v1;
	float v2;
	float v3;
} Colour_rgb_Data;

typedef union Colour_Data {
	Colour_rgb_Data rgb;
} Colour_Data;

typedef struct Colour_Enum {
	Colour_Type type;
	Colour_Data data;
} Colour_Enum;

Colour_Enum create_Colour_rgb(float v1,float v2,float v3);
/* Representation of enum M_SimCMovement_output */

typedef enum M_SimCMovement_output_Type {
	M_SimCMovement_output__move,
	M_SimCMovement_output_stop,
	M_SimCMovement_output__done_,
} M_SimCMovement_output_Type;

typedef struct M_SimCMovement_output__move_Data {
	float v1;
	float v2;
} M_SimCMovement_output__move_Data;

typedef union M_SimCMovement_output_Data {
	M_SimCMovement_output__move_Data _move;
} M_SimCMovement_output_Data;

typedef struct M_SimCMovement_output_Enum {
	M_SimCMovement_output_Type type;
	M_SimCMovement_output_Data data;
} M_SimCMovement_output_Enum;

M_SimCMovement_output_Enum create_M_SimCMovement_output__move(float v1,float v2);
M_SimCMovement_output_Enum create_M_SimCMovement_output_stop();
M_SimCMovement_output_Enum create_M_SimCMovement_output__done_();
/* Representation of enum C_cm_output */

typedef enum C_cm_output_Type {
	C_cm_output__move,
	C_cm_output_stop,
	C_cm_output__done_,
} C_cm_output_Type;

typedef struct C_cm_output__move_Data {
	float v1;
	float v2;
} C_cm_output__move_Data;

typedef union C_cm_output_Data {
	C_cm_output__move_Data _move;
} C_cm_output_Data;

typedef struct C_cm_output_Enum {
	C_cm_output_Type type;
	C_cm_output_Data data;
} C_cm_output_Enum;

C_cm_output_Enum create_C_cm_output__move(float v1,float v2);
C_cm_output_Enum create_C_cm_output_stop();
C_cm_output_Enum create_C_cm_output__done_();
/* Representation of enum sm_output */

typedef enum sm_output_Type {
	sm_output_stop,
	sm_output__move,
	sm_output__done_,
} sm_output_Type;

typedef struct sm_output__move_Data {
	float v1;
	float v2;
} sm_output__move_Data;

typedef union sm_output_Data {
	sm_output__move_Data _move;
} sm_output_Data;

typedef struct sm_output_Enum {
	sm_output_Type type;
	sm_output_Data data;
} sm_output_Enum;

sm_output_Enum create_sm_output_stop();
sm_output_Enum create_sm_output__move(float v1,float v2);
sm_output_Enum create_sm_output__done_();

/* Representation of record LINK */
struct LINK {
	 
	    ERROR Type AbstractProgram.impl.SetTypeImpl@e6b88c9 not implemented. joints;
};
/* Representation of record sm_memory */
struct sm_memory {
	float lv;
	float PI;
	float av;
};
/* Representation of record sm_inputstate */
struct sm_inputstate {
	bool obstacle;
	int _clock_MBC;
	TRANSITIONS_sm_Enum _transition_;
};
/* Representation of record sm_state */
struct sm_state {
	bool done;
	STATES_sm_Enum state;
	STATES_sm_Enum target_state;
	STATUS_Enum status;
	bool en_SimSMovement_SMoving_1_done;
	int en_SimSMovement_SMoving_1_counter;
	bool en_SimSMovement_STurning_1_done;
	int en_SimSMovement_STurning_1_counter;
	bool tr_SimSMovement_t5_done;
	int tr_SimSMovement_t5_counter;
};
/* Representation of record JOINT */
struct JOINT {
	struct LINK flexible;
};

/* Records encoding a channel */
typedef struct C_cm_input_Enum_Channel C_cm_input_Enum_Channel;
void send_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch, C_cm_input_Enum value);
C_cm_input_Enum receive_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch);

typedef struct M_SimCMovement_input_Enum_Channel M_SimCMovement_input_Enum_Channel;
void send_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch, M_SimCMovement_input_Enum value);
M_SimCMovement_input_Enum receive_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch);

typedef struct M_SimCMovement_output_Enum_Channel M_SimCMovement_output_Enum_Channel;
void send_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch, M_SimCMovement_output_Enum value);
M_SimCMovement_output_Enum receive_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch);

typedef struct sm_input_Enum_Channel sm_input_Enum_Channel;
void send_sm_input_Enum_Channel(sm_input_Enum_Channel* ch, sm_input_Enum value);
sm_input_Enum receive_sm_input_Enum_Channel(sm_input_Enum_Channel* ch);

typedef struct sm_output_Enum_Channel sm_output_Enum_Channel;
void send_sm_output_Enum_Channel(sm_output_Enum_Channel* ch, sm_output_Enum value);
sm_output_Enum receive_sm_output_Enum_Channel(sm_output_Enum_Channel* ch);

typedef struct C_cm_output_Enum_Channel C_cm_output_Enum_Channel;
void send_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch, C_cm_output_Enum value);
C_cm_output_Enum receive_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch);


/* Records grouping channels per parallel block */
typedef struct ctrl_cm_thread_Channels ctrl_cm_thread_Channels;

typedef struct stm_sm_Channels stm_sm_Channels;

typedef struct mod_SimCMovement_thread_Channels mod_SimCMovement_thread_Channels;

typedef struct control_Channels control_Channels;


/* Declaration of function signatures */
char* print_STATUS(STATUS_Enum* value);
void mod_SimCMovement_step(C_cm_input_Enum_Channel* start_cm
                           , C_cm_output_Enum_Channel* end_cm);
char* print_STATES_sm(STATES_sm_Enum* value);
struct sm_memory init_memorystate();
char* print_sm_state(struct sm_state* state);
RESULT_Enum SimSMovement_J1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output);
RESULT_Enum SimSMovement_J2(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output);
void ctrl_cm_step(sm_input_Enum_Channel* start_sm
                  , sm_output_Enum_Channel* end_sm);
RESULT_Enum en_SimSMovement_SMoving_1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output);
struct sm_state init_state();
struct sm_inputstate init_inputstate();
RESULT_Enum en_SimSMovement_STurning_1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output);
RESULT_Enum stm_sm_step(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output);
RESULT_Enum tr_SimSMovement_t5(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output);

#endif