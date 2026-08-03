#define _POSIX_C_SOURCE 200112L

#include "pkg224_SimFW_sim_PI.h"
#include "pkg224_SimFW_sim_PD.h"
FILE* log_file;


int main(int argc, char* argv[]) {
	//let _ = WriteLogger::init(
	//	LevelFilter::Trace, Config::default(), File::create("test.log").unwrap());
	log_file = fopen("test.log", "w");
	
	//let _args: Vec<String> = std::env::args().collect();
    if (argc  <= 0) {
        fprintf(stderr, "error: Not enough arguments.");
        exit(1);
    }

	// Module channel declarations;;
	M_SimCMovement_input_Enum_Channel* start_SimCMovement = create_M_SimCMovement_input_Enum_Channel();
	M_SimCMovement_output_Enum_Channel* end_SimCMovement = create_M_SimCMovement_output_Enum_Channel();
	C_cm_input_Enum_Channel* start_cm = create_C_cm_input_Enum_Channel();
	C_cm_output_Enum_Channel* end_cm = create_C_cm_output_Enum_Channel();
	sm_input_Enum_Channel* start_sm = create_sm_input_Enum_Channel();
	sm_output_Enum_Channel* end_sm = create_sm_output_Enum_Channel();
	// Instantiate threads;;
	int status;
	pthread_t control_id;
	control_Channels* control_channels = (control_Channels*)malloc(sizeof(control_Channels));
	
	control_channels->end_SimCMovement = end_SimCMovement;
	control_channels->start_SimCMovement = start_SimCMovement;
	
	status = pthread_create(&control_id, NULL, control, control_channels);
	if (status != 0)
			err_abort(status, "Create control thread");
	pthread_t mod_SimCMovement_thread_id;
	mod_SimCMovement_thread_Channels* mod_SimCMovement_thread_channels = (mod_SimCMovement_thread_Channels*)malloc(sizeof(mod_SimCMovement_thread_Channels));
	
	mod_SimCMovement_thread_channels->start_SimCMovement = start_SimCMovement;
	mod_SimCMovement_thread_channels->end_cm = end_cm;
	mod_SimCMovement_thread_channels->end_SimCMovement = end_SimCMovement;
	mod_SimCMovement_thread_channels->start_cm = start_cm;
	
	status = pthread_create(&mod_SimCMovement_thread_id, NULL, mod_SimCMovement_thread, mod_SimCMovement_thread_channels);
	if (status != 0)
			err_abort(status, "Create mod_SimCMovement_thread thread");
	pthread_t stm_sm_id;
	stm_sm_Channels* stm_sm_channels = (stm_sm_Channels*)malloc(sizeof(stm_sm_Channels));
	
	stm_sm_channels->start_sm = start_sm;
	stm_sm_channels->end_sm = end_sm;
	
	status = pthread_create(&stm_sm_id, NULL, stm_sm, stm_sm_channels);
	if (status != 0)
			err_abort(status, "Create stm_sm thread");
	pthread_t ctrl_cm_thread_id;
	ctrl_cm_thread_Channels* ctrl_cm_thread_channels = (ctrl_cm_thread_Channels*)malloc(sizeof(ctrl_cm_thread_Channels));
	
	ctrl_cm_thread_channels->start_cm = start_cm;
	ctrl_cm_thread_channels->end_sm = end_sm;
	ctrl_cm_thread_channels->end_cm = end_cm;
	ctrl_cm_thread_channels->start_sm = start_sm;
	
	status = pthread_create(&ctrl_cm_thread_id, NULL, ctrl_cm_thread, ctrl_cm_thread_channels);
	if (status != 0)
			err_abort(status, "Create ctrl_cm_thread thread");
		
	status = pthread_join(control_id, NULL);
	if (status != 0)
			err_abort(status, "Join control thread");		
	status = pthread_join(mod_SimCMovement_thread_id, NULL);
	if (status != 0)
			err_abort(status, "Join mod_SimCMovement_thread thread");		
	status = pthread_join(stm_sm_id, NULL);
	if (status != 0)
			err_abort(status, "Join stm_sm thread");		
	status = pthread_join(ctrl_cm_thread_id, NULL);
	if (status != 0)
			err_abort(status, "Join ctrl_cm_thread thread");		;
	// Free channels;;
	free(start_SimCMovement);;
	free(end_SimCMovement);;
	free(start_cm);;
	free(end_cm);;
	free(start_sm);;
	free(end_sm);;
	free(control_channels);
	free(mod_SimCMovement_thread_channels);
	free(stm_sm_channels);
	free(ctrl_cm_thread_channels);;
	
	fclose(log_file);
}

