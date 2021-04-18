class Controls;
class Button;
class GroupHover;
class LineTop; class LineBottom; class LineLeft; class LineRight; class Overlay;
class GroupPicture;
class RscActivePictureKeepAspect;
class Text; class TextBackground;
class Picture;
class Video;
class Spotlight1: RscMainMenuSpotlight { //Quick Play
	//x = "0.5 - (1.5 * 10) * (pixelW * pixelGridNoUIScale * 2) - (2 * pixelW)";
	x = "safeZoneX+safezoneW*0.22";
	y = "safeZoneY + (safeZoneH * 0.115) + pixelH";
	w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
	h = "5 * (pixelH * pixelGridNoUIScale * 2)";
	class Controls:Controls {
		class Button: Button {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 *(pixelH * pixelGridNoUIScale * 2)";
			url = "steam://connect/gamerparty.eu:2303";
			//action = "[] spawn {sleep 5; _directconbtn = (finddisplay 132) displayCtrl 166; ctrlActivate _directconbtn;};";
			tooltip = "Opens a steam connect window";
			//action = "ctrlActivate (132 displayCtrl 166);"
		};
		class GroupHover: GroupHover {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
			class Controls: Controls {
				class LineBottom: LineBottom {
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
					y = "5 * (pixelH * pixelGridNoUIScale * 2) - pixelH";
				};
				class LineLeft: LineLeft {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
				};
				class LineRight: LineRight {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
					x = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2) - pixelW";
				};
				class LineTop: LineTop {
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
				};
				class Overlay: Overlay {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
				};
			};
		};
		class GroupPicture: GroupPicture {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
			class Controls: Controls {
				class Picture: Picture {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
					text = "\GPMenu\image\connectbg.jpg";
				};
				/*class Video: Video {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
					w = "5 * (pixelW * pixelGridNoUIScale * 2)";
				};*/ delete Video;
			};
		};
		class Text: Text {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
			text = "GP Server";
		};
		class TextBackground: TextBackground {
			w = "5 * 16/10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
		};
	};
};
class Spotlight3: RscMainMenuSpotlight { //Editor
	//x = "0.5 + (1 * 10) * (pixelW * pixelGridNoUIScale * 2) + (2 * pixelW)";
	x = "(safeZoneX+safezoneW*0.78) - (5*16/10*(pixelW * pixelGridNoUIScale * 2))";
	y = "safeZoneY + (safeZoneH * 0.115) + pixelH";
	w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
	h = "5 * (pixelH * pixelGridNoUIScale * 2)";
	class Controls:Controls {
		class Button: Button {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 *(pixelH * pixelGridNoUIScale * 2)";
		};
		class GroupHover: GroupHover {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
			class Controls: Controls {
				class LineBottom: LineBottom {
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
					y = "5 * (pixelH * pixelGridNoUIScale * 2) - pixelH";
				};
				class LineLeft: LineLeft {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
				};
				class LineRight: LineRight {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
					x = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2) - pixelW";
				};
				class LineTop: LineTop {
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
				};
				class Overlay: Overlay {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
				};
			};
		};
		class GroupPicture: GroupPicture {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
			class Controls: Controls {
				class Picture: Picture {
					h = "5 * 16/10 *(pixelH * pixelGridNoUIScale * 2)";
					w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
					text = "\GPMenu\image\editorbg.jpg";
				};
				/*class Video: Video {
					h = "5 * (pixelH * pixelGridNoUIScale * 2)";
					w = "5 * (pixelW * pixelGridNoUIScale * 2)";
				};*/ delete Video;
			};
		};
		class Text: Text {
			w = "5 * 16/10 *(pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
		};
		class TextBackground: TextBackground {
			w = "5 * 16/10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "5 * (pixelH * pixelGridNoUIScale * 2)";
		};
	};
};
/*class Spotlight2: RscMainMenuSpotlight { //Middle Button
	y = "safeZoneY + (safeZoneH * 0.1)";
	/*w = "10 * (pixelW * pixelGridNoUIScale * 2)";
	h = "10 * (pixelW * pixelGridNoUIScale * 2)";*//*
	class Controls:Controls {
		delete GroupPicture;
		/*class Button: Button {
			w = "10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "10 * (pixelW * pixelGridNoUIScale * 2)";
		};
		class GroupHover: GroupHover {
			w = "10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "10 * (pixelW * pixelGridNoUIScale * 2)";
			class Controls: Controls {
				class LineBottom: LineBottom {
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					y = "10 * (pixelH * pixelGridNoUIScale * 2) - pixelH";
				};
				class LineLeft: LineLeft {
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
				};
				class LineRight: LineRight {
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					x = "10 * (pixelW * pixelGridNoUIScale * 2) - pixelW";
				};
				class LineTop: LineTop {
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
				};
				class Overlay: Overlay {
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
				};
			};
		};
		delete GroupPicture;
		/*class GroupPicture: GroupPicture {
			w = "10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "10 * (pixelW * pixelGridNoUIScale * 2)";
			class Controls: Controls {
				class Picture: Picture {
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
				};
				class Video: Video {
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
				};
			};
		};
		class Text: Text {
			w = "10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "10 * (pixelW * pixelGridNoUIScale * 2)";
		};
		class TextBackground: TextBackground {
			w = "10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "10 * (pixelW * pixelGridNoUIScale * 2)";
		};*//*
	};
};*/
delete Spotlight2;
/*class RscButtonMenuMain;
class AllMissions: RscButtonMenuMain {
	w = "7 * (pixelW * pixelGrid * 2)";
};*/
delete SpotlightNext;
delete SpotlightPrev;
/*class SpotlightPrev: RscActivePictureKeepAspect {
	y = "7/10 * (0.5 - (10 / 2 + (	10 / 8)) * 	(pixelH * pixelGridNoUIScale * 2))";
};
class SpotlightNext: RscActivePictureKeepAspect {
	y = "7/10* (0.5 + (10 / 2) * 	(pixelH * pixelGridNoUIScale * 2))";
};*/
class BackgroundSpotlight: RscPicture {
	y = "safeZoneY + (safeZoneH * 0.115)";
	h = "5 * (pixelH * pixelGridNoUIScale * 2) + (2 * pixelH)";
	w = "safezoneW*0.3";
	x = "(safeZoneX+safezoneW*0.22) + 6 * (pixelH * pixelGridNoUIScale * 2)"
	colorText[] = {0,0,0,0.05};
};
//delete BackgroundSpotlightLeft;
//delete BackgroundSpotlightRight;
class BackgroundSpotlightLeft: BackgroundSpotlight {
	y = "safeZoneY + (safeZoneH * 0.115)";
	x = "safeZoneX";
	w = "safezoneW*0.22+(5 * 16/10 *(pixelW * pixelGridNoUIScale * 2))";
	h = "5 * (pixelH * pixelGridNoUIScale * 2) + (2 * pixelH)";
	colorText[] = {0,0,0,0.27};
};
class BackgroundSpotlightRight: BackgroundSpotlight {
	y = "safeZoneY + (safeZoneH * 0.115)";
	x = "(safeZoneX+safezoneW*0.78)- (5 * 16/10 *(pixelW * pixelGridNoUIScale * 2))";
	h = "5 * (pixelH * pixelGridNoUIScale * 2) + (2 * pixelH)";
	w = "(safeZoneX+safezoneW*0.78)";
	colorText[] = {0,0,0,0.27};
};