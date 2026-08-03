
#include "SimMovement_PI.h"


// Temporary solution to trim strings taken from http://www.martinbroadhurst.com/trim-a-string-in-c.html 

char *ltrim(char *str, const char *seps)
{
    size_t totrim;
    if (seps == NULL) {
        seps = "\t\n\v\f\r ";
    }
    totrim = strspn(str, seps);
    if (totrim > 0) {
        size_t len = strlen(str);
        if (totrim == len) {
            str[0] = '\0';
        }
        else {
            memmove(str, str + totrim, len + 1 - totrim);
        }
    }
    return str;
}

char *rtrim(char *str, const char *seps)
{
    int i;
    if (seps == NULL) {
        seps = "\t\n\v\f\r ";
    }
    i = strlen(str) - 1;
    while (i >= 0 && strchr(seps, str[i]) != NULL) {
        str[i] = '\0';
        i--;
    }
    return str;
}

char *trim(char *str, const char *seps)
{
    return ltrim(rtrim(str, seps), seps);
}

char* concat(char *str1, char *str2) {
    char* result = calloc((strlen(str1)+strlen(str2))+1,sizeof(char));
    char* s1 = (char*)memcpy(result, str1, strlen(str1));
    char* s2 = (char*)memcpy(result+strlen(str1), str2, strlen(str2)); //strcat(result, str2);
    return result;
}



IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_RGGB8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_BAYER_RGGB8;
	
	IMAGE_FORMAT_Enum aux = (IMAGE_FORMAT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_B8G8R8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_B8G8R8;
	
	IMAGE_FORMAT_Enum aux = (IMAGE_FORMAT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_GRBG8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_BAYER_GRBG8;
	
	IMAGE_FORMAT_Enum aux = (IMAGE_FORMAT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_L8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_L8;
	
	IMAGE_FORMAT_Enum aux = (IMAGE_FORMAT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_BGGR8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_BAYER_BGGR8;
	
	IMAGE_FORMAT_Enum aux = (IMAGE_FORMAT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_R8G8B8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_R8G8B8;
	
	IMAGE_FORMAT_Enum aux = (IMAGE_FORMAT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_GBRG8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_BAYER_GBRG8;
	
	IMAGE_FORMAT_Enum aux = (IMAGE_FORMAT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LensType_Enum create_LensType_equidistant() {
	LensType_Data data;

	LensType_Type type = LensType_equidistant;
	
	LensType_Enum aux = (LensType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LensType_Enum create_LensType_orthographic() {
	LensType_Data data;

	LensType_Type type = LensType_orthographic;
	
	LensType_Enum aux = (LensType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LensType_Enum create_LensType_custom() {
	LensType_Data data;

	LensType_Type type = LensType_custom;
	
	LensType_Enum aux = (LensType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LensType_Enum create_LensType_gnomonical() {
	LensType_Data data;

	LensType_Type type = LensType_gnomonical;
	
	LensType_Enum aux = (LensType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LensType_Enum create_LensType_equisolid_angle() {
	LensType_Data data;

	LensType_Type type = LensType_equisolid_angle;
	
	LensType_Enum aux = (LensType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LensType_Enum create_LensType_stereographic() {
	LensType_Data data;

	LensType_Type type = LensType_stereographic;
	
	LensType_Enum aux = (LensType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
FunctionType_Enum create_FunctionType_sin() {
	FunctionType_Data data;

	FunctionType_Type type = FunctionType_sin;
	
	FunctionType_Enum aux = (FunctionType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
FunctionType_Enum create_FunctionType_id() {
	FunctionType_Data data;

	FunctionType_Type type = FunctionType_id;
	
	FunctionType_Enum aux = (FunctionType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
FunctionType_Enum create_FunctionType_tan() {
	FunctionType_Data data;

	FunctionType_Type type = FunctionType_tan;
	
	FunctionType_Enum aux = (FunctionType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LocalizationType_Enum create_LocalizationType_GRAV_UP() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_GRAV_UP;
	
	LocalizationType_Enum aux = (LocalizationType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LocalizationType_Enum create_LocalizationType_CUSTOM() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_CUSTOM;
	
	LocalizationType_Enum aux = (LocalizationType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LocalizationType_Enum create_LocalizationType_GRAV_DOWN() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_GRAV_DOWN;
	
	LocalizationType_Enum aux = (LocalizationType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LocalizationType_Enum create_LocalizationType_NED() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_NED;
	
	LocalizationType_Enum aux = (LocalizationType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LocalizationType_Enum create_LocalizationType_ENU() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_ENU;
	
	LocalizationType_Enum aux = (LocalizationType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
LocalizationType_Enum create_LocalizationType_NWU() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_NWU;
	
	LocalizationType_Enum aux = (LocalizationType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
NoiseType_Enum create_NoiseType_NONE() {
	NoiseType_Data data;

	NoiseType_Type type = NoiseType_NONE;
	
	NoiseType_Enum aux = (NoiseType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
NoiseType_Enum create_NoiseType_GAUSSIAN_QUANTIZED() {
	NoiseType_Data data;

	NoiseType_Type type = NoiseType_GAUSSIAN_QUANTIZED;
	
	NoiseType_Enum aux = (NoiseType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
NoiseType_Enum create_NoiseType_GAUSSIAN() {
	NoiseType_Data data;

	NoiseType_Type type = NoiseType_GAUSSIAN;
	
	NoiseType_Enum aux = (NoiseType_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_CMovement_input_Enum create_M_CMovement_input_obstacle() {
	M_CMovement_input_Data data;

	M_CMovement_input_Type type = M_CMovement_input_obstacle;
	
	M_CMovement_input_Enum aux = (M_CMovement_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_CMovement_input_Enum create_M_CMovement_input__done_() {
	M_CMovement_input_Data data;

	M_CMovement_input_Type type = M_CMovement_input__done_;
	
	M_CMovement_input_Enum aux = (M_CMovement_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_CMovement_input_Enum create_M_CMovement_input__terminate_() {
	M_CMovement_input_Data data;

	M_CMovement_input_Type type = M_CMovement_input__terminate_;
	
	M_CMovement_input_Enum aux = (M_CMovement_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_stm_ref0_Moving_Enum create_STATES_stm_ref0_Moving_NONE() {
	STATES_stm_ref0_Moving_Data data;

	STATES_stm_ref0_Moving_Type type = STATES_stm_ref0_Moving_NONE;
	
	STATES_stm_ref0_Moving_Enum aux = (STATES_stm_ref0_Moving_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_stm_ref0_Moving_Enum create_STATES_stm_ref0_Moving_EmptyCycle() {
	STATES_stm_ref0_Moving_Data data;

	STATES_stm_ref0_Moving_Type type = STATES_stm_ref0_Moving_EmptyCycle;
	
	STATES_stm_ref0_Moving_Enum aux = (STATES_stm_ref0_Moving_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_stm_ref0_Enum create_STATES_stm_ref0_NONE() {
	STATES_stm_ref0_Data data;

	STATES_stm_ref0_Type type = STATES_stm_ref0_NONE;
	
	STATES_stm_ref0_Enum aux = (STATES_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_stm_ref0_Enum create_STATES_stm_ref0_Moving() {
	STATES_stm_ref0_Data data;

	STATES_stm_ref0_Type type = STATES_stm_ref0_Moving;
	
	STATES_stm_ref0_Enum aux = (STATES_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_stm_ref0_Enum create_STATES_stm_ref0_Turning() {
	STATES_stm_ref0_Data data;

	STATES_stm_ref0_Type type = STATES_stm_ref0_Turning;
	
	STATES_stm_ref0_Enum aux = (STATES_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_stm_ref0_Turning_Enum create_STATES_stm_ref0_Turning_NONE() {
	STATES_stm_ref0_Turning_Data data;

	STATES_stm_ref0_Turning_Type type = STATES_stm_ref0_Turning_NONE;
	
	STATES_stm_ref0_Turning_Enum aux = (STATES_stm_ref0_Turning_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_stm_ref0_Turning_Enum create_STATES_stm_ref0_Turning_EmptyCycle() {
	STATES_stm_ref0_Turning_Data data;

	STATES_stm_ref0_Turning_Type type = STATES_stm_ref0_Turning_EmptyCycle;
	
	STATES_stm_ref0_Turning_Enum aux = (STATES_stm_ref0_Turning_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_NONE() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_NONE;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_t2() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_stm_ref0_t2;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_stm_ref0_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_t1() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_stm_ref0_t1;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_stm_ref0_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Turning_tTurning() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_stm_ref0_Turning_tTurning;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_t3() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_stm_ref0_t3;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_stm_ref0_Enum create_TRANSITIONS_stm_ref0_stm_ref0_Moving_tMoving() {
	TRANSITIONS_stm_ref0_Data data;

	TRANSITIONS_stm_ref0_Type type = TRANSITIONS_stm_ref0_stm_ref0_Moving_tMoving;
	
	TRANSITIONS_stm_ref0_Enum aux = (TRANSITIONS_stm_ref0_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_NONE() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_NONE;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t_2_2() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t_2_2;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_op_SMovement_clone_normal_SMovement_Moving_entry_t;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE() {
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data data;

	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type type = STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE;
	
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum aux = (STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_final_f() {
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data data;

	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type type = STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_final_f;
	
	STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum aux = (STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
stm_ref0_input_Enum create_stm_ref0_input_obstacle() {
	stm_ref0_input_Data data;

	stm_ref0_input_Type type = stm_ref0_input_obstacle;
	
	stm_ref0_input_Enum aux = (stm_ref0_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
stm_ref0_input_Enum create_stm_ref0_input__done_() {
	stm_ref0_input_Data data;

	stm_ref0_input_Type type = stm_ref0_input__done_;
	
	stm_ref0_input_Enum aux = (stm_ref0_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
stm_ref0_input_Enum create_stm_ref0_input__terminate_() {
	stm_ref0_input_Data data;

	stm_ref0_input_Type type = stm_ref0_input__terminate_;
	
	stm_ref0_input_Enum aux = (stm_ref0_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_NONE() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_NONE;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t_2_4() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t_2_4;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_op_SMovement_clone_normal_SMovement_Turning_entry_t;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Turning_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Turning_entry_NONE() {
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Data data;

	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Type type = STATES_op_SMovement_clone_normal_SMovement_Turning_entry_NONE;
	
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum aux = (STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Turning_entry_final_f() {
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Data data;

	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Type type = STATES_op_SMovement_clone_normal_SMovement_Turning_entry_final_f;
	
	STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum aux = (STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_entry_NONE() {
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Data data;

	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Type type = STATES_op_SMovement_clone_normal_SMovement_Moving_entry_NONE;
	
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum aux = (STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum create_STATES_op_SMovement_clone_normal_SMovement_Moving_entry_final_f() {
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Data data;

	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Type type = STATES_op_SMovement_clone_normal_SMovement_Moving_entry_final_f;
	
	STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum aux = (STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_ctrl_ref0_input_Enum create_C_ctrl_ref0_input_obstacle() {
	C_ctrl_ref0_input_Data data;

	C_ctrl_ref0_input_Type type = C_ctrl_ref0_input_obstacle;
	
	C_ctrl_ref0_input_Enum aux = (C_ctrl_ref0_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_ctrl_ref0_input_Enum create_C_ctrl_ref0_input__done_() {
	C_ctrl_ref0_input_Data data;

	C_ctrl_ref0_input_Type type = C_ctrl_ref0_input__done_;
	
	C_ctrl_ref0_input_Enum aux = (C_ctrl_ref0_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_ctrl_ref0_input_Enum create_C_ctrl_ref0_input__terminate_() {
	C_ctrl_ref0_input_Data data;

	C_ctrl_ref0_input_Type type = C_ctrl_ref0_input__terminate_;
	
	C_ctrl_ref0_input_Enum aux = (C_ctrl_ref0_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t_2_4() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t_2_4;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum create_TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t() {
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Data data;

	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Type type = TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_op_SMovement_clone_normal_SMovement_Moving_t2_op_t;
	
	TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum aux = (TRANSITIONS_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
Colour_Enum create_Colour_rgb(float v1,float v2,float v3) {
	Colour_Data data;
		
	data.rgb.v1 = v1;	
		
	data.rgb.v2 = v2;	
		
	data.rgb.v3 = v3;	

	Colour_Type type = Colour_rgb;
	
	Colour_Enum aux = (Colour_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
Pitch_Enum create_Pitch_Finite(float v1) {
	Pitch_Data data;
		
	data.Finite.v1 = v1;	

	Pitch_Type type = Pitch_Finite;
	
	Pitch_Enum aux = (Pitch_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
Pitch_Enum create_Pitch_Infinite() {
	Pitch_Data data;

	Pitch_Type type = Pitch_Infinite;
	
	Pitch_Enum aux = (Pitch_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_CMovement_output_Enum create_M_CMovement_output_stop() {
	M_CMovement_output_Data data;

	M_CMovement_output_Type type = M_CMovement_output_stop;
	
	M_CMovement_output_Enum aux = (M_CMovement_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_CMovement_output_Enum create_M_CMovement_output__move(float v1,float v2) {
	M_CMovement_output_Data data;
		
	data._move.v1 = v1;	
		
	data._move.v2 = v2;	

	M_CMovement_output_Type type = M_CMovement_output__move;
	
	M_CMovement_output_Enum aux = (M_CMovement_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_CMovement_output_Enum create_M_CMovement_output__done_() {
	M_CMovement_output_Data data;

	M_CMovement_output_Type type = M_CMovement_output__done_;
	
	M_CMovement_output_Enum aux = (M_CMovement_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
stm_ref0_output_Enum create_stm_ref0_output__move(float v1,float v2) {
	stm_ref0_output_Data data;
		
	data._move.v1 = v1;	
		
	data._move.v2 = v2;	

	stm_ref0_output_Type type = stm_ref0_output__move;
	
	stm_ref0_output_Enum aux = (stm_ref0_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
stm_ref0_output_Enum create_stm_ref0_output_stop() {
	stm_ref0_output_Data data;

	stm_ref0_output_Type type = stm_ref0_output_stop;
	
	stm_ref0_output_Enum aux = (stm_ref0_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
stm_ref0_output_Enum create_stm_ref0_output__done_() {
	stm_ref0_output_Data data;

	stm_ref0_output_Type type = stm_ref0_output__done_;
	
	stm_ref0_output_Enum aux = (stm_ref0_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_ctrl_ref0_output_Enum create_C_ctrl_ref0_output__move(float v1,float v2) {
	C_ctrl_ref0_output_Data data;
		
	data._move.v1 = v1;	
		
	data._move.v2 = v2;	

	C_ctrl_ref0_output_Type type = C_ctrl_ref0_output__move;
	
	C_ctrl_ref0_output_Enum aux = (C_ctrl_ref0_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_ctrl_ref0_output_Enum create_C_ctrl_ref0_output_stop() {
	C_ctrl_ref0_output_Data data;

	C_ctrl_ref0_output_Type type = C_ctrl_ref0_output_stop;
	
	C_ctrl_ref0_output_Enum aux = (C_ctrl_ref0_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_ctrl_ref0_output_Enum create_C_ctrl_ref0_output__done_() {
	C_ctrl_ref0_output_Data data;

	C_ctrl_ref0_output_Type type = C_ctrl_ref0_output__done_;
	
	C_ctrl_ref0_output_Enum aux = (C_ctrl_ref0_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}


	void mod_CMovement_step(C_ctrl_ref0_input_Enum_Channel* start_ctrl_ref0
	                        , C_ctrl_ref0_output_Enum_Channel* end_ctrl_ref0) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Started step of module CMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		{
			char _s0[256];
			sprintf(_s0, "%s", "Finished step of module CMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
	}
	void ctrl_ctrl_ref0_step(stm_ref0_input_Enum_Channel* start_stm_ref0
	                         , stm_ref0_output_Enum_Channel* end_stm_ref0) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "	Started step of controller ctrl_ref0");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
	}
	char* print_op_SMovement_clone_normal_SMovement_Moving_entry_state(struct op_SMovement_clone_normal_SMovement_Moving_entry_state* state) {
		char* temp1_;
		temp1_ = print_STATES_op_SMovement_clone_normal_SMovement_Moving_entry(&(state)->state);
		char* temp2_;
		temp2_ = print_STATUS(&(state)->status);
		char* aux1_ = concat(temp1_, " (");
		char* aux2_ = concat(aux1_, temp2_);
		char* aux3_ = concat(aux2_, ")");
		free(aux1_);
		free(aux2_);
		return aux3_;
	}
	void op_SMovement_clone_normal_SMovement_Turning_entry_step(STATES_stm_ref0_Enum_Channel* start_SMovement
	                                                            , stm_ref0_output_Enum_Channel* end_SMovement
	                                                            , struct stm_ref0_inputstate* inputstate, STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum* state, struct op_SMovement_clone_normal_SMovement_Turning_entry_memory* local_memory, struct stm_ref0_memory* stm_memory) {
	}
	char* print_STATES_op_SMovement_clone_normal_SMovement_Moving_entry(STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum* value) {
		if (value->type == STATES_op_SMovement_clone_normal_SMovement_Moving_entry_NONE) {
			return "NONE";
		}
		else if (value->type == STATES_op_SMovement_clone_normal_SMovement_Moving_entry_final_f) {
		     	return "final_f";
		     }
	}
	char* print_STATES_stm_ref0_Moving(STATES_stm_ref0_Moving_Enum* value) {
		if (value->type == STATES_stm_ref0_Moving_NONE) {
			return "NONE";
		}
		else if (value->type == STATES_stm_ref0_Moving_EmptyCycle) {
		     	return "EmptyCycle";
		     }
	}
	char* print_stm_ref0_Turning_state(struct stm_ref0_Turning_state* state) {
		char* temp1_;
		temp1_ = print_STATES_stm_ref0_Turning(&(state)->state);
		char* temp2_;
		temp2_ = print_STATUS(&(state)->status);
		char* aux1_ = concat(temp1_, " (");
		char* aux2_ = concat(aux1_, temp2_);
		char* aux3_ = concat(aux2_, ")");
		free(aux1_);
		free(aux2_);
		return aux3_;
	}
	struct stm_ref0_memory init_memorystate() {
		struct stm_ref0_memory aux = (struct stm_ref0_memory) {
		                             	.lv = 0.0,
		                             	.PI = 0.0,
		                             	.obstacleF = false,
		                             	.av = 0.0
		                             };
		return aux;
	}
	RESULT_Enum tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle(struct stm_ref0_Moving_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running transition action of transition SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_counter == 0 ) {
			(*state).tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_counter = 1;
			return create_RESULT_WAIT();
		} else if (	(state)->tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_counter == 1 ) {
			(*memory).obstacleF = true;
			(*state).tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_counter = 2;
			return create_RESULT_CONT();
		} else {
			(state)->tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_done = true;
			return create_RESULT_CONT();
		}
	}
	RESULT_Enum stm_stm_ref0_step(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memorystate, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "		Running step of state machine SMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if ((*state).state.type == create_STATES_stm_ref0_NONE().type) {
			{
				char _s0[256];
				sprintf(_s0, "%s", "		Executing initial junction of SMovement");
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			{
				(*state).state = create_STATES_stm_ref0_Moving();
			}
			return create_RESULT_CONT();
		}
		else if ((*state).state.type == create_STATES_stm_ref0_Moving().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state Moving");
		     			fprintf(log_file, "DEBUG: %s\n", _s0);
		     		}
		     		if (!(state)->en_SMovement_Moving_1_done) {
		     			RESULT_Enum _ret_;
		     			_ret_ = en_SMovement_Moving_1(state, inputstate, memorystate, output);
		     			return _ret_;
		     		} else {
		     			(*state).status = create_STATUS_ENTER_CHILDREN();
		     			(*state).en_SMovement_Moving_1_done = false;
		     			(*state).en_SMovement_Moving_1_counter = 0;
		     			((*state).s_Moving).status = create_STATUS_ENTER_STATE();
		     			return create_RESULT_CONT();
		     		}
		     	}
		     	else if ((*state).status.type == create_STATUS_ENTER_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Entering children of state Moving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	RESULT_Enum _ret_;
		     	     	_ret_ = stm_stm_ref0_Moving_step(&(state)->s_Moving, inputstate, memorystate, output);
		     	     	if (	((state)->s_Moving).status.type == create_STATUS_EXECUTE_STATE().type
		     	     	     ) {
		     	     		(*state).status = create_STATUS_EXECUTE_STATE();
		     	     		{
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_NONE();
		     	     		}
		     	     	} 
		     	     	return _ret_;
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state Moving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_NONE().type
		     	     	     ) {
		     	     		if (((inputstate)->obstacle && (memorystate)->obstacleF)) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_stm_ref0_t2();
		     	     			(*state).status = create_STATUS_EXIT_CHILDREN();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			RESULT_Enum _ret_;
		     	     			_ret_ = stm_stm_ref0_Moving_step(&(state)->s_Moving, inputstate, memorystate, output);
		     	     			return _ret_;
		     	     		}
		     	     	} else {
		     	     		RESULT_Enum _ret_;
		     	     		_ret_ = stm_stm_ref0_Moving_step(&(state)->s_Moving, inputstate, memorystate, output);
		     	     		return _ret_;
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting children of state Moving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	((*state).s_Moving).status.type == create_STATUS_EXECUTE_STATE().type
		     	     	     ) {
		     	     		((*state).s_Moving).status = create_STATUS_EXIT_CHILDREN();
		     	     		return create_RESULT_CONT();
		     	     	} else if (	((*state).s_Moving).status.type == create_STATUS_INACTIVE().type
		     	     	            ) {
		     	     		(*state).status = create_STATUS_EXIT_STATE();
		     	     		return create_RESULT_CONT();
		     	     	} else {
		     	     		RESULT_Enum _ret_;
		     	     		_ret_ = stm_stm_ref0_Moving_step(&(state)->s_Moving, inputstate, memorystate, output);
		     	     		return _ret_;
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state Moving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_stm_ref0_t2().type
		     	     		     ) {
		     	     			if (!(state)->tr_SMovement_t2_done) {
		     	     				RESULT_Enum _ret_;
		     	     				_ret_ = tr_SMovement_t2(state, inputstate, memorystate, output);
		     	     				return _ret_;
		     	     			} else {
		     	     				(*state).state = create_STATES_stm_ref0_Turning();
		     	     				(*state).status = create_STATUS_ENTER_STATE();
		     	     				(*state).tr_SMovement_t2_done = false;
		     	     				(*state).tr_SMovement_t2_counter = 0;
		     	     				return create_RESULT_CONT();
		     	     			}
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_stm_ref0_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State Moving is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
		else if ((*state).state.type == create_STATES_stm_ref0_Turning().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state Turning");
		     			fprintf(log_file, "DEBUG: %s\n", _s0);
		     		}
		     		if (!(state)->en_SMovement_Turning_1_done) {
		     			RESULT_Enum _ret_;
		     			_ret_ = en_SMovement_Turning_1(state, inputstate, memorystate, output);
		     			return _ret_;
		     		} else {
		     			(*state).status = create_STATUS_ENTER_CHILDREN();
		     			(*state).en_SMovement_Turning_1_done = false;
		     			(*state).en_SMovement_Turning_1_counter = 0;
		     			((*state).s_Turning).status = create_STATUS_ENTER_STATE();
		     			return create_RESULT_CONT();
		     		}
		     	}
		     	else if ((*state).status.type == create_STATUS_ENTER_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Entering children of state Turning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	RESULT_Enum _ret_;
		     	     	_ret_ = stm_stm_ref0_Turning_step(&(state)->s_Turning, inputstate, memorystate, output);
		     	     	if (	((state)->s_Turning).status.type == create_STATUS_EXECUTE_STATE().type
		     	     	     ) {
		     	     		(*state).status = create_STATUS_EXECUTE_STATE();
		     	     		{
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_NONE();
		     	     		}
		     	     	} 
		     	     	return _ret_;
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state Turning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_NONE().type
		     	     	     ) {
		     	     		if ((inputstate)->_clock_MBC >= ((memorystate)->PI / (memorystate)->av)) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_stm_ref0_t3();
		     	     			(*state).status = create_STATUS_EXIT_CHILDREN();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			RESULT_Enum _ret_;
		     	     			_ret_ = stm_stm_ref0_Turning_step(&(state)->s_Turning, inputstate, memorystate, output);
		     	     			return _ret_;
		     	     		}
		     	     	} else {
		     	     		RESULT_Enum _ret_;
		     	     		_ret_ = stm_stm_ref0_Turning_step(&(state)->s_Turning, inputstate, memorystate, output);
		     	     		return _ret_;
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting children of state Turning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	((*state).s_Turning).status.type == create_STATUS_EXECUTE_STATE().type
		     	     	     ) {
		     	     		((*state).s_Turning).status = create_STATUS_EXIT_CHILDREN();
		     	     		return create_RESULT_CONT();
		     	     	} else if (	((*state).s_Turning).status.type == create_STATUS_INACTIVE().type
		     	     	            ) {
		     	     		(*state).status = create_STATUS_EXIT_STATE();
		     	     		return create_RESULT_CONT();
		     	     	} else {
		     	     		RESULT_Enum _ret_;
		     	     		_ret_ = stm_stm_ref0_Turning_step(&(state)->s_Turning, inputstate, memorystate, output);
		     	     		return _ret_;
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state Turning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_stm_ref0_t3().type
		     	     		     ) {
		     	     			(*state).state = create_STATES_stm_ref0_Moving();
		     	     			(*state).status = create_STATUS_ENTER_STATE();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_stm_ref0_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State Turning is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
	}
	char* print_STATES_stm_ref0(STATES_stm_ref0_Enum* value) {
		if (value->type == STATES_stm_ref0_NONE) {
			return "NONE";
		}
		else if (value->type == STATES_stm_ref0_Moving) {
		     	return "Moving";
		     }
		else if (value->type == STATES_stm_ref0_Turning) {
		     	return "Turning";
		     }
	}
	char* print_STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op(STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum* value) {
		if (value->type == STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_NONE) {
			return "NONE";
		}
		else if (value->type == STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_final_f) {
		     	return "final_f";
		     }
	}
	char* print_op_SMovement_clone_normal_SMovement_Moving_t2_op_state(struct op_SMovement_clone_normal_SMovement_Moving_t2_op_state* state) {
		char* temp1_;
		temp1_ = print_STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op(&(state)->state);
		char* temp2_;
		temp2_ = print_STATUS(&(state)->status);
		char* aux1_ = concat(temp1_, " (");
		char* aux2_ = concat(aux1_, temp2_);
		char* aux3_ = concat(aux2_, ")");
		free(aux1_);
		free(aux2_);
		return aux3_;
	}
	char* print_stm_ref0_state(struct stm_ref0_state* state) {
		char* temp1_;
		temp1_ = print_STATES_stm_ref0(&(state)->state);
		char* temp2_;
		temp2_ = print_STATUS(&(state)->status);
		char* aux1_ = concat(temp1_, " (");
		char* aux2_ = concat(aux1_, temp2_);
		char* aux3_ = concat(aux2_, ")");
		free(aux1_);
		free(aux2_);
		if ((state)->state.type == STATES_stm_ref0_Moving) {
			char* temp_;
			temp_ = print_stm_ref0_Moving_state(&(state)->s_Moving);
			char* aux4a_ = concat(aux3_, " > ");
			char* aux4b_ = concat(aux4a_, temp_);
			free(aux3_);
			free(aux4a_);
			free(temp_);
			return aux4b_;
		}
		else if ((state)->state.type == STATES_stm_ref0_Turning) {
		     	char* temp_;
		     	temp_ = print_stm_ref0_Turning_state(&(state)->s_Turning);
		     	char* aux5a_ = concat(aux3_, " > ");
		     	char* aux5b_ = concat(aux5a_, temp_);
		     	free(aux3_);
		     	free(aux5a_);
		     	free(temp_);
		     	return aux5b_;
		     }
		else {
			return aux3_;
		}
	}
	RESULT_Enum en_SMovement_Turning_1(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running entry action 1 of state SMovement_Turning.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->en_SMovement_Turning_1_counter == 0 ) {
			     // this is a comment that replaces a Skip; skips should be filtered out in the future
			(*state).en_SMovement_Turning_1_counter = 1;
			return create_RESULT_CONT();
		} else {
			(state)->en_SMovement_Turning_1_done = true;
			return create_RESULT_CONT();
		}
	}
	RESULT_Enum tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle(struct stm_ref0_Turning_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running transition action of transition SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_counter == 0 ) {
			(*state).tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_counter = 1;
			return create_RESULT_WAIT();
		} else if (	(state)->tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_counter == 1 ) {
			(*memory).obstacleF = true;
			(*state).tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_counter = 2;
			return create_RESULT_CONT();
		} else {
			(state)->tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_done = true;
			return create_RESULT_CONT();
		}
	}
	RESULT_Enum stm_stm_ref0_Turning_step(struct stm_ref0_Turning_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memorystate, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "		Running step of state machine Turning");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if ((*state).state.type == create_STATES_stm_ref0_Turning_NONE().type) {
			{
				char _s0[256];
				sprintf(_s0, "%s", "		Executing initial junction of Turning");
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			{
				(*state).state = create_STATES_stm_ref0_Turning_EmptyCycle();
			}
			return create_RESULT_CONT();
		}
		else if ((*state).state.type == create_STATES_stm_ref0_Turning_EmptyCycle().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state EmptyCycle");
		     			fprintf(log_file, "DEBUG: %s\n", _s0);
		     		}
		     		{
		     			(*state).status = create_STATUS_ENTER_CHILDREN();
		     			return create_RESULT_CONT();
		     		}
		     	}
		     	else if ((*state).status.type == create_STATUS_ENTER_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Entering children of state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXECUTE_STATE();
		     	     	{
		     	     		(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_NONE();
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_NONE().type
		     	     	     ) {
		     	     		if (!(inputstate)->_clock_MBC >= ((memorystate)->PI / (memorystate)->av)) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_stm_ref0_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle();
		     	     			(*state).status = create_STATUS_EXIT_CHILDREN();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	} else {
		     	     		return create_RESULT_CONT();
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting children of state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXIT_STATE();
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_stm_ref0_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle().type
		     	     		     ) {
		     	     			if (!(state)->tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_done) {
		     	     				RESULT_Enum _ret_;
		     	     				_ret_ = tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle(state, inputstate, memorystate, output);
		     	     				return _ret_;
		     	     			} else {
		     	     				(*state).state = create_STATES_stm_ref0_Turning_EmptyCycle();
		     	     				(*state).status = create_STATUS_ENTER_STATE();
		     	     				(*state).tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_done = false;
		     	     				(*state).tr_SMovement_Turning_tEmptyCycle_SMovement_Turning_EmptyCycle_counter = 0;
		     	     				return create_RESULT_CONT();
		     	     			}
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_stm_ref0_Turning_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State EmptyCycle is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
	}
	RESULT_Enum en_SMovement_Moving_1(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running entry action 1 of state SMovement_Moving.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->en_SMovement_Moving_1_counter == 0 ) {
			     // this is a comment that replaces a Skip; skips should be filtered out in the future
			(*state).en_SMovement_Moving_1_counter = 1;
			return create_RESULT_CONT();
		} else {
			(state)->en_SMovement_Moving_1_done = true;
			return create_RESULT_CONT();
		}
	}
	char* print_STATES_stm_ref0_Turning(STATES_stm_ref0_Turning_Enum* value) {
		if (value->type == STATES_stm_ref0_Turning_NONE) {
			return "NONE";
		}
		else if (value->type == STATES_stm_ref0_Turning_EmptyCycle) {
		     	return "EmptyCycle";
		     }
	}
	RESULT_Enum stm_stm_ref0_Moving_step(struct stm_ref0_Moving_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memorystate, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "		Running step of state machine Moving");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if ((*state).state.type == create_STATES_stm_ref0_Moving_NONE().type) {
			{
				char _s0[256];
				sprintf(_s0, "%s", "		Executing initial junction of Moving");
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			{
				(*state).state = create_STATES_stm_ref0_Moving_EmptyCycle();
			}
			return create_RESULT_CONT();
		}
		else if ((*state).state.type == create_STATES_stm_ref0_Moving_EmptyCycle().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state EmptyCycle");
		     			fprintf(log_file, "DEBUG: %s\n", _s0);
		     		}
		     		{
		     			(*state).status = create_STATUS_ENTER_CHILDREN();
		     			return create_RESULT_CONT();
		     		}
		     	}
		     	else if ((*state).status.type == create_STATUS_ENTER_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Entering children of state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXECUTE_STATE();
		     	     	{
		     	     		(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_NONE();
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_NONE().type
		     	     	     ) {
		     	     		if (!((inputstate)->obstacle && (memorystate)->obstacleF)) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_stm_ref0_stm_ref0_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle();
		     	     			(*state).status = create_STATUS_EXIT_CHILDREN();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	} else {
		     	     		return create_RESULT_CONT();
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting children of state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXIT_STATE();
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state EmptyCycle");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_stm_ref0_stm_ref0_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle().type
		     	     		     ) {
		     	     			if (!(state)->tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_done) {
		     	     				RESULT_Enum _ret_;
		     	     				_ret_ = tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle(state, inputstate, memorystate, output);
		     	     				return _ret_;
		     	     			} else {
		     	     				(*state).state = create_STATES_stm_ref0_Moving_EmptyCycle();
		     	     				(*state).status = create_STATUS_ENTER_STATE();
		     	     				(*state).tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_done = false;
		     	     				(*state).tr_SMovement_Moving_tEmptyCycle_SMovement_Moving_EmptyCycle_counter = 0;
		     	     				return create_RESULT_CONT();
		     	     			}
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_stm_ref0_Moving_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State EmptyCycle is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
	}
	RESULT_Enum tr_SMovement_t2(struct stm_ref0_state* state, struct stm_ref0_inputstate* inputstate, struct stm_ref0_memory* memory, stm_ref0_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running transition action of transition SMovement_t2.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->tr_SMovement_t2_counter == 0 ) {
			     // this is a comment that replaces a Skip; skips should be filtered out in the future
			(*state).tr_SMovement_t2_counter = 1;
			return create_RESULT_CONT();
		} else if (	(state)->tr_SMovement_t2_counter == 1 ) {
			(*memory).obstacleF = false;
			(*state).tr_SMovement_t2_counter = 2;
			return create_RESULT_CONT();
		} else {
			(state)->tr_SMovement_t2_done = true;
			return create_RESULT_CONT();
		}
	}
	struct stm_ref0_state init_state() {
		struct stm_ref0_state aux = (struct stm_ref0_state) {
		                            	.done = false,
		                            	.state = create_STATES_stm_ref0_NONE(),
		                            	.target_state = create_STATES_stm_ref0_NONE(),
		                            	.status = create_STATUS_ENTER_STATE(),
		                            	.s_Moving = (struct stm_ref0_Moving_state) {
		                            		.done = false,
		                            		.state = create_STATES_stm_ref0_Moving_NONE(),
		                            		.target_state = create_STATES_stm_ref0_Moving_NONE(),
		                            		.status = create_STATUS_ENTER_STATE()
		                            	},
		                            	.s_Turning = (struct stm_ref0_Turning_state) {
		                            		.done = false,
		                            		.state = create_STATES_stm_ref0_Turning_NONE(),
		                            		.target_state = create_STATES_stm_ref0_Turning_NONE(),
		                            		.status = create_STATUS_ENTER_STATE()
		                            	}
		                            };
		return aux;
	}
	struct stm_ref0_inputstate init_inputstate() {
		struct stm_ref0_inputstate aux = (struct stm_ref0_inputstate) {
		                                 	.obstacle = false,
		                                 	._clock_MBC = 0,
		                                 	._transition_ = create_TRANSITIONS_stm_ref0_NONE()
		                                 };
		return aux;
	}
	void op_SMovement_clone_normal_SMovement_Moving_entry_step(STATES_stm_ref0_Enum_Channel* start_SMovement
	                                                           , stm_ref0_output_Enum_Channel* end_SMovement
	                                                           , struct stm_ref0_inputstate* inputstate, STATES_op_SMovement_clone_normal_SMovement_Moving_entry_Enum* state, struct op_SMovement_clone_normal_SMovement_Moving_entry_memory* local_memory, struct stm_ref0_memory* stm_memory) {
	}
	char* print_stm_ref0_Moving_state(struct stm_ref0_Moving_state* state) {
		char* temp1_;
		temp1_ = print_STATES_stm_ref0_Moving(&(state)->state);
		char* temp2_;
		temp2_ = print_STATUS(&(state)->status);
		char* aux1_ = concat(temp1_, " (");
		char* aux2_ = concat(aux1_, temp2_);
		char* aux3_ = concat(aux2_, ")");
		free(aux1_);
		free(aux2_);
		return aux3_;
	}
	char* print_op_SMovement_clone_normal_SMovement_Turning_entry_state(struct op_SMovement_clone_normal_SMovement_Turning_entry_state* state) {
		char* temp1_;
		temp1_ = print_STATES_op_SMovement_clone_normal_SMovement_Turning_entry(&(state)->state);
		char* temp2_;
		temp2_ = print_STATUS(&(state)->status);
		char* aux1_ = concat(temp1_, " (");
		char* aux2_ = concat(aux1_, temp2_);
		char* aux3_ = concat(aux2_, ")");
		free(aux1_);
		free(aux2_);
		return aux3_;
	}
	void op_SMovement_clone_normal_SMovement_Moving_t2_op_step(STATES_stm_ref0_Enum_Channel* start_SMovement
	                                                           , stm_ref0_output_Enum_Channel* end_SMovement
	                                                           , struct stm_ref0_inputstate* inputstate, STATES_op_SMovement_clone_normal_SMovement_Moving_t2_op_Enum* state, struct op_SMovement_clone_normal_SMovement_Moving_t2_op_memory* local_memory, struct stm_ref0_memory* stm_memory) {
	}
	char* print_STATES_op_SMovement_clone_normal_SMovement_Turning_entry(STATES_op_SMovement_clone_normal_SMovement_Turning_entry_Enum* value) {
		if (value->type == STATES_op_SMovement_clone_normal_SMovement_Turning_entry_NONE) {
			return "NONE";
		}
		else if (value->type == STATES_op_SMovement_clone_normal_SMovement_Turning_entry_final_f) {
		     	return "final_f";
		     }
	}



