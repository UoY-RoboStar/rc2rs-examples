
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



LocalizationType_Enum create_LocalizationType_GRAV_DOWN() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_GRAV_DOWN;
	
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
LocalizationType_Enum create_LocalizationType_CUSTOM() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_CUSTOM;
	
	LocalizationType_Enum aux = (LocalizationType_Enum) {
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
LocalizationType_Enum create_LocalizationType_NWU() {
	LocalizationType_Data data;

	LocalizationType_Type type = LocalizationType_NWU;
	
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
NoiseType_Enum create_NoiseType_NONE() {
	NoiseType_Data data;

	NoiseType_Type type = NoiseType_NONE;
	
	NoiseType_Enum aux = (NoiseType_Enum) {
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
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_B8G8R8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_B8G8R8;
	
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
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_RGGB8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_BAYER_RGGB8;
	
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
IMAGE_FORMAT_Enum create_IMAGE_FORMAT_BAYER_GBRG8() {
	IMAGE_FORMAT_Data data;

	IMAGE_FORMAT_Type type = IMAGE_FORMAT_BAYER_GBRG8;
	
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
LensType_Enum create_LensType_custom() {
	LensType_Data data;

	LensType_Type type = LensType_custom;
	
	LensType_Enum aux = (LensType_Enum) {
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
LensType_Enum create_LensType_equisolid_angle() {
	LensType_Data data;

	LensType_Type type = LensType_equisolid_angle;
	
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
LensType_Enum create_LensType_stereographic() {
	LensType_Data data;

	LensType_Type type = LensType_stereographic;
	
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
FunctionType_Enum create_FunctionType_tan() {
	FunctionType_Data data;

	FunctionType_Type type = FunctionType_tan;
	
	FunctionType_Enum aux = (FunctionType_Enum) {
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
M_SimCMovement_input_Enum create_M_SimCMovement_input_obstacle() {
	M_SimCMovement_input_Data data;

	M_SimCMovement_input_Type type = M_SimCMovement_input_obstacle;
	
	M_SimCMovement_input_Enum aux = (M_SimCMovement_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_SimCMovement_input_Enum create_M_SimCMovement_input__done_() {
	M_SimCMovement_input_Data data;

	M_SimCMovement_input_Type type = M_SimCMovement_input__done_;
	
	M_SimCMovement_input_Enum aux = (M_SimCMovement_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_SimCMovement_input_Enum create_M_SimCMovement_input__terminate_() {
	M_SimCMovement_input_Data data;

	M_SimCMovement_input_Type type = M_SimCMovement_input__terminate_;
	
	M_SimCMovement_input_Enum aux = (M_SimCMovement_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATUS_Enum create_STATUS_ENTER_STATE() {
	STATUS_Data data;

	STATUS_Type type = STATUS_ENTER_STATE;
	
	STATUS_Enum aux = (STATUS_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATUS_Enum create_STATUS_ENTER_CHILDREN() {
	STATUS_Data data;

	STATUS_Type type = STATUS_ENTER_CHILDREN;
	
	STATUS_Enum aux = (STATUS_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATUS_Enum create_STATUS_EXECUTE_STATE() {
	STATUS_Data data;

	STATUS_Type type = STATUS_EXECUTE_STATE;
	
	STATUS_Enum aux = (STATUS_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATUS_Enum create_STATUS_EXIT_CHILDREN() {
	STATUS_Data data;

	STATUS_Type type = STATUS_EXIT_CHILDREN;
	
	STATUS_Enum aux = (STATUS_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATUS_Enum create_STATUS_EXIT_STATE() {
	STATUS_Data data;

	STATUS_Type type = STATUS_EXIT_STATE;
	
	STATUS_Enum aux = (STATUS_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATUS_Enum create_STATUS_INACTIVE() {
	STATUS_Data data;

	STATUS_Type type = STATUS_INACTIVE;
	
	STATUS_Enum aux = (STATUS_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
RESULT_Enum create_RESULT_WAIT() {
	RESULT_Data data;

	RESULT_Type type = RESULT_WAIT;
	
	RESULT_Enum aux = (RESULT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
RESULT_Enum create_RESULT_CONT() {
	RESULT_Data data;

	RESULT_Type type = RESULT_CONT;
	
	RESULT_Enum aux = (RESULT_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_sm_Enum create_STATES_sm_NONE() {
	STATES_sm_Data data;

	STATES_sm_Type type = STATES_sm_NONE;
	
	STATES_sm_Enum aux = (STATES_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_sm_Enum create_STATES_sm_SMoving() {
	STATES_sm_Data data;

	STATES_sm_Type type = STATES_sm_SMoving;
	
	STATES_sm_Enum aux = (STATES_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_sm_Enum create_STATES_sm_DMoving() {
	STATES_sm_Data data;

	STATES_sm_Type type = STATES_sm_DMoving;
	
	STATES_sm_Enum aux = (STATES_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_sm_Enum create_STATES_sm_Waiting() {
	STATES_sm_Data data;

	STATES_sm_Type type = STATES_sm_Waiting;
	
	STATES_sm_Enum aux = (STATES_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_sm_Enum create_STATES_sm_STurning() {
	STATES_sm_Data data;

	STATES_sm_Type type = STATES_sm_STurning;
	
	STATES_sm_Enum aux = (STATES_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
STATES_sm_Enum create_STATES_sm_DTurning() {
	STATES_sm_Data data;

	STATES_sm_Type type = STATES_sm_DTurning;
	
	STATES_sm_Enum aux = (STATES_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_NONE() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_NONE;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t8() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t8;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t3() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t3;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t5() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t5;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t10() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t10;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t4() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t4;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t1() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t1;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t6() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t6;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t9() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t9;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t7() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t7;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
TRANSITIONS_sm_Enum create_TRANSITIONS_sm_sm_t2() {
	TRANSITIONS_sm_Data data;

	TRANSITIONS_sm_Type type = TRANSITIONS_sm_sm_t2;
	
	TRANSITIONS_sm_Enum aux = (TRANSITIONS_sm_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_cm_input_Enum create_C_cm_input_obstacle() {
	C_cm_input_Data data;

	C_cm_input_Type type = C_cm_input_obstacle;
	
	C_cm_input_Enum aux = (C_cm_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_cm_input_Enum create_C_cm_input__done_() {
	C_cm_input_Data data;

	C_cm_input_Type type = C_cm_input__done_;
	
	C_cm_input_Enum aux = (C_cm_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_cm_input_Enum create_C_cm_input__terminate_() {
	C_cm_input_Data data;

	C_cm_input_Type type = C_cm_input__terminate_;
	
	C_cm_input_Enum aux = (C_cm_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
sm_input_Enum create_sm_input_obstacle() {
	sm_input_Data data;

	sm_input_Type type = sm_input_obstacle;
	
	sm_input_Enum aux = (sm_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
sm_input_Enum create_sm_input__done_() {
	sm_input_Data data;

	sm_input_Type type = sm_input__done_;
	
	sm_input_Enum aux = (sm_input_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
sm_input_Enum create_sm_input__terminate_() {
	sm_input_Data data;

	sm_input_Type type = sm_input__terminate_;
	
	sm_input_Enum aux = (sm_input_Enum) {
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
M_SimCMovement_output_Enum create_M_SimCMovement_output__move(float v1,float v2) {
	M_SimCMovement_output_Data data;
		
	data._move.v1 = v1;	
		
	data._move.v2 = v2;	

	M_SimCMovement_output_Type type = M_SimCMovement_output__move;
	
	M_SimCMovement_output_Enum aux = (M_SimCMovement_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_SimCMovement_output_Enum create_M_SimCMovement_output_stop() {
	M_SimCMovement_output_Data data;

	M_SimCMovement_output_Type type = M_SimCMovement_output_stop;
	
	M_SimCMovement_output_Enum aux = (M_SimCMovement_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
M_SimCMovement_output_Enum create_M_SimCMovement_output__done_() {
	M_SimCMovement_output_Data data;

	M_SimCMovement_output_Type type = M_SimCMovement_output__done_;
	
	M_SimCMovement_output_Enum aux = (M_SimCMovement_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_cm_output_Enum create_C_cm_output__move(float v1,float v2) {
	C_cm_output_Data data;
		
	data._move.v1 = v1;	
		
	data._move.v2 = v2;	

	C_cm_output_Type type = C_cm_output__move;
	
	C_cm_output_Enum aux = (C_cm_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_cm_output_Enum create_C_cm_output_stop() {
	C_cm_output_Data data;

	C_cm_output_Type type = C_cm_output_stop;
	
	C_cm_output_Enum aux = (C_cm_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
C_cm_output_Enum create_C_cm_output__done_() {
	C_cm_output_Data data;

	C_cm_output_Type type = C_cm_output__done_;
	
	C_cm_output_Enum aux = (C_cm_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
sm_output_Enum create_sm_output_stop() {
	sm_output_Data data;

	sm_output_Type type = sm_output_stop;
	
	sm_output_Enum aux = (sm_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
sm_output_Enum create_sm_output__move(float v1,float v2) {
	sm_output_Data data;
		
	data._move.v1 = v1;	
		
	data._move.v2 = v2;	

	sm_output_Type type = sm_output__move;
	
	sm_output_Enum aux = (sm_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}
sm_output_Enum create_sm_output__done_() {
	sm_output_Data data;

	sm_output_Type type = sm_output__done_;
	
	sm_output_Enum aux = (sm_output_Enum) {
		.type = type,
		.data = data
	};
	
	return aux;	
}


	char* print_STATUS(STATUS_Enum* value) {
		if (value->type == STATUS_ENTER_STATE) {
			return "ENTER_STATE";
		}
		else if (value->type == STATUS_ENTER_CHILDREN) {
		     	return "ENTER_CHILDREN";
		     }
		else if (value->type == STATUS_EXECUTE_STATE) {
		     	return "EXECUTE_STATE";
		     }
		else if (value->type == STATUS_EXIT_CHILDREN) {
		     	return "EXIT_CHILDREN";
		     }
		else if (value->type == STATUS_EXIT_STATE) {
		     	return "EXIT_STATE";
		     }
		else if (value->type == STATUS_INACTIVE) {
		     	return "INACTIVE";
		     }
	}
	void mod_SimCMovement_step(C_cm_input_Enum_Channel* start_cm
	                           , C_cm_output_Enum_Channel* end_cm) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Started step of module SimCMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		{
			char _s0[256];
			sprintf(_s0, "%s", "Finished step of module SimCMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
	}
	struct sm_memory init_memorystate() {
		struct sm_memory aux = (struct sm_memory) {
		                       	.lv = 0.0,
		                       	.PI = 0.0,
		                       	.av = 0.0
		                       };
		return aux;
	}
	char* print_STATES_sm(STATES_sm_Enum* value) {
		if (value->type == STATES_sm_NONE) {
			return "NONE";
		}
		else if (value->type == STATES_sm_SMoving) {
		     	return "SMoving";
		     }
		else if (value->type == STATES_sm_DMoving) {
		     	return "DMoving";
		     }
		else if (value->type == STATES_sm_Waiting) {
		     	return "Waiting";
		     }
		else if (value->type == STATES_sm_STurning) {
		     	return "STurning";
		     }
		else if (value->type == STATES_sm_DTurning) {
		     	return "DTurning";
		     }
	}
	RESULT_Enum en_SimSMovement_SMoving_1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running entry action 1 of state SimSMovement_SMoving.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->en_SimSMovement_SMoving_1_counter == 0 ) {
			{
				send_sm_output_Enum_Channel(output, create_sm_output__move((memory)->lv,0));
			}
			(*state).en_SimSMovement_SMoving_1_counter = 1;
			return create_RESULT_CONT();
		} else {
			(state)->en_SimSMovement_SMoving_1_done = true;
			return create_RESULT_CONT();
		}
	}
	RESULT_Enum en_SimSMovement_STurning_1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running entry action 1 of state SimSMovement_STurning.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->en_SimSMovement_STurning_1_counter == 0 ) {
			{
				send_sm_output_Enum_Channel(output, create_sm_output__move(0,(memory)->av));
			}
			(*state).en_SimSMovement_STurning_1_counter = 1;
			return create_RESULT_CONT();
		} else {
			(state)->en_SimSMovement_STurning_1_done = true;
			return create_RESULT_CONT();
		}
	}
	struct sm_state init_state() {
		struct sm_state aux = (struct sm_state) {
		                      	.done = false,
		                      	.state = create_STATES_sm_NONE(),
		                      	.target_state = create_STATES_sm_NONE(),
		                      	.status = create_STATUS_ENTER_STATE()
		                      };
		return aux;
	}
	RESULT_Enum SimSMovement_J1(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output) {
		if ((inputstate)->obstacle) {
			if (!(state)->tr_SimSMovement_t5_done) {
				RESULT_Enum _ret_;
				_ret_ = tr_SimSMovement_t5(state, inputstate, memorystate, output);
				return _ret_;
			} else {
				(*state).state = create_STATES_sm_Waiting();
				(*state).status = create_STATUS_ENTER_STATE();
				(*state).tr_SimSMovement_t5_done = false;
				(*state).tr_SimSMovement_t5_counter = 0;
				return create_RESULT_CONT();
			}
		} else if (!(inputstate)->obstacle) {
			(*state).state = create_STATES_sm_DMoving();
			(*state).status = create_STATUS_ENTER_STATE();
			return create_RESULT_CONT();
		} else {
			return create_RESULT_CONT();
		}
	}
	void ctrl_cm_step(sm_input_Enum_Channel* start_sm
	                  , sm_output_Enum_Channel* end_sm) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "	Started step of controller cm");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
	}
	struct sm_inputstate init_inputstate() {
		struct sm_inputstate aux = (struct sm_inputstate) {
		                           	.obstacle = false,
		                           	._clock_MBC = 0,
		                           	._transition_ = create_TRANSITIONS_sm_NONE()
		                           };
		return aux;
	}
	RESULT_Enum SimSMovement_J2(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output) {
		if ((inputstate)->_clock_MBC >= ((memorystate)->PI / (memorystate)->av)) {
			(*state).state = create_STATES_sm_SMoving();
			(*state).status = create_STATUS_ENTER_STATE();
			return create_RESULT_CONT();
		} else if ((inputstate)->_clock_MBC < ((memorystate)->PI / (memorystate)->av)) {
			(*state).state = create_STATES_sm_DTurning();
			(*state).status = create_STATUS_ENTER_STATE();
			return create_RESULT_CONT();
		} else {
			return create_RESULT_CONT();
		}
	}
	char* print_sm_state(struct sm_state* state) {
		char* temp1_;
		temp1_ = print_STATES_sm(&(state)->state);
		char* temp2_;
		temp2_ = print_STATUS(&(state)->status);
		char* aux1_ = concat(temp1_, " (");
		char* aux2_ = concat(aux1_, temp2_);
		char* aux3_ = concat(aux2_, ")");
		free(aux1_);
		free(aux2_);
		return aux3_;
	}
	RESULT_Enum tr_SimSMovement_t5(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memory, sm_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "Running transition action of transition SimSMovement_t5.");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if (	(state)->tr_SimSMovement_t5_counter == 0 ) {
			(*inputstate)._clock_MBC = 0;
			(*state).tr_SimSMovement_t5_counter = 1;
			return create_RESULT_CONT();
		} else if (	(state)->tr_SimSMovement_t5_counter == 1 ) {
			{
				send_sm_output_Enum_Channel(output, create_sm_output_stop());
			}
			(*state).tr_SimSMovement_t5_counter = 2;
			return create_RESULT_CONT();
		} else {
			(state)->tr_SimSMovement_t5_done = true;
			return create_RESULT_CONT();
		}
	}
	RESULT_Enum stm_sm_step(struct sm_state* state, struct sm_inputstate* inputstate, struct sm_memory* memorystate, sm_output_Enum_Channel* output) {
		{
			char _s0[256];
			sprintf(_s0, "%s", "		Running step of state machine SimSMovement");
			fprintf(log_file, "DEBUG: %s\n", _s0);
		}
		if ((*state).state.type == create_STATES_sm_NONE().type) {
			{
				char _s0[256];
				sprintf(_s0, "%s", "		Executing initial junction of SimSMovement");
				fprintf(log_file, "DEBUG: %s\n", _s0);
			}
			{
				(*state).state = create_STATES_sm_SMoving();
			}
			return create_RESULT_CONT();
		}
		else if ((*state).state.type == create_STATES_sm_SMoving().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state SMoving");
		     			fprintf(log_file, "DEBUG: %s\n", _s0);
		     		}
		     		if (!(state)->en_SimSMovement_SMoving_1_done) {
		     			RESULT_Enum _ret_;
		     			_ret_ = en_SimSMovement_SMoving_1(state, inputstate, memorystate, output);
		     			return _ret_;
		     		} else {
		     			(*state).status = create_STATUS_ENTER_CHILDREN();
		     			(*state).en_SimSMovement_SMoving_1_done = false;
		     			(*state).en_SimSMovement_SMoving_1_counter = 0;
		     			return create_RESULT_CONT();
		     		}
		     	}
		     	else if ((*state).status.type == create_STATUS_ENTER_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Entering children of state SMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXECUTE_STATE();
		     	     	{
		     	     		(*inputstate)._transition_ = create_TRANSITIONS_sm_NONE();
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state SMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_NONE().type
		     	     	     ) {
		     	     		if (true) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_sm_sm_t2();
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
		     	     		sprintf(_s0, "%s", "		Exiting children of state SMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXIT_STATE();
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state SMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_sm_t2().type
		     	     		     ) {
		     	     			(*state).state = create_STATES_sm_DMoving();
		     	     			(*state).status = create_STATUS_ENTER_STATE();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_sm_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State SMoving is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
		else if ((*state).state.type == create_STATES_sm_DMoving().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state DMoving");
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
		     	     		sprintf(_s0, "%s", "		Entering children of state DMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXECUTE_STATE();
		     	     	{
		     	     		(*inputstate)._transition_ = create_TRANSITIONS_sm_NONE();
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state DMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_NONE().type
		     	     	     ) {
		     	     		if (true) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_sm_sm_t3();
		     	     			(*state).status = create_STATUS_EXIT_CHILDREN();
		     	     			return create_RESULT_WAIT();
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
		     	     		sprintf(_s0, "%s", "		Exiting children of state DMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXIT_STATE();
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state DMoving");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_sm_t3().type
		     	     		     ) {
		     	     			RESULT_Enum _ret_;
		     	     			_ret_ = SimSMovement_J1(state, inputstate, memorystate, output);
		     	     			return _ret_;
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_sm_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State DMoving is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
		else if ((*state).state.type == create_STATES_sm_Waiting().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state Waiting");
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
		     	     		sprintf(_s0, "%s", "		Entering children of state Waiting");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXECUTE_STATE();
		     	     	{
		     	     		(*inputstate)._transition_ = create_TRANSITIONS_sm_NONE();
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state Waiting");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_NONE().type
		     	     	     ) {
		     	     		if (true) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_sm_sm_t6();
		     	     			(*state).status = create_STATUS_EXIT_CHILDREN();
		     	     			return create_RESULT_WAIT();
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
		     	     		sprintf(_s0, "%s", "		Exiting children of state Waiting");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXIT_STATE();
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state Waiting");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_sm_t6().type
		     	     		     ) {
		     	     			(*state).state = create_STATES_sm_STurning();
		     	     			(*state).status = create_STATUS_ENTER_STATE();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_sm_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State Waiting is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
		else if ((*state).state.type == create_STATES_sm_STurning().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state STurning");
		     			fprintf(log_file, "DEBUG: %s\n", _s0);
		     		}
		     		if (!(state)->en_SimSMovement_STurning_1_done) {
		     			RESULT_Enum _ret_;
		     			_ret_ = en_SimSMovement_STurning_1(state, inputstate, memorystate, output);
		     			return _ret_;
		     		} else {
		     			(*state).status = create_STATUS_ENTER_CHILDREN();
		     			(*state).en_SimSMovement_STurning_1_done = false;
		     			(*state).en_SimSMovement_STurning_1_counter = 0;
		     			return create_RESULT_CONT();
		     		}
		     	}
		     	else if ((*state).status.type == create_STATUS_ENTER_CHILDREN().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Entering children of state STurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXECUTE_STATE();
		     	     	{
		     	     		(*inputstate)._transition_ = create_TRANSITIONS_sm_NONE();
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state STurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_NONE().type
		     	     	     ) {
		     	     		if (true) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_sm_sm_t7();
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
		     	     		sprintf(_s0, "%s", "		Exiting children of state STurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXIT_STATE();
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state STurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_sm_t7().type
		     	     		     ) {
		     	     			(*state).state = create_STATES_sm_DTurning();
		     	     			(*state).status = create_STATUS_ENTER_STATE();
		     	     			return create_RESULT_CONT();
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_sm_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State STurning is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
		else if ((*state).state.type == create_STATES_sm_DTurning().type) {
		     	if ((*state).status.type == create_STATUS_ENTER_STATE().type) {
		     		{
		     			char _s0[256];
		     			sprintf(_s0, "%s", "		Entering state DTurning");
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
		     	     		sprintf(_s0, "%s", "		Entering children of state DTurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXECUTE_STATE();
		     	     	{
		     	     		(*inputstate)._transition_ = create_TRANSITIONS_sm_NONE();
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXECUTE_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Executing state DTurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_NONE().type
		     	     	     ) {
		     	     		if (true) {
		     	     			(*inputstate)._transition_ = create_TRANSITIONS_sm_sm_t8();
		     	     			(*state).status = create_STATUS_EXIT_CHILDREN();
		     	     			return create_RESULT_WAIT();
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
		     	     		sprintf(_s0, "%s", "		Exiting children of state DTurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	(*state).status = create_STATUS_EXIT_STATE();
		     	     	return create_RESULT_CONT();
		     	     }
		     	else if ((*state).status.type == create_STATUS_EXIT_STATE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		Exiting state DTurning");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	{
		     	     		if (	(*inputstate)._transition_.type == create_TRANSITIONS_sm_sm_t8().type
		     	     		     ) {
		     	     			RESULT_Enum _ret_;
		     	     			_ret_ = SimSMovement_J2(state, inputstate, memorystate, output);
		     	     			return _ret_;
		     	     		} else {
		     	     			(*state).status = create_STATUS_INACTIVE();
		     	     			(*state).state = create_STATES_sm_NONE();
		     	     			return create_RESULT_CONT();
		     	     		}
		     	     	}
		     	     }
		     	else if ((*state).status.type == create_STATUS_INACTIVE().type) {
		     	     	{
		     	     		char _s0[256];
		     	     		sprintf(_s0, "%s", "		State DTurning is inactive");
		     	     		fprintf(log_file, "DEBUG: %s\n", _s0);
		     	     	}
		     	     	return create_RESULT_CONT();
		     	     }
		     }
	}



