class CfgAmmo
{
	class B_762x51_Ball;
	class OPTRE_B_95x40_Ball: B_762x51_Ball
	{
		hit = 12;
		caliber = 2;
		typicalSpeed = 905;
	};
	class OPTRE_B_95x40_Tracer: OPTRE_B_95x40_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};