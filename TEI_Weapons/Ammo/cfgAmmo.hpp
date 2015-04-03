class CfgAmmo
{
	class ShotgunBase;
    class BulletBase;
	class ShotDeployBase;
	class B_762x51_Ball;
	class B_9x21_Ball;
	class B_127x99_Ball;
	class B_35mm_AA;
	class B_40mm_GPR;
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Green;
	class B_coil_20g_spike;
	class GrenadeHand;
	class SmokeShell;
	class R_PG32V_F;
	class R_TBG32V_F;
	class M_Titan_AT;
	class M_Titan_AA; 
	class M_NLAW_AT_F;
	class Sh_120mm_APFSDS;
	
	//7.62x51mm (AR, M247)
	class TEI_B_762x51_Ball: B_762x51_Ball
	{
		hit 							= 11;
		typicalSpeed 					= 905;
	};
	class TEI_B_762x51_Tracer: TEI_B_762x51_Ball
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	//9.5x40mm (BR, M73)
	class TEI_B_95x40_Ball: B_762x51_Ball
	{
		hit 							= 12;
		caliber 						= 2;
		typicalSpeed 					= 905;
	};
	class TEI_B_95x40_Tracer: TEI_B_95x40_Ball
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	//14.5x114mm (Sniper)
	class TEI_B_145x114_APFSDS: B_127x99_Ball
	{
		hit 							= 50;
		caliber 						= 8;
		typicalSpeed 					= 1250;
		airFriction 					= -0.00005;
		timeToLive 						= 15;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale 					= 1.75;
	};
	class TEI_B_145x114_HVAP: TEI_B_145x114_APFSDS
	{
		hit 							= 70;
		caliber 						= 10;
		typicalSpeed 					= 1500;
		airFriction 					= -0.00045;
	};
	
	//12.7x40mm (Pistol)
	class TEI_B_127x40_Ball : B_762x51_Ball   
	{
		hit 							= 12;
		indirectHit 					= 8;
		indirectHitRange 				= 0.1;
		explosive						= 0;
		cartridge 						= "FxCartridge_small";
		caliber 						= 0.75;
		typicalSpeed					= 600;
	};
	class TEI_B_127x40_AP : TEI_B_127x40_Ball   
	{
		hit 							= 12;
		indirectHit 					= 0;
		indirectHitRange 				= 0;
		caliber 						= 2.75;
	};
	class TEI_B_127x40_Tracer : TEI_B_127x40_Ball  
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	//8 Gauge (Shotgun)
	class TEI_8Gauge_Pellets : ShotgunBase   
	{
		hit 							= 10;
		indirectHit 					= 0;
		indirectHitRange 				= 0;
		visibleFire 					= 1;	// how much is visible when this weapon is fired
		audibleFire 					= 1;
		visibleFireTime 				= 2;
		cost 							= 1;
		tracerColor[] 					= {1, 0.05, 0.05, 1};
		tracerColorR[] 					= {1, 0.05, 0.05, 1};
		airFriction 					= -0.005;
		caliber 						= 0.25;
		cartridge 						= "FxCartridge_slug";
		dispersion 						= 0.025;//0.35
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};		
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll",2.5118864,1,200};
		impactGroundSoft[] = {"soundImpactDefault1",1};
		impactGroundHard[] = {"soundImpactDefault1",1};
		impactMan[] = {"soundImpactDefault1",1};
		impactIron[] = {"soundImpactDefault1",1};
		impactArmor[] = {"soundImpactDefault1",1};
		impactBuilding[] = {"soundImpactDefault1",1};
		impactFoliage[] = {"soundImpactDefault1",1};
		impactWood[] = {"soundImpactDefault1",1};
		impactGlass[] = {"soundImpactDefault1",1};
		impactGlassArmored[] = {"soundImpactDefault1",1};
		impactConcrete[] = {"soundImpactDefault1",1};
		impactRubber[] = {"soundImpactDefault1",1};
		impactPlastic[] = {"soundImpactDefault1",1};
		impactDefault[] = {"soundImpactDefault1",1};
		impactMetal[] = {"soundImpactDefault1",1};
		impactMetalplate[] = {"soundImpactDefault1",1};
		impactWater[] = {"soundImpactDefault1",1};
		soundDefault1[] = {"A3\sounds_f\weapons\hits\concrete_1",1.1220185,1,60};
		soundDefault2[] = {"A3\sounds_f\weapons\hits\concrete_2",1.1220185,1,60};
		soundDefault3[] = {"A3\sounds_f\weapons\hits\concrete_3",1.1220185,1,60};
		soundDefault4[] = {"A3\sounds_f\weapons\hits\concrete_4",1.1220185,1,60};
		soundDefault5[] = {"A3\sounds_f\weapons\hits\concrete_5",1.1220185,1,60};
		soundDefault6[] = {"A3\sounds_f\weapons\hits\concrete_6",1.1220185,1,60};
		soundDefault7[] = {"A3\sounds_f\weapons\hits\concrete_7",1.1220185,1,60};
		soundDefault8[] = {"A3\sounds_f\weapons\hits\concrete_8",1.1220185,1,60};
		soundGroundSoft1[] = {"A3\sounds_f\weapons\hits\soft_ground_1",1.2589254,1,60};
		soundGroundSoft2[] = {"A3\sounds_f\weapons\hits\soft_ground_2",1.2589254,1,60};
		soundGroundSoft3[] = {"A3\sounds_f\weapons\hits\soft_ground_3",1.2589254,1,60};
		soundGroundSoft4[] = {"A3\sounds_f\weapons\hits\soft_ground_4",1.2589254,1,60};
		soundGroundSoft5[] = {"A3\sounds_f\weapons\hits\soft_ground_5",1.2589254,1,60};
		soundGroundSoft6[] = {"A3\sounds_f\weapons\hits\soft_ground_6",1.2589254,1,60};
		soundGroundSoft7[] = {"A3\sounds_f\weapons\hits\soft_ground_7",1.2589254,1,60};
		soundGroundSoft8[] = {"A3\sounds_f\weapons\hits\soft_ground_8",1.2589254,1,60};
		soundGroundHard1[] = {"A3\sounds_f\weapons\hits\hard_ground_1",1.4125376,1,80};
		soundGroundHard2[] = {"A3\sounds_f\weapons\hits\hard_ground_2",1.4125376,1,80};
		soundGroundHard3[] = {"A3\sounds_f\weapons\hits\hard_ground_3",1.4125376,1,80};
		soundGroundHard4[] = {"A3\sounds_f\weapons\hits\hard_ground_4",1.4125376,1,80};
		soundGroundHard5[] = {"A3\sounds_f\weapons\hits\hard_ground_5",1.4125376,1,80};
		soundGroundHard6[] = {"A3\sounds_f\weapons\hits\hard_ground_6",1.4125376,1,80};
		soundGroundHard7[] = {"A3\sounds_f\weapons\hits\hard_ground_7",1.4125376,1,80};
		soundGroundHard8[] = {"A3\sounds_f\weapons\hits\hard_ground_8",1.4125376,1,80};
		soundMetal1[] = {"A3\sounds_f\weapons\hits\metal_1",1.9952624,1,150};
		soundMetal2[] = {"A3\sounds_f\weapons\hits\metal_2",1.9952624,1,150};
		soundMetal3[] = {"A3\sounds_f\weapons\hits\metal_3",1.9952624,1,150};
		soundMetal4[] = {"A3\sounds_f\weapons\hits\metal_4",1.9952624,1,150};
		soundMetal5[] = {"A3\sounds_f\weapons\hits\metal_5",1.9952624,1,150};
		soundMetal6[] = {"A3\sounds_f\weapons\hits\metal_6",1.9952624,1,150};
		soundMetal7[] = {"A3\sounds_f\weapons\hits\metal_7",1.9952624,1,150};
		soundMetal8[] = {"A3\sounds_f\weapons\hits\metal_8",1.9952624,1,150};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_1",1.4125376,1,100};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_2",1.4125376,1,100};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_3",1.4125376,1,100};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_4",1.4125376,1,100};
		soundGlass5[] = {"A3\sounds_f\weapons\hits\glass_5",1.4125376,1,100};
		soundGlass6[] = {"A3\sounds_f\weapons\hits\glass_6",1.4125376,1,100};
		soundGlass7[] = {"A3\sounds_f\weapons\hits\glass_7",1.4125376,1,100};
		soundGlass8[] = {"A3\sounds_f\weapons\hits\glass_8",1.4125376,1,100};
		soundGlassArmored1[] = {"A3\sounds_f\weapons\hits\glass_arm_1",1.2589254,1,60};
		soundGlassArmored2[] = {"A3\sounds_f\weapons\hits\glass_arm_2",1.2589254,1,60};
		soundGlassArmored3[] = {"A3\sounds_f\weapons\hits\glass_arm_3",1.2589254,1,60};
		soundGlassArmored4[] = {"A3\sounds_f\weapons\hits\glass_arm_4",1.2589254,1,60};
		soundGlassArmored5[] = {"A3\sounds_f\weapons\hits\glass_arm_5",1.2589254,1,60};
		soundGlassArmored6[] = {"A3\sounds_f\weapons\hits\glass_arm_6",1.2589254,1,60};
		soundGlassArmored7[] = {"A3\sounds_f\weapons\hits\glass_arm_7",1.2589254,1,60};
		soundGlassArmored8[] = {"A3\sounds_f\weapons\hits\glass_arm_8",1.2589254,1,60};
		soundVehiclePlate1[] = {"A3\sounds_f\weapons\hits\metal_plate_1",1.9952624,1,150};
		soundVehiclePlate2[] = {"A3\sounds_f\weapons\hits\metal_plate_2",1.9952624,1,150};
		soundVehiclePlate3[] = {"A3\sounds_f\weapons\hits\metal_plate_3",1.9952624,1,150};
		soundVehiclePlate4[] = {"A3\sounds_f\weapons\hits\metal_plate_4",1.9952624,1,150};
		soundVehiclePlate5[] = {"A3\sounds_f\weapons\hits\metal_plate_5",1.9952624,1,150};
		soundVehiclePlate6[] = {"A3\sounds_f\weapons\hits\metal_plate_6",1.9952624,1,150};
		soundVehiclePlate7[] = {"A3\sounds_f\weapons\hits\metal_plate_7",1.9952624,1,150};
		soundVehiclePlate8[] = {"A3\sounds_f\weapons\hits\metal_plate_8",1.9952624,1,150};
		soundWood1[] = {"A3\sounds_f\weapons\hits\wood_1",1.4125376,1,80};
		soundWood2[] = {"A3\sounds_f\weapons\hits\wood_2",1.4125376,1,80};
		soundWood3[] = {"A3\sounds_f\weapons\hits\wood_3",1.4125376,1,80};
		soundWood4[] = {"A3\sounds_f\weapons\hits\wood_4",1.4125376,1,80};
		soundWood5[] = {"A3\sounds_f\weapons\hits\wood_5",1.4125376,1,80};
		soundWood6[] = {"A3\sounds_f\weapons\hits\wood_6",1.4125376,1,80};
		soundWood7[] = {"A3\sounds_f\weapons\hits\wood_7",1.4125376,1,80};
		soundWood8[] = {"A3\sounds_f\weapons\hits\wood_8",1.4125376,1,80};
		soundHitBody1[] = {"A3\sounds_f\weapons\hits\body_1",1.5848932,1,10};
		soundHitBody2[] = {"A3\sounds_f\weapons\hits\body_2",1.5848932,1,10};
		soundHitBody3[] = {"A3\sounds_f\weapons\hits\body_3",1.5848932,1,10};
		soundHitBody4[] = {"A3\sounds_f\weapons\hits\body_4",1.5848932,1,10};
		soundHitBody5[] = {"A3\sounds_f\weapons\hits\body_5",1.5848932,1,10};
		soundHitBody6[] = {"A3\sounds_f\weapons\hits\body_6",1.5848932,1,10};
		soundHitBody7[] = {"A3\sounds_f\weapons\hits\body_7",1.5848932,1,10};
		soundHitBody8[] = {"A3\sounds_f\weapons\hits\body_8",1.5848932,1,10};
		soundHitBuilding1[] = {"A3\sounds_f\weapons\hits\building_1",1.0,1,60};
		soundHitBuilding2[] = {"A3\sounds_f\weapons\hits\building_2",1.0,1,60};
		soundHitBuilding3[] = {"A3\sounds_f\weapons\hits\building_3",1.0,1,60};
		soundHitBuilding4[] = {"A3\sounds_f\weapons\hits\building_4",1.0,1,60};
		soundHitBuilding5[] = {"A3\sounds_f\weapons\hits\building_5",1.0,1,60};
		soundHitBuilding6[] = {"A3\sounds_f\weapons\hits\building_6",1.0,1,60};
		soundHitBuilding7[] = {"A3\sounds_f\weapons\hits\building_7",1.0,1,60};
		soundHitBuilding8[] = {"A3\sounds_f\weapons\hits\building_8",1.0,1,60};
		soundHitFoliage1[] = {"A3\sounds_f\weapons\hits\foliage_1",0.70794576,1,20};
		soundHitFoliage2[] = {"A3\sounds_f\weapons\hits\foliage_2",0.70794576,1,20};
		soundHitFoliage3[] = {"A3\sounds_f\weapons\hits\foliage_3",0.70794576,1,20};
		soundHitFoliage4[] = {"A3\sounds_f\weapons\hits\foliage_4",0.70794576,1,20};
		soundHitFoliage5[] = {"A3\sounds_f\weapons\hits\foliage_5",0.70794576,1,20};
		soundHitFoliage6[] = {"A3\sounds_f\weapons\hits\foliage_6",0.70794576,1,20};
		soundHitFoliage7[] = {"A3\sounds_f\weapons\hits\foliage_7",0.70794576,1,20};
		soundHitFoliage8[] = {"A3\sounds_f\weapons\hits\foliage_8",0.70794576,1,20};
		soundPlastic1[] = {"A3\sounds_f\weapons\hits\plastic_1",1.0,1,70};
		soundPlastic2[] = {"A3\sounds_f\weapons\hits\plastic_2",1.0,1,70};
		soundPlastic3[] = {"A3\sounds_f\weapons\hits\plastic_3",1.0,1,70};
		soundPlastic4[] = {"A3\sounds_f\weapons\hits\plastic_4",1.0,1,70};
		soundPlastic5[] = {"A3\sounds_f\weapons\hits\plastic_5",1.0,1,70};
		soundPlastic6[] = {"A3\sounds_f\weapons\hits\plastic_6",1.0,1,70};
		soundPlastic7[] = {"A3\sounds_f\weapons\hits\plastic_7",1.0,1,70};
		soundPlastic8[] = {"A3\sounds_f\weapons\hits\plastic_8",1.0,1,70};
		soundConcrete1[] = {"A3\sounds_f\weapons\hits\concrete_1",1.0,1,70};
		soundConcrete2[] = {"A3\sounds_f\weapons\hits\concrete_2",1.0,1,70};
		soundConcrete3[] = {"A3\sounds_f\weapons\hits\concrete_3",1.0,1,70};
		soundConcrete4[] = {"A3\sounds_f\weapons\hits\concrete_4",1.0,1,70};
		soundConcrete5[] = {"A3\sounds_f\weapons\hits\concrete_5",1.0,1,70};
		soundConcrete6[] = {"A3\sounds_f\weapons\hits\concrete_6",1.0,1,70};
		soundConcrete7[] = {"A3\sounds_f\weapons\hits\concrete_7",1.0,1,70};
		soundConcrete8[] = {"A3\sounds_f\weapons\hits\concrete_8",1.0,1,70};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_1",0.8912509,1,50};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_2",0.8912509,1,50};
		soundRubber3[] = {"A3\sounds_f\weapons\hits\tyre_3",0.8912509,1,50};
		soundRubber4[] = {"A3\sounds_f\weapons\hits\tyre_4",0.8912509,1,50};
		soundRubber5[] = {"A3\sounds_f\weapons\hits\tyre_5",0.8912509,1,50};
		soundRubber6[] = {"A3\sounds_f\weapons\hits\tyre_6",0.8912509,1,50};
		soundRubber7[] = {"A3\sounds_f\weapons\hits\tyre_7",0.8912509,1,50};
		soundRubber8[] = {"A3\sounds_f\weapons\hits\tyre_8",0.8912509,1,50};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_01",1.0,1,40};
		soundWater2[] = {"A3\sounds_f\weapons\hits\water_02",1.0,1,40};
		soundWater3[] = {"A3\sounds_f\weapons\hits\water_03",1.0,1,40};
		soundWater4[] = {"A3\sounds_f\weapons\hits\water_04",1.0,1,40};
		soundWater5[] = {"A3\sounds_f\weapons\hits\water_05",1.0,1,40};
		soundWater6[] = {"A3\sounds_f\weapons\hits\water_06",1.0,1,40};
		soundWater7[] = {"A3\sounds_f\weapons\hits\water_07",1.0,1,40};
		soundWater8[] = {"A3\sounds_f\weapons\hits\water_08",1.0,1,40};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
		hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
		hitMan[] = {"soundHitBody1",0.125,"soundHitBody2",0.125,"soundHitBody3",0.125,"soundHitBody4",0.125,"soundHitBody5",0.125,"soundHitBody6",0.125,"soundHitBody7",0.125,"soundHitBody8",0.125};
		hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitBuilding[] = {"soundHitBuilding1",0.2,"soundHitBuilding2",0.2,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1};
		hitFoliage[] = {"soundHitFoliage1",0.125,"soundHitFoliage2",0.125,"soundHitFoliage3",0.125,"soundHitFoliage4",0.125,"soundHitFoliage5",0.125,"soundHitFoliage6",0.125,"soundHitFoliage7",0.125,"soundHitFoliage8",0.125};
		hitWood[] = {"soundWood1",0.125,"soundWood2",0.125,"soundWood3",0.125,"soundWood4",0.125,"soundWood5",0.125,"soundWood6",0.125,"soundWood7",0.125,"soundWood8",0.125};
		hitGlass[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitRubber[] = {"soundRubber1",0.125,"soundRubber2",0.125,"soundRubber3",0.125,"soundRubber4",0.125,"soundRubber5",0.125,"soundRubber6",0.125,"soundRubber7",0.125,"soundRubber8",0.125};
		hitPlastic[] = {"soundPlastic1",0.125,"soundPlastic2",0.125,"soundPlastic3",0.125,"soundPlastic4",0.125,"soundPlastic5",0.125,"soundPlastic6",0.125,"soundPlastic7",0.125,"soundPlastic8",0.125};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault2",0.2,"soundDefault3",0.1,"soundDefault4",0.1,"soundDefault5",0.1,"soundDefault6",0.1,"soundDefault7",0.1,"soundDefault8",0.1};
		hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
		hitMetalplate[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitWater[] = {"soundWater1",0.125,"soundWater2",0.125,"soundWater3",0.125,"soundWater4",0.125,"soundWater5",0.125,"soundWater6",0.125,"soundWater7",0.125,"soundWater8",0.125};
		bulletFly1[] = {"A3\sounds_f\weapons\hits\bullet_by_1",0.7943282,1,30};
		bulletFly2[] = {"A3\sounds_f\weapons\hits\bullet_by_2",0.7943282,1,30};
		bulletFly3[] = {"A3\sounds_f\weapons\hits\bullet_by_3",0.7943282,1,30};
		bulletFly4[] = {"A3\sounds_f\weapons\hits\bullet_by_4",0.7943282,1,30};
		bulletFly5[] = {"A3\sounds_f\weapons\hits\bullet_by_5",0.7943282,1,30};
		bulletFly6[] = {"A3\sounds_f\weapons\hits\bullet_by_6",0.7943282,1,30};
		bulletFly7[] = {"A3\sounds_f\weapons\hits\bullet_by_7",0.7943282,1,30};
		bulletFly8[] = {"A3\sounds_f\weapons\hits\bullet_by_8",0.7943282,1,30};
		bulletFly[] = {"bulletFly1",0.166,"bulletFly2",0.166,"bulletFly3",0.166,"bulletFly4",0.166,"bulletFly5",0.166,"bulletFly6",0.167,"bulletFly7",0.166,"bulletFly8",0.167};
	};
	class TEI_8Gauge_Slugs : B_762x51_Ball   
	{
		hit 							= 15;
		cartridge 						= "FxCartridge_slug";
		caliber 						= 2;
	};
	
	//5x23mm (SMG)
	class TEI_B_5x23_Caseless: B_9x21_Ball
	{
		hit = 9;
		typicalSpeed = 500;
		caliber = 0.75;
		cartridge = "FxCartridge_65_caseless";
	};
	class TEI_B_5x23_Caseless_Tracer: TEI_B_5x23_Caseless
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TEI_B_5x23_Caseless_JHP: TEI_B_5x23_Caseless
	{
		hit = 9.5;
		caliber = 0.5;
	};
	class TEI_B_5x23_Caseless_FMJ: TEI_B_5x23_Caseless
	{
		hit = 9.25;
		caliber = 1;
	};
	
	//Vehicles
	class TEI_25x130mm_Slug: B_40mm_APFSDS_Tracer_Green
	{
		scope = 2;
		caliber = 100;
		//typicalSpeed = 9000;
		//maxSpeed = 9999;
		cost = 1000;
		explosive = 0.1;
		hit = 500;
		whistleOnFire = 1;
		whistleDist = 14;
		timeToLive = 1.5;
		tracerScale = 3;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		tracersEvery = 1;
		//model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		model = "\TEI_Weapons\Data\gauss_laser.p3d";
		indirectHit = 50;
		indirectHitRange = 0.25;
		
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",3.1622777,1,2000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",3.1622777,1,2000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_3",3.1622777,1,2000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_4",3.1622777,1,2000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_5",3.1622777,1,2000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_6",3.1622777,1,2000};
		soundHit7[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_7",3.1622777,1,2000};
		soundHit8[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_8",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.13,"soundHit2",0.13,"soundHit3",0.13,"soundHit4",0.13,"soundHit5",0.12,"soundHit6",0.12,"soundHit7",0.12,"soundHit8",0.12};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	
	//Rockets
	class TEI_M41_Rocket_HEAT: R_PG32V_F
	{
		scope = 2;
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		//sideairfriction=0.075;
		//thrust=200;
		//thrusttime=0.4;
		//timetolive=10;
		//maxspeed=200;
		//canLock = 0;
		/*
		initSpeed=255;
		hit = 600;
		indirectHit = 8;
		indirectHitRange = 4;
		explosive = 0.8;
		cost = 500;
		airFriction = 0.075;
		initTime = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;*/
	};
	class TEI_M41_Rocket_HEAT_Guided: M_Titan_AT
	{
		scope = 2;
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		//canLock = 2;

	};
	class TEI_M41_Rocket_HEAP: R_TBG32V_F
	{
		scope = 2;
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		//sideairfriction=0.075;
		//thrust=255;
		//thrusttime=0.4;
		//canLock = 0;
		//timetolive=10;
		//maxspeed=255;
	};
	class TEI_M41_Rocket_HEAA: M_Titan_AA
	{
		scope = 2;
		//thrust = 255;
		//initSpeed = 350;
		//maxSpeed = 350;
		model = "TEI_weapons\rockets\M41_rocket.p3d";
		//trackLead = 1;
		//airLock = 2;
		//irLock = 1;
		//canLock = 2;
		//trackOversteer = 1;
		//weaponLockSystem = "2 + 16";
	};
	class TEI_Splaser_Ammo: R_PG32V_F
	{
		scope = 2;
		thrust = 500000;
		initSpeed = 500000;
		maxSpeed = 500000;
		model = "TEI_Weapons\data\Splaser_tracer.p3d";
	};
	
	//Grenades
	class TEI_G_M9_Frag: GrenadeHand
	{
		model 							= "\TEI_Weapons\explosives\m9_grenade.p3d";
		hit 							= 10;
		indirectHit 					= 10;
		indirectHitRange 				= 8;
		typicalspeed 					= 18;
		visibleFire 					= 0.5;
		audibleFire 					= 0.05;
		visibleFireTime 				= 1;
		fuseDistance 					= 0;
	};
	class TEI_G_M2_Smoke: SmokeShell
	{
		model 							= "\TEI_Weapons\explosives\m2_smk_grenade.p3d";
		hit 							= 0;
		indirectHit 					= 0;
		indirectHitRange 				= 0.2;
		typicalspeed 					= 22;
		cost 							= 100;
		simulation 						= "shotSmokeX";
		explosive 						= 0;
		deflecting 						= 60;
		explosionTime 					= 2;
		timeToLive  					= 60;
		fuseDistance  					= 0;
		smokeColor[]  					= {1,1,1,1};
		effectsSmoke  					= "SmokeShellWhite";
		whistleDist  					= 0;
	};
	class TEI_G_M2_RSmoke: TEI_G_M2_Smoke
	{
		model  							= "\TEI_Weapons\explosives\m2_smk_grenade_red.p3d";
		smokeColor[]  					= {0.8438,0.1383,0.1353,1};
	};
	class TEI_G_M2_GSmoke: TEI_G_M2_Smoke
	{
		model  							= "\TEI_Weapons\explosives\m2_smk_grenade_green.p3d";
		smokeColor[]  					= {0.2125,0.6258,0.4891,1};
	};
	class TEI_G_M2_BSmoke: TEI_G_M2_Smoke
	{
		model  							= "\TEI_Weapons\explosives\m2_smk_grenade_blue.p3d";
		smokeColor[]  					= {0.1183,0.1867,1,1};
	};
	class TEI_G_M2_OSmoke: TEI_G_M2_Smoke
	{
		model  							= "\TEI_Weapons\explosives\m2_smk_grenade_orange.p3d";
		smokeColor[]  					= {0.6697,0.2275,0.10053,1};
	};
	class TEI_G_M2_YSmoke: TEI_G_M2_Smoke
	{
		model  							= "\TEI_Weapons\explosives\m2_smk_grenade_yellow.p3d";
		smokeColor[]  					= {0.9883,0.8606,0.0719,1};
	};
	class TEI_G_M2_PSmoke: TEI_G_M2_Smoke
	{
		model  							= "\TEI_Weapons\explosives\m2_smk_grenade_purple.p3d";
		smokeColor[]  					= {0.4341,0.1388,0.4144,1};
	};
};