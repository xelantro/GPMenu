class CfgPatches
{
	class GPMenu
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_Enoch_Loadorder"};
		author = "Xelantro"; 	
		authorUrl = "gamerparty.eu";
		mail = "dev@memium.de";
		fileName = "GPMenu.pbo";
	};
};

class CfgWorlds {
	class CAWorld;	// External class reference
	class Altis : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};
	
	class Stratis : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	class Enoch : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	class VR : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	initWorld = "VR";
	demoWorld = "VR";
};

class CfgMissions
{
	class Cutscenes
	{
		class mymainmenu // Class referenced in 'cutscenes' property in CfgWorlds
		{
			directory = "GPMenu\scenes\mainmenu.vr"; // Path to scenario with the scene
		};
	};
};

class Extended_PreInit_EventHandlers {
    class Settings {
        init = "call compile preprocessFileLineNumbers 'GPMenu\settings.sqf'";
    };
};

/*class CfgFunctions {
	class GPMenu {
		class GPMenu {			
			class postInit {
				file = "\GPMenu\music.sqf";
				postInit = 1;
			};
		};
	};
};*/

delete CfgMainMenuSpotlight;
/*class CfgMainMenuSpotlight // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
{
	class CoopCampaign
	{
		text = "Coop Campaign"; // Text displayed on the square button, converted to upper-case
		textIsQuote = 1; // 1 to add quotation marks around the text
		picture = "\a3\Ui_f\Data\GUI\Rsc\RscDisplayMain\spotlight_1_apex_ca.paa"; // Square picture, ideally 512x512
		video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
		action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 101);"; // Code called upon clicking, passed arguments are [<button:Control>]
		actionText = $STR_A3_RscDisplayMain_Spotlight_Play; // Text displayed in top left corner of on-hover white frame
		condition = "true"; // Condition for showing the spotlight
	};
	class AnotherCoopCampaign
	{
		text = "Another Coop Campaign";
		picture = "\a3\Ui_f\Data\GUI\Rsc\RscDisplayMain\spotlight_1_eastwind_ca.paa";
		action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 149);";
		actionText = $STR_A3_RscDisplayMain_Spotlight_Play;
		condition = "isKeyActive 'FinishedCoopCampaign';";
	};
	class JoinServer
	{
		text = "Gamerparty Server";
		picture = "\GPMenu\image\gpicon.paa";
		action = "connectToServer ['gamerparty.eu', 2302, '']";
		actionText = "Connect";
		condition = "true";
	};
};*/
/*
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
	idd = 0;
	scriptName = "RscDisplayMain";
	scriptPath = "GUI";
	onLoad = "['onLoad',_this,'RscDisplayMain','GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "['onUnload',_this,'RscDisplayMain','GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";

	class Controls {
		/*class RscPicture;
		class GameLogo: RscPicture {
			idc = 1202;
			text = "GPMenu\image\gpicon.paa";
			x = "1 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "10.4 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "7.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3.75 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};*//*
		class RscActivePicture;
		class Logo: RscActivePicture {
			text = "GPMenu\image\gpicon.paa";
			tooltip = "$STR_TOOLTIP_MAIN_CREDITS";
			color[] = {0.900000, 0.900000, 0.900000, 1};
			colorActive[] = {1, 1, 1, 1};
			shadow = 0;
			x = "safeZoneX + (0.25 * safeZoneW)";
			y = "safeZoneY + (0.25 * safeZoneH)";
			w = "2 * 	5 * 	(pixelW * pixelGrid * 2)";
			h = "1 * 	5 * 	(pixelH * pixelGrid * 2)";
			onButtonClick = "if (scriptdone (missionnamespace getvariable ['RscDisplayMain_credits',scriptnull])) then {RscDisplayMain_credits = _this spawn (uinamespace getvariable 'bis_fnc_credits');};";
			onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onKillFocus = "(_this select 0) ctrlsettextcolor [0.9,0.9,0.9,1];";
			onLoad = "(_this select 0) ctrlshow !isClass (configfile >> 'CfgPatches' >> 'A3_Map_Tanoabuka')";
		};

		class LogoApex: Logo {
			text = "\a3\Ui_f\Data\Logos\arma3apex_shadow_ca.paa";
			x = "safeZoneX + (0.75 * safeZoneW)";
			y = "safeZoneY + (0.25 * safeZoneH)";
			w = "2 * 	6.25 * 	(pixelW * pixelGrid * 2)";
			h = "1 * 	6.25 * 	(pixelH * pixelGrid * 2)";
			show = 1;
			onLoad = "(_this select 0) ctrlshow isClass (configfile >> 'CfgPatches' >> 'A3_Map_Tanoabuka')";
		};

	};
};*/

class RscStandardDisplay;
class RscPicture;
class RscActivePicture;
class RscPictureKeepAspect;
class RscText;
class RscMainMenuSpotlight;
//class InfoText;
class InfoNews;
class Controls;
class Button;
class Icon;
class BackgroundBar;
class RscButton;
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text = "\GPMenu\image\gpicon.paa";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd = "426536"
			class controls
			{
				class LoadingPic: RscPictureKeepAspect
				{
					text = "\GPMenu\image\gpicon.paa";
				};
			};
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	class controlsBackground
	{
		class CA_ARMA2: RscPicture
		{
			idc = 6969;
			//onLoad = "((_this select 0) displayCtrl 1) ctrlSetText (['\GPMenu\image\bgs\18.jpg','\GPMenu\image\bgs\20.jpg'] select (floor (random 2)));";    
			//text = __EVAL(format ['\GPMenu\image\bgs\%1.jpg', 1+(floor (((456.293392 random 1287474) random [74747477 random 7373777, 983904092 random 82834488484884]) random 36))]); 
			//#include "ranbg.hpp"
			//ctrlSetText 
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "safeZoneH";
		};
	};
	class controls
	{
		class Logo: RscActivePicture
		{
			text = "\GPMenu\image\gpiconmenu_shadow4.paa";
		};
		class LogoApex: Logo
		{
			text = "\GPMenu\image\gpiconmenu_shadow4.paa";
		};
		class LogoArmaAlt: RscPicture
		{
			text = "\A3\ui_f\data\Logos\arma3_shadow_ca.paa";
			y = "safezoneY + (3 - 0.5 * 5) * (pixelH * pixelGrid * 2)";
			x = "safeZoneX+(pixelW * pixelGrid * 2)";//"0.5 - 	5 * 	(pixelW * pixelGrid * 2)";
			w = "2 * 	5 * 	(pixelW * pixelGrid * 2)";
			h = "1 * 	5 * 	(pixelH * pixelGrid * 2)";
		};
		class InfoGP: InfoNews {
			//idc = 38882;
			y = "safezoneY + safezoneH - (4 * 2 + 1) * (pixelH * pixelGrid * 2) - 5 * (4 * pixelH)";
			class Controls: Controls {
				class Button: Button {
					tooltip = "Gamerparty";
					//y = "safezoneY + safezoneH - (4 * 2 + 1) * (pixelH * pixelGrid * 2) - 5 * (4 * pixelH)";
					url = "https://gamerparty.eu";
				};
				class Icon: Icon {
					text = "\GPMenu\image\gpicon.paa";
					//y = "safezoneY + safezoneH - (4 * 2 + 1) * (pixelH * pixelGrid * 2) - 5 * (4 * pixelH)";
				};
				class News: RscText {
					text = "";
					//y = "safezoneY + safezoneH - (4 * 2 + 1) * (pixelH * pixelGrid * 2) - 5 * (4 * pixelH)";
				};
			};
		};
		class BackgroundCenter: BackgroundBar {
			colorBackground[] = {0,0,0,0.5};
		};
		//delete BackgroundCenter;
		class GPUnit: RscButton {
			tooltip = "Join GP's arma unit! (The site is down quite often lol)";
			h = "2 * 	(pixelH * pixelGrid * 2)";
			w = "8 * 	(pixelW * pixelGrid * 2)";
			x = "safezoneX + safezoneW - 		12 * 	(pixelW * pixelGrid * 2)";
			y = "safezoneY + 2 * 	(pixelH * pixelGrid * 2)";
			type = 1;
			url = "https://units.arma3.com/unit/taskforcegamerparty";
			text = "GP Unit";
			color[] = {1,1,1,1};
			colorBackground[] = {0,0,0,.5};
		};
		/*class BackgroundBar: RscText
		{
			y = "safeZoneY";
		}; //Top Menu BGBar*/
		#include "spotlight.hpp"
	};
};
/*
class CfgMusic {
	// sounds[] = {};
	tracks[] = {"your_first_class"};

	class your_first_class {
		name = "This is war (VR)";
		sound[] = {"\A3\music_f_Bootcamp\Music\LeadTrack01_F_Bootcamp.ogg",1,1}; //LeadTrack01_F_Bootcamp
		titles[] = {};
	};
}; 
*/