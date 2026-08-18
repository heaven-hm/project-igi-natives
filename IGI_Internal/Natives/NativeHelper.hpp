#pragma once 
#include <cmath>
#include "Natives.hpp" 
#include "NativeCaller.hpp" 
#include "../Camera/Camera.hpp"
#include "../Player/HumanSoldier.hpp"
#include "../GameResources/GameResource.hpp"
#include "../Graphs/Graph.hpp"

#define NATIVE_DECL __declspec(noinline) inline 

namespace IGI {

	// =========================================================================
	// Native Typed Function Pointer Signatures
	// =========================================================================
	namespace Signatures {
		// MISC Signatures
		using FramesSet_t = void(__cdecl*)(int frames);
		using CutsceneDelete_t = void(__cdecl*)(const char* name);
		using GameMaterialLoad_t = void(__cdecl*)();
		using MagicObjectLoad_t = void(__cdecl*)(const char* obj);
		using AnimTriggerLoad_t = void(__cdecl*)(const char* trigger);
		using AnimTriggerParse_t = void(__cdecl*)(uint32_t* path);
		using PhysicsObjectLoad_t = void(__cdecl*)(const char* obj);
		using PhysicsObjTypeParse_t = void(__cdecl*)(const char* cfg_file);
		using RigidDyncubeObjRead_t = void(__cdecl*)(uint32_t* cfg_file);
		using LogAdd_t = void(__cdecl*)(const char* log_msg);
		using StatusMessageClear_t = void(__cdecl*)(const char* buf);
		using StatusMessageShow_t = void(__cdecl*)(int status_ptr, const char* status_msg, const char* status_sprite, uint8_t* status_byte);
		using WarningShow_t = void(__cdecl*)(const char* warn_msg);
		using ErrorShow_t = void(__cdecl*)(const char* err_msg);
		using LoadingScreenShow_t = void(__cdecl*)(int loading_type);

		// Memory Signatures
		using MemoryAlloc_t = address_t(__cdecl*)(int num, int size);
		using MemoryDealloc_t = void(__cdecl*)();

		// Player Signatures
		using PlayerProfileActive_t = char*(__cdecl*)();

		// Config Signatures
		using ConfigRead_t = void(__cdecl*)(const char* config_file);
		using ConfigWrite_t = void(__cdecl*)(const char* config_file);
		using WeaponConfigRead_t = void(__cdecl*)(int p1, const char* config_file);
		using ConfigCompile_t = int(__cdecl*)(int p1, const char* cfg_file, int p3);

		// Game Signatures
		using InputEnable_t = void(__cdecl*)(const char* buf);
		using InputDisable_t = void(__cdecl*)(const char* buf);
		using MenuManager_t = int*(__cdecl*)(int menu_data, const char* menu_str, char p3, char p4, int p5);
		using DefineOptions_t = void(__cdecl*)(int** option_str, int option_func_addr, int opt1, int opt2);
		using DataSymbolLoad_t = int(__cdecl*)(char* sym_buf, const char* sym_path, const char* sym_name);
		using DataSymbolRemove_t = void(__cdecl*)(char* sym_buf);
		using DataSymbolRegisterBool8_t = void(__cdecl*)(int** sym_buf, int sym_addr);
		using DataSymbolRegisterInt16_t = void(__cdecl*)(int** sym_buf, int sym_addr);
		using DataSymbolRegisterInt32_t = void(__cdecl*)(int** sym_buf, int sym_addr);
		using DataSymbolRegisterReal32_t = void(__cdecl*)(int** sym_buf, int sym_addr);

		// Level Signatures
		using LevelRestart_t = void(__cdecl*)();
		using LevelLoad_t = void(__cdecl*)(int level_data, int param);
		using LevelStart_t = void(__cdecl*)(int p1);
		using LevelQuit_t = void(__cdecl*)();

		// Human / Weapon Signatures
		using PlayerXpHit_t = uint8_t(__cdecl*)();
		using HumanTaskViewReset_t = void(__cdecl*)(int human_player);
		using HumanPlayerLoad_t = void(__cdecl*)();
		using HumanHitDamage_t = uint32_t(__cdecl*)();
		using HumanCamView_t = void(__cdecl*)(int human_addr, int cam_type);
		using HumanFindNextCamera_t = void(__cdecl*)(int human_addr);
		using WeaponTypeOpen_t = void(__cdecl*)();
		using AmmoTypeOpen_t = void(__cdecl*)();
		using WeaponTotal_t = int(__cdecl*)();
		using WeaponGunPickup_t = void(__cdecl*)(int gun_ptr, int pickup_ptr);
		using WeaponAmmoPickup_t = void(__cdecl*)(int gun_ptr, int pickup_ptr);

		// Resource / Graph / Script Signatures
		using ResourceIsLoaded_t = bool(__cdecl*)(const char* resource_file, int* out_ptr);
		using ResourceLoad_t = int*(__cdecl*)(const char* resource_file, char** buffer);
		using ResourceUnload_t = void(__cdecl*)(const char* resource_file);
		using ResourceFlush_t = void(__cdecl*)(int resource_addr);
		using ResourcePackUnpack_t = int(__cdecl*)(const char* resource_file, char** buffer);
		using ResourceUnpack_t = void(__cdecl*)(int* res_ptr, int res_addr, int res_size);
		using GraphOpen_t = void(__cdecl*)(uint32_t level, const char* graph_str);
		using QScriptCompile_t = void(__cdecl*)(const char* qsc_file);
		using QScriptParse_t = int(__cdecl*)(const char* qas_file, int mem_addr);
		using QScriptAssemble_t = int(__cdecl*)(const char* qvm_file, const char* qas_file);
		using QScriptCleanup_t = void(__cdecl*)(const char* q_file);
		using ScriptInit_t = void(__cdecl*)(const char* file_name, int p2, int p3, int p4);
		using TaskTypeSet_t = void(__cdecl*)(int** task_str, int task_id);
		using SymbolRemove_t = void(__cdecl*)(int* p1, int* symbol_name);
		using SymbolCheck_t = int*(__cdecl*)(int* p1, int** symbol_name, int* p3);
		using ScriptBufInit_t = void(__cdecl*)(int* buff_arr1, int buff_arr2, int buff, int buff_size);
		using SoundLoad_t = void(__cdecl*)(const char* sound_dir);

		// AI Actions (0x44CCA0)
		using AIAction_Patrol_t = void(__cdecl*)(int p1, int p2, int p3);
		using AIAction_Combat_t = void(__cdecl*)(int p1);
		using AIAction_Dead_t = void(__cdecl*)(int p1);
		using AIAction_FallFlat_t = void(__cdecl*)(int p1, int p2);
		using AIAction_Activate_t = void(__cdecl*)(int p1, int p2, int p3);
		using AIAction_WalkToNode_t = void(__cdecl*)(int p1, int p2);
		using AIAction_RunToNode_t = void(__cdecl*)(int p1, int p2);
		using AIAction_FireAtNode_t = void(__cdecl*)(int p1, int p2, int p3, int p4, int p5);
		using AIAction_FireAtTask_t = void(__cdecl*)(int p1, int p2, int p3, int p4, int p5);
		using AIAction_PlayAnimation_t = void(__cdecl*)(int p1, int p2);
		using AIAction_PlaySound_t = void(__cdecl*)(const char* sound_def, int p2, int p3);
		using AIAction_MoveToEvent_t = void(__cdecl*)(int p1, int p2);
		using AIAction_LookAtEvent_t = void(__cdecl*)(int p1, int p2);
		using AIAction_Stunned_t = void(__cdecl*)(int p1, int p2);
		using AIAction_KickGrenade_t = void(__cdecl*)(int p1);
		using AIAction_RunPanicking_t = void(__cdecl*)(int p1, int p2);
		using AIAction_Idle_t = void(__cdecl*)(int p1);
		using AIAction_SetCombat_t = void(__cdecl*)(int p1);

		// AI Functions
		using AIFunction_DefaultHandler_t = void(__cdecl*)();
		using AIFunction_RemoveAlarmActions_t = void(__cdecl*)();
		using AIFunction_SetViewLength_t = void(__cdecl*)(float len);
		using AIFunction_SetAlarmViewLength_t = void(__cdecl*)(float len);
		using AIFunction_SetViewAlpha_t = void(__cdecl*)(float alpha);
		using AIFunction_SetViewGamma_t = void(__cdecl*)(float gamma);
		using AIFunction_SetSecondaryViewLength_t = void(__cdecl*)(float len);
		using AIFunction_SetSecondaryAlarmViewLength_t = void(__cdecl*)(float len);
		using AIFunction_SetSecondaryViewAlpha_t = void(__cdecl*)(float alpha);
		using AIFunction_SetSecondaryViewGamma_t = void(__cdecl*)(float gamma);
		using AIFunction_SetEventPriority_t = void(__cdecl*)(int prio);
		using AIFunction_SetInvulnerability_t = void(__cdecl*)(int state);
		using AIFunction_SetInstantDeath_t = void(__cdecl*)(int state);
		using AIFunction_SetDeathAnimation_t = void(__cdecl*)(int anim);
		using AIFunction_SetAlarmTriggerID_t = void(__cdecl*)(int id);
		using AIFunction_SetAlarmControlID_t = void(__cdecl*)(int id);
		using AIFunction_SetAlarmAccess_t = void(__cdecl*)(int access);
		using AIFunction_SetGunnerID_t = void(__cdecl*)(int id);
		using AIFunction_SetScriptIntegerValue_t = void(__cdecl*)(int idx, int val);
		using AIFunction_SetScriptRealValue_t = void(__cdecl*)(int idx, float val);
		using AIFunction_GetAlarmTriggerID_t = int(__cdecl*)();
		using AIFunction_GetAlarmControlID_t = int(__cdecl*)();
		using AIFunction_GetAlarmAccess_t = int(__cdecl*)();
		using AIFunction_GetGunnerID_t = int(__cdecl*)();
		using AIFunction_GetAlarmControlStatus_t = int(__cdecl*)();
		using AIFunction_GetGunnerStatus_t = int(__cdecl*)();
		using AIFunction_GetScriptIntegerValue_t = int(__cdecl*)(int idx);
		using AIFunction_GetCurrentEventType_t = int(__cdecl*)();
		using AIFunction_IsEventBehind_t = int(__cdecl*)();
		using AIFunction_GetScriptRealValue_t = float(__cdecl*)(int idx);
		using AIFunction_GetRandomValue_t = float(__cdecl*)(float max_val);
		using AIFunction_GetEventDistance_t = float(__cdecl*)();
		using AIFunction_GetAlarmTriggerDistance_t = float(__cdecl*)();
		using AIFunction_SetAnimationInterval_t = void(__cdecl*)(int p1, int p2);
		using AIFunction_AddAnimationEntry_t = void(__cdecl*)(int p1, int p2);
		using AIFunction_GetAnimationToPlay_t = int(__cdecl*)();
		using AIFunction_SendResponse_t = void(__cdecl*)();

		// IGI Enhancer Patch Signatures (verified from D:\IGI1\igi.exe)
		using AppRun_t = int(__cdecl*)(void*);                          // 0x00405850 — main tick loop
		using D3DEnumDisplayModes_t = int(__cdecl*)(int);               // 0x0049B4B0 — resolution enumerator
		using BinocularsDraw_t = void(__cdecl*)(void*);                 // 0x00471480 — binocular overlay renderer
		using GunFire_t = void(__cdecl*)(void*, void*);                 // 0x00478BA0 — weapon fire gate
		using GunBulletTrace_t = void(__cdecl*)(void*);                 // 0x0047A260 — raycast surface collision
		using GunRecoilApply_t = void(__cdecl*)(void*, int);            // 0x0047C610 — recoil accumulation
		using HumanSetParent_t = void(__cdecl*)(void*, void*);          // 0x00463310 — player→platform bind
		using WeaponStateUpdate_t = void(__cdecl*)(void*);              // 0x00411000 — per-tick weapon state
		using MusicSfxVolSet_t = void(__cdecl*)(float);                 // 0x00495F30 — SFX master volume
		using MusicVolSet_t = void(__cdecl*)(float);                    // 0x00495E70 — music master volume
	}

	namespace MISC {
		/// <summary>Set game render frame rate limit (0x00407130).</summary>
		NATIVE_DECL void FRAMES_SET(int frames) { NATIVE_INVOKE<Void>((Void)HASH::FRAMES_SET, frames); }
		/// <summary>Delete active cutscene buffer (0x00407880).</summary>
		NATIVE_DECL void CUTSCENE_DELETE() { NATIVE_INVOKE<Void>((Void)HASH::CUTSCENE_DELETE, (const char*)local_buf); }
		/// <summary>Load game materials (0x00407980).</summary>
		NATIVE_DECL void GAMEMATERIAL_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::GAMEMATERIAL_LOAD); }
		/// <summary>Load magic objects definition (0x004079D0).</summary>
		NATIVE_DECL void MAGIC_OBJECT_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::MAGIC_OBJ_LOAD, GAME_MAGIC_OBJ); }
		/// <summary>Load animation trigger definitions (0x00407A80).</summary>
		NATIVE_DECL void ANIM_TRIGGER_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::ANIM_TRIGGER_LOAD, GAME_ANIM_TRIGGER); }
		/// <summary>Parse animation triggers (0x00407AE0).</summary>
		NATIVE_DECL void ANIM_TRIGGER_PARSE(uint32_t* path) { NATIVE_INVOKE<Void>((Void)HASH::ANIM_TRIGGER_PARSE, path); }
		/// <summary>Load physics objects (0x00407BC0).</summary>
		NATIVE_DECL void PHYSICS_OBJECT_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::PHYSICS_OBJ_LOAD, GAME_PHYSICS_OBJ); }
		/// <summary>Parse physics object configuration file (0x00407C20).</summary>
		NATIVE_DECL void PHYSICS_OBJ_TYPE_PARSE(const char* cfg_file) { NATIVE_INVOKE<Void>((Void)HASH::PHYSICS_OBJ_TYPE_PARSE, cfg_file); }
		NATIVE_DECL void PHYSICS_OBJ_TYPE_PARSE(string cfg_file) { PHYSICS_OBJ_TYPE_PARSE(cfg_file.c_str()); }
		/// <summary>Read dynamic rigid cube object definition (0x00408540).</summary>
		NATIVE_DECL void RIGID_DYNCUBE_OBJ_READ(uint32_t* cfg_file) { NATIVE_INVOKE<Void>((Void)HASH::RIGID_DYNCUBE_OBJ_READ, cfg_file); }
		/// <summary>Add message to internal game log (0x00404C70).</summary>
		NATIVE_DECL void LOG_ADD(const char* log_msg) { NATIVE_INVOKE<Void>((Void)HASH::LOG_ADD, log_msg); }
		/// <summary>Clear HUD status message (0x00407760).</summary>
		NATIVE_DECL void STATUS_MESSAGE_CLEAR() { NATIVE_INVOKE<Void>((Void)HASH::STATUS_MESSAGE_CLEAR, (const char*)local_buf); }
		/// <summary>Show custom HUD status message (0x00424D00).</summary>
		NATIVE_DECL void STATUS_MESSAGE_SHOW(const char* status_msg, const char* status_sprite) {
			if (!status_msg) return;
			const int* pStatus = (const int*)0x00A758AC;
			if (!pStatus || !*pStatus) return;
			NATIVE_INVOKE<Void>((Void)HASH::STATUS_MESSAGE_SHOW, *pStatus, status_msg, status_sprite, &status_byte);
		}
		NATIVE_DECL void STATUS_MESSAGE_SHOW(const char* status_msg) { if (!status_msg) return; STATUS_MESSAGE_SHOW(status_msg, GAME_STATUSSCREEN_NOTE); }
		NATIVE_DECL void STATUS_MESSAGE_SHOW(string status_msg) { STATUS_MESSAGE_SHOW(status_msg.c_str()); }
		NATIVE_DECL void STATUS_MESSAGE_SHOW_TEXT(const char* status_msg) { if (!status_msg) return; STATUS_MESSAGE_SHOW(status_msg, GAME_STATUSSCREEN_NOTE); }
		NATIVE_DECL void STATUS_MESSAGE_SHOW_MONITOR_TEXT(const char* status_msg) { if (!status_msg) return; STATUS_MESSAGE_SHOW(status_msg, GAME_STATUSSCREEN_NOTE); }
		/// <summary>Display a warning popup dialog in engine (0x004043A0).</summary>
		NATIVE_DECL void WARNING_SHOW(const char* warn_msg) { NATIVE_INVOKE<Void>((Void)HASH::WARNING_SHOW, warn_msg); }
		NATIVE_DECL void WARNING_SHOW(string warn_msg) { WARNING_SHOW(warn_msg.c_str()); }
		/// <summary>Display an error popup dialog in engine (0x00404360).</summary>
		NATIVE_DECL void ERROR_SHOW(const char* err_msg) { NATIVE_INVOKE<Void>((Void)HASH::ERROR_SHOW, err_msg); }
		NATIVE_DECL void ERROR_SHOW(string err_msg) { ERROR_SHOW(err_msg.c_str()); }
		/// <summary>Show level transition loading screen (0x00407230).</summary>
		NATIVE_DECL void LOADING_SCREEN_SHOW(int loading_type) { NATIVE_INVOKE<Void>((Void)HASH::LOADING_SCREEN_SHOW, loading_type); }
		NATIVE_DECL void WARNINGS_DISABLE() { *(PINT)0x00936274 = 0; }
		NATIVE_DECL void ERRORS_DISABLE() { *(PINT)0x00936268 = 0; }
	}

	namespace MEMORY {
		/// <summary>Allocate game engine memory block (0x00404740).</summary>
		NATIVE_DECL address_t ALLOC(int num, int size) { return NATIVE_INVOKE<address_t>((Void)HASH::MEMORY_ALLOC, num, size); }
		/// <summary>Free game engine memory block (0x00404780).</summary>
		NATIVE_DECL void DEALLOC() { NATIVE_INVOKE<Void>((Void)HASH::MEMORY_DEALLOC); }
	}

	namespace PLAYER {
		NATIVE_DECL void INDEX_NAME_SET(int index, const char* name) { std::memcpy((char*)PLAYER_INDEX_ADDR(index + 1), name, PLAYER_NAME_SIZE); }
		NATIVE_DECL void INDEX_NAME_SET(int index, string name) { INDEX_NAME_SET(index, name.c_str()); }
		NATIVE_DECL void INDEX_MISSION_SET(int index, byte mission) { *(byte*)(PLAYER_INDEX_ADDR(index + 1) + PLAYER_ACTIVE_MISSION_OFF) = (byte)mission; }
		NATIVE_DECL void ACTIVE_NAME_SET(const char* name) { std::memcpy((char*)PLAYER_ACTIVE_ADDR, name, PLAYER_NAME_SIZE); }
		NATIVE_DECL void ACTIVE_NAME_SET(string name) { ACTIVE_NAME_SET(name.c_str()); }
		NATIVE_DECL string ACTIVE_NAME_GET() { string name = ""; std::memcpy((void*)name.data(), (void*)PLAYER_BASE_ADDR, PLAYER_NAME_SIZE); return name; }
		NATIVE_DECL int ACTIVE_MISSION_GET() { byte mission = 1; mission = *(byte*)(PLAYER_BASE_ADDR + PLAYER_ACTIVE_MISSION_OFF); return mission; }
		NATIVE_DECL void ACTIVE_MISSION_SET(byte mission) { { *(byte*)(PLAYER_ACTIVE_ADDR + PLAYER_ACTIVE_MISSION_OFF) = (byte)mission; } }
		/// <summary>Check if player profile is active (0x00407F60).</summary>
		NATIVE_DECL char* IS_PROFILE_ACTIVE() { return NATIVE_INVOKE<char*>((Void)HASH::PLAYER_PROFILE_ACTIVE); }
	}

	namespace CONFIG {
		/// <summary>Read game configuration file (0x00406080).</summary>
		NATIVE_DECL void READ() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_READ, GAME_CONFIG_FILE); }
		NATIVE_DECL void READ(const char* config_file) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_READ, config_file); }
		/// <summary>Write game configuration file (0x004060C0).</summary>
		NATIVE_DECL void WRITE() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_WRITE, GAME_CONFIG_FILE); }
		NATIVE_DECL void WRITE(const char* config_file) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_WRITE, config_file); }
		/// <summary>Read weapons configuration file (0x00408160).</summary>
		NATIVE_DECL void WEAPON_CONFIG_READ() { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_CONFIG_READ, 0, GAME_WEAPON_CONFIG_FILE); }
		NATIVE_DECL void WEAPON_CONFIG_READ(const char* config_file) { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_CONFIG_READ, 0, config_file); }
		/// <summary>Compile configuration script file (0x00407FD0).</summary>
		NATIVE_DECL int COMPILE(int p1, const char* cfg_file, int p3) { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_COMPILE, p1, cfg_file, p3); }
	}

	namespace DEBUG {
		NATIVE_DECL void INIT() { *(int*)0x0056DF94 = 1; *(int*)0x00A5EA75 = (int)0x005C8BF4; }
		NATIVE_DECL void INIT(const char* font_type) { *(int*)0x00A5EA75 = (int)0x005C8BF4; strcpy((char*)0x0054D958, font_type); }
		NATIVE_DECL void ENABLE(bool state) { *(uint8_t*)0x005BDC1C = state; }
		NATIVE_DECL void KEYS_ENABLE(bool state) { *(uint8_t*)0x0057B194 = state; }
		NATIVE_DECL void TEXT_ENABLE(bool state) { *(uint8_t*)0x00A5EA75 = state; }
	}

	namespace GAME {
		/// <summary>Enable user input processing (0x00408220).</summary>
		NATIVE_DECL void INPUT_ENABLE() { NATIVE_INVOKE<Void>((Void)HASH::INPUT_ENABLE, (const char*)local_buf); }
		/// <summary>Disable user input processing (0x00408250).</summary>
		NATIVE_DECL void INPUT_DISABLE() { NATIVE_INVOKE<Void>((Void)HASH::INPUT_DISABLE, (const char*)local_buf); }
		NATIVE_DECL void QUIT() { *(PINT)0x005C8DE8 = 0; }
		/// <summary>Invoke menu manager and load menu script (0x00418B00).</summary>
		NATIVE_DECL int* MENU_MANAGER(int menu_data, const char* menu_str, char p3 = '\x1', char p4 = '\x1', int p5 = 1) {
			return NATIVE_INVOKE<int*>((Void)HASH::MENU_MANAGER, menu_data, menu_str, p3, p4, p5);
		}
		/// <summary>Define engine options (0x00405820).</summary>
		NATIVE_DECL void DEFINE_OPTIONS(int** option_str, int option_func_addr, int opt1, int opt2) {
			NATIVE_INVOKE<Void>((Void)HASH::GAME_DEFINE_OPTIONS, option_str, option_func_addr, opt1, opt2);
		}
		/// <summary>Load a data symbol (0x004052F0).</summary>
		NATIVE_DECL int DATA_SYMBOL_LOAD(char* sym_buf, const char* sym_path, const char* sym_name) {
			return NATIVE_INVOKE<int>((Void)HASH::GAME_DATA_SYMBOL_LOAD, sym_buf, sym_path, sym_name);
		}
		/// <summary>Remove a data symbol (0x004053B0).</summary>
		NATIVE_DECL void DATA_SYMBOL_REMOVE(char* sym_buf) {
			NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REMOVE, sym_buf);
		}
		/// <summary>Register boolean symbol (0x004055F0).</summary>
		NATIVE_DECL void DATA_SYMBOL_REGISTER_BOOL8(int** sym_buf, int sym_addr) {
			NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_BOOL8, sym_buf, sym_addr);
		}
		/// <summary>Register 16-bit integer symbol (0x00405610).</summary>
		NATIVE_DECL void DATA_SYMBOL_REGISTER_INT16(int** sym_buf, int sym_addr) {
			NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_INT16, sym_buf, sym_addr);
		}
		/// <summary>Register 32-bit integer symbol (0x00405630).</summary>
		NATIVE_DECL void DATA_SYMBOL_REGISTER_INT32(int** sym_buf, int sym_addr) {
			NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_INT32, sym_buf, sym_addr);
		}
		/// <summary>Register 32-bit float symbol (0x00405650).</summary>
		NATIVE_DECL void DATA_SYMBOL_REGISTER_REAL32(int** sym_buf, int sym_addr) {
			NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_REAL32, sym_buf, sym_addr);
		}
	}

	namespace LEVEL {
		/// <summary>Restart the current level (0x00407170).</summary>
		NATIVE_DECL void RESTART() { auto cleanup = (int(__cdecl *)(int))0x00402820; NATIVE_INVOKE<Void>((Void)HASH::LEVEL_RESTART); cleanup(0x1E); *(int*)(0x00567C8C + 0x28) = 4;}
		/// <summary>Load a level by index (0x004073C0).</summary>
		NATIVE_DECL void LOAD() { NATIVE_INVOKE<Void>((Void)HASH::LEVEL_LOAD, 0x0057B568, 35); }
		NATIVE_DECL int GET() { return READ_PTR(0x00539560); }
		NATIVE_DECL void SET(int level) { *(PINT)0x00539560 = (level < 1 || level > GAME_LEVEL_MAX) ? 1 : level; }
		/// <summary>Start level execution (0x00407510).</summary>
		NATIVE_DECL void START(int p1 = 0) { NATIVE_INVOKE<Void>((Void)HASH::LEVEL_START, p1); }
		/// <summary>Quit level / return to menu (0x00407720).</summary>
		NATIVE_DECL void QUIT_GAME() { NATIVE_INVOKE<Void>((Void)HASH::LEVEL_QUIT); }
	}

	namespace HUMAN {
		/// <summary>Read player hit point value (0x00412850).</summary>
		NATIVE_DECL uint32_t PLAYER_XP_HIT() {
			const uint8_t hit_value = NATIVE_INVOKE<uint8_t>((Void)HASH::PLAYER_XP_HIT);
			return static_cast<uint32_t>(hit_value);
		}
		/// <summary>Reset human player view state (0x00414430).</summary>
		NATIVE_DECL void TASK_VIEW_RESET() {
			const int human_player = READ_PTR(humanplayer_ptr);
			if (human_player != 0)
				NATIVE_INVOKE<Void>((Void)HASH::HUMAN_TASK_VIEW_RESET, human_player);
		}
		/// <summary>Load human player model and state (0x00408590).</summary>
		NATIVE_DECL void PLAYER_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::HUMANPLAYER_LOAD); }
		NATIVE_DECL void UNLIMITED_HEALTH_SET() { GT_WriteNOP(PLAYER_XPL_HIT_ADDR, 6); }
		/// <summary>Get hit damage calculation (0x00414810).</summary>
		NATIVE_DECL uint32_t HIT_DAMAGE_GET() { return NATIVE_INVOKE<uint32_t>((Void)HASH::HUMAN_HIT_DAMAGE); }
		/// <summary>Set human camera view mode (0x004153B0).</summary>
		NATIVE_DECL void CAM_VIEW_SET(int cam_type) { NATIVE_INVOKE<Void>((Void)HASH::HUMAN_CAM_VIEW, (int)READ_PTR(humanplayer_ptr), cam_type); }
		/// <summary>Find next camera view target (0x004153E0).</summary>
		NATIVE_DECL void FIND_NEXT_CAMERA(int human_addr) { NATIVE_INVOKE<Void>((Void)HASH::HUMAN_FIND_NEXT_CAMERA, human_addr); }
	}

	namespace SOLDIER {
		NATIVE_DECL void INIT() { g_Soldier.Init(true); }
		NATIVE_DECL void ADD(HumanSoldier& soldier) { soldier.AddSoldier(); }
		NATIVE_DECL bool REMOVE(HumanSoldier& soldier) { return soldier.RemoveSoldier(); }
		NATIVE_DECL bool VALIDATE(HumanSoldier& soldier) { return soldier.ValidateSoldier(); }
		NATIVE_DECL HumanSoldier FIND(soldier_t soldier_id) { return g_Soldier.FindSoldier(soldier_id); }
		NATIVE_DECL HumanSoldier FIND(ai_t ai_id) { return g_Soldier.FindSoldier(ai_id); }
		NATIVE_DECL HumanSoldier FIND(graph_t graph_id) { return g_Soldier.FindSoldier(graph_id); }
		NATIVE_DECL HumanSoldier FIND(address_t address) { return g_Soldier.FindSoldier(address); }
		NATIVE_DECL HumanSoldier FIND(string model_id) { return g_Soldier.FindSoldier(model_id); }
		NATIVE_DECL void DEBUG_DATA(HumanSoldier& soldier) { MISC::STATUS_MESSAGE_SHOW(soldier.DebugSoldierData().c_str()); }
		NATIVE_DECL void DEBUG_DATA_LIST(HumanSoldier& soldier) { soldier.DebugSoldierDataList(); }
		/// <summary>Execute soldier script task (0x00414A90).</summary>
		NATIVE_DECL void EXECUTE(int soldier_ptr, int soldier_addr) { NATIVE_INVOKE<Void>((Void)HASH::SOLDIER_EXECUTE, soldier_ptr, soldier_addr); }
		NATIVE_DECL void EXECUTE(HumanSoldier& soldier) { g_Soldier.ExecuteSoldier(soldier.GetSoldierId()); }
		NATIVE_DECL void EXECUTE(soldier_t soldier_id) { g_Soldier.ExecuteSoldier(soldier_id); }
		NATIVE_DECL void EXECUTE() { if (soldiers.size() > 0) { auto soldier = soldiers.at(0); SOLDIER::EXECUTE(soldier); } }
		NATIVE_DECL void EXECUTE_ALL() { g_Soldier.ExecuteSoldiers(); }
		NATIVE_DECL void CAM_VIEW_SET(HumanSoldier& soldier, int cam_type) { NATIVE_INVOKE<Void>((Void)HASH::HUMAN_CAM_VIEW, (int)READ_PTR(soldier.GetAddress()), cam_type); }
	}

	namespace WEAPON {
		NATIVE_DECL void UNLIMITED_AMMO_SET(bool enable) { *(PINT)0x0056E214 = enable; }
		/// <summary>Open weapon type definition (0x00408070).</summary>
		NATIVE_DECL void TYPE_OPEN() { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_TYPE_OPEN); }
		/// <summary>Open ammo type definition (0x00408100).</summary>
		NATIVE_DECL void AMMO_TYPE_OPEN() { NATIVE_INVOKE<Void>((Void)HASH::AMMO_TYPE_OPEN); }
		/// <summary>Get total available weapon count (0x004081B0).</summary>
		NATIVE_DECL int TOTAL_COUNT() { return NATIVE_INVOKE<int>((Void)HASH::WEAPON_TOTAL); }
		/// <summary>Perform gun pickup (0x00415A50).</summary>
		NATIVE_DECL void GUN_PICKUP(int weapon_id) {
			int pickup_data[2] = { weapon_id, 1 };
			NATIVE_INVOKE<Void>((Void)HASH::WEAPON_GUN_PICKUP, READ_PTR(gun_pickup_ptr), pickup_data);
		}
		/// <summary>Perform ammo pickup (0x00415A70).</summary>
		NATIVE_DECL void AMMO_PICKUP(int ammo_id) {
			int pickup_data[2] = { ammo_id, 1 };
			NATIVE_INVOKE<Void>((Void)HASH::WEAPON_AMMO_PICKUP, READ_PTR(gun_pickup_ptr), pickup_data);
		}
		NATIVE_DECL void WEAPON_PICKUP(int weapon_id) { int ammo_id = weapons_ammo_list.at(weapon_id); GUN_PICKUP(weapon_id); AMMO_PICKUP(ammo_id); }
	}

	namespace BINOCULARS {
		/// <summary>Draws red box overlay on enemy when using binoculars (0x00470260).</summary>
		NATIVE_DECL uint32_t ENEMY_DETECTOR_OVERLAY(int contextBase, int targetAddr, float sortingDistance, int configFlag, int* screenPosition, int eventParam = 0, int extraParam1 = 0, int extraParam2 = 0) {
			return NATIVE_INVOKE<uint32_t>((Void)HASH::ENEMY_DETECTOR_OVERLAY, contextBase, targetAddr, sortingDistance, configFlag, screenPosition, eventParam, extraParam1, extraParam2);
		}
	}

	namespace CAMERA {
		NATIVE_DECL void ATTACH() { g_Camera.Attach(); }
		NATIVE_DECL void DEATTACH() { g_Camera.Deattach(); }
		NATIVE_DECL void CALIBRATE() { g_Camera.CalibrateView(); }
		NATIVE_DECL void FREECAM(Camera::Controls& controls) { g_Camera.FreeCam(controls); }
		NATIVE_DECL void X_UPDATE(double x) { g_Camera.WritePosition(x); }
		NATIVE_DECL void Y_UPDATE(double y) { g_Camera.WritePosition(NULLF, y); }
		NATIVE_DECL void Z_UPDATE(double z) { g_Camera.WritePosition(NULLF, NULLF, z); }
		NATIVE_DECL void POSITION_UPDATE(Camera::Position& pos) { g_Camera.WritePosition(pos); }
		NATIVE_DECL void ANGLE_UPDATE(Camera::Angle& angle) { g_Camera.WriteAngle(angle); }
		NATIVE_DECL void PITCH_UPDATE(float pitch) { g_Camera.WriteAngle(pitch); }
		NATIVE_DECL void ROLL_UPDATE(float roll) { g_Camera.WriteAngle(NULLF, roll); }
		NATIVE_DECL void YAW_UPDATE(float yaw) { g_Camera.WriteAngle(NULLF, NULLF, yaw); }
		NATIVE_DECL void FOV_UPDATE(float fov) { g_Camera.WriteAngle(NULLF, NULLF, NULLF, fov); }
		NATIVE_DECL Camera::Position POSITION_READ() { return g_Camera.ReadPosition(); }
		NATIVE_DECL Camera::Angle ANGLE_READ() { return g_Camera.ReadAngle(); }
	}

	namespace RESOURCE {
		NATIVE_DECL void RESOURCE_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_RES); }
		NATIVE_DECL void TEXTURE_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_TEXTURE); }
		NATIVE_DECL void FONT_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_FONT); }
		NATIVE_DECL void ANIMATION_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_ANIMATION); }
		NATIVE_DECL void LIGHTMAP_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_OLM); g_Resource->SaveGameResource(file, GAME_RESOURCE_LMP); }
		NATIVE_DECL void GRAPHICS_2D_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_SPRITE); g_Resource->SaveGameResource(file, GAME_RESOURCE_PIC); g_Resource->SaveGameResource(file, GAME_RESOURCE_TEXTURE); }
		NATIVE_DECL void GRAPHICS_3D_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_MEF); g_Resource->SaveGameResource(file, GAME_RESOURCE_TEXTURE); }
		NATIVE_DECL void TERRAIN_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_CMD); g_Resource->SaveGameResource(file, GAME_RESOURCE_CTR); g_Resource->SaveGameResource(file, GAME_RESOURCE_HMP); g_Resource->SaveGameResource(file, GAME_RESOURCE_LMP); }
		NATIVE_DECL void SOUND_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_WAV); }
		NATIVE_DECL void MATERIAL_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_MTP); }
		NATIVE_DECL void OBJECT_INFO_SAVE(const char* file) { g_Resource->SaveGameResource(file, GAME_RESOURCE_QVM); }
		NATIVE_DECL void MEF_EXTRACT() { g_Resource->ExtractResourceFile(GAME_RESOURCE_MEF); }
		/// <summary>Check if resource is currently loaded (0x00405230).</summary>
		NATIVE_DECL bool IS_LOADED(const char* resource_file) { return NATIVE_INVOKE<bool>((Void)HASH::RESOURCE_IS_LOADED, resource_file, (int*)&resource_file); }
		NATIVE_DECL bool IS_LOADED(string resource) { return IS_LOADED(resource.c_str()); }
		NATIVE_DECL bool IS_LOADED(Resource& resource) { return IS_LOADED(resource.name.c_str()); }
		/// <summary>Load resource into memory (0x004051B0).</summary>
		NATIVE_DECL int* LOAD(const char* resource_file, char** buffer) { return NATIVE_INVOKE<int*>((Void)HASH::RESOURCE_LOAD, resource_file, buffer); }
		NATIVE_DECL int* LOAD(string resource_file) { return LOAD(resource_file.c_str(), NULL); }
		template <typename T>NATIVE_DECL void LOAD(T resource_files) { for (const auto& resource : resource_files) LOAD(resource.c_str()); }
		/// <summary>Unload resource from memory (0x004051F0).</summary>
		NATIVE_DECL void UNLOAD(const char* resource_file) { NATIVE_INVOKE<Void>((Void)HASH::RESOURCE_UNLOAD, resource_file); }
		NATIVE_DECL void UNLOAD(string resource_file) { UNLOAD(resource_file.c_str()); }
		template <typename T>NATIVE_DECL void UNLOAD(T resource_files) { for (const auto& resource : resource_files) if (IS_LOADED(resource)) UNLOAD(resource); else LOG_ERROR("Resource '%s' cannot be loaded", resource.c_str()); }
		/// <summary>Flush resource cache (0x00405220).</summary>
		NATIVE_DECL void FLUSH(int resource_addr) { NATIVE_INVOKE<Void>((Void)HASH::RESOURCE_FLUSH, resource_addr); }
		/// <summary>Unpack packed archive resource (0x00405170).</summary>
		NATIVE_DECL int UNPACK(const char* resource_file, char** buffer) { return NATIVE_INVOKE<int>((Void)HASH::RESOURCE_PACK_UNPACK, resource_file, buffer); }
		NATIVE_DECL int UNPACK(string resource_file) { return UNPACK(resource_file.c_str(), NULL); }
		/// <summary>Decompress resource data (0x00404C10).</summary>
		NATIVE_DECL void UNPACK(int* res_ptr, int res_addr, int res_size) { NATIVE_INVOKE<Void>((Void)HASH::RESOURCE_UNPACK, res_ptr, res_addr, res_size); }
		NATIVE_DECL address_t FIND(const char* resource_name) { return g_Resource->FindGameResource(resource_name); }
		NATIVE_DECL address_t FIND(string resource_name) { return FIND(resource_name.c_str()); }
		NATIVE_DECL void FIND(string resource_name, Resource& res) { res = Resource(resource_name, g_Resource->FindGameResource(resource_name), 0); }
		NATIVE_DECL string MEF_FIND_MODEL_NAME(string& model_id) { return g_Resource->MEF_FindModelName(model_id); }
		NATIVE_DECL string MEF_FIND_MODEL_ID(string& model_name, bool full_id) { return g_Resource->MEF_FindModelId(model_name, full_id); }
		NATIVE_DECL string MEF_FIND_MODEL_ID(string& model_name) { return g_Resource->MEF_FindModelId(model_name, true); }
		NATIVE_DECL void MEF_REMOVE_MODEL(string model_id) { g_Resource->MEF_RemoveModel(model_id); }
		template <typename T>NATIVE_DECL void MEF_REMOVE_MODELS(T model_files) { for (const auto& model : model_files) MEF_REMOVE_MODEL(model); }
		NATIVE_DECL void MEF_RESTORE_MODEL(string model_id) { g_Resource->MEF_RestoreModel(model_id); }
		template <typename T>NATIVE_DECL void MEF_RESTORE_MODELS(T model_files) { for (const auto& model : model_files) MEF_RESTORE_MODEL(model); }
		NATIVE_DECL void MEF_RESTORE_MODELS() { g_Resource->MEF_RestoreModels(); }
	}

	namespace GRAPH {
		NATIVE_DECL void DEBUG_GRAPH_INFO(graph_t graph_id) { g_Graph.DebugGraphInfo(graph_id); }
		NATIVE_DECL void DEBUG_GRAPHS_INFO(bool node_info, bool link_info) { g_Graph.DebugGraphsInfo(node_info, link_info, -1); }
		NATIVE_DECL Graph GET_GRAPH(graph_t graph_id) { return g_Graph.GetGraph4mId(graph_id); }
		NATIVE_DECL Graph::Node GET_GRAPH_NODE(graph_t graph_id, node_t node_id) { return g_Graph.GetNode4mId(graph_id,node_id); }
		NATIVE_DECL float GET_NODE_RADIUS(graph_t graph_id, graph_t node_id) { return g_Graph.GetNodeRadius(graph_id,node_id); }
		NATIVE_DECL float GET_NODE_GAMMA(graph_t graph_id, graph_t node_id) { return g_Graph.GetNodeGamma(graph_id,node_id); }
		NATIVE_DECL int GET_NODE_MATERIAL(graph_t graph_id, graph_t node_id) { return g_Graph.GetNodeMaterial(graph_id,node_id); }
		NATIVE_DECL string GET_NODE_MATERIAL_TYPE(graph_t graph_id, graph_t node_id) { return g_Graph.GetNodeMaterialType(graph_id,node_id); }
		NATIVE_DECL string GET_NODE_LINKS(graph_t graph_id) { return g_Graph.GetNodeLinks(graph_id); }
		NATIVE_DECL int GET_MAX_NODES(graph_t graph_id) { return g_Graph.GetMaxNodes(graph_id); }
		NATIVE_DECL int GET_TOTAL_NODES(graph_t graph_id) { return g_Graph.GetTotalNodes(graph_id); }
		NATIVE_DECL void DOT_SAVE_GRAPHS(string node_shape, string node_color, bool remove_source) { g_Graph.DOT_SaveGraphs(node_shape, node_color, remove_source); }
		/// <summary>Open navigation graph for level (0x00412490).</summary>
		NATIVE_DECL void OPEN(uint32_t level, const char* graph_str) { NATIVE_INVOKE<Void>((Void)HASH::GRAPH_OPEN, level, graph_str); }
	}

	namespace QTASK {
		/// <summary>Update task list (0x00405BF0).</summary>
		NATIVE_DECL void UPDATE() { NATIVE_INVOKE<Void>((Void)HASH::QTASK_UPDATE); }
		/// <summary>Update specific task array (0x00405C30).</summary>
		NATIVE_DECL void UPDATE_LIST(int* qtask_list) { NATIVE_INVOKE<Void>((Void)HASH::QTASK_UPDATE_LIST, qtask_list); }
		/// <summary>Reset task hash table (0x00405490).</summary>
		NATIVE_DECL void RESET() { NATIVE_INVOKE<Void>((Void)HASH::QHASH_RESET); }
		/// <summary>Initialize task hash (0x00405440).</summary>
		NATIVE_DECL void HASH_INIT(int hash_val) { NATIVE_INVOKE<Void>((Void)HASH::QHASH_INIT, hash_val); }
		/// <summary>Set task hash value (0x00405450).</summary>
		NATIVE_DECL void HASH_VAL_SET() { NATIVE_INVOKE<Void>((Void)HASH::QHASH_VAL_SET); }
		/// <summary>Get task hash value (0x00405470).</summary>
		NATIVE_DECL int	 HASH_VAL_GET() { return NATIVE_INVOKE<int>((Void)HASH::QHASH_VAL_GET); }
		/// <summary>Configure task hash table entry (0x00405890).</summary>
		NATIVE_DECL void HASH_TABLE_SET(int** symbol, int ptr_func, int symbol_val, int p4, int p5, int p6, int p7) {
			NATIVE_INVOKE<Void>((Void)HASH::QTASK_HASH_TABLE, symbol, ptr_func, symbol_val, p4, p5, p6, p7);
		}
	}

	namespace QFILE {
		/// <summary>Open file handle (0x00404C80).</summary>
		NATIVE_DECL FILE* OPEN(const char* file, char* mode) { return NATIVE_INVOKE<FILE*>((Void)HASH::FILE_OPEN, file, mode); }
		/// <summary>Open file handle for read/write (0x00404CE0).</summary>
		NATIVE_DECL FILE* READ_WRITE(const char* file, char* mode) { return NATIVE_INVOKE<FILE*>((Void)HASH::FILE_READ_WRITE, file, mode); }
	}

	namespace QVM {
		/// <summary>Load QVM bytecode file (0x00407E40).</summary>
		NATIVE_DECL int* LOAD(string qvm_file) { g_Utility.Replace(qvm_file, ".qvm", ".qsc"); return NATIVE_INVOKE<int*>((Void)HASH::QVM_LOAD, qvm_file.c_str()); }
		/// <summary>Read QVM virtual machine state (0x00407E90).</summary>
		NATIVE_DECL int READ(int qvm_addr) { return NATIVE_INVOKE<int>((Void)HASH::QVM_READ, qvm_addr); }
		/// <summary>Cleanup QVM virtual machine (0x00407F10).</summary>
		NATIVE_DECL void CLEANUP(int* qvm_addr) { NATIVE_INVOKE<Void>((Void)HASH::QVM_CLEANUP, qvm_addr); }
		NATIVE_DECL int LOAD_AND_READ(string qvm_file) { auto qvm_addr = LOAD(qvm_file); auto status = READ((int)qvm_addr); CLEANUP(qvm_addr); return status; }
	}

	namespace SCRIPT {
		/// <summary>Compile QSC script file (0x00407E30).</summary>
		NATIVE_DECL void COMPILE(string qsc_file) { NATIVE_INVOKE<Void>((Void)HASH::QSCRIPT_COMPILE, qsc_file.c_str()); }
		/// <summary>Parse QAS assembly file (0x00407DF0).</summary>
		NATIVE_DECL int PARSE(string qas_file, int mem_addr) { return NATIVE_INVOKE<int>((Void)HASH::QSCRIPT_PARSE, qas_file.c_str(), mem_addr); }
		NATIVE_DECL int PARSE(string qsc_file, string qas_file) { auto mem_blk = (int*)MEMORY::ALLOC(0x94, 4); char* buff = nullptr; auto res_addr = RESOURCE::LOAD(qsc_file.c_str(), &buff); std::strcpy((char*)mem_blk, qsc_file.data()); mem_blk[0x20] = (int)res_addr; mem_blk[0x21] = (int)buff; mem_blk[0x22] = 0; return PARSE(qas_file, (int)mem_blk); }
		NATIVE_DECL int PARSE(string qsc_file) { string qas_file = qsc_file; g_Utility.Replace(qas_file, ".qsc", ".qas"); return PARSE(qsc_file, qas_file); }
		/// <summary>Assemble QAS script into QVM bytecode (0x00407E10).</summary>
		NATIVE_DECL int ASSEMBLE(string qas_file, string qvm_file) { return NATIVE_INVOKE<int>((Void)HASH::QSCRIPT_ASSEMBLE, qvm_file.c_str(), qas_file.c_str()); }
		NATIVE_DECL int ASSEMBLE(string qas_file) { string qvm_file = qas_file; g_Utility.Replace(qas_file, ".qas", ".qvm"); return ASSEMBLE(qas_file, qvm_file); }
		/// <summary>Cleanup script resources (0x00407E70).</summary>
		NATIVE_DECL void CLEANUP(string q_file) { NATIVE_INVOKE<Void>((Void)HASH::QSCRIPT_CLEANUP, q_file.c_str()); }
		/// <summary>Initialize script system (0x00407DC0).</summary>
		NATIVE_DECL void INIT(const char* file_name, int p2 = 0, int p3 = 0, int p4 = 0) { NATIVE_INVOKE<Void>((Void)HASH::SCRIPT_INIT, file_name, p2, p3, p4); }
		/// <summary>Set symbol context in script runtime (0x00405290).</summary>
		NATIVE_DECL void SET_SYMBOL_CXT(uint8_t* symbol_name, int** symbol_buf) { NATIVE_INVOKE<Void>((Void)HASH::SCRIPT_SETSYMBOL_CXT, symbol_name, symbol_buf); }
		/// <summary>Set task type ID (0x00405860).</summary>
		NATIVE_DECL void TASK_TYPE_SET(int** task_str, int task_id) { NATIVE_INVOKE<Void>((Void)HASH::TASKTYPE_SET, task_str, task_id); }
		/// <summary>Remove symbol from runtime (0x00405670).</summary>
		NATIVE_DECL void SYMBOL_REMOVE(int* p1, int* symbol_name) { NATIVE_INVOKE<Void>((Void)HASH::SYMBOL_REMOVE, p1, symbol_name); }
		/// <summary>Check symbol in runtime table (0x004056E0).</summary>
		NATIVE_DECL int* SYMBOL_CHECK(int* p1, int** symbol_name, int* p3) { return NATIVE_INVOKE<int*>((Void)HASH::SYMBOL_CHECK, p1, symbol_name, p3); }
		/// <summary>Initialize script buffer (0x004057A0).</summary>
		NATIVE_DECL void BUF_INIT(int* buff_arr1, int buff_arr2, int buff, int buff_size) { NATIVE_INVOKE<Void>((Void)HASH::SCRIPT_BUF_INIT, buff_arr1, buff_arr2, buff, buff_size); }
	}

	namespace GFX {
		/// <summary>Reset graphics device state (0x004060F0).</summary>
		NATIVE_DECL void RESET() { NATIVE_INVOKE<Void>((Void)HASH::RESET, (const char*)local_buf); }
	}

	namespace SFX {
		/// <summary>Enable background music (0x004068C0).</summary>
		NATIVE_DECL void MUSIC_ENABLE() { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_ENABLE, (const char*)local_buf); }
		/// <summary>Disable background music (0x004068E0).</summary>
		NATIVE_DECL void MUSIC_DISABLE() { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_DISABLE, (const char*)local_buf); }
		/// <summary>Update audio playback volume (0x004069A0).</summary>
		NATIVE_DECL void VOLUME_UPDATE() { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_UPDATE_VOLUME, (const char*)local_buf); }
		/// <summary>Set music volume level (0x00406930).</summary>
		NATIVE_DECL void VOLUME_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_VOLUME, volume, volume); }
		/// <summary>Set SFX volume level (0x00406900).</summary>
		NATIVE_DECL void VOLUME_SFX_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_SFX_VOLUME, volume); }
		/// <summary>Load sound bank / directory (0x004067B0).</summary>
		NATIVE_DECL void SOUND_LOAD(const char* sound_dir) { NATIVE_INVOKE<Void>((Void)HASH::SOUND_LOAD, sound_dir); }
		NATIVE_DECL void SOUND_LOAD(string sound_dir) { SOUND_LOAD(sound_dir.c_str()); }
	}

	namespace MISSION {
		/// <summary>Open mission file descriptor (0x00407780).</summary>
		NATIVE_DECL void OPEN(char** ptr_mission) { NATIVE_INVOKE<Void>((Void)HASH::MISSION_OPEN, ptr_mission); }
	}

	namespace AI {
		// =====================================================================
		// AI Actions (Registered at 0x0044CCA0)
		// =====================================================================

		/// <summary>AI Action Patrol native (0x0044D0E0).</summary>
		NATIVE_DECL void ACTION_PATROL(int p1, int p2, int p3) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_PATROL, p1, p2, p3); }
		/// <summary>AI Action Combat native (0x0044D160).</summary>
		NATIVE_DECL void ACTION_COMBAT(int p1) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_COMBAT, p1); }
		/// <summary>AI Action Dead native (0x0044D260).</summary>
		NATIVE_DECL void ACTION_DEAD(int p1) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_DEAD, p1); }
		/// <summary>AI Action Fall Flat native (0x0044D2C0).</summary>
		NATIVE_DECL void ACTION_FALL_FLAT(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_FALL_FLAT, p1, p2); }
		/// <summary>AI Action Activate native (0x0044D420).</summary>
		NATIVE_DECL void ACTION_ACTIVATE(int p1, int p2, int p3) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_ACTIVATE, p1, p2, p3); }
		/// <summary>AI Action Walk To Node native (0x0044D4A0).</summary>
		NATIVE_DECL void ACTION_WALK_TO_NODE(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_WALK_TO_NODE, p1, p2); }
		/// <summary>AI Action Run To Node native (0x0044D510).</summary>
		NATIVE_DECL void ACTION_RUN_TO_NODE(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_RUN_TO_NODE, p1, p2); }
		/// <summary>AI Action Fire At Node native (0x0044D580).</summary>
		NATIVE_DECL void ACTION_FIRE_AT_NODE(int p1, int p2, int p3, int p4, int p5) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_FIRE_AT_NODE, p1, p2, p3, p4, p5); }
		/// <summary>AI Action Fire At Task native (0x0044D630).</summary>
		NATIVE_DECL void ACTION_FIRE_AT_TASK(int p1, int p2, int p3, int p4, int p5) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_FIRE_AT_TASK, p1, p2, p3, p4, p5); }
		/// <summary>AI Action Play Animation native (0x0044D6E0).</summary>
		NATIVE_DECL void ACTION_PLAY_ANIMATION(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_PLAY_ANIMATION, p1, p2); }
		/// <summary>AI Action Play Sound native (0x0044D750).</summary>
		NATIVE_DECL void ACTION_PLAY_SOUND(const char* sound_def, int p2, int p3) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_PLAY_SOUND, sound_def, p2, p3); }
		/// <summary>AI Action Move To Event native (0x0044D7D0).</summary>
		NATIVE_DECL void ACTION_MOVE_TO_EVENT(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_MOVE_TO_EVENT, p1, p2); }
		/// <summary>AI Action Look At Event native (0x0044D870).</summary>
		NATIVE_DECL void ACTION_LOOK_AT_EVENT(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_LOOK_AT_EVENT, p1, p2); }
		/// <summary>AI Action Stunned native (0x0044D8F0).</summary>
		NATIVE_DECL void ACTION_STUNNED(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_STUNNED, p1, p2); }
		/// <summary>AI Action Kick Grenade native (0x0044D960).</summary>
		NATIVE_DECL void ACTION_KICK_GRENADE(int p1) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_KICK_GRENADE, p1); }
		/// <summary>AI Action Run Panicking native (0x0044DA00).</summary>
		NATIVE_DECL void ACTION_RUN_PANICKING(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_RUN_PANICKING, p1, p2); }
		/// <summary>AI Action Idle native (0x0044DA80).</summary>
		NATIVE_DECL void ACTION_IDLE(int p1) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_IDLE, p1); }
		/// <summary>AI Action Set Combat native (0x0044DAE0).</summary>
		NATIVE_DECL void ACTION_SET_COMBAT(int p1) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_SET_COMBAT, p1); }

		// =====================================================================
		// AI Functions (Registered at 0x0044CCA0)
		// =====================================================================

		/// <summary>AI Function Default Handler (0x0044E060).</summary>
		NATIVE_DECL void DEFAULT_HANDLER() { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_DEFAULT_HANDLER); }
		/// <summary>AI Function Remove Alarm Actions (0x0044DBC0).</summary>
		NATIVE_DECL void REMOVE_ALARM_ACTIONS() { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_REMOVE_ALARM_ACTIONS); }
		/// <summary>AI Function Set View Length (0x0044DC40).</summary>
		NATIVE_DECL void SET_VIEW_LENGTH(float len) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_VIEW_LENGTH, len); }
		/// <summary>AI Function Set Alarm View Length (0x0044DCD0).</summary>
		NATIVE_DECL void SET_ALARM_VIEW_LENGTH(float len) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_VIEW_LENGTH, len); }
		/// <summary>AI Function Set View Alpha (0x0044DD30).</summary>
		NATIVE_DECL void SET_VIEW_ALPHA(float alpha) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_VIEW_ALPHA, alpha); }
		/// <summary>AI Function Set View Gamma (0x0044DD90).</summary>
		NATIVE_DECL void SET_VIEW_GAMMA(float gamma) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_VIEW_GAMMA, gamma); }
		/// <summary>AI Function Set Secondary View Length (0x0044DDF0).</summary>
		NATIVE_DECL void SET_SECONDARY_VIEW_LENGTH(float len) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_VIEW_LENGTH, len); }
		/// <summary>AI Function Set Secondary Alarm View Length (0x0044DE80).</summary>
		NATIVE_DECL void SET_SECONDARY_ALARM_VIEW_LENGTH(float len) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_ALARM_VIEW_LENGTH, len); }
		/// <summary>AI Function Set Secondary View Alpha (0x0044DEE0).</summary>
		NATIVE_DECL void SET_SECONDARY_VIEW_ALPHA(float alpha) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_VIEW_ALPHA, alpha); }
		/// <summary>AI Function Set Secondary View Gamma (0x0044DF40).</summary>
		NATIVE_DECL void SET_SECONDARY_VIEW_GAMMA(float gamma) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_VIEW_GAMMA, gamma); }
		/// <summary>AI Function Set Event Priority (0x0044E0C0).</summary>
		NATIVE_DECL void SET_EVENT_PRIORITY(int prio) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_EVENT_PRIORITY, prio); }
		/// <summary>AI Function Set Invulnerability (0x0044E150).</summary>
		NATIVE_DECL void SET_INVULNERABILITY(int state) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_INVULNERABILITY, state); }
		/// <summary>AI Function Set Instant Death (0x0044E1B0).</summary>
		NATIVE_DECL void SET_INSTANT_DEATH(int state) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_INSTANT_DEATH, state); }
		/// <summary>AI Function Set Death Animation (0x0044E210).</summary>
		NATIVE_DECL void SET_DEATH_ANIMATION(int anim) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_DEATH_ANIMATION, anim); }
		/// <summary>AI Function Set Alarm Trigger ID (0x0044E270).</summary>
		NATIVE_DECL void SET_ALARM_TRIGGER_ID(int id) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_TRIGGER_ID, id); }
		/// <summary>AI Function Set Alarm Control ID (0x0044E2D0).</summary>
		NATIVE_DECL void SET_ALARM_CONTROL_ID(int id) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_CONTROL_ID, id); }
		/// <summary>AI Function Set Alarm Access (0x0044E330).</summary>
		NATIVE_DECL void SET_ALARM_ACCESS(int access) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_ACCESS, access); }
		/// <summary>AI Function Set Gunner ID (0x0044E390).</summary>
		NATIVE_DECL void SET_GUNNER_ID(int id) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_GUNNER_ID, id); }
		/// <summary>AI Function Set Script Integer Value (0x0044E6D0).</summary>
		NATIVE_DECL void SET_SCRIPT_INTEGER_VALUE(int idx, int val) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SCRIPT_INTEGER_VALUE, idx, val); }
		/// <summary>AI Function Set Script Real/Float Value (0x0044E790).</summary>
		NATIVE_DECL void SET_SCRIPT_REAL_VALUE(int idx, float val) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SCRIPT_REAL_VALUE, idx, val); }
		/// <summary>AI Function Get Alarm Trigger ID (0x0044E3F0).</summary>
		NATIVE_DECL int GET_ALARM_TRIGGER_ID() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_TRIGGER_ID); }
		/// <summary>AI Function Get Alarm Control ID (0x0044E430).</summary>
		NATIVE_DECL int GET_ALARM_CONTROL_ID() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_CONTROL_ID); }
		/// <summary>AI Function Get Alarm Access (0x0044E470).</summary>
		NATIVE_DECL int GET_ALARM_ACCESS() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_ACCESS); }
		/// <summary>AI Function Get Gunner ID (0x0044E4B0).</summary>
		NATIVE_DECL int GET_GUNNER_ID() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_GUNNER_ID); }
		/// <summary>AI Function Get Alarm Control Status (0x0044E4F0).</summary>
		NATIVE_DECL int GET_ALARM_CONTROL_STATUS() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_CONTROL_STATUS); }
		/// <summary>AI Function Get Gunner Status (0x0044E5E0).</summary>
		NATIVE_DECL int GET_GUNNER_STATUS() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_GUNNER_STATUS); }
		/// <summary>AI Function Get Script Integer Value (0x0044E740).</summary>
		NATIVE_DECL int GET_SCRIPT_INTEGER_VALUE(int idx) { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_SCRIPT_INTEGER_VALUE, idx); }
		/// <summary>AI Function Get Current Event Type (0x0044DFA0).</summary>
		NATIVE_DECL int GET_CURRENT_EVENT_TYPE() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_CURRENT_EVENT_TYPE); }
		/// <summary>AI Function Check If Event Is Behind Actor (0x0044E860).</summary>
		NATIVE_DECL int IS_EVENT_BEHIND() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_IS_EVENT_BEHIND); }
		/// <summary>AI Function Get Script Real/Float Value (0x0044E800).</summary>
		NATIVE_DECL float GET_SCRIPT_REAL_VALUE(int idx) { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_SCRIPT_REAL_VALUE, idx); }
		/// <summary>AI Function Get Random Real Value (0x0044E000).</summary>
		NATIVE_DECL float GET_RANDOM_VALUE(float max_val) { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_RANDOM_VALUE, max_val); }
		/// <summary>AI Function Get Event Distance (0x0044E930).</summary>
		NATIVE_DECL float GET_EVENT_DISTANCE() { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_EVENT_DISTANCE); }
		/// <summary>AI Function Get Alarm Trigger Distance (0x0044E9B0).</summary>
		NATIVE_DECL float GET_ALARM_TRIGGER_DISTANCE() { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_ALARM_TRIGGER_DISTANCE); }
		/// <summary>AI Function Set Animation Interval (0x0044EAF0).</summary>
		NATIVE_DECL void SET_ANIMATION_INTERVAL(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ANIMATION_INTERVAL, p1, p2); }
		/// <summary>AI Function Add Animation Entry (0x0044EBB0).</summary>
		NATIVE_DECL void ADD_ANIMATION_ENTRY(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_ADD_ANIMATION_ENTRY, p1, p2); }
		/// <summary>AI Function Get Animation To Play (0x0044ECB0).</summary>
		NATIVE_DECL int GET_ANIMATION_TO_PLAY() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ANIMATION_TO_PLAY); }
		/// <summary>AI Function Send Response (0x0044EE40).</summary>
		NATIVE_DECL void SEND_RESPONSE() { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SEND_RESPONSE); }
	}

	// =========================================================================
	// IGI Enhancer Patch — Memory-patching and native wrappers
	// All addresses verified via Ghidra decompilation of D:\IGI1\igi.exe
	// =========================================================================
	namespace ENHANCER {

		// ── Frame-rate control ──────────────────────────────────────────
		// The engine tick interval is stored as a float at 0x005C8BCC.
		// Default value = 0.033333f (30 FPS). Formula: interval = 1.0f / target_fps.
		// FRAMES_SET already exists in MISC:: but uses the HASH::FRAMES_SET native.
		// This writes the timing value directly for finer control.
		NATIVE_DECL void FRAMERATE_SET(int target_fps) {
			if (target_fps < 15) target_fps = 15;
			if (target_fps > 240) target_fps = 240;
			float interval = 1.0f / static_cast<float>(target_fps);
			*(float*)0x005C8BCC = interval;
			LOG_INFO("ENHANCER: Frame interval set to %.6f (%d FPS)", interval, target_fps);
		}

		NATIVE_DECL int FRAMERATE_GET() {
			float interval = *(float*)0x005C8BCC;
			if (interval <= 0.0f) return 30;
			return static_cast<int>(1.0f / interval + 0.5f);
		}

		// ── Resolution / Widescreen ─────────────────────────────────────
		// Width/height stored at 0x005C8C00 (width) and 0x005C8C04 (height).
		NATIVE_DECL void RESOLUTION_SET(int width, int height) {
			*(int*)0x005C8C00 = width;
			*(int*)0x005C8C04 = height;
			LOG_INFO("ENHANCER: Resolution set to %dx%d", width, height);
		}

		NATIVE_DECL int RESOLUTION_WIDTH_GET() { return *(int*)0x005C8C00; }
		NATIVE_DECL int RESOLUTION_HEIGHT_GET() { return *(int*)0x005C8C04; }
		inline float g_requested_draw_distance = 5000.0f;
		inline float g_requested_gamma = 1.0f;

		// The retail camera stores the half-FOV globals as x87-compatible doubles.
		// HumanTaskViewReset (0x004659E0) converts them to float tangents at
		// HumanPlayer + 0x1E4 / 0x1E8.  IGIPatch also consumes the verified
		// Mesh3D_avOverrideFOV[3] table at 0x00B81700 for every mesh render path.
		NATIVE_DECL void MESH_FOV_OVERRIDE_SET(float fov_degrees) {
			const float base_half_fov = 37.5f * 3.14159265358979323846f / 180.0f;
			const float requested_half_fov = (fov_degrees * 0.5f) *
				3.14159265358979323846f / 180.0f;
			const float base_tangent = tanf(base_half_fov);
			const float requested_tangent = tanf(requested_half_fov);
			const float render_scale = requested_tangent / base_tangent;

			// This table is initialized by Mesh3D initialization to 1.0f and is
			// read by the retail rigid, sorted-face, lightmap, and bone renderers.
			// Keep all three slots synchronized; the renderer indexes by mesh type.
			__try {
				*(float*)0x00B81700 = render_scale;
				*(float*)0x00B81704 = render_scale;
				*(float*)0x00B81708 = render_scale;
			} __except (EXCEPTION_EXECUTE_HANDLER) {
				LOG_ERROR("ENHANCER: Failed to update Mesh3D FOV override table");
				return;
			}

			LOG_INFO("ENHANCER: Mesh3D FOV override scale set to %.5f", render_scale);
		}

		NATIVE_DECL void FOV_SET(float fov_degrees) {
			if (fov_degrees < 45.0f) fov_degrees = 45.0f;
			if (fov_degrees > 120.0f) fov_degrees = 120.0f;
			double half_fov_h = (static_cast<double>(fov_degrees) * 0.5) * (3.141592653589793 / 180.0);
			double half_fov_v = half_fov_h * 0.75;
			MESH_FOV_OVERRIDE_SET(fov_degrees);

			// Update global engine FOV constants (0x005335E8 & 0x005339C0)
			__try {
				DWORD oldProtect;
				if (VirtualProtect((LPVOID)0x005335E8, 8, PAGE_EXECUTE_READWRITE, &oldProtect)) {
					*(double*)0x005335E8 = half_fov_h;
					VirtualProtect((LPVOID)0x005335E8, 8, oldProtect, &oldProtect);
				}
				if (VirtualProtect((LPVOID)0x005339C0, 8, PAGE_EXECUTE_READWRITE, &oldProtect)) {
					*(double*)0x005339C0 = half_fov_v;
					VirtualProtect((LPVOID)0x005339C0, 8, oldProtect, &oldProtect);
				}
			} __except (EXCEPTION_EXECUTE_HANDLER) {}

			// Keep the active player view fields synchronized without calling into the
			// retail routine from the DLL worker thread.  The retail routine is verified,
			// but it is game-thread-only and calling it here races the renderer.
			const int hp = READ_PTR(humanplayer_ptr);
			if (hp) {
				*(float*)(hp + 0x1E4) = tanf(static_cast<float>(half_fov_h));
				*(float*)(hp + 0x1E8) = tanf(static_cast<float>(half_fov_v));
			}
			LOG_INFO("ENHANCER: FOV set to %.1f degrees (%.4f rad)", fov_degrees, static_cast<float>(half_fov_h * 2.0));
		}

		NATIVE_DECL float FOV_GET() {
			double half_fov_h = *(double*)0x005335E8;
			return static_cast<float>(half_fov_h * 2.0 * 180.0 / 3.141592653589793);
		}

		// ── Binoculars zoom enhancement ─────────────────────────────────
		NATIVE_DECL void BINOCULARS_ZOOM_SET(float zoom_factor) {
			if (zoom_factor < 1.0f) zoom_factor = 1.0f;
			if (zoom_factor > 16.0f) zoom_factor = 16.0f;

			double base_half_fov = (75.0 * 0.5) * (3.141592653589793 / 180.0);
			double zoomed_half_fov = base_half_fov / static_cast<double>(zoom_factor);
			double zoomed_vertical_half_fov = zoomed_half_fov * 0.75;
			MESH_FOV_OVERRIDE_SET(static_cast<float>(75.0 / static_cast<double>(zoom_factor)));

			DWORD oldProtect;
			if (VirtualProtect((LPVOID)0x005335E8, 8, PAGE_EXECUTE_READWRITE, &oldProtect)) {
				*(double*)0x005335E8 = zoomed_half_fov;
				VirtualProtect((LPVOID)0x005335E8, 8, oldProtect, &oldProtect);
			}
			if (VirtualProtect((LPVOID)0x005339C0, 8, PAGE_EXECUTE_READWRITE, &oldProtect)) {
				*(double*)0x005339C0 = zoomed_vertical_half_fov;
				VirtualProtect((LPVOID)0x005339C0, 8, oldProtect, &oldProtect);
			}

			const int hp = READ_PTR(humanplayer_ptr);
			if (hp) {
				*(float*)(hp + 0x1E4) = tanf(static_cast<float>(zoomed_half_fov));
				*(float*)(hp + 0x1E8) = tanf(static_cast<float>(zoomed_vertical_half_fov));
			}
			LOG_INFO("ENHANCER: Binoculars zoom set to %.1fx", zoom_factor);
		}

		NATIVE_DECL float BINOCULARS_ZOOM_GET() {
			const int hp = READ_PTR(humanplayer_ptr);
			if (!hp) return 2.0f;
			float tanX = *(float*)(hp + 0x1E4);
			if (tanX <= 0.0f) return 2.0f;
			float current_half_fov = atanf(tanX);
			float base_half_fov = (75.0f * 0.5f) * (3.14159265f / 180.0f);
			return base_half_fov / current_half_fov;
		}

		// ── Music & SFX volume ──────────────────────────────────────────
		NATIVE_DECL void MUSIC_VOLUME_SET(float vol) {
			if (vol < 0.0f) vol = 0.0f;
			if (vol > 1.0f) vol = 1.0f;
			NATIVE_INVOKE<Void>((Void)HASH::MUSIC_VOL_SET, vol);
			LOG_INFO("ENHANCER: Music volume set to %.2f", vol);
		}

		NATIVE_DECL void SFX_VOLUME_SET(float vol) {
			if (vol < 0.0f) vol = 0.0f;
			if (vol > 1.0f) vol = 1.0f;
			NATIVE_INVOKE<Void>((Void)HASH::MUSIC_SFX_VOL_SET, vol);
			LOG_INFO("ENHANCER: SFX volume set to %.2f", vol);
		}

		// ── Draw distance ───────────────────────────────────────────────
		// The values previously used here (0x00BCABC8, 0x00BCABF4 and
		// 0x005C8C10) are clipping/configuration fields, not a draw-distance
		// setter.  r2mcp and BlankName's IGIPatch show that retail visibility is
		// selected by the Mesh3D_*LOD routines.  Keep the requested value as
		// enhancer state until a verified LOD code patch is installed; never write
		// arbitrary floats into the active render context.
		NATIVE_DECL void DRAW_DISTANCE_SET(float distance) {
			if (distance < 100.0f) distance = 100.0f;
			if (distance > 50000.0f) distance = 50000.0f;
			g_requested_draw_distance = distance;
			LOG_WARNING("ENHANCER: Draw distance request %.0f recorded; retail LOD patch is not installed", distance);
		}

		NATIVE_DECL float DRAW_DISTANCE_GET() { return g_requested_draw_distance; }

		// ── Gamma / Brightness ──────────────────────────────────────────
		// 0x005C8C14 has no retail readers in the r2mcp xref graph.  Retain the
		// requested value for the status UI, but do not pretend it changes output.
		NATIVE_DECL void GAMMA_SET(float gamma) {
			if (gamma < 0.5f) gamma = 0.5f;
			if (gamma > 3.0f) gamma = 3.0f;
			g_requested_gamma = gamma;
			LOG_WARNING("ENHANCER: Gamma request %.2f recorded; no verified retail gamma setter", gamma);
		}

		NATIVE_DECL float GAMMA_GET() { return g_requested_gamma; }

		// ── Status display helper ───────────────────────────────────────
		NATIVE_DECL void SHOW_STATUS(const std::string& msg) {
			// StatusMessageShow mutates a retail HUD list owned by the game thread.
			// The enhancer loop is an external thread, so logging is the safe feedback
			// path until a verified game-thread render hook is installed.
			LOG_INFO("ENHANCER STATUS: %s", msg.c_str());
		}

		// ── Enhancer state ──────────────────────────────────────────────
		struct EnhancerState {
			int target_fps = 30;
			float fov_degrees = 75.0f;
			float binocular_zoom = 2.0f;
			float draw_distance = 5000.0f;
			float gamma = 1.0f;
			float music_volume = 0.8f;
			float sfx_volume = 0.8f;
			bool fps_unlocked = false;
			bool widescreen = false;
		};
		inline EnhancerState g_Enhancer;

		// ── Cycle FPS presets ───────────────────────────────────────────
		NATIVE_DECL void CYCLE_FPS() {
			static const int presets[] = { 30, 60, 120, 144 };
			static int idx = 0;
			idx = (idx + 1) % 4;
			g_Enhancer.target_fps = presets[idx];
			g_Enhancer.fps_unlocked = (presets[idx] > 30);
			FRAMERATE_SET(presets[idx]);
			SHOW_STATUS("FPS: " + std::to_string(presets[idx]));
		}

		// ── Cycle FOV presets ───────────────────────────────────────────
		NATIVE_DECL void CYCLE_FOV() {
			static const float presets[] = { 75.0f, 90.0f, 100.0f, 110.0f };
			static int idx = 0;
			idx = (idx + 1) % 4;
			g_Enhancer.fov_degrees = presets[idx];
			FOV_SET(presets[idx]);
			char buf[64];
			snprintf(buf, sizeof(buf), "FOV: %.0f", presets[idx]);
			SHOW_STATUS(buf);
		}

		// ── Cycle binoculars zoom ───────────────────────────────────────
		NATIVE_DECL void CYCLE_BINOCULAR_ZOOM() {
			static const float presets[] = { 2.0f, 4.0f, 8.0f, 12.0f, 16.0f };
			static int idx = 0;
			idx = (idx + 1) % 5;
			g_Enhancer.binocular_zoom = presets[idx];
			BINOCULARS_ZOOM_SET(presets[idx]);
			char buf[64];
			snprintf(buf, sizeof(buf), "Binoculars: %.0fx", presets[idx]);
			SHOW_STATUS(buf);
		}

		// ── Toggle draw distance ────────────────────────────────────────
		NATIVE_DECL void CYCLE_DRAW_DISTANCE() {
			static const float presets[] = { 5000.0f, 10000.0f, 20000.0f, 50000.0f };
			static int idx = 0;
			idx = (idx + 1) % 4;
			g_Enhancer.draw_distance = presets[idx];
			DRAW_DISTANCE_SET(presets[idx]);
			char buf[64];
			snprintf(buf, sizeof(buf), "Draw Dist: %.0f", presets[idx]);
			SHOW_STATUS(buf);
		}

		// ── Volume controls ─────────────────────────────────────────────
		NATIVE_DECL void MUSIC_VOLUME_UP() {
			g_Enhancer.music_volume = (std::min)(g_Enhancer.music_volume + 0.1f, 1.0f);
			MUSIC_VOLUME_SET(g_Enhancer.music_volume);
			char buf[64];
			snprintf(buf, sizeof(buf), "Music Vol: %.0f%%", g_Enhancer.music_volume * 100.0f);
			SHOW_STATUS(buf);
		}

		NATIVE_DECL void MUSIC_VOLUME_DOWN() {
			g_Enhancer.music_volume = (std::max)(g_Enhancer.music_volume - 0.1f, 0.0f);
			MUSIC_VOLUME_SET(g_Enhancer.music_volume);
			char buf[64];
			snprintf(buf, sizeof(buf), "Music Vol: %.0f%%", g_Enhancer.music_volume * 100.0f);
			SHOW_STATUS(buf);
		}

		NATIVE_DECL void SFX_VOLUME_UP() {
			g_Enhancer.sfx_volume = (std::min)(g_Enhancer.sfx_volume + 0.1f, 1.0f);
			SFX_VOLUME_SET(g_Enhancer.sfx_volume);
			char buf[64];
			snprintf(buf, sizeof(buf), "SFX Vol: %.0f%%", g_Enhancer.sfx_volume * 100.0f);
			SHOW_STATUS(buf);
		}

		NATIVE_DECL void SFX_VOLUME_DOWN() {
			g_Enhancer.sfx_volume = (std::max)(g_Enhancer.sfx_volume - 0.1f, 0.0f);
			SFX_VOLUME_SET(g_Enhancer.sfx_volume);
			char buf[64];
			snprintf(buf, sizeof(buf), "SFX Vol: %.0f%%", g_Enhancer.sfx_volume * 100.0f);
			SHOW_STATUS(buf);
		}

		// ── Gamma controls ──────────────────────────────────────────────
		NATIVE_DECL void GAMMA_UP() {
			g_Enhancer.gamma = (std::min)(g_Enhancer.gamma + 0.1f, 3.0f);
			GAMMA_SET(g_Enhancer.gamma);
			char buf[64];
			snprintf(buf, sizeof(buf), "Gamma: %.1f", g_Enhancer.gamma);
			SHOW_STATUS(buf);
		}

		NATIVE_DECL void GAMMA_DOWN() {
			g_Enhancer.gamma = (std::max)(g_Enhancer.gamma - 0.1f, 0.5f);
			GAMMA_SET(g_Enhancer.gamma);
			char buf[64];
			snprintf(buf, sizeof(buf), "Gamma: %.1f", g_Enhancer.gamma);
			SHOW_STATUS(buf);
		}

		// ── Status display — show all current enhancer settings ─────────
		NATIVE_DECL std::string GET_STATUS_STRING() {
			char buf[512];
			snprintf(buf, sizeof(buf),
				"[IGI Enhancer]\n"
				"FPS: %d (%s)\n"
				"FOV: %.0f\n"
				"Bino: %.0fx\n"
				"Draw: %.0f\n"
				"Gamma: %.1f\n"
				"Music: %.0f%%\n"
				"SFX: %.0f%%",
				g_Enhancer.target_fps,
				g_Enhancer.fps_unlocked ? "Unlocked" : "Default",
				g_Enhancer.fov_degrees,
				g_Enhancer.binocular_zoom,
				g_Enhancer.draw_distance,
				g_Enhancer.gamma,
				g_Enhancer.music_volume * 100.0f,
				g_Enhancer.sfx_volume * 100.0f);
			return std::string(buf);
		}

		NATIVE_DECL void SHOW_ENHANCER_STATUS() {
			SHOW_STATUS(GET_STATUS_STRING());
		}
	}
}
