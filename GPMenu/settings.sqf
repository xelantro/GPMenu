gprndmusic = selectRandom ["LeadTrack01_F","LeadTrack01a_F","LeadTrack01b_F ","LeadTrack01_F_Bootcamp","LeadTrack01b_F_Bootcamp","LeadTrack01_F_Heli","LeadTrack01_F_Mark","LeadTrack01_F_EXP","LeadTrack04_F_EXP","LeadTrack01_F_Orange","LeadTrack01_F_6th_Anniversary_Remix","MainTheme_F_Tank","Music_Intro_ThisIsWarA"];
gpcmusic = gprndmusic;
[
	"gprandommusic",
	"CHECKBOX",
	"Random music",
	"GP Menu",
	false,
	nil,
	{
		params["_value2"];
		if(!gprandommusic) then { gpcmusic = _value2; playMusic _value; } else { gpcmusic = gprndmusic; playMusic gprndmusic; };
	}
] call CBA_fnc_addSetting;

[
	"gpmenumusic",
	"LIST",
	["Music","has no effect when random music is enabled"],
	"GP Menu",
	[["LeadTrack01_F",	"LeadTrack01a_F",	"LeadTrack01b_F ",	"LeadTrack01_F_Bootcamp",	"LeadTrack01b_F_Bootcamp",			"LeadTrack01_F_Heli",		"LeadTrack01_F_Mark",			"LeadTrack01_F_EXP",		"LeadTrack04_F_EXP",						"LeadTrack01_F_Orange",				"LeadTrack01_F_6th_Anniversary_Remix",	"MainTheme_F_Tank",					"Music_Intro_ThisIsWarA"]
	,["This is War",	"This is War (A)",	"This is War (B)",	"This is War (VR Remix)",	"This is War (VR Remix - loop)",	"This is War (Heli Remix)",	"This is War (Marksmen Remix)",	"This is War (Apex Remix)",	"This is War (Apex Remix - Alternative 1)",	"This is War (Laws of War Remix)",	"This is War (6th Anniversary Remix)",	"This is War (Tanks DLC version)",	"This is War (Contact - Cut)"]
	,4],
	nil,
	{
		params["_value"];
		if(!gprandommusic) then { gpcmusic = _value; playMusic _value; } else { gpcmusic = gprndmusic; playMusic gprndmusic; };
		//hint _value;
	}
] call CBA_fnc_addSetting;
