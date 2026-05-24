#ifndef ROBOCALC_STATEMACHINES_SOURCEANALYSIS_H_
#define ROBOCALC_STATEMACHINES_SOURCEANALYSIS_H_

#include "RoboCalcAPI/State.h"
#include "SensingVehicle.h"
#include "MainController.h"
#include "Functions.h"
#include "DataTypes.h"
#include "moveForward.h"
#include "moveTowards.h"
#include "reverse.h"
#include "stop.h"
#include "changeDirection.h"
#include <assert.h>

#define SM_DEBUG

class SourceAnalysis: public robochart::StateMachine
{
	public:
		std::shared_ptr<robochart::s_channel> s;
		std::shared_ptr<robochart::resume_channel> resume;
		std::shared_ptr<robochart::turn_channel> turn;
		std::shared_ptr<robochart::stop_channel> stop;
	public:
		std::shared_ptr<SensingVehicle> R_SensingVehicle;
		std::shared_ptr<MainController> C_MainController;
		std::shared_ptr<moveForward> O_moveForward;
		std::shared_ptr<moveTowards> O_moveTowards;
		std::shared_ptr<reverse> O_reverse;
		std::shared_ptr<stop> O_stop;
		std::shared_ptr<changeDirection> O_changeDirection;
	public:
		std::vector<double> gs;
		const double thr;
	public:
		SourceAnalysis(
				std::shared_ptr<SensingVehicle> R_SensingVehicle, 
				std::shared_ptr<MainController> C_MainController, 
				std::shared_ptr<robochart::s_channel> s,
				std::shared_ptr<robochart::resume_channel> resume,
				std::shared_ptr<robochart::turn_channel> turn,
				std::shared_ptr<robochart::stop_channel> stop);
		~SourceAnalysis();
		int Initial();
		virtual void Execute();

	public:
		class i1 : public robochart::State 
		{
			public:
				i1(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis) : State("i1"), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MainController> C_MainController;
				std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
		};
		class NoSource : public robochart::State 
		{
			public:
				NoSource(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis) : State("NoSource"), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MainController> C_MainController;
				std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
		};
		class Analysis : public robochart::State 
		{
			public:
				Analysis(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis) : State("Analysis"), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MainController> C_MainController;
				std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
		};
		class SourceDetected : public robochart::State 
		{
			public:
				SourceDetected(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis) : State("SourceDetected"), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MainController> C_MainController;
				std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
		};
		class j1 : public robochart::State 
		{
			public:
				j1(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis) : State("j1"), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MainController> C_MainController;
				std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
		};
		class Reading : public robochart::State 
		{
			public:
				Reading(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis) : State("Reading"), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis) 
				{
				}
			private:
				std::shared_ptr<SensingVehicle> R_SensingVehicle;
				std::shared_ptr<MainController> C_MainController;
				std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
		};

		public:
			class t1 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MainController> C_MainController;
					std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
				public:
					t1(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_SourceAnalysis_t1", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis)
					{}
			};
		public:
			class t2 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MainController> C_MainController;
					std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
					std::shared_ptr<robochart::s_event> reg_s_event;
				public:
					t2(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_SourceAnalysis_t2", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis), reg_s_event(nullptr)
					{}
					void Reg() {
						if (reg_s_event == nullptr) {
							reg_s_event = S_SourceAnalysis->s->Reg("SourceAnalysis", robochart::Optional<std::vector<double>>());
						}
					}
					bool Check() {
						Reg();
						if (S_SourceAnalysis->s->Check(reg_s_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT s\n");
							#endif
							S_SourceAnalysis->gs = std::get<0>(*reg_s_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_s_event != nullptr) {
							S_SourceAnalysis->s->Cancel(reg_s_event);
							reg_s_event = nullptr;
						}
					}
					void ClearEvent() {
						S_SourceAnalysis->s->AcceptAndDelete(reg_s_event);
						reg_s_event = nullptr;
					}
			};
		public:
			class t3 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MainController> C_MainController;
					std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
				public:
					t3(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_SourceAnalysis_t3", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis)
					{}
					bool Condition() {
						if (analysis(S_SourceAnalysis->gs) == Status::noSource) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t3 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t3 is false\n");
							#endif
							return false;
						}
					}
					void Action() {
						S_SourceAnalysis->resume->Clear();
						S_SourceAnalysis->resume->Reg("S_SourceAnalysis");
					}
			};
		public:
			class t4 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MainController> C_MainController;
					std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
				public:
					t4(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_SourceAnalysis_t4", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis)
					{}
					bool Condition() {
						if (analysis(S_SourceAnalysis->gs) == Status::sourceD) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t4 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t4 is false\n");
							#endif
							return false;
						}
					}
			};
		public:
			class t8 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MainController> C_MainController;
					std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
				public:
					t8(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_SourceAnalysis_t8", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis)
					{}
					bool Condition() {
						if (gt(intensity(S_SourceAnalysis->gs), S_SourceAnalysis->thr)) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t8 is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t8 is false\n");
							#endif
							return false;
						}
					}
					void Action() {
						S_SourceAnalysis->stop->Clear();
						S_SourceAnalysis->stop->Reg("S_SourceAnalysis");
					}
			};
		public:
			class t9a : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MainController> C_MainController;
					std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
				public:
					t9a(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_SourceAnalysis_t9a", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis)
					{}
					bool Condition() {
						if (!gt(intensity(S_SourceAnalysis->gs), S_SourceAnalysis->thr)) {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t9a is true\n");
							#endif
							return true;
						}
						else {
							#ifdef SM_DEBUG
								printf("Condition of transition S_SourceAnalysis_t9a is false\n");
							#endif
							return false;
						}
					}
					void Action() {
						S_SourceAnalysis->turn->Clear();
						S_SourceAnalysis->turn->Reg("S_SourceAnalysis", robochart::Optional<double>());
					}
			};
		public:
			class t0 : public robochart::Transition {
				private:
					std::shared_ptr<SensingVehicle> R_SensingVehicle;
					std::shared_ptr<MainController> C_MainController;
					std::shared_ptr<SourceAnalysis> S_SourceAnalysis;
					std::shared_ptr<robochart::s_event> reg_s_event;
				public:
					t0(std::shared_ptr<SensingVehicle> R_SensingVehicle, std::shared_ptr<MainController> C_MainController, std::shared_ptr<SourceAnalysis> S_SourceAnalysis, std::weak_ptr<robochart::State> src, std::weak_ptr<robochart::State> tgt):
					   robochart::Transition("S_SourceAnalysis_t0", src, tgt), R_SensingVehicle(R_SensingVehicle), C_MainController(C_MainController), S_SourceAnalysis(S_SourceAnalysis), reg_s_event(nullptr)
					{}
					void Reg() {
						if (reg_s_event == nullptr) {
							reg_s_event = S_SourceAnalysis->s->Reg("SourceAnalysis", robochart::Optional<std::vector<double>>());
						}
					}
					bool Check() {
						Reg();
						if (S_SourceAnalysis->s->Check(reg_s_event) == true) {
							#ifdef SM_DEBUG
								printf("TREATING EVENT s\n");
							#endif
							S_SourceAnalysis->gs = std::get<0>(*reg_s_event->GetOther().GetValue().lock()->GetParameters()).GetValue();
							ClearEvent();
							return true;
						}
						else {
							Cancel();
							return false;
						}
					}
					void Cancel() {
						if (reg_s_event != nullptr) {
							S_SourceAnalysis->s->Cancel(reg_s_event);
							reg_s_event = nullptr;
						}
					}
					void ClearEvent() {
						S_SourceAnalysis->s->AcceptAndDelete(reg_s_event);
						reg_s_event = nullptr;
					}
			};
};

#endif
