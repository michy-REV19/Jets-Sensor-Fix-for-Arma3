class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class Components;
	};
	class CUP_F35B_base: Plane
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 12000;
							maxRange = 12000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 4000;
						angleRangeHorizontal = 345;
						angleRangeVertical = 180;
						aimDown = 0;
						animDirection = "";
						allowsMarking= 1;
						nightRangeCoef = 1;
						maxFogSeeThrough = 0.5;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 4000;
						angleRangeHorizontal = 45;
						angleRangeVertical = 180;
						aimDown = 75;
						animDirection = "";
						allowsMarking= 1;
						nightRangeCoef = 0.5;
						maxFogSeeThrough = 0.5;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
					class PassiveRadarComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						aimDown = 0;
						animDirection = "";
						allowsMarking= 0;
						nightRangeCoef = 1;
						maxFogSeeThrough = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
					class ActiveRadarComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						aimDown = 0;
						animDirection = "";
						allowsMarking= 1;
						nightRangeCoef = 1;
						maxFogSeeThrough = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						aimDown = 0;
						animDirection = "";
						allowsMarking= 1;
						nightRangeCoef = 1;
						maxFogSeeThrough = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						aimDown = 75;
						animDirection = "";
						allowsMarking= 1;
						nightRangeCoef = 1;
						maxFogSeeThrough = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						aimDown = 75;
						animDirection = "";
						allowsMarking= 1;
						nightRangeCoef = 1;
						maxFogSeeThrough = 0.5;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 24000;
							maxRange = 24000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						aimDown = 0;
						animDirection = "";
						allowsMarking= 1;
						nightRangeCoef = 1;
						maxFogSeeThrough = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minTrackableATL= -1e10;
						maxTrackableATL= 1e10;
					};
				}; 
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay = "MinimapDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={24000,16000,8000,4000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={24000,16000,8000,4000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
};
