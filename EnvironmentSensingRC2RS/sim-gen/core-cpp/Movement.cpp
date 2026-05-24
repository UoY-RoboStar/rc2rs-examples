#include "Movement.h"  

Movement::Movement(
			std::shared_ptr<SensingVehicle> R_SensingVehicle, 
			std::shared_ptr<MicroController> C_MicroController, 
			std::shared_ptr<robochart::obstacle_channel> obstacle, std::shared_ptr<robochart::odometer_channel> odometer, std::shared_ptr<robochart::resume_channel> resume, std::shared_ptr<robochart::turn_channel> turn, std::shared_ptr<robochart::stop_channel> stop, std::shared_ptr<robochart::flag_channel> flag) :R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), StateMachine("Movement"), obstacle(obstacle), odometer(odometer), resume(resume), turn(turn), stop(stop), flag(flag), lv(0), evadeTime(0), stuckDist(0), outPeriod(0), a(0), d0(0), d1(0), l(Loc::left)
{
	T = std::make_shared<robochart::Timer>("T");
	
	O_moveForward = std::make_shared<moveForward>(R_SensingVehicle);
	O_moveTowards = std::make_shared<moveTowards>(R_SensingVehicle);
	O_reverse = std::make_shared<reverse>(R_SensingVehicle);
	O_stop = std::make_shared<stop>(R_SensingVehicle);
	O_changeDirection = std::make_shared<changeDirection>(R_SensingVehicle);

	std::shared_ptr<Movement> ptr(this);
	// instantiate states && add substates of machine
	std::shared_ptr<i1> S_Movement_i1 = std::make_shared<i1>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_i1);
	std::shared_ptr<Exploring> S_Movement_Exploring = std::make_shared<Exploring>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_Exploring);
	std::shared_ptr<Going> S_Movement_Going = std::make_shared<Going>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_Going);
	std::shared_ptr<Found> S_Movement_Found = std::make_shared<Found>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_Found);
	std::shared_ptr<j1> S_Movement_j1 = std::make_shared<j1>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_j1);
	std::shared_ptr<Avoiding> S_Movement_Avoiding = std::make_shared<Avoiding>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_Avoiding);
	std::shared_ptr<TryingAgain> S_Movement_TryingAgain = std::make_shared<TryingAgain>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_TryingAgain);
	std::shared_ptr<AvoidingAgain> S_Movement_AvoidingAgain = std::make_shared<AvoidingAgain>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_AvoidingAgain);
	std::shared_ptr<GettingOut> S_Movement_GettingOut = std::make_shared<GettingOut>(R_SensingVehicle, C_MicroController, ptr);
	states.push_back(S_Movement_GettingOut);

	std::shared_ptr<t1> S_Movement_t1 = std::make_shared<t1>(R_SensingVehicle, C_MicroController, ptr, S_Movement_i1, S_Movement_Exploring);
	S_Movement_i1->transitions.push_back(S_Movement_t1);
	std::shared_ptr<t2> S_Movement_t2 = std::make_shared<t2>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Exploring, S_Movement_Going);
	S_Movement_Exploring->transitions.push_back(S_Movement_t2);
	std::shared_ptr<t3> S_Movement_t3 = std::make_shared<t3>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Going, S_Movement_Going);
	S_Movement_Going->transitions.push_back(S_Movement_t3);
	std::shared_ptr<t4> S_Movement_t4 = std::make_shared<t4>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Going, S_Movement_Found);
	S_Movement_Going->transitions.push_back(S_Movement_t4);
	std::shared_ptr<t5> S_Movement_t5 = std::make_shared<t5>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Found, S_Movement_j1);
	S_Movement_Found->transitions.push_back(S_Movement_t5);
	std::shared_ptr<t6> S_Movement_t6 = std::make_shared<t6>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Going, S_Movement_Avoiding);
	S_Movement_Going->transitions.push_back(S_Movement_t6);
	std::shared_ptr<t7> S_Movement_t7 = std::make_shared<t7>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Avoiding, S_Movement_TryingAgain);
	S_Movement_Avoiding->transitions.push_back(S_Movement_t7);
	std::shared_ptr<t8> S_Movement_t8 = std::make_shared<t8>(R_SensingVehicle, C_MicroController, ptr, S_Movement_TryingAgain, S_Movement_TryingAgain);
	S_Movement_TryingAgain->transitions.push_back(S_Movement_t8);
	std::shared_ptr<t9> S_Movement_t9 = std::make_shared<t9>(R_SensingVehicle, C_MicroController, ptr, S_Movement_TryingAgain, S_Movement_Found);
	S_Movement_TryingAgain->transitions.push_back(S_Movement_t9);
	std::shared_ptr<t10> S_Movement_t10 = std::make_shared<t10>(R_SensingVehicle, C_MicroController, ptr, S_Movement_TryingAgain, S_Movement_Exploring);
	S_Movement_TryingAgain->transitions.push_back(S_Movement_t10);
	std::shared_ptr<t11> S_Movement_t11 = std::make_shared<t11>(R_SensingVehicle, C_MicroController, ptr, S_Movement_TryingAgain, S_Movement_AvoidingAgain);
	S_Movement_TryingAgain->transitions.push_back(S_Movement_t11);
	std::shared_ptr<t12> S_Movement_t12 = std::make_shared<t12>(R_SensingVehicle, C_MicroController, ptr, S_Movement_AvoidingAgain, S_Movement_Avoiding);
	S_Movement_AvoidingAgain->transitions.push_back(S_Movement_t12);
	std::shared_ptr<t13> S_Movement_t13 = std::make_shared<t13>(R_SensingVehicle, C_MicroController, ptr, S_Movement_AvoidingAgain, S_Movement_GettingOut);
	S_Movement_AvoidingAgain->transitions.push_back(S_Movement_t13);
	std::shared_ptr<t14> S_Movement_t14 = std::make_shared<t14>(R_SensingVehicle, C_MicroController, ptr, S_Movement_GettingOut, S_Movement_Going);
	S_Movement_GettingOut->transitions.push_back(S_Movement_t14);
	std::shared_ptr<t0> S_Movement_t0 = std::make_shared<t0>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Exploring, S_Movement_Exploring);
	S_Movement_Exploring->transitions.push_back(S_Movement_t0);
	std::shared_ptr<t15> S_Movement_t15 = std::make_shared<t15>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Exploring, S_Movement_Found);
	S_Movement_Exploring->transitions.push_back(S_Movement_t15);
	std::shared_ptr<t16> S_Movement_t16 = std::make_shared<t16>(R_SensingVehicle, C_MicroController, ptr, S_Movement_GettingOut, S_Movement_Found);
	S_Movement_GettingOut->transitions.push_back(S_Movement_t16);
	std::shared_ptr<t17> S_Movement_t17 = std::make_shared<t17>(R_SensingVehicle, C_MicroController, ptr, S_Movement_AvoidingAgain, S_Movement_Found);
	S_Movement_AvoidingAgain->transitions.push_back(S_Movement_t17);
	std::shared_ptr<t18> S_Movement_t18 = std::make_shared<t18>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Avoiding, S_Movement_Found);
	S_Movement_Avoiding->transitions.push_back(S_Movement_t18);
	std::shared_ptr<t19> S_Movement_t19 = std::make_shared<t19>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Avoiding, S_Movement_Exploring);
	S_Movement_Avoiding->transitions.push_back(S_Movement_t19);
	std::shared_ptr<t20> S_Movement_t20 = std::make_shared<t20>(R_SensingVehicle, C_MicroController, ptr, S_Movement_GettingOut, S_Movement_Exploring);
	S_Movement_GettingOut->transitions.push_back(S_Movement_t20);
	std::shared_ptr<t22> S_Movement_t22 = std::make_shared<t22>(R_SensingVehicle, C_MicroController, ptr, S_Movement_AvoidingAgain, S_Movement_Exploring);
	S_Movement_AvoidingAgain->transitions.push_back(S_Movement_t22);
	std::shared_ptr<t21> S_Movement_t21 = std::make_shared<t21>(R_SensingVehicle, C_MicroController, ptr, S_Movement_Exploring, S_Movement_Avoiding);
	S_Movement_Exploring->transitions.push_back(S_Movement_t21);

	stage = s_Enter;
}

Movement::~Movement() {
}

int Movement::Initial() {
	return 0;
}

void Movement::Execute() {
	T->IncCounter();
	StateMachine::Execute();
}
