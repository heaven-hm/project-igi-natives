#pragma once 
#include "../Common.hpp" 
#include "../Utils/Logger.hpp" 
#include "../CommonConst.hpp" 
#include "../Libs/json.hpp"
using json = nlohmann::json;

typedef uint32_t NativeHash;

namespace IGI {
	enum class HASH
	{
		ANIM_TRIGGER_PARSE = 0x0004EC070,
		ANIM_TRIGGER_LOAD = 0x004EC0C0,
		CONFIG_COMPILE = 0x004F0CF0,
		CONFIG_READ = 0x00405850,
		CONFIG_WRITE = 0x00405BD0,
		CUTSCENE_DELETE = 0x00415AB0,
		ERROR_SHOW = 0x004AF7B0,
		FRAMES_SET = 0x00402820,
		GAMEMATERIAL_LOAD = 0x00408350,
		RESET = 0x00403B70,
		GRAPH_OPEN = 0x004F9FF0,
		HUMANPLAYER_LOAD = 0x004137A0,
		INPUT_DISABLE = 0x004157D0,
		INPUT_ENABLE = 0x00415830,
		LOG_ADD = 0x004BBC30,
		LEVEL_LOAD = 0x004F0E10,
		LEVEL_QUIT = 0x00416550,
		LEVEL_RESTART = 0x00416FE0,
		LEVEL_START = 0x00415B30,
		MAGIC_OBJ_LOAD = 0x004C4930,
		MENU_MANAGER = 0x00418B00,
		MUSIC_DISABLE = 0x00415A60,
		MUSIC_ENABLE = 0x00415A10,
		MUSIC_SFX_VOLUME = 0x00495F30,
		MUSIC_VOLUME = 0x00495E70,
		MUSIC_UPDATE_VOLUME = 0x004158E0,
		PHYSICS_OBJ_TYPE_PARSE = 0x004EDFE0,
		PHYSICS_OBJ_LOAD = 0x004EE030,
		QHASH_INIT = 0x004B0D60,
		QHASH_VAL_SET = 0x004B0D40,
		QHASH_VAL_GET = 0x004B0DB0,
		QHASH_RESET = 0x004B0D90,
		QSCRIPT_COMPILE = 0x004B8410,
		QTASK_UPDATE = 0x004F0E90,
		QTASK_UPDATE_LIST = 0x00401B20,
		QSCRIPT_ASSEMBLE = 0x004BB270,
		QSCRIPT_PARSE = 0x004BBCB0,
		QSCRIPT_CLEANUP = 0x004B1AC0,
		QVM_READ = 0x004B85B0,
		QVM_CLEANUP = 0x004B83D0,
		QVM_LOAD = 0x004B80B0,
		RESOURCE_FLUSH = 0x004B63D0,
		RESOURCE_LOAD = 0x004B5F00,
		RESOURCE_UNLOAD = 0x004B6380,
		RESOURCE_PACK_UNPACK = 0x004B18B0,
		RESOURCE_UNPACK = 0x004B16D0,
		RESOURCE_IS_LOADED = 0x004B5B90,
		SCRIPT_INIT = 0x004F0E50,
		SCRIPT_SETSYMBOL_CXT = 0x004B8930,
		STATUS_MESSAGE_CLEAR = 0x00485AD0,
		STATUS_MESSAGE_SHOW = 0x00485970,
		SYMBOL_REMOVE = 0x004C0460,
		SYMBOL_CHECK = 0x004C0560,
		TASKTYPE_SET = 0x004B8810,
		WARNING_SHOW = 0x004AF810,
		WEAPON_CONFIG_READ = 0x004071E0,
		WEAPON_TYPE_OPEN = 0x00413B70,
		WEAPON_TOTAL = 0x00413BB0,
		WEAPON_GUN_PICKUP = 0x0045FFC0,
		WEAPON_AMMO_PICKUP = 0x0045FF80,
		HUMAN_HIT_DAMAGE = 0x00416D80,
		HUMAN_CAM_VIEW = 0x00463760,
		HUMAN_FIND_NEXT_CAMERA = 0x004828D0,
		MEMORY_ALLOC = 0x004B0C60,
		MEMORY_DEALLOC = 0x004B0BE0,
		MISSION_OPEN = 0x00484E60,
		FILE_OPEN = 0x004A5350,
		FILE_READ_WRITE = 0x004B1510,
		PLAYER_PROFILE_ACTIVE = 0x00406220,
		SOLDIER_EXECUTE = 0x0045C440,
		DEBUG_KEYS_ENABLE = 0x0041502,
		HUMAN_TASK_VIEW_RESET = 0x004659E0,//Unimplemented Hash.
		GAME_DATA_SYMBOL_LOAD = 0x004A53B3,//Unimplemented Hash.
		GAME_DATA_SYMBOL_REGISTER_BOOL8 = 0x004B7EE0,//Unimplemented Hash.
		GAME_DATA_SYMBOL_REGISTER_INT16 = 0x004B7E80,//Unimplemented Hash.
		GAME_DATA_SYMBOL_REGISTER_INT32 = 0x004B7FA0,//Unimplemented Hash.
		GAME_DATA_SYMBOL_REGISTER_REAL32 = 0x004B7FC0,//Unimplemented Hash.
		GAME_DATA_SYMBOL_REMOVE = 0x004B80A0,//Unimplemented Hash.
		LOADING_SCREEN_SHOW = 0x0048A440,//Unimplemented Hash.
		QTASK_HASH_TABLE = 0x004BAAC0,//Unimplemented Hash.

		// ─═══ DISCOVERED NATIVES (feature/natives-discovery) ─══════════════════
		// All 143 entries below were extracted from igi.exe's own script-command
		// registration code: every site pushes this exact address together with
		// its exact name string and calls the registrar GAME_DEFINE_OPTIONS
		// (0x004B8890 -> fcn.004BAAC0). Ground truth = IGI 1 machine code only;
		// igi2.pdb was NOT used for any address. Each address additionally
		// r2-verified as a real function start (prologue + size >= 55 bytes).
		// The first integer argument at each registration site encodes the
		// declared script parameter count (validated: Get*=>0/1, Set*=>1/2).
		// ── AI Actions (script AI task handlers) ──
		AI_ACTION_ACTIVATE = 0x0044D420,														// igi.exe pushes str."AIAction_Activate" @ site 0x0044CCFD; argc=3
		AI_ACTION_COMBAT = 0x0044D160,														// igi.exe pushes str."AIAction_Combat" @ site 0x0044CCC1; argc=1
		AI_ACTION_DEAD = 0x0044D260,														// igi.exe pushes str."AIAction_Dead" @ site 0x0044CCD4; argc=1
		AI_ACTION_FALL_FLAT = 0x0044D2C0,														// igi.exe pushes str."AIAction_FallFlat" @ site 0x0044CCE7; argc=2
		AI_ACTION_FIRE_AT_NODE = 0x0044D580,														// igi.exe pushes str."AIAction_FireAtNode" @ site 0x0044CD36; argc=5
		AI_ACTION_FIRE_AT_TASK = 0x0044D630,														// igi.exe pushes str."AIAction_FireAtTask" @ site 0x0044CD4C; argc=5
		AI_ACTION_IDLE = 0x0044DA80,														// igi.exe pushes str."AIAction_Idle" @ site 0x0044CDEA; argc=1
		AI_ACTION_KICK_GRENADE = 0x0044D960,														// igi.exe pushes str."AIAction_KickGrenade" @ site 0x0044CDC1; argc=1
		AI_ACTION_LOOK_AT_EVENT = 0x0044D870,														// igi.exe pushes str."AIAction_LookAtEvent" @ site 0x0044CD9B; argc=2
		AI_ACTION_MOVE_TO_EVENT = 0x0044D7D0,														// igi.exe pushes str."AIAction_MoveToEvent" @ site 0x0044CD85; argc=2
		AI_ACTION_PATROL = 0x0044D0E0,														// igi.exe pushes str."AIAction_Patrol" @ site 0x0044CCAE; argc=3
		AI_ACTION_PLAY_ANIMATION = 0x0044D6E0,														// igi.exe pushes str."AIAction_PlayAnimation" @ site 0x0044CD5F; argc=2
		AI_ACTION_PLAY_SOUND = 0x0044D750,														// igi.exe pushes str."AIAction_PlaySound" @ site 0x0044CD72; argc=3
		AI_ACTION_RUN_PANICKING = 0x0044DA00,														// igi.exe pushes str."AIAction_RunPanicking" @ site 0x0044CDD4; argc=2
		AI_ACTION_RUN_TO_NODE = 0x0044D510,														// igi.exe pushes str."AIAction_RunToNode" @ site 0x0044CD23; argc=2
		AI_ACTION_SET_COMBAT = 0x0044DAE0,														// igi.exe pushes str."AIAction_SetCombat" @ site 0x0044CDFD; argc=1
		AI_ACTION_STUNNED = 0x0044D8F0,														// igi.exe pushes str."AIAction_Stunned" @ site 0x0044CDAE; argc=2
		AI_ACTION_WALK_TO_NODE = 0x0044D4A0,														// igi.exe pushes str."AIAction_WalkToNode" @ site 0x0044CD10; argc=2
		// ── AI Functions (script AI property setters/getters) ──
		AI_FUNCTION_ADD_ANIMATION_ENTRY = 0x0044EBB0,														// igi.exe pushes str."AIFunction_AddAnimationEntry" @ site 0x0044D0B1; argc=2
		AI_FUNCTION_DEFAULT_HANDLER = 0x0044E060,														// igi.exe pushes str."AIFunction_DefaultHandler" @ site 0x0044CE10; argc=0
		AI_FUNCTION_REMOVE_ALARM_ACTIONS = 0x0044DBC0,														// igi.exe pushes str."AIFunction_RemoveAlarmActions" @ site 0x0044CE23; argc=0
		AI_FUNCTION_SEND_RESPONSE = 0x0044EE40,
		APP_CONTEXT_SET_DEBUGGED = 0x0048F1A0,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.0048F1A0: writes arg to global 0x5C8BF8, returns it (r2dec). Third-party corroborated by BlanknameES/IGIPatch (AppContext_SetDebugged).
		APP_CONTEXT_SET_DEBUGTEXT_STATE = 0x0048F1E0,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.0048F1E0: writes arg to global 0x5C8BF4 (r2dec). Corroborated by IGIPatch.
		APP_CONTEXT_SET_LIGHTMAPS_USED = 0x0048F240,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.0048F240: writes arg to global 0x5C8BE4 (r2dec). Corroborated by IGIPatch AppContext_SetLightmapsUsed.
		APP_CONTEXT_SET_TERRAIN_LIGHTMAPS_USED = 0x0048F260,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.0048F260: writes arg to global 0x5C8BE8 (r2dec). Corroborated by IGIPatch.
		APP_MAIN_PARSE_CMD_LINE_ARGS = 0x0048F360,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.0048F360: case-insensitive command-line parsing loops, calls 0x48F080/0x4A5A0C (r2dec). Corroborated by IGIPatch AppMain_ParseCmdLineArgs; called from WinMain path.
		CONFIG_GET_ACTIVE_GRAPHIC_OPTIONS = 0x00404590,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.00404590: returns profile record 0xBC2394 + 0xD14*[0xBC2384] (r2dec) - matches verified config layout. Corroborated by IGIPatch.
		DISPLAY_GET_ACTIVE_MODE = 0x00491CF0,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.00491CF0: returns display-mode struct ptr 0xC28B40 (r2dec). Corroborated by IGIPatch.
		DISPLAY_SET_BACKGROUND_COLOUR_FN = 0x00491E70,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.00491E70: masks 3 args to bytes, stores RGB to globals 0xBCADF0/F4/F8 (r2dec). Corroborated by IGIPatch.
		DISPLAY_SET_MODE = 0x00491A90,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.00491A90: full display-mode switch (compares mode fields vs 0xC28B44.., GetSystemMetrics, window resize; r2dec). Corroborated by IGIPatch Display_SetMode.
		PICTURE_GET_HEIGHT = 0x004B6E80,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.004B6E80: thunk -> 0x4B7E00 (bytes verified). Corroborated by IGIPatch Picture_GetHeight.
		PICTURE_GET_WIDTH = 0x004B6E70,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.004B6E70: thunk -> 0x4B7DF0 (bytes verified). Corroborated by IGIPatch Picture_GetWidth.
		QSPRITE_REGISTER_4AZ = 0x004B53B0,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.004B53B0: 14-arg sprite transform registration, fp scaling by 0x534AB0, writes 0xA84A50/58 (r2dec). Corroborated by IGIPatch QSprite_Register4AZ.
		TRANSCONTEXT_SET_ACTIVE_TRANS_CONTEXT = 0x00497E70,	// TRIPLE-VERIFIED (pass1 r2 function-start; pass2 r2dec semantics; pass3 IGIPatch cross-ref): igi.exe fcn.00497E70: copies 0x2A dwords of ctx into global 0xBCAAE0 and updates state at 0x6E5BB0/B4 (r2dec). Corroborated by IGIPatch TransContext_SetActiveTransContext/tActiveTransContext.
														// igi.exe pushes str."AIFunction_SendResponse" @ site 0x0044D0D7; argc=0
		AI_FUNCTION_SET_ALARM_ACCESS = 0x0044E330,														// igi.exe pushes str."AIFunction_SetAlarmAccess" @ site 0x0044CF4C; argc=1
		AI_FUNCTION_SET_ALARM_CONTROL_ID = 0x0044E2D0,														// igi.exe pushes str."AIFunction_SetAlarmControlID" @ site 0x0044CF39; argc=1
		AI_FUNCTION_SET_ALARM_TRIGGER_ID = 0x0044E270,														// igi.exe pushes str."AIFunction_SetAlarmTriggerID" @ site 0x0044CF26; argc=1
		AI_FUNCTION_SET_ALARM_VIEW_LENGTH = 0x0044DCD0,														// igi.exe pushes str."AIFunction_SetAlarmViewLength" @ site 0x0044CE4C; argc=1
		AI_FUNCTION_SET_ANIMATION_INTERVAL = 0x0044EAF0,														// igi.exe pushes str."AIFunction_SetAnimationInterval" @ site 0x0044D09B; argc=2
		AI_FUNCTION_SET_DEATH_ANIMATION = 0x0044E210,														// igi.exe pushes str."AIFunction_SetDeathAnimation" @ site 0x0044CF10; argc=1
		AI_FUNCTION_SET_EVENT_PRIORITY = 0x0044E0C0,														// igi.exe pushes str."AIFunction_SetEventPriority" @ site 0x0044CED7; argc=1
		AI_FUNCTION_SET_GUNNER_ID = 0x0044E390,														// igi.exe pushes str."AIFunction_SetGunnerID" @ site 0x0044CF5F; argc=1
		AI_FUNCTION_SET_INSTANT_DEATH = 0x0044E1B0,														// igi.exe pushes str."AIFunction_SetInstantDeath" @ site 0x0044CEFD; argc=1
		AI_FUNCTION_SET_INVULNERABILITY = 0x0044E150,														// igi.exe pushes str."AIFunction_SetInvulnerability" @ site 0x0044CEEA; argc=1
		AI_FUNCTION_SET_SCRIPT_INTEGER_VALUE = 0x0044E6D0,														// igi.exe pushes str."AIFunction_SetScriptIntegerValue" @ site 0x0044CF75; argc=2
		AI_FUNCTION_SET_SCRIPT_REAL_VALUE = 0x0044E790,														// igi.exe pushes str."AIFunction_SetScriptRealValue" @ site 0x0044CF88; argc=2
		AI_FUNCTION_SET_SECONDARY_ALARM_VIEW_LENGTH = 0x0044DE80,														// igi.exe pushes str."AIFunction_SetSecondaryAlarmViewLength" @ site 0x0044CE9B; argc=1
		AI_FUNCTION_SET_SECONDARY_VIEW_ALPHA = 0x0044DEE0,														// igi.exe pushes str."AIFunction_SetSecondaryViewAlpha" @ site 0x0044CEAE; argc=1
		AI_FUNCTION_SET_SECONDARY_VIEW_GAMMA = 0x0044DF40,														// igi.exe pushes str."AIFunction_SetSecondaryViewGamma" @ site 0x0044CEC1; argc=1
		AI_FUNCTION_SET_SECONDARY_VIEW_LENGTH = 0x0044DDF0,														// igi.exe pushes str."AIFunction_SetSecondaryViewLength" @ site 0x0044CE88; argc=1
		AI_FUNCTION_SET_VIEW_ALPHA = 0x0044DD30,														// igi.exe pushes str."AIFunction_SetViewAlpha" @ site 0x0044CE5F; argc=1
		AI_FUNCTION_SET_VIEW_GAMMA = 0x0044DD90,														// igi.exe pushes str."AIFunction_SetViewGamma" @ site 0x0044CE72; argc=1
		AI_FUNCTION_SET_VIEW_LENGTH = 0x0044DC40,														// igi.exe pushes str."AIFunction_SetViewLength" @ site 0x0044CE39; argc=1
		// ── Script resource definers ──
		CREATE_TERRAIN_TILE_MAP = 0x004C6760,														// igi.exe pushes str."CreateTerrainTileMap" @ site 0x004C6593; argc=unknown(variadic?)
		DEFINE_AMMO_TYPE = 0x0047CAD0,														// igi.exe pushes str."DefineAmmoType" @ site 0x0047CABE; argc=unknown(variadic?)
		DEFINE_GAME_MATERIAL = 0x00407F50,														// igi.exe pushes str."DefineGameMaterial" @ site 0x00407DCC; argc=unknown(variadic?)
		DEFINE_GRAPH = 0x004EAD20,														// igi.exe pushes str."DefineGraph" @ site 0x004E625B; argc=unknown(variadic?)
		DEFINE_GROUP = 0x004EBA90,														// igi.exe pushes str."DefineGroup" @ site 0x004E6235; argc=unknown(variadic?)
		DEFINE_HUMAN_PLAYER_AMMO_LIMIT = 0x004102D0,														// igi.exe pushes str."DefineHumanPlayerAmmoLimit" @ site 0x00410054; argc=unknown(variadic?)
		DEFINE_HUMAN_PLAYER_WEAPON_CATEGORY = 0x00410240,														// igi.exe pushes str."DefineHumanPlayerWeaponCategory" @ site 0x00410041; argc=unknown(variadic?)
		DEFINE_HUMAN_PLAYER_WEAPON_CYCLE = 0x004101C0,														// igi.exe pushes str."DefineHumanPlayerWeaponCycle" @ site 0x0041002E; argc=unknown(variadic?)
		DEFINE_MAGIC_OBJ = 0x004C4520,														// igi.exe pushes str."DefineMagicObj" @ site 0x004C35A4; argc=unknown(variadic?)
		DEFINE_MISSION = 0x00484F60,														// igi.exe pushes str."DefineMission" @ site 0x00484F3E; argc=unknown(variadic?)
		DEFINE_Q_MATERIAL = 0x00407E30,														// igi.exe pushes str."DefineQMaterial" @ site 0x00407DB9; argc=unknown(variadic?)
		DEFINE_SOUND = 0x004E8C60,														// igi.exe pushes str."DefineSound" @ site 0x004E6248; argc=unknown(variadic?)
		DEFINE_TRIGGER_ONCE = 0x004E9EC0,														// igi.exe pushes str."DefineTriggerOnce" @ site 0x004E626E; argc=unknown(variadic?)
		// ── Config / Player Profile / Options ──
		CONFIG_CREATE_NEW_PLAYER_PROFILE = 0x004050A0,														// igi.exe pushes str."Config_CreateNewPlayerProfile" @ site 0x00403191; argc=2
		CONFIG_DELETE_PLAYER_PROFILE = 0x00405400,														// igi.exe pushes str."Config_DeletePlayerProfile" @ site 0x004031A4; argc=1
		CONFIG_FILL_MISSION_PICTURE_BOX = 0x004056F0,														// igi.exe pushes str."Config_FillMissionPictureBox" @ site 0x004031F3; argc=0
		CONFIG_FILL_MISSION_SELECTION_BOX = 0x00405660,														// igi.exe pushes str."Config_FillMissionSelectionBox" @ site 0x004031E0; argc=0
		CONFIG_FILL_MISSION_TEXT_BOX = 0x00405760,														// igi.exe pushes str."Config_FillMissionTextBox" @ site 0x00403206; argc=0
		CONFIG_FILL_PLAYER_PROFILE_LIST_BOX = 0x00404FA0,														// igi.exe pushes str."Config_FillPlayerProfileListBox" @ site 0x00403155; argc=0
		CONFIG_FILL_RENDER_DEVICE_LIST_BOX = 0x004046A0,														// igi.exe pushes str."Config_FillRenderDeviceListBox" @ site 0x0040322F; argc=0
		CONFIG_FILL_SCREEN_RESOLUTION_LIST_BOX = 0x00404450,														// igi.exe pushes str."Config_FillScreenResolutionListBox" @ site 0x00403219; argc=1
		CONFIG_GAME_OPTIONS_INPUT_GET_BLOOD_ENABLED = 0x00404340,														// igi.exe pushes str."Config_GameOptionsInputGetBloodEnabled" @ site 0x00403268; argc=0
		CONFIG_GAME_OPTIONS_INPUT_GET_INVERT_MOUSE = 0x004041D0,														// igi.exe pushes str."Config_GameOptionsInputGetInvertMouse" @ site 0x00403242; argc=0
		CONFIG_GAME_OPTIONS_INPUT_GET_MOUSE_SENSITIVITY = 0x00404290,														// igi.exe pushes str."Config_GameOptionsInputGetMouseSensitivity" @ site 0x00403255; argc=0
		CONFIG_GAME_OPTIONS_INPUT_SET_BLOOD_ENABLED = 0x004042E0,														// igi.exe pushes str."Config_GameOptionsInputSetBloodEnabled" @ site 0x004032A4; argc=1
		CONFIG_GAME_OPTIONS_INPUT_SET_INVERT_MOUSE = 0x00404160,														// igi.exe pushes str."Config_GameOptionsInputSetInvertMouse" @ site 0x0040327E; argc=1
		CONFIG_GAME_OPTIONS_INPUT_SET_MOUSE_SENSITIVITY = 0x00404230,														// igi.exe pushes str."Config_GameOptionsInputSetMouseSensitivity" @ site 0x00403291; argc=1
		CONFIG_GET_ACTIVE_PLAYER_PROFILE_INDEX = 0x00405010,														// igi.exe pushes str."Config_GetActivePlayerProfileIndex" @ site 0x00403168; argc=0
		CONFIG_GET_CONTENT_CONTROL_PASSWORD = 0x00403C70,														// igi.exe pushes str."Config_GetContentControlPassword" @ site 0x004034E0; argc=0
		CONFIG_GET_NUMBER_OF_PLAYER_PROFILES = 0x004054F0,														// igi.exe pushes str."Config_GetNumberOfPlayerProfiles" @ site 0x004031CA; argc=1
		CONFIG_GRAPHIC_OPTIONS_GET_DEVICE = 0x00404710,														// igi.exe pushes str."Config_GraphicOptionsGetDevice" @ site 0x00403342; argc=0
		CONFIG_GRAPHIC_OPTIONS_GET_GAMMA = 0x00404910,														// igi.exe pushes str."Config_GraphicOptionsGetGamma" @ site 0x00403355; argc=0
		CONFIG_GRAPHIC_OPTIONS_GET_PERFORMANCE_FLAGS = 0x00404F60,														// igi.exe pushes str."Config_GraphicOptionsGetPerformanceFlags" @ site 0x0040336B; argc=0
		CONFIG_GRAPHIC_OPTIONS_GET_PERF_FLAGS_FROM_LEVEL = 0x004055C0,														// igi.exe pushes str."Config_GraphicOptionsGetPerfFlagsFromLevel" @ site 0x0040337E; argc=1
		CONFIG_GRAPHIC_OPTIONS_GET_PERF_LEVEL_FROM_FLAGS = 0x00405530,														// igi.exe pushes str."Config_GraphicOptionsGetPerfLevelFromFlags" @ site 0x00403391; argc=1
		CONFIG_GRAPHIC_OPTIONS_GET_RESOLUTION = 0x004045B0,														// igi.exe pushes str."Config_GraphicOptionsGetResolution" @ site 0x0040331C; argc=0
		CONFIG_GRAPHIC_OPTIONS_GET_TRANSPARENCY = 0x004049C0,														// igi.exe pushes str."Config_GraphicOptionsGetTransparency" @ site 0x0040332F; argc=0
		CONFIG_GRAPHIC_OPTIONS_NUM_PERF_LEVELS = 0x00405620,														// igi.exe pushes str."Config_GraphicOptionsNumPerfLevels" @ site 0x004033A4; argc=1
		CONFIG_GRAPHIC_OPTIONS_SET_DEVICE = 0x004047F0,														// igi.exe pushes str."Config_GraphicOptionsSetDevice" @ site 0x004032E0; argc=1
		CONFIG_GRAPHIC_OPTIONS_SET_PERFORMANCE_FLAGS = 0x00404F00,														// igi.exe pushes str."Config_GraphicOptionsSetPerformanceFlags" @ site 0x00403306; argc=1
		CONFIG_GRAPHIC_OPTIONS_SET_RESOLUTION = 0x00404510,														// igi.exe pushes str."Config_GraphicOptionsSetResolution" @ site 0x004032B7; argc=1
		CONFIG_GRAPHIC_OPTIONS_SET_TRANSPARENCY = 0x00404960,														// igi.exe pushes str."Config_GraphicOptionsSetTransparency" @ site 0x004032CD; argc=1
		CONFIG_IS_CONTENT_CONTROL_PASSWORD_ENABLED = 0x00403D90,														// igi.exe pushes str."Config_IsContentControlPasswordEnabled" @ site 0x00403509; argc=0
		CONFIG_IS_GERMANY = 0x00403B30,														// igi.exe pushes str."Config_IsGermany" @ site 0x0040351C; argc=0
		CONFIG_PLAYER_GET_ACTIVE_MISSION = 0x004057D0,														// igi.exe pushes str."Config_PlayerGetActiveMission" @ site 0x004031B7; argc=1
		CONFIG_SET_ACTIVE_PLAYER_PROFILE_INDEX = 0x00405050,														// igi.exe pushes str."Config_SetActivePlayerProfileIndex" @ site 0x0040317B; argc=1
		CONFIG_SET_CONTENT_CONTROL_PASSWORD = 0x00403C10,														// igi.exe pushes str."Config_SetContentControlPassword" @ site 0x004034CD; argc=1
		CONFIG_SOUND_OPTIONS_GET_MUSIC = 0x00404BF0,														// igi.exe pushes str."Config_SoundOptionsGetMusic" @ site 0x0040346B; argc=0
		CONFIG_SOUND_OPTIONS_GET_MUSIC_VOLUME = 0x00404CA0,														// igi.exe pushes str."Config_SoundOptionsGetMusicVolume" @ site 0x0040347E; argc=0
		CONFIG_SOUND_OPTIONS_GET_REVERSE_STEREO = 0x00404EB0,														// igi.exe pushes str."Config_SoundOptionsGetReverseStereo" @ site 0x004034BA; argc=0
		CONFIG_SOUND_OPTIONS_GET_SOUNDS_EFFECTS = 0x00404A90,														// igi.exe pushes str."Config_SoundOptionsGetSoundsEffects" @ site 0x00403442; argc=0
		CONFIG_SOUND_OPTIONS_GET_SOUNDS_EFFECTS_VOLUME = 0x00404B40,														// igi.exe pushes str."Config_SoundOptionsGetSoundsEffectsVolume" @ site 0x00403458; argc=0
		CONFIG_SOUND_OPTIONS_GET_SPEECH = 0x00404D50,														// igi.exe pushes str."Config_SoundOptionsGetSpeech" @ site 0x00403491; argc=0
		CONFIG_SOUND_OPTIONS_GET_SPEECH_VOLUME = 0x00404E00,														// igi.exe pushes str."Config_SoundOptionsGetSpeechVolume" @ site 0x004034A7; argc=0
		CONFIG_SOUND_OPTIONS_SET_MUSIC = 0x00404B90,														// igi.exe pushes str."Config_SoundOptionsSetMusic" @ site 0x004033E0; argc=1
		CONFIG_SOUND_OPTIONS_SET_MUSIC_VOLUME = 0x00404C40,														// igi.exe pushes str."Config_SoundOptionsSetMusicVolume" @ site 0x004033F3; argc=1
		CONFIG_SOUND_OPTIONS_SET_REVERSE_STEREO = 0x00404E50,														// igi.exe pushes str."Config_SoundOptionsSetReverseStereo" @ site 0x0040342F; argc=1
		CONFIG_SOUND_OPTIONS_SET_SOUNDS_EFFECTS = 0x00404A10,														// igi.exe pushes str."Config_SoundOptionsSetSoundsEffects" @ site 0x004033BA; argc=1
		CONFIG_SOUND_OPTIONS_SET_SOUNDS_EFFECTS_VOLUME = 0x00404AE0,														// igi.exe pushes str."Config_SoundOptionsSetSoundsEffectsVolume" @ site 0x004033CD; argc=1
		CONFIG_SOUND_OPTIONS_SET_SPEECH = 0x00404CF0,														// igi.exe pushes str."Config_SoundOptionsSetSpeech" @ site 0x00403409; argc=1
		CONFIG_SOUND_OPTIONS_SET_SPEECH_VOLUME = 0x00404DA0,														// igi.exe pushes str."Config_SoundOptionsSetSpeechVolume" @ site 0x0040341C; argc=1
		CONFIG_VERIFY_CONTENT_CONTROL_PASSWORD = 0x00403CC0,														// igi.exe pushes str."Config_VerifyContentControlPassword" @ site 0x004034F6; argc=1
		// ── Game Options accessors (GO*) ──
		GO_ACTIVE_MISSION = 0x00403750,														// igi.exe pushes str."GOActiveMission" @ site 0x0040312C; argc=1
		GO_CONTENT_CONTROL_PW = 0x00403C10,														// igi.exe pushes str."GOContentControlPW" @ site 0x00403142; argc=1
		GO_GAME_DIFF = 0x00403AC0,														// igi.exe pushes str."GOGameDiff" @ site 0x004030B7; argc=1
		GO_GAME_LANG = 0x00403A00,														// igi.exe pushes str."GOGameLang" @ site 0x004030A4; argc=1
		GO_GFX_DEVICE = 0x00404010,														// igi.exe pushes str."GOGfxDevice" @ site 0x0040307B; argc=1
		GO_GFX_DISP = 0x00403950,														// igi.exe pushes str."GOGfxDisp" @ site 0x00403068; argc=3
		GO_GFX_GAMMA = 0x00404080,														// igi.exe pushes str."GOGfxGamma" @ site 0x0040308E; argc=1
		GO_GFX_PERFORMANCE = 0x004040F0,														// igi.exe pushes str."GOGfxPerformance" @ site 0x00403119; argc=1
		GO_IN_MOU_INV = 0x00403870,														// igi.exe pushes str."GOInMouInv" @ site 0x0040303F; argc=1
		GO_IN_MOU_SENS = 0x004038E0,														// igi.exe pushes str."GOInMouSens" @ site 0x00403055; argc=1
		GO_IN_REMAP = 0x004037C0,														// igi.exe pushes str."GOInRemap" @ site 0x0040302C; argc=3
		GO_IS_BLOOD = 0x00403DF0,														// igi.exe pushes str."GOIsBlood" @ site 0x004030CA; argc=1
		GO_PLAYER = 0x004036B0,														// igi.exe pushes str."GOPlayer" @ site 0x00403019; argc=1
		GO_SOUND_FX = 0x00403F80,														// igi.exe pushes str."GOSoundFX" @ site 0x00403106; argc=2
		GO_SOUND_MUSIC = 0x00403EF0,														// igi.exe pushes str."GOSoundMusic" @ site 0x004030F3; argc=2
		GO_SOUND_SPEECH = 0x00403E60,														// igi.exe pushes str."GOSoundSpeech" @ site 0x004030DD; argc=2
		// ── Game flow ──
		GAME_SET_MISSION = 0x00415890,														// igi.exe pushes str."Game_SetMission" @ site 0x004156ED; argc=1
		GAME_SET_MUSIC_VOLUME = 0x00415950,														// igi.exe pushes str."Game_SetMusicVolume" @ site 0x0041573C; argc=1
		GAME_SET_SFX_VOLUME = 0x004159B0,														// igi.exe pushes str."Game_SetSFXVolume" @ site 0x0041574F; argc=1
		// ── Menu Manager ──
		MENU_MANAGER_ACTIVATE_POPUP_SCREEN = 0x00417900,														// igi.exe pushes str."MenuManager_ActivatePopupScreen" @ site 0x004172E6; argc=1
		MENU_MANAGER_DEACTIVATE_POPU_SCREEN = 0x00417960,														// igi.exe pushes str."MenuManager_DeactivatePopuScreen" @ site 0x004172F9; argc=None
		MENU_MANAGER_FORCE_UPDATE_WINDOW = 0x00417880,														// igi.exe pushes str."MenuManager_ForceUpdateWindow" @ site 0x004172D4; argc=1
		MENU_MANAGER_LEAVE_MENUS = 0x00417790,														// igi.exe pushes str."MenuManager_LeaveMenus" @ site 0x00417289; argc=2
		MENU_MANAGER_POP_SCREEN = 0x00417710,														// igi.exe pushes str."MenuManager_PopScreen" @ site 0x004172C2; argc=1
		MENU_MANAGER_PUSH_SCREEN = 0x00417690,														// igi.exe pushes str."MenuManager_PushScreen" @ site 0x004172AD; argc=1
		MENU_MANAGER_REQUEST_SCREEN = 0x004174A0,														// igi.exe pushes str."MenuManager_RequestScreen" @ site 0x00417277; argc=2
		MENU_MANAGER_SET_ENABLED = 0x004179B0,														// igi.exe pushes str."MenuManager_SetEnabled" @ site 0x0041730E; argc=1
		MENU_MANAGER_SET_LANGUAGE = 0x00417810,														// igi.exe pushes str."MenuManager_SetLanguage" @ site 0x0041729B; argc=1
		// ── Level Flow ──
		LEVEL_FLOW_GET_BREAK_CUT_SCENE_KEY = 0x00488E00,														// igi.exe pushes str."LevelFlow_GetBreakCutSceneKey" @ site 0x00488DBF; argc=0
		LEVEL_FLOW_IS_COUNTRY_USA = 0x00488E90,														// igi.exe pushes str."LevelFlow_IsCountryUSA" @ site 0x00488DE8; argc=0
		LEVEL_FLOW_LEVEL_FAILED = 0x00488E50,														// igi.exe pushes str."LevelFlow_LevelFailed" @ site 0x00488DD2; argc=0
		// ── Movie Subtitles ──
		MOVIE_SUBTITLE_REGISTER_FONT = 0x004151E0,														// igi.exe pushes str."MovieSubtitle_RegisterFont" @ site 0x00415182; argc=0
		MOVIE_SUBTITLE_REGISTER_TEXT = 0x00415260,														// igi.exe pushes str."MovieSubtitle_RegisterText" @ site 0x00415194; argc=0
		// ── Controls Menu ──
		CONTROLS_MENU_CONVERT_FLOAT_FROM_OFFSET = 0x004231E0,														// igi.exe pushes str."ControlsMenu_ConvertFloatFromOffset" @ site 0x004231BC; argc=1
		CONTROLS_MENU_CONVERT_OFFSET_FROM_FLOAT = 0x00423240,														// igi.exe pushes str."ControlsMenu_ConvertOffsetFromFloat" @ site 0x004231CF; argc=1
		// ── Script Tasks ──
		TASK_DECLARE_PARAMETERS = 0x004F0740,														// igi.exe pushes str."Task_DeclareParameters" @ site 0x004EF7B1; argc=unknown(variadic?)
		TASK_NEW = 0x004F0780,														// igi.exe pushes str."Task_New" @ site 0x004EF79F; argc=unknown(variadic?)
		// ── Script / Misc ──
		BREAK_SCRIPT = 0x004B8C10,														// igi.exe pushes str."BreakScript" @ site 0x004B8BC5; argc=None
		FLOW_REQUEST_EVENT = 0x00402780,														// igi.exe pushes str."Flow_RequestEvent" @ site 0x0040205D; argc=1
		SCRIPT_SET_WARNING_LEVEL = 0x004B8C60,														// igi.exe pushes str."_Script_SetWarningLevel" @ site 0x004B8BB1; argc=1
		// ─── SECOND-PASS DISCOVERIES (registrars 0x004B88C0 / 0x004B88F0) ───
		// Same evidence standard as above: igi.exe pushes each address with its
		// exact name string into secondary script-command registrars 0x004B88C0
		// (AI getter functions) and 0x004B88F0 (mixed), both thin wrappers over
		// the same registration core as GAME_DEFINE_OPTIONS. r2-verified prologues.
		AI_FUNCTION_GET_ALARM_TRIGGER_ID = 0x0044E3F0,			// igi.exe pushes str."AIFunction_GetAlarmTriggerID" @ site 0x0044cf9b via registrar 0x4b88c0; argc=0
		AI_FUNCTION_GET_ALARM_CONTROL_ID = 0x0044E430,			// igi.exe pushes str."AIFunction_GetAlarmControlID" @ site 0x0044cfae via registrar 0x4b88c0; argc=0
		AI_FUNCTION_GET_ALARM_ACCESS = 0x0044E470,			// igi.exe pushes str."AIFunction_GetAlarmAccess" @ site 0x0044cfc4 via registrar 0x4b88c0; argc=0
		AI_FUNCTION_GET_GUNNER_ID = 0x0044E4B0,			// igi.exe pushes str."AIFunction_GetGunnerID" @ site 0x0044cfd7 via registrar 0x4b88c0; argc=0
		AI_FUNCTION_GET_ALARM_CONTROL_STATUS = 0x0044E4F0,			// igi.exe pushes str."AIFunction_GetAlarmControlStatus" @ site 0x0044cfea via registrar 0x4b88c0; argc=0
		AI_FUNCTION_GET_GUNNER_STATUS = 0x0044E5E0,			// igi.exe pushes str."AIFunction_GetGunnerStatus" @ site 0x0044cffd via registrar 0x4b88c0; argc=0
		AI_FUNCTION_GET_SCRIPT_INTEGER_VALUE = 0x0044E740,			// igi.exe pushes str."AIFunction_GetScriptIntegerValue" @ site 0x0044d013 via registrar 0x4b88c0; argc=1
		AI_FUNCTION_GET_CURRENT_EVENT_TYPE = 0x0044DFA0,			// igi.exe pushes str."AIFunction_GetCurrentEventType" @ site 0x0044d026 via registrar 0x4b88c0; argc=0
		AI_FUNCTION_IS_EVENT_BEHIND = 0x0044E860,			// igi.exe pushes str."AIFunction_IsEventBehind" @ site 0x0044d039 via registrar 0x4b88c0; argc=0
		AI_FUNCTION_GET_ANIMATION_TO_PLAY = 0x0044ECB0,			// igi.exe pushes str."AIFunction_GetAnimationToPlay" @ site 0x0044d0c4 via registrar 0x4b88c0; argc=0
		CONFIG_GRAPHIC_OPTIONS_SET_GAMMA = 0x004048B0,			// igi.exe pushes str."Config_GraphicOptionsSetGamma" @ site 0x004032f3 via registrar 0x4b88f0; argc=1
		AI_FUNCTION_GET_SCRIPT_REAL_VALUE = 0x0044E800,			// igi.exe pushes str."AIFunction_GetScriptRealValue" @ site 0x0044d04c via registrar 0x4b88f0; argc=1
		AI_FUNCTION_GET_RANDOM_VALUE = 0x0044E000,			// igi.exe pushes str."AIFunction_GetRandomValue" @ site 0x0044d062 via registrar 0x4b88f0; argc=1
		AI_FUNCTION_GET_EVENT_DISTANCE = 0x0044E930,			// igi.exe pushes str."AIFunction_GetEventDistance" @ site 0x0044d075 via registrar 0x4b88f0; argc=0
		AI_FUNCTION_GET_ALARM_TRIGGER_DISTANCE = 0x0044E9B0,			// igi.exe pushes str."AIFunction_GetAlarmTriggerDistance" @ site 0x0044d088 via registrar 0x4b88f0; argc=0
	};

	class Natives {
	private:
		//Structure to hold Native info. 
		struct NativeSig {
			uint32_t address;//Address (Hash) of native. 
			string name; //Name (Symbol) of native. 
			string signature; //Signature of native. 
			string note; //Note (Comment) for method.
		};
		//Natives sig list.
		std::vector<NativeSig> native_sig;

		friend bool LoadNativesFile(string);
		friend void to_json(json&, const NativeSig&);
		friend void from_json(const json&, NativeSig&);
		void InitNativesSignatures();
		json ReadJsonFile(std::string);
		void WriteJSON(string, json);
		void GenerateNativesFile(string);

	public:
		Natives();
		Natives(const Natives&) = default;
		Natives(Natives&&) = default;
		~Natives();

		string FindNativeName(uint32_t);
		NativeHash FindNativeAddress(string);
		string FindNativeSignature(uint32_t);
		string FindNativeSignature(string);
		string FindNativeNote(string);
		string FindNativeNote(uint32_t);
		int GetNativesCount();
	};
	inline Natives* g_Natives{};
}