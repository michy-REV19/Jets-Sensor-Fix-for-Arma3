class CfgPatches
{
	class Jets_Sensor_Fix
	{
		name = "Jets Sensor Fix";
		author = "michy_REV19";
		url = "https://twitter.com/michy_REV19";

		requiredVersion = 1.92;
		requiredAddons[] =
		{
			"CUP_AirVehicles_F35",
			"JS_JC_FA18"
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "\Jets_Sensor_Fix\CUP_F35B.hpp"
