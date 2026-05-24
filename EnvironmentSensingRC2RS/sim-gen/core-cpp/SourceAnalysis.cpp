#include "SourceAnalysis.h"  

SourceAnalysis::SourceAnalysis(
			std::shared_ptr<SensingVehicle> R_SensingVehicle, 
			std::shared_ptr<MainController> C_MainController, 
			std::shared_ptr<robochart::s_channel> s, std::shared_ptr<robochart::resume_channel> resume, std::shared_ptr<robochart::turn_channel> turn, std::shared_ptr<robochart::stop_channel> stop) :R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), StateMachine("SourceAnalysis"), s(s), resume(resume), turn(turn), stop(stop), gs(std::vector<double>()), thr(0)
{
	
	O_moveForward = std::make_shared<moveForward>(R_SensingVehicle);
	O_moveTowards = std::make_shared<moveTowards>(R_SensingVehicle);
	O_reverse = std::make_shared<reverse>(R_SensingVehicle);
	O_stop = std::make_shared<stop>(R_SensingVehicle);
	O_changeDirection = std::make_shared<changeDirection>(R_SensingVehicle);

	std::shared_ptr<SourceAnalysis> ptr(this);
	// instantiate states && add substates of machine
	std::shared_ptr<i1> S_SourceAnalysis_i1 = std::make_shared<i1>(R_SensingVehicle, C_MainController, ptr);
	states.push_back(S_SourceAnalysis_i1);
	std::shared_ptr<NoSource> S_SourceAnalysis_NoSource = std::make_shared<NoSource>(R_SensingVehicle, C_MainController, ptr);
	states.push_back(S_SourceAnalysis_NoSource);
	std::shared_ptr<Analysis> S_SourceAnalysis_Analysis = std::make_shared<Analysis>(R_SensingVehicle, C_MainController, ptr);
	states.push_back(S_SourceAnalysis_Analysis);
	std::shared_ptr<SourceDetected> S_SourceAnalysis_SourceDetected = std::make_shared<SourceDetected>(R_SensingVehicle, C_MainController, ptr);
	states.push_back(S_SourceAnalysis_SourceDetected);
	std::shared_ptr<j1> S_SourceAnalysis_j1 = std::make_shared<j1>(R_SensingVehicle, C_MainController, ptr);
	states.push_back(S_SourceAnalysis_j1);
	std::shared_ptr<Reading> S_SourceAnalysis_Reading = std::make_shared<Reading>(R_SensingVehicle, C_MainController, ptr);
	states.push_back(S_SourceAnalysis_Reading);

	std::shared_ptr<t1> S_SourceAnalysis_t1 = std::make_shared<t1>(R_SensingVehicle, C_MainController, ptr, S_SourceAnalysis_i1, S_SourceAnalysis_NoSource);
	S_SourceAnalysis_i1->transitions.push_back(S_SourceAnalysis_t1);
	std::shared_ptr<t2> S_SourceAnalysis_t2 = std::make_shared<t2>(R_SensingVehicle, C_MainController, ptr, S_SourceAnalysis_NoSource, S_SourceAnalysis_Analysis);
	S_SourceAnalysis_NoSource->transitions.push_back(S_SourceAnalysis_t2);
	std::shared_ptr<t3> S_SourceAnalysis_t3 = std::make_shared<t3>(R_SensingVehicle, C_MainController, ptr, S_SourceAnalysis_Analysis, S_SourceAnalysis_NoSource);
	S_SourceAnalysis_Analysis->transitions.push_back(S_SourceAnalysis_t3);
	std::shared_ptr<t4> S_SourceAnalysis_t4 = std::make_shared<t4>(R_SensingVehicle, C_MainController, ptr, S_SourceAnalysis_Analysis, S_SourceAnalysis_SourceDetected);
	S_SourceAnalysis_Analysis->transitions.push_back(S_SourceAnalysis_t4);
	std::shared_ptr<t8> S_SourceAnalysis_t8 = std::make_shared<t8>(R_SensingVehicle, C_MainController, ptr, S_SourceAnalysis_SourceDetected, S_SourceAnalysis_j1);
	S_SourceAnalysis_SourceDetected->transitions.push_back(S_SourceAnalysis_t8);
	std::shared_ptr<t9a> S_SourceAnalysis_t9a = std::make_shared<t9a>(R_SensingVehicle, C_MainController, ptr, S_SourceAnalysis_SourceDetected, S_SourceAnalysis_Reading);
	S_SourceAnalysis_SourceDetected->transitions.push_back(S_SourceAnalysis_t9a);
	std::shared_ptr<t0> S_SourceAnalysis_t0 = std::make_shared<t0>(R_SensingVehicle, C_MainController, ptr, S_SourceAnalysis_Reading, S_SourceAnalysis_Analysis);
	S_SourceAnalysis_Reading->transitions.push_back(S_SourceAnalysis_t0);

	stage = s_Enter;
}

SourceAnalysis::~SourceAnalysis() {
}

int SourceAnalysis::Initial() {
	return 0;
}

void SourceAnalysis::Execute() {
	StateMachine::Execute();
}
