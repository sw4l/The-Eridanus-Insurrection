class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_Emblems
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

// INSIGNIAS

class CfgUnitInsignia //Unit Insignias to show on players' shoulders
{
	class TEI_Insignia_medic
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[TEI] Medic"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\medic.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\medic.paa"; // Does nothing currently, reserved for future use
	};
	/*class TEI_Insignia_odstlogo1
	{
		displayName = "[UNSC] ODST 1"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\odstlogo1.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_odstlogo2
	{
		displayName = "[UNSC] ODST 2"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\odstlogo2.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_odstlogo3
	{
		displayName = "[UNSC] ODST 3"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\odstlogo3.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_anchor
	{
		displayName = "[UNSC] Anchor"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\anchor.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_arrowhead
	{
		displayName = "[UNSC] Arrowhead"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\arrowhead.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_assassin
	{
		displayName = "[UNSC] Assassin"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\assassin.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_atomic
	{
		displayName = "[UNSC] Atomic"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\atomic.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_bear
	{
		displayName = "[UNSC] Bear"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\bear.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_blackwidow
	{
		displayName = "[UNSC] Black Widow"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\blackwidow.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_blueflag
	{
		displayName = "[UNSC] Blue Flag"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\blueflag.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_bonebreaker
	{
		displayName = "[UNSC] Bonebreaker"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\bonebreaker.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_boot
	{
		displayName = "[UNSC] Boot"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\boot.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_bull
	{
		displayName = "[UNSC] Bull"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\bull.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_campfire
	{
		displayName = "[UNSC] Campfire"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\campfire.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_cancelled
	{
		displayName = "[UNSC] Cancelled"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\cancelled.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_cartridge
	{
		displayName = "[UNSC] Cartridge"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\cartridge.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_cartridges
	{
		displayName = "[UNSC] Cartridges"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\cartridges.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_cat
	{
		displayName = "[UNSC] Cat"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\cat.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_cobra
	{
		displayName = "[UNSC] Cobra"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\cobra.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_cone
	{
		displayName = "[UNSC] Cone"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\cone.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_corbulo
	{
		displayName = "[UNSC] Corbulo"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\corbulo.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_crosshairs
	{
		displayName = "[UNSC] Crosshairs"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\crosshairs.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_cube
	{
		displayName = "[UNSC] Cube"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\cube.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_dogtags
	{
		displayName = "[UNSC] Dogtags"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\dogtags.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_eagle
	{
		displayName = "[UNSC] Eagle"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\eagle.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_engineer
	{
		displayName = "[UNSC] Engineer"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\engineer.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_flaminghorns
	{
		displayName = "[UNSC] Flaming Horns"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\flaminghorns.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_flamingninja
	{
		displayName = "[UNSC] Flaming Ninja"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\flamingninja.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_fox1
	{
		displayName = "[UNSC] Fox (Black)"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\fox1.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_fox2
	{
		displayName = "[UNSC] Fox (White)"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\fox2.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_hazmat
	{
		displayName = "[UNSC] Hazmat"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\hazmat.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_headshot
	{
		displayName = "[UNSC] Headshot"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\headshot.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_hornet
	{
		displayName = "[UNSC] Hornet"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\hornet.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_ilovebees
	{
		displayName = "[UNSC] I Love Bees"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\ilovebees.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_insurrection
	{
		displayName = "[UNSC] Insurrection"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\insurrection.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_jollyroger
	{
		displayName = "[UNSC] Jolly Roger"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\jollyroger.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_keepitclean
	{
		displayName = "[UNSC] Keep It Clean"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\keepitclean.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_king
	{
		displayName = "[UNSC] King"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\king.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_lightning
	{
		displayName = "[UNSC] Lightning"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\lightning.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_lion
	{
		displayName = "[UNSC] Lion"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\lion.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_network
	{
		displayName = "[UNSC] Network"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\network.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_ninja
	{
		displayName = "[UNSC] Ninja"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\ninja.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_oni
	{
		displayName = "[UNSC] ONI"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\oni.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_operator
	{
		displayName = "[UNSC] Operator"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\operator.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_patch
	{
		displayName = "[UNSC] Patch"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\patch.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_pathfinder
	{
		displayName = "[UNSC] Pathfinder"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\pathfinder.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_pioneer
	{
		displayName = "[UNSC] Pioneer"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\pioneer.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_pirate
	{
		displayName = "[UNSC] Pirate"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\pirate.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_planet
	{
		displayName = "[UNSC] Planet"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\planet.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_radioactive
	{
		displayName = "[UNSC] Radioactive"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\radioactive.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_redflag
	{
		displayName = "[UNSC] Red Flag"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\redflag.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_rogue
	{
		displayName = "[UNSC] Rogue"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\rogue.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_rooster
	{
		displayName = "[UNSC] Rooster"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\rooster.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_runes
	{
		displayName = "[UNSC] Runes"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\runes.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_skull1
	{
		displayName = "[UNSC] Skull 1"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\skull1.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_skull2
	{
		displayName = "[UNSC] Skull 2"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\skull2.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_splatter
	{
		displayName = "[UNSC] Splatter"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\splatter.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_stalker
	{
		displayName = "[UNSC] Stalker"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\stalker.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_stallion
	{
		displayName = "[UNSC] Stallion"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\stallion.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_stare
	{
		displayName = "[UNSC] The Stare"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\stare.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_stop
	{
		displayName = "[UNSC] Full Stop"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\stop.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_thehand
	{
		displayName = "[UNSC] The Hand"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\thehand.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_tracker
	{
		displayName = "[UNSC] Tracker"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\tracker.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_unicorn
	{
		displayName = "[UNSC] Unicorn"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\unicorn.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_uprising
	{
		displayName = "[UNSC] Uprising"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\uprising.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_valkyrie
	{
		displayName = "[UNSC] Valkyrie"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\valkyrie.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_viking
	{
		displayName = "[UNSC] Viking"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\viking.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_wetworks
	{
		displayName = "[UNSC] Wetworks"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\wetworks.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_wolf
	{
		displayName = "[UNSC] Wolf Pack"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\wolf.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_yinyang
	{
		displayName = "[UNSC] Yin Yang"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\yinyang.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};*/
};