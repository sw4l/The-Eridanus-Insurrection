class CfgMagazines
{
	class 30Rnd_45ACP_Mag_SMG_01;
	class TEI_60Rnd_5x23mm_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		model								= "\TEI_Weapons\smg\m7_Magazine.p3d";
		displayname							= "60Rnd 5x23mm Magazine";
		displaynameshort					= "5x23mm";
		ammo								= "TEI_B_5x23_Caseless";
		count								= 60;
		initspeed							= 427;
		picture = "\TEI_weapons\smg\icons\magazine.paa";
		descriptionshort					= "60 Round Magazine<br>5x23mm";
		mass								= 15;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class TEI_60Rnd_5x23mm_Mag_tracer: TEI_60Rnd_5x23mm_Mag
	{
		displayname							= "60Rnd 5x23mm Magazine (Tracers)";
		displaynameshort					= "5x23mm Tracer";
		picture = "\TEI_weapons\smg\icons\magazine.paa";
		ammo								= "TEI_B_5x23_Caseless_Tracer";
		descriptionshort					= "60 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 60;
	};
	class TEI_48Rnd_5x23mm_Mag: TEI_60Rnd_5x23mm_Mag
	{
		model								= "\TEI_Weapons\smg\m7_Magazine.p3d";
		displayname							= "48Rnd 5x23mm Magazine";
		displaynameshort					= "5x23mm";
		picture = "\TEI_weapons\smg\icons\magazine.paa";
		ammo								= "TEI_B_5x23_Caseless";
		count								= 48;
		initspeed							= 427;
		descriptionshort					= "48 Round Magazine<br>5x23mm";
		mass								= 10;
		tracersEvery 						= 0;
		lastRoundsTracer 					= 5;
	};
	class TEI_48Rnd_5x23mm_JHP_Mag: TEI_48Rnd_5x23mm_Mag
	{
		displayname							= "48Rnd 5x23mm (JHP) Magazine";
		displaynameshort					= "5x23mm JHP";
		ammo								= "TEI_B_5x23_Caseless_JHP";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Jacketed Hollow Point";
	};
	class TEI_48Rnd_5x23mm_FMJ_Mag: TEI_48Rnd_5x23mm_Mag
	{
		displayname							= "48Rnd 5x23mm (FMJ) Magazine";
		displaynameshort					= "5x23mm FMJ";
		initspeed							= 480;
		ammo								= "TEI_B_5x23_Caseless_FMJ";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Full Metal Jacket";
	};
	class TEI_48Rnd_5x23mm_Mag_tracer: TEI_48Rnd_5x23mm_Mag
	{
		displayname							= "48Rnd 5x23mm Magazine (Tracers)";
		displaynameshort					= "5x23mm Tracer";
		picture = "\TEI_weapons\smg\icons\magazine.paa";
		ammo								= "TEI_B_5x23_Caseless_Tracer";
		descriptionshort					= "48 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery 						= 1;
		lastRoundsTracer 					= 48;
	};
};