
#ifndef ROBOCALC_FUNCTIONS_H_
#define ROBOCALC_FUNCTIONS_H_

#include "DataTypes.h"
#include <vector>
#include <set>

namespace robocalc
{
	namespace functions
	{
		double SpeedToReal(null speedValue);
		 RealToSpeed(double speedValue);
		 KilometersPerHourToMetersPerSecond(null speedkph);
		std::vector<GpsPathPoint> SortRouteToCurrentLocation(Pose2DStamped location, std::vector<GpsPathPoint> route);
		bool GamepadGetAutonomousRequest(Gamepad gamepadValues);
		bool SpeedCompareLessThan(null a, null b);
		 ZeroSteering();
		bool TimeCompareLessThanEqual(null a, null b);
		std::tuple<bool, UICode> MakeErrorFalse(VehicleReadyState readyState);
		Goal ConvertPointRouteToGoal(GpsPathPoint route);
		Pose2DStamped ConvertLocationToLocalLocation(LatLngHeadingFix location, LatLngHeadingFix origin);
		bool VehicleStopped(PodState vehicleState, PodDemand demand, Goal objective);
		NextStateInstruction MakeValidSession(VehicleReadyState ready);
		std::tuple<bool, UICode> MakeEstopFalse(VehicleReadyState readyState);
		VehicleReadyState GetEstopState(Battery battery, Status status);
		UICode GetOverrideUserInstructions(VehicleReadyState readyState);
		bool TimeCompareGreaterThanEqual(null a, null b);
		 MakeVehicleReady(null status);
		 MinSpeed(std::vector<> speedsToSearch);
		std::tuple<bool, UICode, SessionControl> MakeSessionValid(VehicleReadyState readyState, SessionControl currentSession);
		double GetSystemTime();
		bool TimeCompareEqual(null a, null b);
		bool DemandGoalReached(Pose2DStamped currentLocation, GpsPathPoint goalPoint, ConfigGoalGeneration config);
		 GamepadCalculateSteer(Gamepad gamepadValues, ConfigGamepad config);
		 DecreaseQualityOfService(null quality);
		VehicleReadyState GetSessionValidState(SessionControl currentSession, Eps eps, Powertrain powertrain, Status status, ParkBrake parkBrake, Handshake handshake);
		 CalculateSteer(AutoDemandConfig config, Goal objective, Pose2DStamped position);
		bool TimeCompareGreaterThan(null a, null b);
		unsigned int deadManHandlePositionToSpeedLimit(unsigned int handlePosition);
		VehicleReadyState GetOverrideState(SessionControl currentSession, Status podStatus, Powertrain podPowertrain, ParkBrake podParkbrake, Handshake podHandshake);
		 IncreaseQualityOfService(null quality);
		 realToRatio(double ratioValue);
		bool PathGoalReached(Goal objective, Pose2DStamped location, AutoDemandConfig config);
		std::tuple<bool, UICode> GetUserInstructionFromUserInstructionAndSessionControl(std::tuple<bool, UICode, SessionControl> combined);
		AuxiliaryDemand ConvertPointRouteToAuxiliaryDemand(GpsPathPoint route);
		 TimeSubtract(null a, null b);
		PodDemand ZeroVehicleDemand();
		 DeadmanPositionToRatio(DeadMansHandleReading position, ConfigDeadMans config);
		GpsPathPoint ConvertPointRouteToOriginPoint(GpsPathPoint point);
		SessionControl GetSessionControlFromUserInstructionAndSessionControl(std::tuple<bool, UICode, SessionControl> combined);
		 natToRatio(unsigned int ratioValue);
		 CalculateSpeed(AutoDemandConfig config, Goal objective, null steerDemand);
		std::tuple<bool, UICode> KeyPositionAutonomous(bool positionAuto);
		 realToSpeed(double speedValue);
		VehicleReadyState GetErrorTrue(Status status);
		 ScaleSpeed(null speedA, null speedB);
		bool GamepadGetAbdication(Gamepad gamepadValues);
		AuxiliaryDemand GamepadCalculateAuxiliaryDemand(Gamepad gamepadValues, ConfigGamepad config);
		bool TimeCompareLessThan(null a, null b);
		std::tuple<bool, UICode> KeyPostionManual(bool positionManual);
		 GamepadCalculateSpeed(Gamepad gamepadValues, ConfigGamepad config);
		bool LocationCompareEqual(LatLngHeadingFix a, LatLngHeadingFix b);
		std::tuple<bool, UICode> GetEstopReason(VehicleReadyState readyState);
		AuxiliaryDemand CombineAuxiliaryDemands(std::vector<AuxiliaryDemand> demands);
		 ZeroSpeed();
		double GeoFenceLocalMaxSpeed(LatLngHeadingFix loc, std::vector<GeofenceRectangle> fence, null maxSpeed);
		 natToSpeed(unsigned int speedValue);
		
		template<typename T>
		std::set<T> set_union(std::set<T> s1, std::set<T> s2)
		{
			std::set<T> ret;
			ret.insert(s1.begin(), s1.end());
			ret.insert(s2.begin(), s2.end());
			return ret;
		}
		
		template<typename T>
		unsigned int size(std::set<T> s)
		{
			return s.size();
		}
	}
}

#endif
