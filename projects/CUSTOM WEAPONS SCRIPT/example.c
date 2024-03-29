#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "natives.h"
#include "common.h"
int test = 1;

typedef struct cuswalker
{
	int f_0;
	int f_4;
	int f_8;
	int f_12;
	int f_16;
	char* f_20;
	char* f_24;
	char* f_28;
	char* f_32;
	char* f_36;
	int f_40;
	float f_44;
	float f_48;
	float f_52;
	float f_56;
	float f_60;
	char* f_64;
	float f_68;
	char* f_72;
	char* f_76;
	char* f_80;
	char* f_84;
	char* f_88;
	float f_92;
	float f_96;
	float f_100;
	float f_104;
	float f_108;
	float f_112;
	float f_116;
	float f_120;
	float f_124;
	float f_128;
	char* f_132;
	char* f_136;
	char* f_140;
	float f_144;
	float f_148;
	float f_152;
	float f_156;
	float f_160;
	float f_164;
	float f_168;
	float f_172;
	float f_176;
	float f_180;
	float f_184;
	float f_188;
	float f_192;
	char* f_196;
	int f_200;
	int f_204;
	float f_208;
	float f_212;
	float f_216;
	float f_220;
	float f_224;
	float f_228;
	float f_232;
	float f_236;
	float f_240;
	float f_244;
	char* f_248;
	int f_252;
	float f_256;
	float f_260;
	float f_264;
	float f_268;
	float f_272;
	float f_276;
	float f_280;
	float f_284;
	int f_288;
	float f_292;
	char* f_296;
	float f_300;
	float f_304;
	float f_308;
	float f_312;
	int f_316;
	int f_320;
	float f_324;
	float f_328;
	float f_332;
	float f_336;
	float f_340;
	float f_344;
	int f_348;
} cuswalker;

typedef struct custopbreak
{
	int f_0;
	int f_4;
	int f_8;
	int f_12;
	int f_16;
	char* f_20;
	char* f_24;
	char* f_28;
	char* f_32;
	char* f_36;
	int f_40;
	float f_44;
	float f_48;
	float f_52;
	float f_56;
	float f_60;
	char* f_64;
	float f_68;
	char* f_72;
	char* f_76;
	char* f_80;
	char* f_84;
	char* f_88;
	float f_92;
	float f_96;
	float f_100;
	float f_104;
	float f_108;
	float f_112;
	float f_116;
	float f_120;
	float f_124;
	float f_128;
	char* f_132;
	char* f_136;
	char* f_140;
	float f_144;
	float f_148;
	float f_152;
	float f_156;
	float f_160;
	float f_164;
	float f_168;
	float f_172;
	float f_176;
	float f_180;
	float f_184;
	float f_188;
	float f_192;
	char* f_196;
	int f_200;
	int f_204;
	float f_208;
	float f_212;
	float f_216;
	float f_220;
	float f_224;
	float f_228;
	float f_232;
	float f_236;
	float f_240;
	float f_244;
	char* f_248;
	int f_252;
	float f_256;
	float f_260;
	float f_264;
	float f_268;
	float f_272;
	float f_276;
	float f_280;
	float f_284;
	int f_288;
	float f_292;
	char* f_296;
	float f_300;
	float f_304;
	float f_308;
	float f_312;
	int f_316;
	int f_320;
	float f_324;
	float f_328;
	float f_332;
	float f_336;
	float f_340;
	float f_344;
	int f_348;
} custopbreak;

typedef struct CannonBallWep
{
	int f_0;
	int f_4;
	int f_8;
	int f_12;
	int f_16;
	char* f_20;
	char* f_24;
	char* f_28;
	char* f_32;
	char* f_36;
	int f_40;
	float f_44;
	float f_48;
	float f_52;
	float f_56;
	float f_60;
	char* f_64;
	float f_68;
	char* f_72;
	char* f_76;
	char* f_80;
	char* f_84;
	char* f_88;
	float f_92;
	float f_96;
	float f_100;
	float f_104;
	float f_108;
	float f_112;
	float f_116;
	float f_120;
	float f_124;
	float f_128;
	char* f_132;
	char* f_136;
	char* f_140;
	float f_144;
	float f_148;
	float f_152;
	float f_156;
	float f_160;
	float f_164;
	float f_168;
	float f_172;
	float f_176;
	float f_180;
	float f_184;
	float f_188;
	float f_192;
	char* f_196;
	int f_200;
	int f_204;
	float f_208;
	float f_212;
	float f_216;
	float f_220;
	float f_224;
	float f_228;
	float f_232;
	float f_236;
	float f_240;
	float f_244;
	char* f_248;
	int f_252;
	float f_256;
	float f_260;
	float f_264;
	float f_268;
	float f_272;
	float f_276;
	float f_280;
	float f_284;
	int f_288;
	float f_292;
	char* f_296;
	vector3 f_300;
	float f_312;
	int f_316;
	int f_320;
	int f_324;
	int f_328;
	int f_332;
	int f_336;
	float f_340;
	float f_344;
	int f_348;
	float f_352;
	int f_356;
	char* f_360;
	vector3 f_364;
	float f_376;
	float f_380;
	char* f_384;
} CannonBallWep;


typedef struct LanternWep
{
	int f_0;
	int f_4;
	int f_8;
	int f_12;
	int f_16;
	char* f_20;
	char* f_24;
	char* f_28;
	char* f_32;
	char* f_36;
	int f_40;
	float f_44;
	float f_48;
	float f_52;
	float f_56;
	float f_60;
	char* f_64;
	float f_68;
	char* f_72;
	char* f_76;
	char* f_80;
	char* f_84;
	char* f_88;
	float f_92;
	float f_96;
	float f_100;
	float f_104;
	float f_108;
	float f_112;
	float f_116;
	float f_120;
	float f_124;
	float f_128;
	char* f_132;
	char* f_136;
	char* f_140;
	float f_144;
	float f_148;
	float f_152;
	float f_156;
	float f_160;
	float f_164;
	float f_168;
	float f_172;
	float f_176;
	float f_180;
	float f_184;
	float f_188;
	float f_192;
	char* f_196;
	int f_200;
	int f_204;
	float f_208;
	float f_212;
	float f_216;
	float f_220;
	float f_224;
	float f_228;
	float f_232;
	float f_236;
	float f_240;
	float f_244;
	char* f_248;
	int f_252;
	float f_256;
	float f_260;
	float f_264;
	float f_268;
	float f_272;
	float f_276;
	float f_280;
	float f_284;
	int f_288;
	float f_292;
	char* f_296;
	vector3 f_300;
	float f_312;
	int f_316;
	int f_320;
	int f_324;
	int f_328;
	int f_332;
	int f_336;
	float f_340;
	float f_344;
	int f_348;
	float f_352;
	int f_356;
	char* f_360;
	vector3 f_364;
	float f_376;
	float f_380;
	char* f_384;
} LanternWep;

typedef struct TorchW
{
	int f_0;
	int f_4;
	int f_8;
	int f_12;
	int f_16;
	char* f_20;
	char* f_24;
	char* f_28;
	char* f_32;
	char* f_36;
	int f_40;
	float f_44;
	float f_48;
	float f_52;
	float f_56;
	float f_60;
	char* f_64;
	float f_68;
	char* f_72;
	char* f_76;
	char* f_80;
	char* f_84;
	char* f_88;
	float f_92;
	float f_96;
	float f_100;
	float f_104;
	float f_108;
	float f_112;
	float f_116;
	float f_120;
	float f_124;
	float f_128;
	char* f_132;
	char* f_136;
	char* f_140;
	float f_144;
	float f_148;
	float f_152;
	float f_156;
	float f_160;
	float f_164;
	float f_168;
	float f_172;
	float f_176;
	float f_180;
	float f_184;
	float f_188;
	float f_192;
	char* f_196;
	int f_200;
	int f_204;
	float f_208;
	float f_212;
	float f_216;
	float f_220;
	float f_224;
	float f_228;
	float f_232;
	float f_236;
	float f_240;
	float f_244;
	char* f_248;
	int f_252;
	float f_256;
	float f_260;
	float f_264;
	float f_268;
	float f_272;
	float f_276;
	float f_280;
	float f_284;
	int f_288;
	float f_292;
	float f_296;
	float f_300;
	float f_304;
	float f_308;
	int f_312;
	int f_316;
	float f_320;
	float f_324;
	float f_328;
	float f_332;
	float f_336;
	int f_340;
} TorchW;

typedef struct ZombieSpitWep
{
	int f_0;
	int f_4;
	int f_8;
	int f_12;
	int f_16;
	char* f_20;
	char* f_24;
	char* f_28;
	char* f_32;
	char* f_36;
	int f_40;
	float f_44;
	float f_48;
	float f_52;
	float f_56;
	float f_60;
	char* f_64;
	float f_68;
	char* f_72;
	char* f_76;
	char* f_80;
	char* f_84;
	char* f_88;
	float f_92;
	float f_96;
	float f_100;
	float f_104;
	float f_108;
	float f_112;
	float f_116;
	float f_120;
	float f_124;
	float f_128;
	char* f_132;
	char* f_136;
	char* f_140;
	float f_144;
	float f_148;
	float f_152;
	float f_156;
	float f_160;
	float f_164;
	float f_168;
	float f_172;
	float f_176;
	float f_180;
	float f_184;
	float f_188;
	float f_192;
	char* f_196;
	int f_200;
	int f_204;
	float f_208;
	float f_212;
	float f_216;
	float f_220;
	float f_224;
	float f_228;
	float f_232;
	float f_236;
	float f_240;
	float f_244;
	char* f_248;
	int f_252;
	float f_256;
	float f_260;
	float f_264;
	float f_268;
	float f_272;
	float f_276;
	float f_280;
	float f_284;
	int f_288;
	float f_292;
	char* f_296;
	vector3 f_300;
	float f_312;
	int f_316;
	int f_320;
	int f_324;
	int f_328;
	int f_332;
	int f_336;
	float f_340;
	float f_344;
	int f_348;
	float f_352;
	int f_356;
	char* f_360;
	vector3 f_364;
	float f_376;
	float f_380;
	char* f_384;
} ZombieSpitWep;

void Test()
{
	// Here we are replacing UNDEAD WEAPONS with semi custom weapons
	// be sure to er bypass at mainmenu

	TorchW Var4;//can change model, but doesnt get held correctly (maybe some of the floats can change pos, idk)
	CannonBallWep Var5;// originally bait
	LanternWep Var7;// originally holy water
	ZombieSpitWep Var8;// wouldnt reccomend editing the model as it phases in your body at all times
	cuswalker Var11; // walker cut wep originally blunderbuss
	custopbreak Var12; // topbreak cut wep originally zombie boom bait
	// I tried making torch and zombiespit, as well as the unused? weapon id 38 be throwable weapon classes, but no dice.
	// always ended in a crash, torch can be modified a bit  but don't think class type can be changed this way
	// id 38 can possibly be used as a pistol, shotty, rifle or sniper class but havent tried anything other than pistol class
	// I plan to make it a custom wep eventually and add the struct here but I don't have any decent ideas for it atm.
	// i'll try to find another weapon model for it eventually, maybe the bow model, howevr it wont be held correctly
	// and will act like a pistol more than likely lol.

	Var4.f_20 = "MELEE_TORCH";
	Var4.f_4 = 46;
	Var4.f_8 = 20;
	Var4.f_12 = 20;
	Var4.f_16 = -1;
	Var4.f_28 = "melee_torch01x";
	Var4.f_24 = "TORCH";
	Var4.f_32 = "";
	Var4.f_36 = "";
	Var4.f_64 = "MEL_Torch";
	Var4.f_68 = 500.0f;
	Var4.f_72 = "trc";
	Var4.f_76 = "";
	Var4.f_80 = "<none>";
	Var4.f_84 = "donothing";
	Var4.f_88 = "DoNothing";
	Var4.f_92 = 0.0f;
	Var4.f_96 = 0.0f;
	Var4.f_100 = 0.0f;
	Var4.f_104 = 0.0f;
	Var4.f_108 = 0.0f;
	Var4.f_112 = 0.0f;
	Var4.f_116 = 0.0f;
	Var4.f_120 = 0.0f;
	Var4.f_124 = 0.0f;
	Var4.f_128 = 0.0f;
	Var4.f_132 = "TORCH_IDLE";
	Var4.f_136 = "";
	Var4.f_140 = "wrist_r_Attachment";
	Var4.f_144 = 0.8f;
	Var4.f_148 = 15.0f;
	Var4.f_152 = 0.8f;
	Var4.f_156 = 15.0f;
	Var4.f_160 = 0.0f;
	Var4.f_164 = 1.0f;
	Var4.f_168 = 0.6f;
	Var4.f_196 = "AIMER_SIMPLE";
	Var4.f_200 = 0;
	Var4.f_204 = 0;
	Var4.f_208 = 0.5f;
	Var4.f_212 = 0.03f;
	Var4.f_216 = 1;
	Var4.f_220 = 8.0f;
	Var4.f_224 = 8.0f;
	Var4.f_40 = 35;
	Var4.f_44 = 0.15f;
	Var4.f_48 = 0.0f;
	Var4.f_52 = 0.4f;
	Var4.f_56 = 0.0f;
	Var4.f_60 = 0.0f;
	UNK_0xA6C4E59F(33, "base_melee", &Var4);
	UNK_0xD291A820(33);

	//replaces bait
	//custom weapon (throwable cannonball) using modified dynamite attributes
	Var5.f_20 = "THROWN_ZombieBait";
	Var5.f_4 = 47;
	Var5.f_8 = 30;
	Var5.f_12 = 30;
	Var5.f_16 = 5;
	Var5.f_28 = "p_gen_cannonball01x";//model
	Var5.f_32 = "";
	Var5.f_36 = "";
	Var5.f_24 = "title_weap_25";//unused title name - The Pirate
	Var5.f_64 = "THRX_Dynamite";
	Var5.f_68 = 1000.0f;
	Var5.f_72 = "dyn";
	Var5.f_76 = "";
	Var5.f_80 = "<none>";
	Var5.f_84 = "donothing";
	Var5.f_88 = "DoNothing";
	Var5.f_92 = 10.0f;
	Var5.f_96 = 60.0f;
	Var5.f_100 = 30.0f;
	Var5.f_104 = 1.0f;
	Var5.f_108 = 1.0f;
	Var5.f_112 = 0.1f;
	Var5.f_116 = 60.0f;
	Var5.f_120 = 1.0f;
	Var5.f_124 = 1.0f;
	Var5.f_128 = 1.0f;
	Var5.f_132 = "";
	Var5.f_136 = "";
	Var5.f_360 = "MUZZLE_DYNAMITE";
	Var5.f_364 = (vector3) { 0.045f, 0.17f, 0.0f };
	Var5.f_140 = "wrist_r_Attachment";//wrist_r originally
	Var5.f_144 = 0.8f;
	Var5.f_148 = 100.0f;
	Var5.f_152 = 0.8f;
	Var5.f_156 = 100.0f;
	Var5.f_160 = 30.0f;
	Var5.f_164 = 50.0f;
	Var5.f_168 = 0.6f;
	Var5.f_172 = 30.0f;
	Var5.f_176 = 50.0f;
	Var5.f_180 = 0.6f;
	Var5.f_196 = "AIMER_BALLISTIC";
	Var5.f_200 = 0;
	Var5.f_204 = 0;
	Var5.f_208 = 1.0f;
	Var5.f_212 = 0.1f;
	Var5.f_216 = 1.0f;
	Var5.f_220 = 8.5f;
	Var5.f_224 = 1.5f;
	Var5.f_228 = 30.0f;
	Var5.f_232 = 30.0f;
	Var5.f_236 = 30.0f;
	Var5.f_240 = 30.0f;
	Var5.f_244 = 80.0f;
	Var5.f_248 = "WEAP_DYNAMITE_TRAIL";
	Var5.f_252 = 0;
	Var5.f_256 = 60.0f;
	Var5.f_260 = 30.0f;
	Var5.f_264 = 1.0f;
	Var5.f_268 = 1.0f;
	Var5.f_272 = 10.0f;
	Var5.f_276 = 1.5f;
	Var5.f_280 = 200.0f;
	Var5.f_284 = 1.0f;
	Var5.f_288 = 0;
	Var5.f_292 = 0.0f;
	Var5.f_292 = 0.0f;
	Var5.f_296 = "p_gen_cannonball01x";//thrown model
	Var5.f_300 = (vector3) { 2.0f, 1.0f, 1.0f };
	Var5.f_316 = 1;
	Var5.f_320 = 0;
	Var5.f_332 = 0;
	Var5.f_336 = 0;
	Var5.f_324 = 0;
	Var5.f_328 = 1;
	Var5.f_340 = 30.0f;
	Var5.f_344 = 0.0f;
	Var5.f_348 = 1;
	Var5.f_352 = 1;
	Var5.f_356 = 4;
	Var5.f_312 = 2.0f;
	Var5.f_380 = 5.0f;
	Var5.f_384 = "CannonballExplosion";//explosion type
	Var5.f_376 = 30.0f;
	Var5.f_40 = 47;
	Var5.f_44 = 0.9f;
	Var5.f_48 = 0.35f;
	Var5.f_52 = 0.0f;
	Var5.f_56 = 0.0f;
	Var5.f_60 = 0.0f;
	UNK_0xA2597101(36, "base_thrown_exploding", &Var5);
	UNK_0xD291A820(36);

	//replaces holy water
	//Custom weapon test - Throwable lantern [Pyro] using holy water attributes - feel free to edit
	Var7.f_20 = "THROWN_HolyWater";
	Var7.f_4 = 47;
	Var7.f_8 = 20;
	Var7.f_12 = 20;
	Var7.f_16 = 16;
	Var7.f_28 = "throw_lantern01x";//model
	Var7.f_32 = "";
	Var7.f_36 = "";
	Var7.f_24 = "title_weap_11";
	Var7.f_64 = "THRX_Fire";
	Var7.f_68 = 500.0f;
	Var7.f_72 = "dyn";
	Var7.f_76 = "";
	Var7.f_80 = "<none>";
	Var7.f_84 = "donothing";
	Var7.f_88 = "DoNothing";
	Var7.f_92 = 10.0f;
	Var7.f_96 = 40.0f;
	Var7.f_100 = 20.0f;
	Var7.f_104 = 1.0f;
	Var7.f_108 = 1.0f;
	Var7.f_112 = 0.1f;
	Var7.f_116 = 40.0f;
	Var7.f_120 = 1.0f;
	Var7.f_124 = 1.0f;
	Var7.f_128 = 1.0f;
	Var7.f_132 = "";
	Var7.f_136 = "";
	Var7.f_360 = "";
	Var7.f_364 = (vector3) { 0.045f, 0.17f, 0.0f };
	Var7.f_140 = "wrist_r";
	Var7.f_144 = 0.8f;
	Var7.f_148 = 100.0f;
	Var7.f_152 = 0.8f;
	Var7.f_156 = 100.0f;
	Var7.f_160 = 20.0f;
	Var7.f_164 = 40.0f;
	Var7.f_168 = 0.6f;
	Var7.f_172 = 20.0f;
	Var7.f_176 = 40.0f;
	Var7.f_180 = 0.6f;
	Var7.f_196 = "AIMER_BALLISTIC";
	Var7.f_200 = 0;
	Var7.f_204 = 0;
	Var7.f_208 = 1.0f;
	Var7.f_212 = 0.1f;
	Var7.f_216 = 1.0f;
	Var7.f_220 = 8.5f;
	Var7.f_224 = 1.5f;
	Var7.f_228 = 30.0f;
	Var7.f_232 = 30.0f;
	Var7.f_236 = 30.0f;
	Var7.f_240 = 30.0f;
	Var7.f_244 = 60.0f;
	Var7.f_248 = "muzzle_zombie_holywater";
	Var7.f_252 = 0;
	Var7.f_256 = 40.0f;
	Var7.f_260 = 20.0f;
	Var7.f_264 = 1.0f;
	Var7.f_268 = 1.0f;
	Var7.f_272 = 10.0f;
	Var7.f_276 = 1.0f;
	Var7.f_280 = 100.0f;
	Var7.f_284 = 0.5f;
	Var7.f_288 = 0;
	Var7.f_292 = 0.0f;
	Var7.f_292 = 0.0f;
	Var7.f_296 = "throw_lantern01x";//thrown model
	Var7.f_300 = (vector3) { 1.0f, 1.0f, 1.0f };
	Var7.f_316 = 1;
	Var7.f_320 = 0;
	Var7.f_332 = 0;
	Var7.f_336 = 1;
	Var7.f_324 = 1;
	Var7.f_328 = 0;
	Var7.f_340 = 26.0f;
	Var7.f_344 = 0.0f;
	Var7.f_348 = 1;
	Var7.f_352 = 1;
	Var7.f_356 = 4;
	Var7.f_312 = 2.0f;
	Var7.f_380 = -1.0f;
	Var7.f_384 = "KeroseneLampExplosion";
	Var7.f_376 = 30.0f;
	Var7.f_40 = 47;
	Var7.f_44 = 0.65f;
	Var7.f_48 = 0.3f;
	Var7.f_52 = 0.0f;
	Var7.f_56 = 0.0f;
	Var7.f_60 = 0.0f;
	UNK_0xA2597101(35, "base_thrown_exploding", &Var7);
	UNK_0xD291A820(35);

	Var8.f_20 = "THROWN_ZombieSpit";
	Var8.f_4 = 47;
	Var8.f_8 = 20;
	Var8.f_12 = 20;
	Var8.f_16 = 0;
	Var8.f_28 = "throw_zombieSpit01x";//model
	Var8.f_32 = "";
	Var8.f_36 = "";
	Var8.f_24 = "ZombieSpit";
	Var8.f_64 = "THRX_ZombieSpit";
	Var8.f_68 = 500.0f;
	Var8.f_72 = "dyn";
	Var8.f_76 = "";
	Var8.f_80 = "<none>";
	Var8.f_84 = "donothing";
	Var8.f_88 = "DoNothing";
	Var8.f_92 = 5.0f;
	Var8.f_96 = 15.0f;
	Var8.f_100 = 10.0f;
	Var8.f_104 = 1.0f;
	Var8.f_108 = 1.0f;
	Var8.f_112 = 0.1f;
	Var8.f_116 = 40.0f;
	Var8.f_120 = 1.0f;
	Var8.f_124 = 1.0f;
	Var8.f_128 = 1.0f;
	Var8.f_132 = "";
	Var8.f_136 = "";
	Var8.f_360 = "";
	Var8.f_364 = (vector3) { 0.045f, 0.17f, 0.0f };
	Var8.f_140 = "wrist_r_Attachment";
	Var8.f_144 = 0.8f;
	Var8.f_148 = 100.0f;
	Var8.f_152 = 0.8f;
	Var8.f_156 = 100.0f;
	Var8.f_160 = 20.0f;
	Var8.f_164 = 40.0f;
	Var8.f_168 = 0.6f;
	Var8.f_172 = 20.0f;
	Var8.f_176 = 40.0f;
	Var8.f_180 = 0.6f;
	Var8.f_196 = "AIMER_BALLISTIC";
	Var8.f_200 = 0;
	Var8.f_204 = 0;
	Var8.f_208 = 1.0f;
	Var8.f_212 = 0.1f;
	Var8.f_216 = 1.0f;
	Var8.f_220 = 8.5f;
	Var8.f_224 = 1.5f;
	Var8.f_228 = 30.0f;
	Var8.f_232 = 30.0f;
	Var8.f_236 = 30.0f;
	Var8.f_240 = 30.0f;
	Var8.f_244 = 60.0f;
	Var8.f_248 = "ZOMBIE_SPIT_TRAIL";
	Var8.f_252 = 0;
	Var8.f_256 = 40.0f;
	Var8.f_260 = 10.0f;
	Var8.f_264 = 1.0f;
	Var8.f_268 = 1.0f;
	Var8.f_272 = 10.0f;
	Var8.f_276 = 1.0f;
	Var8.f_280 = 100.0f;
	Var8.f_284 = 0.5f;
	Var8.f_288 = 0;
	Var8.f_292 = 0.0f;
	Var8.f_292 = 0.0f;
	Var8.f_296 = "throw_zombieSpit01x";
	Var8.f_300 = (vector3) { 1.0f, 1.0f, 1.0f };
	Var8.f_316 = 1;
	Var8.f_320 = 1;
	Var8.f_332 = 0;
	Var8.f_336 = 0;
	Var8.f_324 = 0;
	Var8.f_328 = 0;
	Var8.f_340 = 26.0f;
	Var8.f_344 = 0.0f;
	Var8.f_348 = 1;
	Var8.f_352 = 1;
	Var8.f_356 = 0;
	Var8.f_312 = 2.0f;
	Var8.f_380 = -1.0f;
	Var8.f_384 = "";
	Var8.f_376 = 30.0f;
	Var8.f_40 = 47;
	Var8.f_44 = 0.65f;
	Var8.f_48 = 0.3f;
	Var8.f_52 = 0.0f;
	Var8.f_56 = 0.0f;
	Var8.f_60 = 0.0f;
	UNK_0xA2597101(32, "base_thrown_exploding", &Var8);
	UNK_0xD291A820(32);

	//replaces blunderbuss
	//unused walker revolver using volcanic attributes
	Var11.f_20 = "SHOTGUN_Blunderbuss";
	Var11.f_4 = 39;
	Var11.f_8 = 10;
	Var11.f_12 = 20;
	Var11.f_16 = 6;
	Var11.f_28 = "revolver_walker01x";//change 01x to 02x for always gold skin
	Var11.f_32 = "WEAPONS_PISTOL_VOLCANIC";//sound?
	Var11.f_36 = "WEAPONS_PISTOL_VOLCANIC";//sound?
	Var11.f_24 = "title_xplvl_5";//display name = Colt
	Var11.f_64 = "PSTL_Volcanic";//icon
	Var11.f_68 = 500.0f;
	Var11.f_72 = "ptl";
	Var11.f_76 = "ptl_vol";
	Var11.f_80 = "pistol_vol";
	Var11.f_84 = "rifle_1892Win";
	Var11.f_88 = "rifle_1892Win";
	Var11.f_92 = 1.0f;
	Var11.f_96 = 35.0f;
	Var11.f_100 = 25.0f;
	Var11.f_104 = 1.0f;
	Var11.f_108 = 2.0f;
	Var11.f_112 = 0.2f;
	Var11.f_116 = 60.0f;
	Var11.f_120 = 1.0f;
	Var11.f_124 = 0.1f;
	Var11.f_128 = 0.3f;
	Var11.f_132 = "MUZZLE_FLASH1";
	Var11.f_136 = "RUMBLE_PISTOL_LOW";
	Var11.f_140 = "wrist_r_Attachment";
	Var11.f_144 = 0.8f;
	Var11.f_148 = 60.0f;
	Var11.f_152 = 0.8f;
	Var11.f_156 = 60.0f;
	Var11.f_160 = 23.0f;
	Var11.f_164 = 50.0f;
	Var11.f_168 = 0.25f;
	Var11.f_172 = 23.0f;
	Var11.f_176 = 50.0f;
	Var11.f_180 = 0.25f;
	Var11.f_184 = 0.0f;
	Var11.f_188 = 1.0f;
	Var11.f_192 = 0.0f;
	Var11.f_196 = "AIMER_BALLISTIC";
	Var11.f_200 = 1;
	Var11.f_204 = 0;
	Var11.f_208 = 0.5f;
	Var11.f_212 = 0.085f;
	Var11.f_216 = 1.0f;
	Var11.f_220 = 1.0f;
	Var11.f_224 = 1.0f;
	Var11.f_228 = 18.0f;
	Var11.f_232 = 18.0f;
	Var11.f_236 = 18.0f;
	Var11.f_240 = 18.0f;
	Var11.f_244 = 45.0f;
	Var11.f_248 = "";
	Var11.f_252 = 0;
	Var11.f_256 = 5.0f;
	Var11.f_260 = 20.0f;
	Var11.f_264 = 70.0f;
	Var11.f_268 = 8.0f;
	Var11.f_272 = 1.0f;
	Var11.f_276 = 4.0f;
	Var11.f_280 = 50.0f;
	Var11.f_284 = 1.0f;
	Var11.f_288 = 0;
	Var11.f_292 = 0.0f;
	Var11.f_296 = "Auto";
	Var11.f_300 = 0.5f;
	Var11.f_304 = 8.0f;
	Var11.f_308 = 1.0f;
	Var11.f_312 = 0.0f;
	Var11.f_316 = 1;
	Var11.f_320 = 1;
	Var11.f_324 = 19.0f;
	Var11.f_328 = 0.5f;
	Var11.f_332 = 1.2f;
	Var11.f_336 = 0.5f;
	Var11.f_340 = 8.0f;
	Var11.f_344 = 0.0f;
	Var11.f_348 = 1;
	Var11.f_40 = -1;
	Var11.f_44 = 0.43f;
	Var11.f_48 = 0.3f;
	Var11.f_52 = 0.5f;
	Var11.f_56 = 0.2f;
	Var11.f_60 = 0.53f;
	UNK_0xBAC27559(34, "base_pistol", &Var11);
	UNK_0xD291A820(34);

	//replaces zombie boom bait
	//unused topbreak? revolver using volcanic attributes
	Var12.f_20 = "THROWN_ZombieBoomBait";
	Var12.f_4 = 39;
	Var12.f_8 = 10;
	Var12.f_12 = 20;
	Var12.f_16 = 6;
	Var12.f_28 = "revolver_topbreak01x";//change 01x to 02x for always gold skin
	Var12.f_32 = "WEAPONS_PISTOL_VOLCANIC";//sound?
	Var12.f_36 = "WEAPONS_PISTOL_VOLCANIC";//sound?
	Var12.f_24 = "title_xplvl_20";//display name = Rustler
	Var12.f_64 = "PSTL_Volcanic";//icon
	Var12.f_68 = 500.0f;
	Var12.f_72 = "ptl";
	Var12.f_76 = "ptl_vol";
	Var12.f_80 = "pistol_vol";
	Var12.f_84 = "rifle_1892Win";
	Var12.f_88 = "rifle_1892Win";
	Var12.f_92 = 1.0f;
	Var12.f_96 = 35.0f;
	Var12.f_100 = 25.0f;
	Var12.f_104 = 1.0f;
	Var12.f_108 = 2.0f;
	Var12.f_112 = 0.2f;
	Var12.f_116 = 60.0f;
	Var12.f_120 = 1.0f;
	Var12.f_124 = 0.1f;
	Var12.f_128 = 0.3f;
	Var12.f_132 = "MUZZLE_FLASH1";
	Var12.f_136 = "RUMBLE_PISTOL_LOW";
	Var12.f_140 = "wrist_r_Attachment";
	Var12.f_144 = 0.8f;
	Var12.f_148 = 60.0f;
	Var12.f_152 = 0.8f;
	Var12.f_156 = 60.0f;
	Var12.f_160 = 23.0f;
	Var12.f_164 = 50.0f;
	Var12.f_168 = 0.25f;
	Var12.f_172 = 23.0f;
	Var12.f_176 = 50.0f;
	Var12.f_180 = 0.25f;
	Var12.f_184 = 0.0f;
	Var12.f_188 = 1.0f;
	Var12.f_192 = 0.0f;
	Var12.f_196 = "AIMER_BALLISTIC";
	Var12.f_200 = 1;
	Var12.f_204 = 0;
	Var12.f_208 = 0.5f;
	Var12.f_212 = 0.085f;
	Var12.f_216 = 1.0f;
	Var12.f_220 = 1.0f;
	Var12.f_224 = 1.0f;
	Var12.f_228 = 18.0f;
	Var12.f_232 = 18.0f;
	Var12.f_236 = 18.0f;
	Var12.f_240 = 18.0f;
	Var12.f_244 = 45.0f;
	Var12.f_248 = "";
	Var12.f_252 = 0;
	Var12.f_256 = 5.0f;
	Var12.f_260 = 20.0f;
	Var12.f_264 = 70.0f;
	Var12.f_268 = 8.0f;
	Var12.f_272 = 1.0f;
	Var12.f_276 = 4.0f;
	Var12.f_280 = 50.0f;
	Var12.f_284 = 1.0f;
	Var12.f_288 = 0;
	Var12.f_292 = 0.0f;
	Var12.f_296 = "Auto";
	Var12.f_300 = 0.5f;
	Var12.f_304 = 8.0f;
	Var12.f_308 = 1.0f;
	Var12.f_312 = 0.0f;
	Var12.f_316 = 1;
	Var12.f_320 = 1;
	Var12.f_324 = 19.0f;
	Var12.f_328 = 0.5f;
	Var12.f_332 = 1.2f;
	Var12.f_336 = 0.5f;
	Var12.f_340 = 8.0f;
	Var12.f_344 = 0.0f;
	Var12.f_348 = 1;
	Var12.f_40 = -1;
	Var12.f_44 = 0.43f;
	Var12.f_48 = 0.3f;
	Var12.f_52 = 0.5f;
	Var12.f_56 = 0.2f;
	Var12.f_60 = 0.53f;
	UNK_0xBAC27559(37, "base_pistol", &Var12);
	UNK_0xD291A820(37);
}

void main()
{
	while (true)
	{
		if (test == 1)
		{
			//This allows some cus weps to work without er bypass, and also allows er to spawn in inventory if you give yourself er
			//Remove these pointers if not on goty blus/bles ps3, and if not on a RGH using undead nightmare region free non goty
			if (GET_GAME_EDITION() == 10)*(int*)0x824B57B8 = 0x4E800020;
			if (GET_GAME_EDITION() == 26)*(int*)0x00091C4C = 0x4E800020;
			WAIT(1000);
			Test();
			UNK_0xF4641CF4(33, "TORCH_IDLE", 0.0f, 0.35f, -0.15f);
			UNK_0x0E4B7A33(32, 0);
			UNK_0x0E4B7A33(33, 0);
			UNK_0x0E4B7A33(34, 0);
			UNK_0x0E4B7A33(35, 0);
			UNK_0x0E4B7A33(36, 0);
			UNK_0x0E4B7A33(37, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 32, 0, 0, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 33, 0, 0, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 34, 0, 0, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 35, 0, 0, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 36, 0, 0, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 37, 0, 0, 0);
			_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 3, 1.0f, 0, 0);
			_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 16, 1.0f, 0, 0);
			_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 2, 2.0f, 0, 0);
			_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 6, 2.0f, 0, 0);
			_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 9, 2.0f, 0, 0);
			_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 10, 2.0f, 0, 0);
			print2("<green>Custom Weapons Given</green>", 3000);
			test = 2;
		}
		//we are looping them to never allow gold because these cus weps dont
		//have a proper way to be golden, so we want them as there normal texture
		SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 32, 0);
		SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 33, 0);
		SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 34, 0);
		SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 35, 0);
		SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 36, 0);
		SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 37, 0);
		WAIT(0);
	}
}
