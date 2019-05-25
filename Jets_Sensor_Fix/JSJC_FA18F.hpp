class CfgVehicles
{
	/*
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};
	*/
	class Plane_Base_F;
	class JS_JC_FA18F: Plane_Base_F
	{
		displayName = "michy";
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerName = "My Seat";
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
			};
		};
	};
};