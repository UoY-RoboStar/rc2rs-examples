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




/* Representation of enum IMAGE_FORMAT */

typedef enum IMAGE_FORMAT_Type {
	IMAGE_FORMAT_BAYER_RGGB8,
	IMAGE_FORMAT_B8G8R8,
	IMAGE_FORMAT_BAYER_GRBG8,
	IMAGE_FORMAT_L8,
	IMAGE_FORMAT_BAYER_BGGR8,
	IMAGE_FORMAT_R8G8B8,
	IMAGE_FORMAT_BAYER_GBRG8,
} IMAGE_FORMAT_Type;

typedef union IMAGE_FORMAT_Data {
} IMAGE_FORMAT_Data;

typedef struct IMAGE_FORMAT_Enum {
	IMAGE_FORMAT_Type type;
	IMAGE_FORMAT_Data data;
} IMAGE_FORMAT_Enum;

IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_RGGB8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_B8G8R8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_GRBG8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_L8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_BGGR8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_R8G8B8();
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_GBRG8();
/* Representation of enum LensType */

typedef enum LensType_Type {
	LensType_equidistant,
	LensType_orthographic,
	LensType_custom,
	LensType_gnomonical,
	LensType_equisolid_angle,
	LensType_stereographic,
} LensType_Type;

typedef union LensType_Data {
} LensType_Data;

typedef struct LensType_Enum {
	LensType_Type type;
	LensType_Data data;
} LensType_Enum;

LensType_Enum create_LensType_equidistant();
LensType_Enum create_LensType_orthographic();
LensType_Enum create_LensType_custom();
LensType_Enum create_LensType_gnomonical();
LensType_Enum create_LensType_equisolid_angle();
LensType_Enum create_LensType_stereographic();
/* Representation of enum FunctionType */

typedef enum FunctionType_Type {
	FunctionType_sin,
	FunctionType_id,
	FunctionType_tan,
} FunctionType_Type;

typedef union FunctionType_Data {
} FunctionType_Data;

typedef struct FunctionType_Enum {
	FunctionType_Type type;
	FunctionType_Data data;
} FunctionType_Enum;

FunctionType_Enum create_FunctionType_sin();
FunctionType_Enum create_FunctionType_id();
FunctionType_Enum create_FunctionType_tan();
/* Representation of enum LocalizationType */

typedef enum LocalizationType_Type {
	LocalizationType_GRAV_UP,
	LocalizationType_CUSTOM,
	LocalizationType_GRAV_DOWN,
	LocalizationType_NED,
	LocalizationType_ENU,
	LocalizationType_NWU,
} LocalizationType_Type;

typedef union LocalizationType_Data {
} LocalizationType_Data;

typedef struct LocalizationType_Enum {
	LocalizationType_Type type;
	LocalizationType_Data data;
} LocalizationType_Enum;

LocalizationType_Enum create_LocalizationType_GRAV_UP();
LocalizationType_Enum create_LocalizationType_CUSTOM();
LocalizationType_Enum create_LocalizationType_GRAV_DOWN();
LocalizationType_Enum create_LocalizationType_NED();
LocalizationType_Enum create_LocalizationType_ENU();
LocalizationType_Enum create_LocalizationType_NWU();
/* Representation of enum NoiseType */

typedef enum NoiseType_Type {
	NoiseType_NONE,
	NoiseType_GAUSSIAN_QUANTIZED,
	NoiseType_GAUSSIAN,
} NoiseType_Type;

typedef union NoiseType_Data {
} NoiseType_Data;

typedef struct NoiseType_Enum {
	NoiseType_Type type;
	NoiseType_Data data;
} NoiseType_Enum;

NoiseType_Enum create_NoiseType_NONE();
NoiseType_Enum create_NoiseType_GAUSSIAN_QUANTIZED();
NoiseType_Enum create_NoiseType_GAUSSIAN();
/* Representation of enum M_CMovement_input */

typedef enum M_CMovement_input_Type {
	M_CMovement_input_obstacle,
	M_CMovement_input__done_,
	M_CMovement_input__terminate_,
} M_CMovement_input_Type;

typedef union M_CMovement_input_Data {
} M_CMovement_input_Data;

typedef struct M_CMovement_input_Enum {
	M_CMovement_input_Type type;
	M_CMovement_input_Data data;
} M_CMovement_input_Enum;

M_CMovement_input_Enum create_M_CMovement_input_obstacle();
M_CMovement_input_Enum create_M_CMovement_input__done_();
M_CMovement_input_Enum create_M_CMovement_input__terminate_();
/* Representation of enum STATES_stm_ref0_Moving */

typedef enum STATES_stm_ref0_Moving_Type {
	STATES_stm_ref0_Moving_NONE,
	STATES_stm_ref0_Moving_EmptyCycle,
} STATES_stm_ref0_Moving_Type;

typedef union STATES_stm_ref0_Moving_Data {
} STATES_stm_ref0_Moving_Data;

typedef struct STATES_stm_ref0_Moving_Enum {
	STATES_stm_ref0_Moving_Type type;
	STATES_stm_ref0_Moving_Data data;
} STATES_stm_ref0_Moving_Enum;

STATES_stm_ref0_Moving_Enum create_STATES_stm_ref0_Moving_NONE();
STATES_stm_ref0_Moving_Enum create_STATES_stm_ref0_Moving_EmptyCycle();
/* Representation of enum STATES_stm_ref0 */

typedef enum STATES_stm_ref0_Type {
	STATES_stm_ref0_NONE,
	STATES_stm_ref0_Moving,
	STATES_stm_ref0_Turning,
} STATES_stm_ref0_Type;

typedef union STATES_stm_ref0_Data {
} STATES_stm_ref0_Data;

typedef struct STATES_stm_ref0_Enum {
	STATES_stm_ref0_Type type;
	STATES_stm_ref0_Data data;
} STATES_stm_ref0_Enum;

STATES_stm_ref0_Enum create_STATES_stm_ref0_NONE();
STATES_stm_ref0_Enum create_STATES_stm_ref0_Moving();
STATES_stm_ref0_Enum create_STATES_stm_ref0_Turning();
/* Representation of enum STATES_stm_ref0_Turning */

typedef enum STATES_stm_ref0_Turning_Type {
	STATES_stm_ref0_Turning_NONE,
	STATES_stm_ref0_Turning_EmptyCycle,
} STATES_stm_ref0_Turning_Type;

typedef union STATES_stm_ref0_Turning_Data {
} STATES_stm_ref0_Turning_Data;

typedef struct STATES_stm_ref0_Turning_Enum {
	STATES_stm_ref0_Turning_Type type;
	STATES_stm_ref0_Turning_Data data;
} STATES_stm_ref0_Turning_Enum;

STATES_stm_ref0_Turning_Enum create_STATES_stm_ref0_Turning_NONE();
STATES_stm_ref0_Turning_Enum create_STATES_stm_ref0_Turning_EmptyCycle();
/* Representation of enum TRANSITIONS_stm_ref0 */

typedef enum TRANSITIONS_stm_ref0_Type {
	TRANSITIONS_stm_ref0_NONE,
	TRANSITIONS_stm_ref0_stm_ref0_t2,
	TRANSITIONS_stm_ref0_stm_ref0_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle,
	TRANSITIONS_stm_ref0_stm_ref0_t1,
	TRANSITIONS_stm_ref0_stm_ref0_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle,
	TRANSITIONS_stm_ref0_stm_ref0_Turning_tTurning,
	TRANSITIONS_stm_ref0_stm_ref0_t3,
	TRANSITIONS_stm_ref0_stm_ref0_Moving_tMoving,
} TRANSITIONS_stm_ref0_Type;

typedef union TRANSITIONS_stm_ref0_Data {
} TRANSITIONS_stm_ref0_Data;

typedef struct TRANSITIONS_stm_ref0_Enum {
	TRANSITIONS_stm_ref0_Type type;
	TRANSITIONS_stm_ref0_Data data;
} TRANSITIONS_stm_ref0_Enum;

TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_NONE();
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_t2();
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle();
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_t1();
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle();
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Turning_tTurning();
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_t3();
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Moving_tMoving();
/* Representation of enum TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry */

typedef enum TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Type {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_NONE,
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t_2_2,
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t,
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Type;

typedef union TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Data {
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Data;

typedef struct TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Type type;
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Data data;
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum;

TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_NONE();
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t_2_2();
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t();
/* Representation of enum STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op */

typedef enum STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type {
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE,
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_final_f,
} STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type;

typedef union STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data {
} STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data;

typedef struct STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum {
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type type;
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data data;
} STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum;

STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE();
STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_final_f();
/* Representation of enum stm_ref0_input */

typedef enum stm_ref0_input_Type {
	stm_ref0_input_obstacle,
	stm_ref0_input__done_,
	stm_ref0_input__terminate_,
} stm_ref0_input_Type;

typedef union stm_ref0_input_Data {
} stm_ref0_input_Data;

typedef struct stm_ref0_input_Enum {
	stm_ref0_input_Type type;
	stm_ref0_input_Data data;
} stm_ref0_input_Enum;

stm_ref0_input_Enum create_stm_ref0_input_obstacle();
stm_ref0_input_Enum create_stm_ref0_input__done_();
stm_ref0_input_Enum create_stm_ref0_input__terminate_();
/* Representation of enum TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry */

typedef enum TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Type {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_NONE,
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t_2_4,
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t,
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Type;

typedef union TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Data {
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Data;

typedef struct TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Type type;
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Data data;
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum;

TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_NONE();
TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t_2_4();
TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t();
/* Representation of enum STATES_op_SMovement_clone_normal_SMovement_Turning_entry */

typedef enum STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Type {
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_NONE,
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_final_f,
} STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Type;

typedef union STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Data {
} STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Data;

typedef struct STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum {
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Type type;
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Data data;
} STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum;

STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Turning_entry_NONE();
STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Turning_entry_final_f();
/* Representation of enum STATES_op_SMovement_clone_normal_SMovement_Moving_entry */

typedef enum STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Type {
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_NONE,
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_final_f,
} STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Type;

typedef union STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Data {
} STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Data;

typedef struct STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum {
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Type type;
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Data data;
} STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum;

STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_entry_NONE();
STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_entry_final_f();
/* Representation of enum C_ctrl_ref0_input */

typedef enum C_ctrl_ref0_input_Type {
	C_ctrl_ref0_input_obstacle,
	C_ctrl_ref0_input__done_,
	C_ctrl_ref0_input__terminate_,
} C_ctrl_ref0_input_Type;

typedef union C_ctrl_ref0_input_Data {
} C_ctrl_ref0_input_Data;

typedef struct C_ctrl_ref0_input_Enum {
	C_ctrl_ref0_input_Type type;
	C_ctrl_ref0_input_Data data;
} C_ctrl_ref0_input_Enum;

C_ctrl_ref0_input_Enum create_C_ctrl_ref0_input_obstacle();
C_ctrl_ref0_input_Enum create_C_ctrl_ref0_input__done_();
C_ctrl_ref0_input_Enum create_C_ctrl_ref0_input__terminate_();
/* Representation of enum TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op */

typedef enum TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE,
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t_2_4,
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t,
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type;

typedef union TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data {
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data;

typedef struct TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type type;
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data data;
} TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum;

TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE();
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t_2_4();
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t();
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
/* Representation of enum M_CMovement_output */

typedef enum M_CMovement_output_Type {
	M_CMovement_output_stop,
	M_CMovement_output__move,
	M_CMovement_output__done_,
} M_CMovement_output_Type;

typedef struct M_CMovement_output__move_Data {
	float v1;
	float v2;
} M_CMovement_output__move_Data;

typedef union M_CMovement_output_Data {
	M_CMovement_output__move_Data _move;
} M_CMovement_output_Data;

typedef struct M_CMovement_output_Enum {
	M_CMovement_output_Type type;
	M_CMovement_output_Data data;
} M_CMovement_output_Enum;

M_CMovement_output_Enum create_M_CMovement_output_stop();
M_CMovement_output_Enum create_M_CMovement_output__move(float v1,float v2);
M_CMovement_output_Enum create_M_CMovement_output__done_();
/* Representation of enum stm_ref0_output */

typedef enum stm_ref0_output_Type {
	stm_ref0_output__move,
	stm_ref0_output_stop,
	stm_ref0_output__done_,
} stm_ref0_output_Type;

typedef struct stm_ref0_output__move_Data {
	float v1;
	float v2;
} stm_ref0_output__move_Data;

typedef union stm_ref0_output_Data {
	stm_ref0_output__move_Data _move;
} stm_ref0_output_Data;

typedef struct stm_ref0_output_Enum {
	stm_ref0_output_Type type;
	stm_ref0_output_Data data;
} stm_ref0_output_Enum;

stm_ref0_output_Enum create_stm_ref0_output__move(float v1,float v2);
stm_ref0_output_Enum create_stm_ref0_output_stop();
stm_ref0_output_Enum create_stm_ref0_output__done_();
/* Representation of enum C_ctrl_ref0_output */

typedef enum C_ctrl_ref0_output_Type {
	C_ctrl_ref0_output__move,
	C_ctrl_ref0_output_stop,
	C_ctrl_ref0_output__done_,
} C_ctrl_ref0_output_Type;

typedef struct C_ctrl_ref0_output__move_Data {
	float v1;
	float v2;
} C_ctrl_ref0_output__move_Data;

typedef union C_ctrl_ref0_output_Data {
	C_ctrl_ref0_output__move_Data _move;
} C_ctrl_ref0_output_Data;

typedef struct C_ctrl_ref0_output_Enum {
	C_ctrl_ref0_output_Type type;
	C_ctrl_ref0_output_Data data;
} C_ctrl_ref0_output_Enum;

C_ctrl_ref0_output_Enum create_C_ctrl_ref0_output__move(float v1,float v2);
C_ctrl_ref0_output_Enum create_C_ctrl_ref0_output_stop();
C_ctrl_ref0_output_Enum create_C_ctrl_ref0_output__done_();

/* Representation of record LINK */
struct LINK {
	 
	    ERROR Type AbstractProgram.impl.SetTypeImpl@6c656924 not implemented. joints;
};
/* Representation of record op_SMovement_clone_normal_SMovement_Moving_entry_memory */
struct op_SMovement_clone_normal_SMovement_Moving_entry_memory {
};
/* Representation of record op_SMovement_clone_normal_SMovement_Turning_entry_state */
struct op_SMovement_clone_normal_SMovement_Turning_entry_state {
	bool done;
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum state;
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum target_state;
	STATUS_Enum status;
};
/* Representation of record op_SMovement_clone_normal_SMovement_Moving_t2_op_state */
struct op_SMovement_clone_normal_SMovement_Moving_t2_op_state {
	bool done;
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum state;
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum target_state;
	STATUS_Enum status;
};
/* Representation of record op_SMovement_clone_normal_SMovement_Moving_t2_op_memory */
struct op_SMovement_clone_normal_SMovement_Moving_t2_op_memory {
};
/* Representation of record stm_ref0_Moving_state */
struct stm_ref0_Moving_state {
	bool done;
	STATES_stm_ref0_Moving_Enum state;
	STATES_stm_ref0_Moving_Enum target_state;
	STATUS_Enum status;
	bool tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_done;
	int tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_counter;
};
/* Representation of record op_SMovement_clone_normal_SMovement_Turning_entry_memory */
struct op_SMovement_clone_normal_SMovement_Turning_entry_memory {
};
/* Representation of record stm_ref0_Turning_state */
struct stm_ref0_Turning_state {
	bool done;
	STATES_stm_ref0_Turning_Enum state;
	STATES_stm_ref0_Turning_Enum target_state;
	STATUS_Enum status;
	bool tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_done;
	int tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_counter;
};
/* Representation of record op_SMovement_clone_normal_SMovement_Moving_entry_state */
struct op_SMovement_clone_normal_SMovement_Moving_entry_state {
	bool done;
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum state;
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum target_state;
	STATUS_Enum status;
};
/* Representation of record stm_ref0_inputstate */
struct stm_ref0_inputstate {
	bool obstacle;
	int _clock_MBC;
	TRANSITIONS_stm_ref0_Enum _transition_;
};
/* Representation of record stm_ref0_memory */
struct stm_ref0_memory {
	float lv;
	float PI;
	bool obstacleF;
	float av;
};
/* Representation of record JOINT */
struct JOINT {
	struct LINK flexible;
};
/* Representation of record stm_ref0_state */
struct stm_ref0_state {
	bool done;
	STATES_stm_ref0_Enum state;
	STATES_stm_ref0_Enum target_state;
	STATUS_Enum status;
	struct stm_ref0_Moving_state s_Moving;
	struct stm_ref0_Turning_state s_Turning;
	bool en_SMovement_Turning_1_done;
	int en_SMovement_Turning_1_counter;
	bool en_SMovement_Moving_1_done;
	int en_SMovement_Moving_1_counter;
	bool tr_SMovement_t2_done;
	int tr_SMovement_t2_counter;
};

/* Records encoding a channel */
typedef struct C_ctrl_ref0_output_Enum_Channel C_ctrl_ref0_output_Enum_Channel;
void send_C_ctrl_ref0_output_Enum_Channel(C_ctrl_ref0_output_Enum_Channel* ch, C_ctrl_ref0_output_Enum value);
C_ctrl_ref0_output_Enum receive_C_ctrl_ref0_output_Enum_Channel(C_ctrl_ref0_output_Enum_Channel* ch);

typedef struct sm_input_Enum_Channel sm_input_Enum_Channel;
void send_sm_input_Enum_Channel(sm_input_Enum_Channel* ch, sm_input_Enum value);
sm_input_Enum receive_sm_input_Enum_Channel(sm_input_Enum_Channel* ch);

typedef struct stm_ref0_output_Enum_Channel stm_ref0_output_Enum_Channel;
void send_stm_ref0_output_Enum_Channel(stm_ref0_output_Enum_Channel* ch, stm_ref0_output_Enum value);
stm_ref0_output_Enum receive_stm_ref0_output_Enum_Channel(stm_ref0_output_Enum_Channel* ch);

typedef struct C_cm_input_Enum_Channel C_cm_input_Enum_Channel;
void send_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch, C_cm_input_Enum value);
C_cm_input_Enum receive_C_cm_input_Enum_Channel(C_cm_input_Enum_Channel* ch);

typedef struct stm_ref0_input_Enum_Channel stm_ref0_input_Enum_Channel;
void send_stm_ref0_input_Enum_Channel(stm_ref0_input_Enum_Channel* ch, stm_ref0_input_Enum value);
stm_ref0_input_Enum receive_stm_ref0_input_Enum_Channel(stm_ref0_input_Enum_Channel* ch);

typedef struct M_CMovement_output_Enum_Channel M_CMovement_output_Enum_Channel;
void send_M_CMovement_output_Enum_Channel(M_CMovement_output_Enum_Channel* ch, M_CMovement_output_Enum value);
M_CMovement_output_Enum receive_M_CMovement_output_Enum_Channel(M_CMovement_output_Enum_Channel* ch);

typedef struct C_ctrl_ref0_input_Enum_Channel C_ctrl_ref0_input_Enum_Channel;
void send_C_ctrl_ref0_input_Enum_Channel(C_ctrl_ref0_input_Enum_Channel* ch, C_ctrl_ref0_input_Enum value);
C_ctrl_ref0_input_Enum receive_C_ctrl_ref0_input_Enum_Channel(C_ctrl_ref0_input_Enum_Channel* ch);

typedef struct M_CMovement_input_Enum_Channel M_CMovement_input_Enum_Channel;
void send_M_CMovement_input_Enum_Channel(M_CMovement_input_Enum_Channel* ch, M_CMovement_input_Enum value);
M_CMovement_input_Enum receive_M_CMovement_input_Enum_Channel(M_CMovement_input_Enum_Channel* ch);

typedef struct M_SimCMovement_output_Enum_Channel M_SimCMovement_output_Enum_Channel;
void send_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch, M_SimCMovement_output_Enum value);
M_SimCMovement_output_Enum receive_M_SimCMovement_output_Enum_Channel(M_SimCMovement_output_Enum_Channel* ch);

typedef struct sm_output_Enum_Channel sm_output_Enum_Channel;
void send_sm_output_Enum_Channel(sm_output_Enum_Channel* ch, sm_output_Enum value);
sm_output_Enum receive_sm_output_Enum_Channel(sm_output_Enum_Channel* ch);

typedef struct M_SimCMovement_input_Enum_Channel M_SimCMovement_input_Enum_Channel;
void send_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch, M_SimCMovement_input_Enum value);
M_SimCMovement_input_Enum receive_M_SimCMovement_input_Enum_Channel(M_SimCMovement_input_Enum_Channel* ch);

typedef struct C_cm_output_Enum_Channel C_cm_output_Enum_Channel;
void send_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch, C_cm_output_Enum value);
C_cm_output_Enum receive_C_cm_output_Enum_Channel(C_cm_output_Enum_Channel* ch);


/* Records grouping channels per parallel block */
typedef struct control_Channels control_Channels;

typedef struct control_Channels control_Channels;

typedef struct mod_CMovement_thread_Channels mod_CMovement_thread_Channels;

typedef struct stm_stm_ref0_Channels stm_stm_ref0_Channels;

typedef struct ctrl_ctrl_ref0_thread_Channels ctrl_ctrl_ref0_thread_Channels;

typedef struct mod_SimCMovement_thread_Channels mod_SimCMovement_thread_Channels;

typedef struct stm_sm_Channels stm_sm_Channels;

typedef struct ctrl_cm_thread_Channels ctrl_cm_thread_Channels;


/* Declaration of function signatures */
void mod_CMovement_step(C_ctrl_ref0_input_Enum_Channel* start_ctrl_ref0
                        , C_ctrl_ref0_output_Enum_Channel* end_ctrl_ref0);
void ctrl_ctrl_ref0_step(stm_ref0_input_Enum_Channel* start_stm_ref0
                         , stm_ref0_output_Enum_Channel* end_stm_ref0);
char* print_op_SMovement_clone_normal_SMovement_Moving_entry_state(struct op_SMovement_clone_normal_SMovement_Moving_entry_state* state);
void op_SMovement_clone_normal_SMovement_Turning_entry_step(STATES_stm_ref0_Enum_Channel* start_SMovement
                                                            , stm_ref0_output_Enum_Channel* end_SMovement
                                                            , struct stm_ref0_inputstate* inputstate, STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum* state, struct op_SMovement_clone_normal_SMovement_Turning_entry_memory* local_memory, struct stm_ref0_memory* stm_memory);
char* print_STATES_op_SMovement_clone_normal_SMovement_Moving_entry(STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum* value);
char* print_STATES_stm_ref0_Moving(STATES_stm_ref0_Moving_Enum* value);
char* print_stm_ref0_Turning_state(struct stm_ref0_Turning_state* state);
struct stm_ref0_memory init_memorystate();
RESULT_Enum tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle(struct stm_ref0_Moving_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output);
RESULT_Enum stm_stm_ref0_step(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memorystate, stm_ref0_output_Enum_Channel* output);
char* print_STATES_stm_ref0(STATES_stm_ref0_Enum* value);
char* print_STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op(STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum* value);
char* print_op_SMovement_clone_normal_SMovement_Moving_t2_op_state(struct op_SMovement_clone_normal_SMovement_Moving_t2_op_state* state);
char* print_stm_ref0_state(struct stm_ref0_state* state);
RESULT_Enum en_SMovement_Turning_1(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output);
RESULT_Enum tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle(struct stm_ref0_Turning_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output);
RESULT_Enum stm_stm_ref0_Turning_step(struct stm_ref0_Turning_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memorystate, stm_ref0_output_Enum_Channel* output);
RESULT_Enum en_SMovement_Moving_1(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output);
char* print_STATES_stm_ref0_Turning(STATES_stm_ref0_Turning_Enum* value);
RESULT_Enum stm_stm_ref0_Moving_step(struct stm_ref0_Moving_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memorystate, stm_ref0_output_Enum_Channel* output);
RESULT_Enum tr_SMovement_t2(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output);
struct stm_ref0_state init_state();
struct stm_ref0_inputstate init_inputstate();
void op_SMovement_clone_normal_SMovement_Moving_entry_step(STATES_stm_ref0_Enum_Channel* start_SMovement
                                                           , stm_ref0_output_Enum_Channel* end_SMovement
                                                           , struct stm_ref0_inputstate* inputstate, STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum* state, struct op_SMovement_clone_normal_SMovement_Moving_entry_memory* local_memory, struct stm_ref0_memory* stm_memory);
char* print_stm_ref0_Moving_state(struct stm_ref0_Moving_state* state);
char* print_op_SMovement_clone_normal_SMovement_Turning_entry_state(struct op_SMovement_clone_normal_SMovement_Turning_entry_state* state);
void op_SMovement_clone_normal_SMovement_Moving_t2_op_step(STATES_stm_ref0_Enum_Channel* start_SMovement
                                                           , stm_ref0_output_Enum_Channel* end_SMovement
                                                           , struct stm_ref0_inputstate* inputstate, STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum* state, struct op_SMovement_clone_normal_SMovement_Moving_t2_op_memory* local_memory, struct stm_ref0_memory* stm_memory);
char* print_STATES_op_SMovement_clone_normal_SMovement_Turning_entry(STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum* value);

#endif