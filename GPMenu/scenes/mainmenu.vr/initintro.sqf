enableSaving [ false, false ];
cutText ["", "BLACK FADED", 69];
enableEnvironment false;
showCinemaBorder false;

/*
while {true} do
{
	_video = ["mainmenu\scenes\mainmenu.stratis\myvideo.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};*/

//v- gets done by settings.sqf for some reason
/*if(gprandommusic) then {
	playMusic (selectRandom ["LeadTrack01_F","LeadTrack01a_F","LeadTrack01b_F ","LeadTrack01_F_Bootcamp","LeadTrack01b_F_Bootcamp","LeadTrack01_F_Heli","LeadTrack01_F_Mark","LeadTrack01_F_EXP","LeadTrack04_F_EXP","LeadTrack01_F_Orange","LeadTrack01_F_6th_Anniversary_Remix","MainTheme_F_Tank","Music_Intro_ThisIsWarA"]);
} else { 
	playMusic "gpmenumusic";
};*/
//public cgprandommusic = selectRandom ["LeadTrack01_F","LeadTrack01a_F","LeadTrack01b_F ","LeadTrack01_F_Bootcamp","LeadTrack01b_F_Bootcamp","LeadTrack01_F_Heli","LeadTrack01_F_Mark","LeadTrack01_F_EXP","LeadTrack04_F_EXP","LeadTrack01_F_Orange","LeadTrack01_F_6th_Anniversary_Remix","MainTheme_F_Tank","Music_Intro_ThisIsWarA"];
//addMusicEventHandler ["MusicStop", {private _cmusic=if (gprandommusic) then [{cgprandommusic},{gpmenumusic}];[_cmusic] spawn {params["_cmusic"];playMusic _cmusic;};}];
playMusic gpcmusic; //just in case
addMusicEventHandler ["MusicStop", {private _cmusic=(_this select 0);[_cmusic] spawn {params["_cmusic"];playMusic _cmusic;};}];

while {true} do
{
	((findDisplay 0) displayCtrl 6969) ctrlSetText format ['\GPMenu\image\bgs\%1.jpg', (floor random 39)];
	sleep 12;
};
