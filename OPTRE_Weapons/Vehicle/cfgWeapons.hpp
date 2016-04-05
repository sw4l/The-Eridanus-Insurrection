class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class HMG_127;
	class MGun;
	class autocannon_35mm;
	class cannon_120mm;
	class RCWSOptics;
	class missiles_titan;
	class missiles_DAGR;
	class gatling_20mm;
	class gatling_30mm;
	class Cannon_30mm_Plane_CAS_02_F;
	
	class OPTRE_M41_LAAG: HMG_127
	{
		class GunParticles
        {
			class effect1
			{
				positionName 				= "konec hlavne";
				directionName 				= "Usti hlavne";
				effectName 					= "MachineGunCloud";
            };
            class effect2
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunEject";
            };
            class effect3
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunCartridge2";
            };
        };
		selectionFireAnim 					= "zasleh";
		displayName							= "M41 LAAG";
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		showAimCursorInternal 				= 1;
		magazineReloadTime 					= 4;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
        modes[] = {"FullAuto"};
        class FullAuto: MGun
        {
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"OPTRE_Weapons\Vehicle\data\sounds\M41LAAG_1.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
            reloadTime = 0.075;
            dispersion = 0.001;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
	};
	class OPTRE_102R_Turret: missiles_titan
	{
		displayName							= "102mm ATGM Launcher";
		magazines[] 						= {"OPTRE_3Rnd_102mm_rockets"};
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		canLock								= 0;
		magazineReloadTime 					= 5;
		showAimCursorInternal 				= 1;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",1,1,1500};
			soundBegin[] = {"begin1",1};
		};
	};
	class OPTRE_M79_MLRS: missiles_DAGR
	{
		displayName							= "M79 MLRS";
		magazines[] 						= {"OPTRE_6Rnd_65mm_rockets"};
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		showAimCursorInternal 				= 1;
		magazineReloadTime 					= 5;
		weaponLockDelay 					= 1.5;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
		class manual:MGun
		{
			displayName						= "M79 MLRS";
			reloadTime						= 0.33;
			dispersion						= 0;
			sounds[]						= {"StandardSound"};
		};
	};
	class OPTRE_M68_GAUSS: cannon_120mm
	{
		cursor 								= "EmptyCursor";
		cursorAim 							= "cannon";
		nameSound  							= "cannon";
		reloadSound[] 						= {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,10};
		minRange 							= 5;
		minRangeProbab 						= 0.7;
		midRange 							= 1200;
		midRangeProbab 						= 0.7;
		maxRange 							= 2500;
		maxRangeProbab 						= 0.1;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
		reloadTime 							= 3;
		magazineReloadTime 					= 6;
		autoReload 							= 1;
		ballisticsComputer					= 1;
		canLock 							= 0;
		autoFire 							= 0;
		showAimCursorInternal 				= 0;
		displayName 						= "M68 ALIM";
		magazines[] 						= {"OPTRE_20Rnd_ALIM_Gauss_slugs"};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"OPTRE_Weapons\Vehicle\data\sounds\Gauss_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 3;
			magazineReloadTime = 6;
			autoReload = 0;
			ballisticsComputer = 0;
			canLock = 0;
			autoFire = 0;
			dispersion = 0;
		};
		class GunParticles
		{
			class effect1
			{
				positionName 				= "konec hlavne";
				directionName				= "Usti hlavne";
				effectName			 		= "MachineGunCloud";
            };
		};
	};
	class OPTRE_MAC_Cannon: OPTRE_M68_GAUSS
	{
		cursor 								= "EmptyCursor";
		cursorAim 							= "cannon";
		nameSound  							= "cannon";
		reloadSound[] 						= {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",30,1,10};
		minRange 							= 250;
		minRangeProbab 						= 0.25;
		midRange 							= 800;
		midRangeProbab 						= 0.75;
		maxRange 							= 2400;
		maxRangeProbab 						= 0.25;
		reloadTime 							= 30;
		magazineReloadTime 					= 30;
		autoReload 							= 1;
		showAimCursorInternal 				= 0;
		displayName 						= "Magnetic Accelerator Cannon";
		magazines[] 						= {"OPTRE_1Rnd_MAC_Rounds"};
	};
	class OPTRE_M638: gatling_20mm
	{
		displayName							= "M638 Autocannon";
        modes[] = {"FullAuto"};
        class FullAuto: MGun
        {
            reloadTime = 0.1;
            dispersion = 0.001;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
	};
	class OPTRE_M370: gatling_30mm
	{
		displayName							= "M370 Autocannon";
        modes[] = {"FullAuto"};
        class FullAuto: MGun
        {
            reloadTime = 0.125;
            dispersion = 0.001;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
	};
	class OPTRE_M91909: Cannon_30mm_Plane_CAS_02_F
	{
		displayName = "M9109 ASW/AC 50mm";
		magazines[] = {"OPTRE_M91909_2500Rnd_50mm"};
		holdsterAnimValue = 1;
		ballisticsComputer = 2;
		canLock = 1;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Cannon_muzzleflash";
		muzzleEnd = "Cannon_barrel_end";
		selectionFireAnim = "Cannon_muzzleflash";
		autoFire = 1;
		burst = 10;
		reloadTime = 0.02;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "Cannon_barrel_start";
				directionName = "Cannon_barrel_end";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
			reloadTime = 0.02;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_epc\weapons\cas_02_cannon",1.7782794,1,3800};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.006;
			burst = 10;
			showToPlayer = 1;
		};
	};
	class OPTRE_M919110: OPTRE_M91909
	{
		displayName = "M91110 Ventral Cannon";
		magazines[] = {"OPTRE_M919110_1000Rnd_110mm"};
		reloadTime = 0.15;
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
			reloadTime = 0.15;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_epc\weapons\cas_02_cannon",1.7782794,1,3800};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.006;
			showToPlayer = 1;
		};
	};
};
