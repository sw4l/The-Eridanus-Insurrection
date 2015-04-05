enum
{
    DESTRUCTENGINE = 2,
    DESTRUCTDEFAULT = 6,
    DESTRUCTWRECK = 7,
    DESTRUCTTREE = 3,
    DESTRUCTTENT = 4,
    STABILIZEDINAXISX = 1,
    STABILIZEDINAXESXYZ = 4,
    STABILIZEDINAXISY = 2,
    STABILIZEDINAXESBOTH = 3,
    DESTRUCTNO = 0,
    STABILIZEDINAXESNONE = 0,
    DESTRUCTMAN = 5,
    DESTRUCTBUILDING = 1,
}; 
class CfgPatches
{
	class OPTRE_Weapons_Shotgun
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgRecoils
{
	access = 1;
	M45_Recoil[] = {0,0,0,0.06,"36.943*((0.003))*(1)","3.587*((0.008))*(1)",0.06,"31.817*((0.003))*(1)","1.251*((0.008))*(1)",0.06,"19.755*((0.003))*(1)","0.764*((0.008))*(1)",0.06,"7.388*((0.003))*(1)","0.285*((0.008))*(1)",0.06,"0*((0.003))*(1)","0*((0.008))*(1)",0.06,"-2.402*((0.003))*(1)","-0.096*((0.008))*(1)",0.06,"-3.53*((0.003))*(1)","-0.141*((0.008))*(1)",0.06,"-3.677*((0.003))*(1)","-0.147*((0.008))*(1)",0.06,"-3.138*((0.003))*(1)","-0.125*((0.008))*(1)",0.06,"-2.206*((0.003))*(1)","-0.088*((0.008))*(1)",0.06,"-1.177*((0.003))*(1)","-0.047*((0.008))*(1)",0.06,"-0.343*((0.003))*(1)","-0.014*((0.008))*(1)",0.06,"-0.15*((0.003))*(1)","0*((0.008))*(1)",0.06,0,0};
	M45_Recoilprone[] = {0,0,0,0.06,"36.943*((0.003))*(1)","3.587*(0.5)*((0.008))*(1)",0.06,"31.817*((0.003))*(1)","1.251*(0.5)*((0.008))*(1)",0.06,"19.755*((0.003))*(1)","0.764*(0.5)*((0.008))*(1)",0.06,"7.388*((0.003))*(1)","0.285*(0.5)*((0.008))*(1)",0.06,"0*((0.003))*(1)","0*((0.008))*(1)",0.06,"-2.402*((0.003))*(1)","-0.096*(0.5)*(0.5)*((0.008))*(1)",0.06,"-3.53*((0.003))*(1)","-0.141*(0.5)*((0.008))*(1)",0.06,"-3.677*((0.003))*(1)","-0.147*(0.5)*((0.008))*(1)",0.06,"-3.138*((0.003))*(1)","-0.125*(0.5)*((0.008))*(1)",0.06,"-2.206*((0.003))*(1)","-0.088*(0.5)*((0.008))*(1)",0.06,"-1.177*((0.003))*(1)","-0.047*(0.5)*((0.008))*(1)",0.06,"-0.343*((0.003))*(1)","-0.014*(0.5)*((0.008))*(1)",0.06,"-0.15*((0.003))*(1)","0*((0.008))*(1)",0.06,0,0};
};

#include "cfgWeapons.hpp"

