class OPTRE_GLASS_HUD_AmmoCount_Snipor 
{
	//onLoad = "";
	
	idd = 8000; 
	duration = 99999; 
	
	class controls {
	
		class RscPicture_1200: OPTRE_HUD_RscPicture
		{
			idc = 1200;
			text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	x = 0.881562 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscPicture_1201: OPTRE_HUD_RscPicture
		{
			idc = 1201;
			text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	x = 0.917656 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscPicture_1202: OPTRE_HUD_RscPicture
		{
			idc = 1202;
			text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	x = 0.881562 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscPicture_1203: OPTRE_HUD_RscPicture
		{
			idc = 1203;
			text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	x = 0.917656 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
		};

		
		class RscPicture_120: OPTRE_HUD_RscProgress
		{
			idc = 120;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.881562 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
			colorBar[] = {1,1,1,1};
		};
		class RscPicture_121: OPTRE_HUD_RscProgress
		{
			idc = 121;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.917656 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
			colorBar[] = {1,1,1,1};
		};
		class RscPicture_122: OPTRE_HUD_RscProgress
		{
			idc = 122;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.881562 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_3',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
			colorBar[] = {1,1,1,1};
		};
		class RscPicture_123: OPTRE_HUD_RscProgress
		{
			idc = 1203;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.917656 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_4',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
			colorBar[] = {1,1,1,1};
		};

	};
	
};

/*

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Letyso)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.881562 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
};
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.917656 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
};
class RscPicture_1202: RscPicture
{
	idc = 1202;
	text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.881562 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
};
class RscPicture_1203: RscPicture
{
	idc = 1203;
	text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
	x = 0.917656 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.011 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
