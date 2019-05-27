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
	class Plane_Civil_01_base_F: Plane_Base_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerName = "michy";
				class pilotCamera
				{
					class OpticsIn
					{
						class Wide
						{
							opticsDisplayName="WFOV";
							initAngleX=0;
							minAngleX=0;
							maxAngleX=0;
							initAngleY=0;
							minAngleY=0;
							maxAngleY=0;
							initFov="(30 / 120)";
							minFov="(30 / 120)";
							maxFov="(30 / 120)";
							directionStabilized=1;
							visionMode[]=
							{
								"Normal",
								"Ti"
							};
							thermalMode[]={0,1};
							gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
							opticsPPEffects[]=
							{
								"OpticsCHAbera2",
								"OpticsBlur2"
							};
						};
						class Medium: Wide
						{
							opticsDisplayName="MFOV";
							initFov="(15 / 120)";
							minFov="(15 / 120)";
							maxFov="(15 / 120)";
							gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
						};
						class Narrow: Wide
						{
							opticsDisplayName="NFOV";
							initFov="(3.75 / 120)";
							minFov="(3.75 / 120)";
							maxFov="(3.75 / 120)";
							gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
						};
						showMiniMapInOptics=1;
						showUAVViewInOptics=0;
						showSlingLoadManagerInOptics=0;
					};
					minTurn=-180;
					maxTurn=180;
					initTurn=0;
					minElev=-10;
					maxElev=90;
					initElev=25;
					maxXRotSpeed=1;
					maxYRotSpeed=1;
					maxMouseXRotSpeed=0.5;
					maxMouseYRotSpeed=0.5;
					pilotOpticsShowCursor=1;
					controllable=1;
				};
			};
		};
	};
	class JS_JC_FA18F: Plane_Base_F
	{
		displayName = "michy";
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerName = "My Seat";
				class OpticsIn
				{
					class Wide_non_stabilized
					{
						opticsDisplayName = "W";
						initFov = 1;
						minFov = 0.6;
						maxFov = 0.85;
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -130;
						maxAngleY = 130;

						stabilizedInAxes = 0;
						directionStabilized = 0;
						horizontallyStabilized = 0;
						visionMode[] = {"Normal", NVG, "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";

					};

					class Wide_stabilized
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -360;
						maxAngleX = 360;
						initAngleY = 0;
						minAngleY = -360;
						maxAngleY = 360;
						initFov = 0.7;
						minFov = 0.03;
						maxFov = 1.2;
						stabilizedInAxes = 3;
						directionStabilized = 1;
						horizontallyStabilized = 1;
						visionMode[] = {"Normal", NVG, "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";

					};

					class Medium : Wide_stabilized
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};

					class Narrow : Wide_stabilized
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};

				class OpticsOut
				{
					class Monocular
					{

						initFov = 1;
						minFov = 0.6;
						maxFov = 0.85;
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -65;
						maxAngleY = 65;

						stabilizedInAxes = 0;
						directionStabilized = 0;
						horizontallyStabilized = 0;

									//TRACK IR SUPPORT
									//How far can the head be moved to the sides left and right
									minMoveX = -0.2;//-0.1;
									maxMoveX = 0.2;//0.1;

									//How far can the head be moved up and down
									minMoveY = -0.025;//-0.025; // CHANGING THIS TO -1 HAS NO EFFECT
									maxMoveY = 0.1;//0.05;

									//How far can the head be moved forward and backward
									minMoveZ = -0.2;//-0.1;
									maxMoveZ = 0.2;//0.1;

						visionMode[] = {"Normal", NVG};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};


					};

				};
			};
		};
	};
};