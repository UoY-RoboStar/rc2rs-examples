#ifndef ROBOCALC_STATEMACHINES_MOVEMENT_H_
#define ROBOCALC_STATEMACHINES_MOVEMENT_H_

#include "RoboCalcAPI/State.h"
#include "SensingVehicle.h"
#include "MicroController.h"
#include "Timer.h"
#include "Functions.h"
#include "DataTypes.h"
#include "moveForward.h"
#include "moveTowards.h"
#include "reverse.h"
#include "stop.h"
#include "changeDirection.h"
#include <assert.h>

#define SM_DEBUG

class Movement: public robochart::StateMachine
{
	public:
		std::shared_ptr<robochart::obstacle_channel> obstacle;
		std::shared_ptr<robochart::odometer_channel> odometer;
		std::shared_ptr<robochart::resume_channel> resume;
		std::shared_ptr<robochart::turn_channel> turn;
		std::shared_ptr<robochart::stop_channel> stop;
		std::shared_ptr<robochart::flag_channel> flag;
	public:
		std::shared_ptr<robochart::Timer> T;
		std::shared_ptr<SensingVehicle> R_SensingVehicle;
		std::shared_ptr<MicroController> C_MicroController;
		std::shared_ptr<moveForward> O_moveForward;
		std::shared_ptr<moveTowards> O_moveTowards;
		std::shared_ptr<reverse> O_reverse;
		std::shared_ptr<stop> O_stop;
		std::shared_ptr<changeDirection> O_changeDirection;
	public:
		const double lv;
		const int evadeTime;
		const double stuckDist;
		const int outPeriod;
		double a;
		double d0;
		double d1;
		Loc l;
	public:
		Movement(
				std::shared_ptr<SensingVehicle> R_SensingVehicle, 
				std::shared_ptr<MicroController> C_MicroController, 
				std::shared_ptr<robochart::obstacle_channel> obstacle,
				std::shared_ptr<robochart::odometer_channel> odometer,
				std::shared_ptr<robochart::resume_channel> resume,
				std::shared_ptr<robochart::turn_channel> turn,
				std::shared_ptr<robochart::stop_channel> stop,
				std::shared_ptr<robochart::flag_channel> flag);
		~Movement();
		int Initial();
		virtual void Execute();

	public:
		class i1 : public robochart::State 
		{
			public:
				i1(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("i1"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class Exploring : public robochart::State 
		{
			public:
				Exploring(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("Exploring"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
				void Entry()
				{
					S_Movement->O_moveForward->stage = s_Enter;
					for (int i = 0; i < S_Movement->O_moveForward->states.size(); i++) {
						S_Movement->O_moveForward->states[i]->stage = s_Inactive;
					}
					S_Movement->O_moveForward->Execute();
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class Going : public robochart::State 
		{
			public:
				Going(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("Going"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
				void Entry()
				{
					S_Movement->O_moveTowards->stage = s_Enter;
					for (int i = 0; i < S_Movement->O_moveTowards->states.size(); i++) {
						S_Movement->O_moveTowards->states[i]->stage = s_Inactive;
					}
					S_Movement->O_moveTowards->a = S_Movement->a;
					S_Movement->O_moveTowards->Execute();
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class Found : public robochart::State 
		{
			public:
				Found(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("Found"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
				void Entry()
				{
					S_Movement->O_stop->Execute();
					S_Movement->flag->Clear();
					S_Movement->flag->Reg("S_Movement");
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class j1 : public robochart::State 
		{
			public:
				j1(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("j1"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class Avoiding : public robochart::State 
		{
			public:
				Avoiding(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("Avoiding"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
				void Entry()
				{
					std::shared_ptr<robochart::odometer_event> reg_odometer_event;
					reg_odometer_event = S_Movement->odometer->Reg("S_Movement", robochart::Optional<double>());
					bool odometer_flag;
					odometer_flag = S_Movement->odometer->Check(reg_odometer_event);
					assert(odometer_flag && "error: odometer is not available!");
					S_Movement->d0 = std::get<0>(*reg_odometer_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
					S_Movement->odometer->AcceptAndDelete(reg_odometer_event);
					reg_odometer_event = nullptr;
					
					S_Movement->O_changeDirection->l = S_Movement->l;
					S_Movement->O_changeDirection->Execute();
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class TryingAgain : public robochart::State 
		{
			public:
				TryingAgain(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("TryingAgain"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
				void Entry()
				{
					S_Movement->O_moveTowards->stage = s_Enter;
					for (int i = 0; i < S_Movement->O_moveTowards->states.size(); i++) {
						S_Movement->O_moveTowards->states[i]->stage = s_Inactive;
					}
					S_Movement->O_moveTowards->a = S_Movement->a;
					S_Movement->O_moveTowards->Execute();
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class AvoidingAgain : public robochart::State 
		{
			public:
				AvoidingAgain(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("AvoidingAgain"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};
		class GettingOut : public robochart::State 
		{
			public:
				GettingOut(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement) : State("GettingOut"), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement) 
				{
				}
				void Entry()
				{
					S_Movement->O_reverse->stage = s_Enter;
					for (int i = 0; i < S_Movement->O_reverse->states.size(); i++) {
						S_Movement->O_reverse->states[i]->stage = s_Inactive;
					}
					S_Movement->O_reverse->Execute();
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MicroController> C_MicroController;
				std::shared_ptr<Movement> S_Movement;
		};

		public:
			class t1 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
				public:
					t1(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t1", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement)
					{}
			};
		public:
			class t2 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::turn_event> reg_turn_event;
				public:
					t2(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t2", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_turn_event(nullptr)
					{}
					void Reg() {
						if (reg_turn_event == nullptr) {
							reg_turn_event = S_Movement->turn->Reg("Movement", robochart::Optional<double>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->turn->Check(reg_turn_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT turn\n");
							#endif
							S_Movement->a = std::get<0>(*reg_turn_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_turn_event != nullptr) {
							S_Movement->turn->Cancel(reg_turn_event);
							reg_turn_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->turn->AcceptAndDelete(reg_turn_event);
						reg_turn_event = nullptr;
					}
			};
		public:
			class t0 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::resume_event> reg_resume_event;
				public:
					t0(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t0", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_resume_event(nullptr)
					{}
					void Reg() {
						if (reg_resume_event == nullptr) {
							reg_resume_event = S_Movement->resume->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->resume->Check(reg_resume_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT resume\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_resume_event != nullptr) {
							S_Movement->resume->Cancel(reg_resume_event);
							reg_resume_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->resume->AcceptAndDelete(reg_resume_event);
						reg_resume_event = nullptr;
					}
			};
		public:
			class t15 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::stop_event> reg_stop_event;
				public:
					t15(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t15", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_stop_event(nullptr)
					{}
					void Reg() {
						if (reg_stop_event == nullptr) {
							reg_stop_event = S_Movement->stop->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->stop->Check(reg_stop_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT stop\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_stop_event != nullptr) {
							S_Movement->stop->Cancel(reg_stop_event);
							reg_stop_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->stop->AcceptAndDelete(reg_stop_event);
						reg_stop_event = nullptr;
					}
			};
		public:
			class t21 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::obstacle_event> reg_obstacle_event;
				public:
					t21(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t21", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_obstacle_event(nullptr)
					{}
					void Reg() {
						if (reg_obstacle_event == nullptr) {
							reg_obstacle_event = S_Movement->obstacle->Reg("Movement", robochart::Optional<Loc>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->obstacle->Check(reg_obstacle_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT obstacle\n");
							#endif
							S_Movement->l = std::get<0>(*reg_obstacle_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_obstacle_event != nullptr) {
							S_Movement->obstacle->Cancel(reg_obstacle_event);
							reg_obstacle_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->obstacle->AcceptAndDelete(reg_obstacle_event);
						reg_obstacle_event = nullptr;
					}
					void Action() {
						S_Movement->T->SetCounter(0);
						#ifdef SM_DEBUG
							printf("Resetting Clock T\n");
						#endif
					}
			};
		public:
			class t3 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::turn_event> reg_turn_event;
				public:
					t3(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t3", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_turn_event(nullptr)
					{}
					void Reg() {
						if (reg_turn_event == nullptr) {
							reg_turn_event = S_Movement->turn->Reg("Movement", robochart::Optional<double>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->turn->Check(reg_turn_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT turn\n");
							#endif
							S_Movement->a = std::get<0>(*reg_turn_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_turn_event != nullptr) {
							S_Movement->turn->Cancel(reg_turn_event);
							reg_turn_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->turn->AcceptAndDelete(reg_turn_event);
						reg_turn_event = nullptr;
					}
			};
		public:
			class t4 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::stop_event> reg_stop_event;
				public:
					t4(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t4", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_stop_event(nullptr)
					{}
					void Reg() {
						if (reg_stop_event == nullptr) {
							reg_stop_event = S_Movement->stop->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->stop->Check(reg_stop_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT stop\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_stop_event != nullptr) {
							S_Movement->stop->Cancel(reg_stop_event);
							reg_stop_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->stop->AcceptAndDelete(reg_stop_event);
						reg_stop_event = nullptr;
					}
			};
		public:
			class t6 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::obstacle_event> reg_obstacle_event;
				public:
					t6(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t6", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_obstacle_event(nullptr)
					{}
					void Reg() {
						if (reg_obstacle_event == nullptr) {
							reg_obstacle_event = S_Movement->obstacle->Reg("Movement", robochart::Optional<Loc>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->obstacle->Check(reg_obstacle_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT obstacle\n");
							#endif
							S_Movement->l = std::get<0>(*reg_obstacle_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_obstacle_event != nullptr) {
							S_Movement->obstacle->Cancel(reg_obstacle_event);
							reg_obstacle_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->obstacle->AcceptAndDelete(reg_obstacle_event);
						reg_obstacle_event = nullptr;
					}
					void Action() {
						S_Movement->T->SetCounter(0);
						#ifdef SM_DEBUG
							printf("Resetting Clock T\n");
						#endif
					}
			};
		public:
			class t5 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
				public:
					t5(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t5", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement)
					{}
			};
		public:
			class t7 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::turn_event> reg_turn_event;
				public:
					t7(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t7", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_turn_event(nullptr)
					{}
					void Reg() {
						if (reg_turn_event == nullptr) {
							reg_turn_event = S_Movement->turn->Reg("Movement", robochart::Optional<double>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->turn->Check(reg_turn_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT turn\n");
							#endif
							S_Movement->a = std::get<0>(*reg_turn_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_turn_event != nullptr) {
							S_Movement->turn->Cancel(reg_turn_event);
							reg_turn_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->turn->AcceptAndDelete(reg_turn_event);
						reg_turn_event = nullptr;
					}
					bool Condition() {
						if (S_Movement->T->GetCounter() > S_Movement->evadeTime) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t7 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t7 is false\n");
							#endif
							return false;
						}
					}
			};
		public:
			class t18 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::stop_event> reg_stop_event;
				public:
					t18(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t18", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_stop_event(nullptr)
					{}
					void Reg() {
						if (reg_stop_event == nullptr) {
							reg_stop_event = S_Movement->stop->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->stop->Check(reg_stop_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT stop\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_stop_event != nullptr) {
							S_Movement->stop->Cancel(reg_stop_event);
							reg_stop_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->stop->AcceptAndDelete(reg_stop_event);
						reg_stop_event = nullptr;
					}
					bool Condition() {
						if (S_Movement->T->GetCounter() > S_Movement->evadeTime) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t18 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t18 is false\n");
							#endif
							return false;
						}
					}
			};
		public:
			class t19 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::resume_event> reg_resume_event;
				public:
					t19(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t19", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_resume_event(nullptr)
					{}
					void Reg() {
						if (reg_resume_event == nullptr) {
							reg_resume_event = S_Movement->resume->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->resume->Check(reg_resume_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT resume\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_resume_event != nullptr) {
							S_Movement->resume->Cancel(reg_resume_event);
							reg_resume_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->resume->AcceptAndDelete(reg_resume_event);
						reg_resume_event = nullptr;
					}
					bool Condition() {
						if (S_Movement->T->GetCounter() > S_Movement->evadeTime) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t19 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t19 is false\n");
							#endif
							return false;
						}
					}
			};
		public:
			class t8 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::turn_event> reg_turn_event;
				public:
					t8(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t8", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_turn_event(nullptr)
					{}
					void Reg() {
						if (reg_turn_event == nullptr) {
							reg_turn_event = S_Movement->turn->Reg("Movement", robochart::Optional<double>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->turn->Check(reg_turn_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT turn\n");
							#endif
							S_Movement->a = std::get<0>(*reg_turn_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_turn_event != nullptr) {
							S_Movement->turn->Cancel(reg_turn_event);
							reg_turn_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->turn->AcceptAndDelete(reg_turn_event);
						reg_turn_event = nullptr;
					}
			};
		public:
			class t9 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::stop_event> reg_stop_event;
				public:
					t9(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t9", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_stop_event(nullptr)
					{}
					void Reg() {
						if (reg_stop_event == nullptr) {
							reg_stop_event = S_Movement->stop->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->stop->Check(reg_stop_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT stop\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_stop_event != nullptr) {
							S_Movement->stop->Cancel(reg_stop_event);
							reg_stop_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->stop->AcceptAndDelete(reg_stop_event);
						reg_stop_event = nullptr;
					}
			};
		public:
			class t10 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::resume_event> reg_resume_event;
				public:
					t10(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t10", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_resume_event(nullptr)
					{}
					void Reg() {
						if (reg_resume_event == nullptr) {
							reg_resume_event = S_Movement->resume->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->resume->Check(reg_resume_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT resume\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_resume_event != nullptr) {
							S_Movement->resume->Cancel(reg_resume_event);
							reg_resume_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->resume->AcceptAndDelete(reg_resume_event);
						reg_resume_event = nullptr;
					}
			};
		public:
			class t11 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::obstacle_event> reg_obstacle_event;
				public:
					t11(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t11", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_obstacle_event(nullptr)
					{}
					void Reg() {
						if (reg_obstacle_event == nullptr) {
							reg_obstacle_event = S_Movement->obstacle->Reg("Movement", robochart::Optional<Loc>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->obstacle->Check(reg_obstacle_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT obstacle\n");
							#endif
							S_Movement->l = std::get<0>(*reg_obstacle_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_obstacle_event != nullptr) {
							S_Movement->obstacle->Cancel(reg_obstacle_event);
							reg_obstacle_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->obstacle->AcceptAndDelete(reg_obstacle_event);
						reg_obstacle_event = nullptr;
					}
					void Action() {
						std::shared_ptr<robochart::odometer_event> reg_odometer_event;
						reg_odometer_event = S_Movement->odometer->Reg("S_Movement", robochart::Optional<double>());
						bool odometer_flag;
						odometer_flag = S_Movement->odometer->Check(reg_odometer_event);
						assert(odometer_flag && "error: odometer is not available!");
						S_Movement->d1 = std::get<0>(*reg_odometer_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
						S_Movement->odometer->AcceptAndDelete(reg_odometer_event);
						reg_odometer_event = nullptr;
						
					}
			};
		public:
			class t12 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
				public:
					t12(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t12", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement)
					{}
					bool Condition() {
						if (S_Movement->d1 - S_Movement->d0 > S_Movement->stuckDist) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t12 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t12 is false\n");
							#endif
							return false;
						}
					}
					void Action() {
						S_Movement->T->SetCounter(0);
						#ifdef SM_DEBUG
							printf("Resetting Clock T\n");
						#endif
					}
			};
		public:
			class t13 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
				public:
					t13(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t13", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement)
					{}
					bool Condition() {
						if (S_Movement->d1 - S_Movement->d0 <= S_Movement->stuckDist) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t13 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t13 is false\n");
							#endif
							return false;
						}
					}
					void Action() {
						S_Movement->T->SetCounter(0);
						#ifdef SM_DEBUG
							printf("Resetting Clock T\n");
						#endif
					}
			};
		public:
			class t17 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::stop_event> reg_stop_event;
				public:
					t17(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t17", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_stop_event(nullptr)
					{}
					void Reg() {
						if (reg_stop_event == nullptr) {
							reg_stop_event = S_Movement->stop->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->stop->Check(reg_stop_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT stop\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_stop_event != nullptr) {
							S_Movement->stop->Cancel(reg_stop_event);
							reg_stop_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->stop->AcceptAndDelete(reg_stop_event);
						reg_stop_event = nullptr;
					}
			};
		public:
			class t22 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::resume_event> reg_resume_event;
				public:
					t22(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t22", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_resume_event(nullptr)
					{}
					void Reg() {
						if (reg_resume_event == nullptr) {
							reg_resume_event = S_Movement->resume->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->resume->Check(reg_resume_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT resume\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_resume_event != nullptr) {
							S_Movement->resume->Cancel(reg_resume_event);
							reg_resume_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->resume->AcceptAndDelete(reg_resume_event);
						reg_resume_event = nullptr;
					}
			};
		public:
			class t14 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::turn_event> reg_turn_event;
				public:
					t14(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t14", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_turn_event(nullptr)
					{}
					void Reg() {
						if (reg_turn_event == nullptr) {
							reg_turn_event = S_Movement->turn->Reg("Movement", robochart::Optional<double>());
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->turn->Check(reg_turn_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT turn\n");
							#endif
							S_Movement->a = std::get<0>(*reg_turn_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_turn_event != nullptr) {
							S_Movement->turn->Cancel(reg_turn_event);
							reg_turn_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->turn->AcceptAndDelete(reg_turn_event);
						reg_turn_event = nullptr;
					}
					bool Condition() {
						if (S_Movement->T->GetCounter() > S_Movement->outPeriod) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t14 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t14 is false\n");
							#endif
							return false;
						}
					}
			};
		public:
			class t16 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::stop_event> reg_stop_event;
				public:
					t16(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t16", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_stop_event(nullptr)
					{}
					void Reg() {
						if (reg_stop_event == nullptr) {
							reg_stop_event = S_Movement->stop->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->stop->Check(reg_stop_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT stop\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_stop_event != nullptr) {
							S_Movement->stop->Cancel(reg_stop_event);
							reg_stop_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->stop->AcceptAndDelete(reg_stop_event);
						reg_stop_event = nullptr;
					}
					bool Condition() {
						if (S_Movement->T->GetCounter() > S_Movement->outPeriod) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t16 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t16 is false\n");
							#endif
							return false;
						}
					}
			};
		public:
			class t20 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MicroController> C_MicroController;
					std::shared_ptr<Movement> S_Movement;
					std::shared_ptr<robochart::resume_event> reg_resume_event;
				public:
					t20(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MicroController> C_MicroController, std::shared_ptr<Movement> S_Movement, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_Movement_t20", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MicroController(C_MicroController), S_Movement(S_Movement), reg_resume_event(nullptr)
					{}
					void Reg() {
						if (reg_resume_event == nullptr) {
							reg_resume_event = S_Movement->resume->Reg("Movement");
						}
					}
					bool Check() {
						Reg();
						if (S_Movement->resume->Check(reg_resume_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT resume\n");
							#endif
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_resume_event != nullptr) {
							S_Movement->resume->Cancel(reg_resume_event);
							reg_resume_event = nullptr;
						}
					}
					void ClearEvent() {
						S_Movement->resume->AcceptAndDelete(reg_resume_event);
						reg_resume_event = nullptr;
					}
					bool Condition() {
						if (S_Movement->T->GetCounter() > S_Movement->outPeriod) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t20 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_Movement_t20 is false\n");
							#endif
							return false;
						}
					}
			};
};

#endif
