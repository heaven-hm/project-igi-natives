#pragma once 
#include "Natives.hpp" 
#include "NativeCaller.hpp" 
#include "../Camera/Camera.hpp"
#include "../Player/HumanSoldier.hpp"
#include "../GameResources/GameResource.hpp"
#include "../Graphs/Graph.hpp"

#define NATIVE_DECL __declspec(noinline) inline 

namespace IGI {

	namespace MISC {
		NATIVE_DECL void FRAMES_SET(int frames) { NATIVE_INVOKE<Void>((Void)HASH::FRAMES_SET, frames); };
		NATIVE_DECL void CUTSCENE_DELETE() { NATIVE_INVOKE<Void>((Void)HASH::CUTSCENE_DELETE, (const char*)local_buf); }
		NATIVE_DECL void GAMEMATERIAL_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::GAMEMATERIAL_LOAD); }
		NATIVE_DECL void MAGIC_OBJECT_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::MAGIC_OBJ_LOAD, GAME_MAGIC_OBJ); }
		NATIVE_DECL void ANIM_TRIGGER_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::ANIM_TRIGGER_LOAD, GAME_ANIM_TRIGGER); }
		NATIVE_DECL void PHYSICS_OBJECT_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::PHYSICS_OBJ_LOAD, GAME_PHYSICS_OBJ); }
		NATIVE_DECL void LOG_ADD(const char* log_msg) { NATIVE_INVOKE<Void>((Void)HASH::LOG_ADD, log_msg); }
		NATIVE_DECL void STATUS_MESSAGE_CLEAR() { NATIVE_INVOKE<Void>((Void)HASH::STATUS_MESSAGE_CLEAR, (const char*)local_buf); }
		NATIVE_DECL void STATUS_MESSAGE_SHOW(const char* status_msg, const char* status_sprite) { NATIVE_INVOKE<Void>((Void)HASH::STATUS_MESSAGE_SHOW, *(PINT)0x00A758AC, status_msg, status_sprite, &status_byte); }
		NATIVE_DECL void STATUS_MESSAGE_SHOW(const char* status_msg) { STATUS_MESSAGE_SHOW(status_msg, GAME_STATUSSCREEN_NOTE); std::this_thread::sleep_for(10s); MISC::STATUS_MESSAGE_CLEAR(); }
		NATIVE_DECL void STATUS_MESSAGE_SHOW(string status_msg) { STATUS_MESSAGE_SHOW(status_msg.c_str()); }
		NATIVE_DECL void WARNINGS_DISABLE() { *(PINT)0x00936274 = 0; }
		NATIVE_DECL void ERRORS_DISABLE() { *(PINT)0x00936268 = 0; }
	}

	namespace MEMORY {
		NATIVE_DECL address_t ALLOC(int num, int size) { return NATIVE_INVOKE<address_t>((Void)HASH::MEMORY_ALLOC, num, size); }
		NATIVE_DECL void DEALLOC() { NATIVE_INVOKE<Void>((Void)HASH::MEMORY_DEALLOC); }
	}

	namespace PLAYER {
		NATIVE_DECL void INDEX_NAME_SET(int index, const char* name) { char* destination = (char*)PLAYER_INDEX_ADDR(index + 1); std::memset(destination, 0, PLAYER_NAME_SIZE); std::strncpy(destination, name, PLAYER_NAME_SIZE - 1); }
		NATIVE_DECL void INDEX_NAME_SET(int index, string name) { INDEX_NAME_SET(index, name.c_str()); }
		NATIVE_DECL void INDEX_MISSION_SET(int index, byte mission) { *(byte*)(PLAYER_INDEX_ADDR(index + 1) + PLAYER_ACTIVE_MISSION_OFF) = (byte)mission; }
		NATIVE_DECL void ACTIVE_NAME_SET(const char* name) { char* destination = (char*)PLAYER_ACTIVE_ADDR; std::memset(destination, 0, PLAYER_NAME_SIZE); std::strncpy(destination, name, PLAYER_NAME_SIZE - 1); }
		NATIVE_DECL void ACTIVE_NAME_SET(string name) { ACTIVE_NAME_SET(name.c_str()); }
		NATIVE_DECL string ACTIVE_NAME_GET() { string name(PLAYER_NAME_SIZE, '\0'); std::memcpy(name.data(), (void*)PLAYER_ACTIVE_ADDR, PLAYER_NAME_SIZE); name.resize(strnlen_s(name.c_str(), PLAYER_NAME_SIZE)); return name; }
		NATIVE_DECL int ACTIVE_MISSION_GET() { return *(byte*)(PLAYER_ACTIVE_ADDR + PLAYER_ACTIVE_MISSION_OFF); }
		NATIVE_DECL void ACTIVE_MISSION_SET(byte mission) { { *(byte*)(PLAYER_ACTIVE_ADDR + PLAYER_ACTIVE_MISSION_OFF) = (byte)mission; } }
		NATIVE_DECL char* IS_PROFILE_ACTIVE() { return NATIVE_INVOKE<char*>((Void)HASH::PLAYER_PROFILE_ACTIVE); }
	}

	namespace CONFIG {
		NATIVE_DECL void READ() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_READ, GAME_CONFIG_FILE); }
		NATIVE_DECL void READ(const char* config_file) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_READ, config_file); }
		NATIVE_DECL void WRITE() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_WRITE, GAME_CONFIG_FILE); }
		NATIVE_DECL void WRITE(const char* config_file) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_WRITE, config_file); }
		NATIVE_DECL void WEAPON_CONFIG_READ() { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_CONFIG_READ, 0, GAME_WEAPON_CONFIG_FILE); }
		NATIVE_DECL void WEAPON_CONFIG_READ(const char* config_file) { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_CONFIG_READ, 0, config_file); }
	}

	namespace DEBUG {
		NATIVE_DECL void INIT() { *(int*)0x0056DF94 = 1; *(int*)0x00A5EA75 = (int)0x005C8BF4; }
		NATIVE_DECL void INIT(const char* font_type) { constexpr size_t DEBUG_FONT_PATH_SIZE = 0x20; *(int*)0x00A5EA75 = (int)0x005C8BF4; char* destination = (char*)0x0054D958; if (!font_type) font_type = GAME_FONT_DEBUG; std::memset(destination, 0, DEBUG_FONT_PATH_SIZE); std::strncpy(destination, font_type, DEBUG_FONT_PATH_SIZE - 1); }
		NATIVE_DECL void ENABLE(bool state) { *(uint8_t*)0x005BDC1C = state; }
		NATIVE_DECL void KEYS_ENABLE(bool state) { *(uint8_t*)0x0057B194 = state; }
		NATIVE_DECL void TEXT_ENABLE(bool state) { *(uint8_t*)0x00A5EA75 = state; }
	}

	namespace GAME {
		NATIVE_DECL void INPUT_ENABLE() { NATIVE_INVOKE<Void>((Void)HASH::INPUT_ENABLE, (const char*)local_buf); }
		NATIVE_DECL void INPUT_DISABLE() { NATIVE_INVOKE<Void>((Void)HASH::INPUT_DISABLE, (const char*)local_buf); }
		NATIVE_DECL void QUIT() { *(PINT)0x005C8DE8 = 0; }
	}

	namespace LEVEL {
		NATIVE_DECL void RESTART() { auto cleanup = (int(__cdecl *)(int))0x00402820; NATIVE_INVOKE<Void>((Void)HASH::LEVEL_RESTART); cleanup(0x1E); *(int*)(0x00567C8C + 0x28) = 4;}
		NATIVE_DECL void LOAD() { NATIVE_INVOKE<Void>((Void)HASH::LEVEL_LOAD, 0x0057B568, 35); }
		NATIVE_DECL int GET() { return READ_PTR(0x00539560); }
		NATIVE_DECL void SET(int level) { *(PINT)0x00539560 = (level < 1 || level > GAME_LEVEL_MAX) ? 1 : level; }
	}

	namespace HUMAN {
		NATIVE_DECL void PLAYER_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::HUMANPLAYER_LOAD); }
		NATIVE_DECL void UNLIMITED_HEALTH_SET() { GT_WriteNOP(PLAYER_XPL_HIT_ADDR, 6); }
		NATIVE_DECL uint32_t HIT_DAMAGE_GET() { return NATIVE_INVOKE<uint32_t>((Void)HASH::HUMAN_HIT_DAMAGE); }
		NATIVE_DECL void CAM_VIEW_SET(int cam_type) { NATIVE_INVOKE<Void>((Void)HASH::HUMAN_CAM_VIEW, (int)READ_PTR(humanplayer_ptr), cam_type); }
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
		NATIVE_DECL void DEBUG_DATA(HumanSoldier& soldier) { MISC::STATUS_MESSAGE_SHOW(soldier.DebugSoldierData().c_str()); std::this_thread::sleep_for(7s); MISC::STATUS_MESSAGE_CLEAR(); }
		NATIVE_DECL void DEBUG_DATA_LIST(HumanSoldier& soldier) { soldier.DebugSoldierDataList(); }
		NATIVE_DECL void EXECUTE(int soldier_ptr, int soldier_addr) { NATIVE_INVOKE<Void>((Void)HASH::SOLDIER_EXECUTE, soldier_ptr, soldier_addr); }
		NATIVE_DECL void EXECUTE(HumanSoldier& soldier) { g_Soldier.ExecuteSoldier(soldier.GetSoldierId()); }
		NATIVE_DECL void EXECUTE(soldier_t soldier_id) { g_Soldier.ExecuteSoldier(soldier_id); }
		NATIVE_DECL void EXECUTE() { if (soldiers.size() > 0) { auto soldier = soldiers.at(0); SOLDIER::EXECUTE(soldier); } }
		NATIVE_DECL void EXECUTE_ALL() { g_Soldier.ExecuteSoldiers(); }
		NATIVE_DECL void CAM_VIEW_SET(HumanSoldier& soldier, int cam_type) { NATIVE_INVOKE<Void>((Void)HASH::HUMAN_CAM_VIEW, (int)READ_PTR(soldier.GetAddress()), cam_type); }
	}

	namespace WEAPON {
		NATIVE_DECL void UNLIMITED_AMMO_SET(bool enable) { *(PINT)0x0056E214 = enable; }
		NATIVE_DECL void TYPE_OPEN() { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_TYPE_OPEN); }
		NATIVE_DECL int TOTAL_COUNT() { return NATIVE_INVOKE<int>((Void)HASH::WEAPON_TOTAL); }
		NATIVE_DECL void GUN_PICKUP(int weapon_id) { GUN_PICKUP_SET(weapon_id); NATIVE_INVOKE<Void>((Void)HASH::WEAPON_GUN_PICKUP, READ_PTR(gun_pickup_ptr), GUN_PICKUP_PTR); }
		NATIVE_DECL void AMMO_PICKUP(int ammo_id) { AMMO_PICKUP_SET(ammo_id); NATIVE_INVOKE<Void>((Void)HASH::WEAPON_AMMO_PICKUP, READ_PTR(gun_pickup_ptr), AMMO_PICKUP_PTR); }
		NATIVE_DECL void WEAPON_PICKUP(int weapon_id) { if (weapon_id < 0 || static_cast<size_t>(weapon_id) >= weapons_ammo_list.size()) { LOG_ERROR("Invalid weapon id: %d", weapon_id); return; } int ammo_id = weapons_ammo_list.at(weapon_id); GUN_PICKUP(weapon_id); AMMO_PICKUP(ammo_id); }
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
		NATIVE_DECL bool IS_LOADED(const char* resource_file) { return NATIVE_INVOKE<bool>((Void)HASH::RESOURCE_IS_LOADED, resource_file, (int*)&resource_file); }
		NATIVE_DECL bool IS_LOADED(string resource) { return IS_LOADED(resource.c_str()); }
		NATIVE_DECL bool IS_LOADED(Resource& resource) { return IS_LOADED(resource.name.c_str()); }
		NATIVE_DECL int* LOAD(const char* resource_file, char** buffer) { return NATIVE_INVOKE<int*>((Void)HASH::RESOURCE_LOAD, resource_file, buffer); }
		NATIVE_DECL int* LOAD(string resource_file) { return LOAD(resource_file.c_str(), NULL); }
		template <typename T>NATIVE_DECL void LOAD(T resource_files) { for (const auto& resource : resource_files) LOAD(resource.c_str()); }
		NATIVE_DECL void UNLOAD(const char* resource_file) { NATIVE_INVOKE<Void>((Void)HASH::RESOURCE_UNLOAD, resource_file); }
		NATIVE_DECL void UNLOAD(string resource_file) { UNLOAD(resource_file.c_str()); }
		template <typename T>NATIVE_DECL void UNLOAD(T resource_files) { for (const auto& resource : resource_files) if (IS_LOADED(resource)) UNLOAD(resource); else LOG_ERROR("Resource '%s' cannot be loaded", resource.c_str()); }
		NATIVE_DECL void FLUSH(int resource_addr) { NATIVE_INVOKE<Void>((Void)HASH::RESOURCE_FLUSH, resource_addr); }
		NATIVE_DECL int UNPACK(const char* resource_file, char** buffer) { return NATIVE_INVOKE<int>((Void)HASH::RESOURCE_PACK_UNPACK, resource_file, buffer); }
		NATIVE_DECL int UNPACK(string resource_file) { return UNPACK(resource_file.c_str(), NULL); }
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
	}

	namespace QTASK {
		NATIVE_DECL void UPDATE() { NATIVE_INVOKE<Void>((Void)HASH::QTASK_UPDATE); }
		NATIVE_DECL void UPDATE_LIST(int* qtask_list) { NATIVE_INVOKE<Void>((Void)HASH::QTASK_UPDATE_LIST, qtask_list); }
		NATIVE_DECL void RESET() { NATIVE_INVOKE<Void>((Void)HASH::QHASH_RESET); }
		NATIVE_DECL void HASH_INIT(int hash_val) { NATIVE_INVOKE<Void>((Void)HASH::QHASH_INIT, hash_val); };
		NATIVE_DECL void HASH_VAL_SET() { NATIVE_INVOKE<Void>((Void)HASH::QHASH_VAL_SET); };
		NATIVE_DECL int	 HASH_VAL_GET() { return NATIVE_INVOKE<int>((Void)HASH::QHASH_VAL_GET); };
	}

	namespace QFILE {
		NATIVE_DECL FILE* OPEN(const char* file, char* mode) { return NATIVE_INVOKE<FILE*>((Void)HASH::FILE_OPEN, file, mode); }
		NATIVE_DECL FILE* READ_WRITE(const char* file, char* mode) { return NATIVE_INVOKE<FILE*>((Void)HASH::FILE_READ_WRITE, file, mode); }
		NATIVE_DECL int ALIAS_RESOLVE(char* output_path, const char* input_path, int max_depth) { return NATIVE_INVOKE<int>((Void)HASH::QFILE_ALIAS_RESOLVE, output_path, input_path, max_depth); }
		NATIVE_DECL int DEVICE_INDEX(const char* path) { return NATIVE_INVOKE<int>((Void)HASH::QFILE_DEVICE_INDEX, path); }
		NATIVE_DECL uint32_t DEVICE_HANDLER_LOOKUP(const char* device_name) { return NATIVE_INVOKE<uint32_t>((Void)HASH::QFILE_DEVICE_HANDLER_LOOKUP, device_name); }
	}

	namespace QVM {
		NATIVE_DECL int* LOAD(string qvm_file) { g_Utility.Replace(qvm_file, ".qvm", ".qsc"); return NATIVE_INVOKE<int*>((Void)HASH::QVM_LOAD, qvm_file.c_str()); }
		NATIVE_DECL int READ(int qvm_addr) { return NATIVE_INVOKE<int>((Void)HASH::QVM_READ, qvm_addr); }
		NATIVE_DECL void CLEANUP(int* qvm_addr) { NATIVE_INVOKE<Void>((Void)HASH::QVM_CLEANUP, qvm_addr); }
		NATIVE_DECL int LOAD_AND_READ(string qvm_file) { auto qvm_addr = LOAD(qvm_file); auto status = READ((int)qvm_addr); CLEANUP(qvm_addr); return status; }
	}

	namespace SCRIPT {
		NATIVE_DECL void COMPILE(string qsc_file) { NATIVE_INVOKE<Void>((Void)HASH::QSCRIPT_COMPILE, qsc_file.c_str()); }
		NATIVE_DECL int PARSE(string qas_file, int mem_addr) { return NATIVE_INVOKE<int>((Void)HASH::QSCRIPT_PARSE, qas_file.c_str(), mem_addr); }
		NATIVE_DECL int PARSE(string qsc_file, string qas_file) { auto mem_blk = (int*)MEMORY::ALLOC(0x94, 4); char* buff = nullptr; auto res_addr = RESOURCE::LOAD(qsc_file.c_str(), &buff); constexpr size_t qsc_file_capacity = 0x20 * sizeof(int); std::strncpy((char*)mem_blk, qsc_file.c_str(), qsc_file_capacity - 1); ((char*)mem_blk)[qsc_file_capacity - 1] = '\0'; mem_blk[0x20] = (int)res_addr; mem_blk[0x21] = (int)buff; mem_blk[0x22] = 0; return PARSE(qas_file, (int)mem_blk); }
		NATIVE_DECL int PARSE(string qsc_file) { string qas_file = qsc_file; g_Utility.Replace(qas_file, ".qsc", ".qas"); return PARSE(qsc_file, qas_file); }
		NATIVE_DECL int ASSEMBLE(string qas_file, string qvm_file) { return NATIVE_INVOKE<int>((Void)HASH::QSCRIPT_ASSEMBLE, qvm_file.c_str(), qas_file.c_str()); }
		NATIVE_DECL int ASSEMBLE(string qas_file) { string qvm_file = qas_file; g_Utility.Replace(qvm_file, ".qas", ".qvm"); return ASSEMBLE(qas_file, qvm_file); }
		NATIVE_DECL void CLEANUP(string q_file) { NATIVE_INVOKE<Void>((Void)HASH::QSCRIPT_CLEANUP, q_file.c_str()); }
	}

	namespace GFX {
		NATIVE_DECL void RESET() { NATIVE_INVOKE<Void>((Void)HASH::RESET, (const char*)local_buf); }
	}

	namespace SFX {
		NATIVE_DECL void MUSIC_ENABLE() { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_ENABLE, (const char*)local_buf); }
		NATIVE_DECL void MUSIC_DISABLE() { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_DISABLE, (const char*)local_buf); }
		NATIVE_DECL void VOLUME_UPDATE() { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_UPDATE_VOLUME, (const char*)local_buf); }
		NATIVE_DECL void VOLUME_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_VOLUME, volume, volume); }
		NATIVE_DECL void VOLUME_SFX_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::MUSIC_SFX_VOLUME, volume); }
	}

	namespace MISSION {
		NATIVE_DECL void OPEN(char** ptr_mission) { NATIVE_INVOKE<Void>((Void)HASH::MISSION_OPEN, ptr_mission); }
	}
	// ═══════════════════════════════════════════════════════════════
	// AI - soldier AI actions/functions (registered at 0x44CCA0).
	// Call from AI event-handler scripts context or via FiberPool tasks.
	// Enums: AIEVENT_* 0-23, AIALARMACCESS BEFORECOMBAT=0/AFTERCOMBAT=1,
	//        AIACTIONFLAG NONE=0/PUSHABLE=1 (see assets/IGINatives.json notes).
	// ═══════════════════════════════════════════════════════════════
	namespace AI {
		// -- actions: order the AI to do something --
		NATIVE_DECL void PATROL(int target, int mustBeZero, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_PATROL, target, mustBeZero, flags); }
		NATIVE_DECL void COMBAT(int param) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_COMBAT, param); }
		NATIVE_DECL void DEAD(int param) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_DEAD, param); }
		NATIVE_DECL void FALL_FLAT(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_FALL_FLAT, p1, p2); }
		NATIVE_DECL void ACTIVATE(int target, int param2, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_ACTIVATE, target, param2, flags); }
		NATIVE_DECL void WALK_TO_NODE(int nodeId, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_WALK_TO_NODE, nodeId, flags); }
		NATIVE_DECL void RUN_TO_NODE(int nodeId, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_RUN_TO_NODE, nodeId, flags); }
		NATIVE_DECL void FIRE_AT_NODE(int nodeId, int p1, int p2, int p3, int p4) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_FIRE_AT_NODE, nodeId, p1, p2, p3, p4); }
		NATIVE_DECL void FIRE_AT_TASK(int taskId, int p1, int p2, int p3, int p4) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_FIRE_AT_TASK, taskId, p1, p2, p3, p4); }
		NATIVE_DECL void PLAY_ANIMATION(int animId, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_PLAY_ANIMATION, animId, flags); }
		NATIVE_DECL void PLAY_SOUND(int soundId, int param2, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_PLAY_SOUND, soundId, param2, flags); }
		NATIVE_DECL void MOVE_TO_EVENT(int eventId, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_MOVE_TO_EVENT, eventId, flags); }
		NATIVE_DECL void LOOK_AT_EVENT(int eventId, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_LOOK_AT_EVENT, eventId, flags); }
		NATIVE_DECL void STUNNED(int p1, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_STUNNED, p1, flags); }
		NATIVE_DECL void KICK_GRENADE(int param) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_KICK_GRENADE, param); }
		NATIVE_DECL void RUN_PANICKING(int p1, int flags) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_RUN_PANICKING, p1, flags); }
		NATIVE_DECL void IDLE(int param) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_IDLE, param); }
		NATIVE_DECL void SET_COMBAT(int enemyId) { NATIVE_INVOKE<Void>((Void)HASH::AI_ACTION_SET_COMBAT, enemyId); }
		// -- functions: query/configure the AI --
		NATIVE_DECL void DEFAULT_HANDLER() { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_DEFAULT_HANDLER); }
		NATIVE_DECL void REMOVE_ALARM_ACTIONS() { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_REMOVE_ALARM_ACTIONS); }
		NATIVE_DECL void SEND_RESPONSE() { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SEND_RESPONSE); }
		NATIVE_DECL void SET_VIEW_LENGTH(int length) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_VIEW_LENGTH, length); }
		NATIVE_DECL void SET_ALARM_VIEW_LENGTH(int length) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_VIEW_LENGTH, length); }
		NATIVE_DECL void SET_VIEW_ALPHA(int alpha) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_VIEW_ALPHA, alpha); }
		NATIVE_DECL void SET_VIEW_GAMMA(int gamma) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_VIEW_GAMMA, gamma); }
		NATIVE_DECL void SET_SECONDARY_VIEW_LENGTH(int length) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_VIEW_LENGTH, length); }
		NATIVE_DECL void SET_SECONDARY_ALARM_VIEW_LENGTH(int length) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_ALARM_VIEW_LENGTH, length); }
		NATIVE_DECL void SET_SECONDARY_VIEW_ALPHA(int alpha) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_VIEW_ALPHA, alpha); }
		NATIVE_DECL void SET_SECONDARY_VIEW_GAMMA(int gamma) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SECONDARY_VIEW_GAMMA, gamma); }
		NATIVE_DECL void SET_EVENT_PRIORITY(int priority) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_EVENT_PRIORITY, priority); }
		NATIVE_DECL void SET_INVULNERABILITY(int onOff) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_INVULNERABILITY, onOff); }
		NATIVE_DECL void SET_INSTANT_DEATH(int onOff) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_INSTANT_DEATH, onOff); }
		NATIVE_DECL void SET_DEATH_ANIMATION(int animId) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_DEATH_ANIMATION, animId); }
		NATIVE_DECL void SET_ALARM_TRIGGER_ID(int id) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_TRIGGER_ID, id); }
		NATIVE_DECL void SET_ALARM_CONTROL_ID(int id) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_CONTROL_ID, id); }
		NATIVE_DECL void SET_ALARM_ACCESS(int access) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ALARM_ACCESS, access); }
		NATIVE_DECL void SET_GUNNER_ID(int id) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_GUNNER_ID, id); }
		NATIVE_DECL void SET_SCRIPT_INTEGER(int varId, int value) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SCRIPT_INTEGER_VALUE, varId, value); }
		NATIVE_DECL void SET_SCRIPT_REAL(int varId, float value) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_SCRIPT_REAL_VALUE, varId, value); }
		NATIVE_DECL void SET_ANIMATION_INTERVAL(int entry, int interval) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_SET_ANIMATION_INTERVAL, entry, interval); }
		NATIVE_DECL void ADD_ANIMATION_ENTRY(int animId, int data) { NATIVE_INVOKE<Void>((Void)HASH::AI_FUNCTION_ADD_ANIMATION_ENTRY, animId, data); }
		NATIVE_DECL int GET_ALARM_TRIGGER_ID() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_TRIGGER_ID); }
		NATIVE_DECL int GET_ALARM_CONTROL_ID() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_CONTROL_ID); }
		NATIVE_DECL int GET_ALARM_ACCESS() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_ACCESS); }
		NATIVE_DECL int GET_GUNNER_ID() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_GUNNER_ID); }
		NATIVE_DECL int GET_ALARM_CONTROL_STATUS() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ALARM_CONTROL_STATUS); }
		NATIVE_DECL int GET_GUNNER_STATUS() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_GUNNER_STATUS); }
		NATIVE_DECL int GET_SCRIPT_INTEGER(int varId) { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_SCRIPT_INTEGER_VALUE, varId); }
		NATIVE_DECL float GET_SCRIPT_REAL(int varId) { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_SCRIPT_REAL_VALUE, varId); }
		NATIVE_DECL int GET_CURRENT_EVENT_TYPE() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_CURRENT_EVENT_TYPE); }
		NATIVE_DECL int IS_EVENT_BEHIND() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_IS_EVENT_BEHIND); }
		NATIVE_DECL int GET_ANIMATION_TO_PLAY() { return NATIVE_INVOKE<int>((Void)HASH::AI_FUNCTION_GET_ANIMATION_TO_PLAY); }
		NATIVE_DECL float GET_RANDOM_VALUE(float max) { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_RANDOM_VALUE, max); }
		NATIVE_DECL float GET_EVENT_DISTANCE() { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_EVENT_DISTANCE); }
		NATIVE_DECL float GET_ALARM_TRIGGER_DISTANCE() { return NATIVE_INVOKE<float>((Void)HASH::AI_FUNCTION_GET_ALARM_TRIGGER_DISTANCE); }
	}
	// ═══════════════════════════════════════════════════════════════
	// CONFIGMENU - the Config_* natives the retail menu scripts call,
	// plus the GO_* config-writer forms. All verified against igi.exe
	// registration table + MAINMENU.QVM/ingamemenu.qvm callers.
	// ═══════════════════════════════════════════════════════════════
	namespace CONFIGMENU {
		// -- player profiles --
		NATIVE_DECL int PROFILES_COUNT_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GET_NUMBER_OF_PLAYER_PROFILES); }
		NATIVE_DECL int ACTIVE_PROFILE_INDEX_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GET_ACTIVE_PLAYER_PROFILE_INDEX); }
		NATIVE_DECL void ACTIVE_PROFILE_INDEX_SET(int index) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SET_ACTIVE_PLAYER_PROFILE_INDEX, index); }
		NATIVE_DECL int PROFILE_CREATE(const char* name, int sourceIndex) { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_CREATE_NEW_PLAYER_PROFILE, name, sourceIndex); }
		NATIVE_DECL int PROFILE_DELETE(int index) { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_DELETE_PLAYER_PROFILE, index); }
		NATIVE_DECL void PROFILE_VALUE_SET(void* profile, int index) { NATIVE_INVOKE<Void>((Void)HASH::PROFILE_VALUE_SET, profile, index); }
		NATIVE_DECL int PROFILE_ACTIVE_MISSION_GET(int profileIndex) { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_PLAYER_GET_ACTIVE_MISSION, profileIndex); }
		NATIVE_DECL void PROFILE_LIST_FILL() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_FILL_PLAYER_PROFILE_LIST_BOX); }
		// -- graphics --
		NATIVE_DECL void RENDER_DEVICE_LIST_FILL() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_FILL_RENDER_DEVICE_LIST_BOX); }
		NATIVE_DECL void RESOLUTION_LIST_FILL(int deviceIndex) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_FILL_SCREEN_RESOLUTION_LIST_BOX, deviceIndex); }
		NATIVE_DECL int GFX_DEVICE_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_GET_DEVICE); }
		NATIVE_DECL void GFX_DEVICE_SET(int deviceIndex) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_SET_DEVICE, deviceIndex); }
		NATIVE_DECL int GFX_RESOLUTION_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_GET_RESOLUTION); }
		NATIVE_DECL void GFX_RESOLUTION_SET(int modeIndex) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_SET_RESOLUTION, modeIndex); }
		NATIVE_DECL float GFX_GAMMA_GET() { return NATIVE_INVOKE<float>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_GET_GAMMA); }
		NATIVE_DECL void GFX_GAMMA_SET(float gamma) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_SET_GAMMA, gamma); }
		NATIVE_DECL int GFX_TRANSPARENCY_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_GET_TRANSPARENCY); }
		NATIVE_DECL void GFX_TRANSPARENCY_SET(int onOff) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_SET_TRANSPARENCY, onOff); }
		NATIVE_DECL int GFX_PERF_FLAGS_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_GET_PERFORMANCE_FLAGS); }
		NATIVE_DECL void GFX_PERF_FLAGS_SET(int flags) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_SET_PERFORMANCE_FLAGS, flags); }
		NATIVE_DECL int GFX_PERF_FLAGS_FROM_LEVEL(int level) { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_GET_PERF_FLAGS_FROM_LEVEL, level); }
		NATIVE_DECL int GFX_PERF_LEVEL_FROM_FLAGS(int flags) { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_GET_PERF_LEVEL_FROM_FLAGS, flags); }
		NATIVE_DECL int GFX_PERF_LEVELS_COUNT() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GRAPHIC_OPTIONS_NUM_PERF_LEVELS); }
		NATIVE_DECL void GFX_RESET() { NATIVE_INVOKE<Void>((Void)HASH::RESET); }
		// -- sound --
		NATIVE_DECL int SFX_ENABLED_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_SOUND_OPTIONS_GET_SOUNDS_EFFECTS); }
		NATIVE_DECL void SFX_ENABLED_SET(int onOff) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SOUND_OPTIONS_SET_SOUNDS_EFFECTS, onOff); }
		NATIVE_DECL float SFX_VOLUME_GET() { return NATIVE_INVOKE<float>((Void)HASH::CONFIG_SOUND_OPTIONS_GET_SOUNDS_EFFECTS_VOLUME); }
		NATIVE_DECL void SFX_VOLUME_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SOUND_OPTIONS_SET_SOUNDS_EFFECTS_VOLUME, volume); }
		NATIVE_DECL int MUSIC_ENABLED_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_SOUND_OPTIONS_GET_MUSIC); }
		NATIVE_DECL void MUSIC_ENABLED_SET(int onOff) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SOUND_OPTIONS_SET_MUSIC, onOff); }
		NATIVE_DECL float MUSIC_VOLUME_GET() { return NATIVE_INVOKE<float>((Void)HASH::CONFIG_SOUND_OPTIONS_GET_MUSIC_VOLUME); }
		NATIVE_DECL void MUSIC_VOLUME_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SOUND_OPTIONS_SET_MUSIC_VOLUME, volume); }
		NATIVE_DECL int SPEECH_ENABLED_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_SOUND_OPTIONS_GET_SPEECH); }
		NATIVE_DECL void SPEECH_ENABLED_SET(int onOff) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SOUND_OPTIONS_SET_SPEECH, onOff); }
		NATIVE_DECL float SPEECH_VOLUME_GET() { return NATIVE_INVOKE<float>((Void)HASH::CONFIG_SOUND_OPTIONS_GET_SPEECH_VOLUME); }
		NATIVE_DECL void SPEECH_VOLUME_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SOUND_OPTIONS_SET_SPEECH_VOLUME, volume); }
		NATIVE_DECL int REVERSE_STEREO_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_SOUND_OPTIONS_GET_REVERSE_STEREO); }
		NATIVE_DECL void REVERSE_STEREO_SET(int onOff) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SOUND_OPTIONS_SET_REVERSE_STEREO, onOff); }
		// -- input --
		NATIVE_DECL int INVERT_MOUSE_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GAME_OPTIONS_INPUT_GET_INVERT_MOUSE); }
		NATIVE_DECL void INVERT_MOUSE_SET(int invert) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GAME_OPTIONS_INPUT_SET_INVERT_MOUSE, invert); }
		NATIVE_DECL int MOUSE_SENSITIVITY_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GAME_OPTIONS_INPUT_GET_MOUSE_SENSITIVITY); }
		NATIVE_DECL void MOUSE_SENSITIVITY_SET(int value) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GAME_OPTIONS_INPUT_SET_MOUSE_SENSITIVITY, value); }
		NATIVE_DECL int BLOOD_ENABLED_GET() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_GAME_OPTIONS_INPUT_GET_BLOOD_ENABLED); }
		NATIVE_DECL void BLOOD_ENABLED_SET(int blood) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_GAME_OPTIONS_INPUT_SET_BLOOD_ENABLED, blood); }
		// -- content control --
		NATIVE_DECL const char* CONTENT_PASSWORD_GET() { return NATIVE_INVOKE<const char*>((Void)HASH::CONFIG_GET_CONTENT_CONTROL_PASSWORD); }
		NATIVE_DECL int CONTENT_PASSWORD_VERIFY(const char* password) { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_VERIFY_CONTENT_CONTROL_PASSWORD, password); }
		NATIVE_DECL int CONTENT_PASSWORD_ENABLED() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_IS_CONTENT_CONTROL_PASSWORD_ENABLED); }
		NATIVE_DECL void CONTENT_PASSWORD_SET() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_SET_CONTENT_CONTROL_PASSWORD); }
		// -- misc --
		NATIVE_DECL int IS_GERMANY() { return NATIVE_INVOKE<int>((Void)HASH::CONFIG_IS_GERMANY); }
		NATIVE_DECL void MISSION_SELECTION_FILL() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_FILL_MISSION_SELECTION_BOX); }
		NATIVE_DECL void MISSION_PICTURE_FILL() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_FILL_MISSION_PICTURE_BOX); }
		NATIVE_DECL void MISSION_TEXT_FILL() { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_FILL_MISSION_TEXT_BOX); }
		NATIVE_DECL void COMPILE(int context, const char* cfgText, int flags) { NATIVE_INVOKE<Void>((Void)HASH::CONFIG_COMPILE, context, cfgText, flags); }
		// -- GO_* config writers (used while a .cfg/GO script block is parsed) --
		NATIVE_DECL void GO_PLAYER(const char* name) { NATIVE_INVOKE<Void>((Void)HASH::GO_PLAYER, name); }
		NATIVE_DECL void GO_ACTIVE_MISSION(int mission) { NATIVE_INVOKE<Void>((Void)HASH::GO_ACTIVE_MISSION, mission); }
		NATIVE_DECL void GO_IN_REMAP(int key1, int key2, int action) { NATIVE_INVOKE<Void>((Void)HASH::GO_IN_REMAP, key1, key2, action); }
		NATIVE_DECL void GO_IN_MOU_INV(int invert) { NATIVE_INVOKE<Void>((Void)HASH::GO_IN_MOU_INV, invert); }
		NATIVE_DECL void GO_IN_MOU_SENS(float sensitivity) { NATIVE_INVOKE<Void>((Void)HASH::GO_IN_MOU_SENS, sensitivity); }
		NATIVE_DECL void GO_GFX_DISP(int displayMode) { NATIVE_INVOKE<Void>((Void)HASH::GO_GFX_DISP, displayMode); }
		NATIVE_DECL void GO_GFX_DEVICE(int deviceIndex) { NATIVE_INVOKE<Void>((Void)HASH::GO_GFX_DEVICE, deviceIndex); }
		NATIVE_DECL void GO_GFX_GAMMA(float gamma) { NATIVE_INVOKE<Void>((Void)HASH::GO_GFX_GAMMA, gamma); }
		NATIVE_DECL void GO_GFX_PERFORMANCE(int flags) { NATIVE_INVOKE<Void>((Void)HASH::GO_GFX_PERFORMANCE, flags); }
		NATIVE_DECL void GO_GAME_LANG(int language) { NATIVE_INVOKE<Void>((Void)HASH::GO_GAME_LANG, language); }
		NATIVE_DECL void GO_GAME_DIFF(int difficulty) { NATIVE_INVOKE<Void>((Void)HASH::GO_GAME_DIFF, difficulty); }
		NATIVE_DECL void GO_IS_BLOOD(int blood) { NATIVE_INVOKE<Void>((Void)HASH::GO_IS_BLOOD, blood); }
		NATIVE_DECL void GO_SOUND_SPEECH(float volume) { NATIVE_INVOKE<Void>((Void)HASH::GO_SOUND_SPEECH, volume); }
		NATIVE_DECL void GO_SOUND_MUSIC(float volume) { NATIVE_INVOKE<Void>((Void)HASH::GO_SOUND_MUSIC, volume); }
		NATIVE_DECL void GO_SOUND_FX(float volume) { NATIVE_INVOKE<Void>((Void)HASH::GO_SOUND_FX, volume); }
		NATIVE_DECL void GO_CONTENT_PW(const char* password) { NATIVE_INVOKE<Void>((Void)HASH::GO_CONTENT_CONTROL_PW, password); }
	}
	// ═══════════════════════════════════════════════════════════════
	// MENU - MenuManager screen-stack control (all verified vs igi.exe).
	// ═══════════════════════════════════════════════════════════════
	namespace MENU {
		NATIVE_DECL void REQUEST_SCREEN(int screenId, int flags) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_REQUEST_SCREEN, screenId, flags); }
		NATIVE_DECL void PUSH_SCREEN(int screenId) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_PUSH_SCREEN, screenId); }
		NATIVE_DECL void POP_SCREEN(int param) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_POP_SCREEN, param); }
		NATIVE_DECL void LEAVE_MENUS(int p1, int p2) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_LEAVE_MENUS, p1, p2); }
		NATIVE_DECL void SET_LANGUAGE(int langIndex) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_SET_LANGUAGE, langIndex); }
		NATIVE_DECL void FORCE_UPDATE_WINDOW(int param) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_FORCE_UPDATE_WINDOW, param); }
		NATIVE_DECL void ACTIVATE_POPUP(int popupId) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_ACTIVATE_POPUP_SCREEN, popupId); }
		NATIVE_DECL void DEACTIVATE_POPUP() { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_DEACTIVATE_POPU_SCREEN); }
		NATIVE_DECL void SET_ENABLED(int enabled) { NATIVE_INVOKE<Void>((Void)HASH::MENU_MANAGER_SET_ENABLED, enabled); }
		NATIVE_DECL int* OPEN(int p1, const char* menu_str, char p3, char p4, int p5) { return NATIVE_INVOKE<int*>((Void)HASH::MENU_MANAGER, p1, menu_str, p3, p4, p5); }
	}
	// ═══════════════════════════════════════════════════════════════
	// LEVELFLOW - level flow state helpers.
	// ═══════════════════════════════════════════════════════════════
	namespace LEVELFLOW {
		NATIVE_DECL int BREAK_CUTSCENE_KEY_GET() { return NATIVE_INVOKE<int>((Void)HASH::LEVEL_FLOW_GET_BREAK_CUT_SCENE_KEY); }
		NATIVE_DECL int IS_COUNTRY_USA() { return NATIVE_INVOKE<int>((Void)HASH::LEVEL_FLOW_IS_COUNTRY_USA); }
		NATIVE_DECL void LEVEL_FAILED() { NATIVE_INVOKE<Void>((Void)HASH::LEVEL_FLOW_LEVEL_FAILED); }
	}

	// ═══════════════════════════════════════════════════════════════
	// MOVIE - movie subtitle registration (parser context).
	// ═══════════════════════════════════════════════════════════════
	namespace MOVIE {
		NATIVE_DECL void SUBTITLE_REGISTER_FONT() { NATIVE_INVOKE<Void>((Void)HASH::MOVIE_SUBTITLE_REGISTER_FONT); }
		NATIVE_DECL void SUBTITLE_REGISTER_TEXT() { NATIVE_INVOKE<Void>((Void)HASH::MOVIE_SUBTITLE_REGISTER_TEXT); }
	}

	// ═══════════════════════════════════════════════════════════════
	// CONTROLS - controls-menu slider conversion helpers.
	// ═══════════════════════════════════════════════════════════════
	namespace CONTROLS {
		NATIVE_DECL float FLOAT_FROM_OFFSET(int offset) { return NATIVE_INVOKE<float>((Void)HASH::CONTROLS_MENU_CONVERT_FLOAT_FROM_OFFSET, offset); }
		NATIVE_DECL int OFFSET_FROM_FLOAT(float value) { return NATIVE_INVOKE<int>((Void)HASH::CONTROLS_MENU_CONVERT_OFFSET_FROM_FLOAT, value); }
	}

	// ═══════════════════════════════════════════════════════════════
	// TASK - task definition helpers (parser context).
	// ═══════════════════════════════════════════════════════════════
	namespace TASK {
		NATIVE_DECL void NEW() { NATIVE_INVOKE<Void>((Void)HASH::TASK_NEW); }
		NATIVE_DECL void DECLARE_PARAMETERS() { NATIVE_INVOKE<Void>((Void)HASH::TASK_DECLARE_PARAMETERS); }
		NATIVE_DECL void TYPE_SET(int** task_str, int taskId) { NATIVE_INVOKE<Void>((Void)HASH::TASKTYPE_SET, task_str, taskId); }
		NATIVE_DECL uint16_t TYPE_REGISTER(uint32_t p1, uint32_t p2, uint16_t parent_type, uint32_t p4) { return NATIVE_INVOKE<uint16_t>((Void)HASH::TASKTYPE_REGISTER, p1, p2, parent_type, p4); }
		NATIVE_DECL bool TYPE_IS_DERIVED_FROM(uint16_t type_id, uint16_t base_type_id) { return NATIVE_INVOKE<bool>((Void)HASH::TASKTYPE_IS_DERIVED_FROM, type_id, base_type_id); }
		NATIVE_DECL void BREAK_SCRIPT() { NATIVE_INVOKE<Void>((Void)HASH::BREAK_SCRIPT); }
	}

	// ═══════════════════════════════════════════════════════════════
	// FLOW - game flow state machine requests.
	// FLOW_EVENT: QUIT=1, INTRO=2, MAINMENU=3, GAME=4, RESTART_GAME=5.
	// ═══════════════════════════════════════════════════════════════
	namespace FLOW {
		NATIVE_DECL void REQUEST_EVENT(int eventId) { NATIVE_INVOKE<Void>((Void)HASH::FLOW_REQUEST_EVENT, eventId); }
	}

	// ═══════════════════════════════════════════════════════════════
	// SYMBOL - game-data symbol table management.
	// ═══════════════════════════════════════════════════════════════
	namespace SYMBOL {
		NATIVE_DECL int DATA_LOAD(char* sym_buf, char* sym_path, char* sym_name) { return NATIVE_INVOKE<int>((Void)HASH::GAME_DATA_SYMBOL_LOAD, sym_buf, sym_path, sym_name); }
		NATIVE_DECL void DATA_REMOVE(char* sym_buf) { NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REMOVE, sym_buf); }
		NATIVE_DECL void REGISTER_BOOL8(int** sym_buf, int sym_addr) { NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_BOOL8, sym_buf, sym_addr); }
		NATIVE_DECL void REGISTER_INT16(int** sym_buf, int sym_addr) { NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_INT16, sym_buf, sym_addr); }
		NATIVE_DECL void REGISTER_INT32(int** sym_buf, int sym_addr) { NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_INT32, sym_buf, sym_addr); }
		NATIVE_DECL void REGISTER_REAL32(int** sym_buf, int sym_addr) { NATIVE_INVOKE<Void>((Void)HASH::GAME_DATA_SYMBOL_REGISTER_REAL32, sym_buf, sym_addr); }
		NATIVE_DECL void REMOVE(int* p1, int* symbol_name) { NATIVE_INVOKE<Void>((Void)HASH::SYMBOL_REMOVE, p1, symbol_name); }
		NATIVE_DECL int* CHECK(int* p1, int** symbol_name, int* p3) { return NATIVE_INVOKE<int*>((Void)HASH::SYMBOL_CHECK, p1, symbol_name, p3); }
		NATIVE_DECL void CONTEXT_SET(int* p1, int* p2, int p3) { NATIVE_INVOKE<Void>((Void)HASH::SCRIPT_SETSYMBOL_CXT, p1, p2, p3); }
		NATIVE_DECL void BUF_INIT(int* buff_arr1, int buff_arr2, int buff, int buff_size) { NATIVE_INVOKE<Void>((Void)HASH::SCRIPT_BUF_INIT, buff_arr1, buff_arr2, buff, buff_size); }
		NATIVE_DECL void WARNING_LEVEL_SET(int level) { NATIVE_INVOKE<Void>((Void)HASH::SCRIPT_SET_WARNING_LEVEL, level); }
		NATIVE_DECL void INIT(const char* file_name, int p2, int p3, int p4) { NATIVE_INVOKE<Void>((Void)HASH::SCRIPT_INIT, file_name, p2, p3, p4); }
	}
	// ═══════════════════════════════════════════════════════════════
	// DISPLAY - display-mode control (verified vs igi.exe + IGIPatch).
	// ═══════════════════════════════════════════════════════════════
	namespace DISPLAY {
		NATIVE_DECL int SET_MODE(void* modeStruct) { return NATIVE_INVOKE<int>((Void)HASH::DISPLAY_SET_MODE, modeStruct); }
		NATIVE_DECL void* GET_ACTIVE_MODE() { return NATIVE_INVOKE<void*>((Void)HASH::DISPLAY_GET_ACTIVE_MODE); }
		NATIVE_DECL void BACKGROUND_COLOUR_SET(int r, int g, int b) { NATIVE_INVOKE<Void>((Void)HASH::DISPLAY_SET_BACKGROUND_COLOUR_FN, r, g, b); }
	}

	// ═══════════════════════════════════════════════════════════════
	// APPCONTEXT - app-context engine flags (IGIPatch-corroborated).
	// ═══════════════════════════════════════════════════════════════
	namespace APPCONTEXT {
		NATIVE_DECL void DEBUGGED_SET(int state) { NATIVE_INVOKE<Void>((Void)HASH::APP_CONTEXT_SET_DEBUGGED, state); }
		NATIVE_DECL void DEBUGTEXT_SET(int state) { NATIVE_INVOKE<Void>((Void)HASH::APP_CONTEXT_SET_DEBUGTEXT_STATE, state); }
		NATIVE_DECL void LIGHTMAPS_SET(int used) { NATIVE_INVOKE<Void>((Void)HASH::APP_CONTEXT_SET_LIGHTMAPS_USED, used); }
		NATIVE_DECL void TERRAIN_LIGHTMAPS_SET(int used) { NATIVE_INVOKE<Void>((Void)HASH::APP_CONTEXT_SET_TERRAIN_LIGHTMAPS_USED, used); }
	}

	// ═══════════════════════════════════════════════════════════════
	// PICTURE / SPRITE / TRANSCONTEXT - low-level render helpers.
	// ═══════════════════════════════════════════════════════════════
	namespace PICTURE {
		NATIVE_DECL int WIDTH_GET(void* picture) { return NATIVE_INVOKE<int>((Void)HASH::PICTURE_GET_WIDTH, picture); }
		NATIVE_DECL int HEIGHT_GET(void* picture) { return NATIVE_INVOKE<int>((Void)HASH::PICTURE_GET_HEIGHT, picture); }
	}

	namespace SPRITE {
		// 14-arg quad-sprite registration; arg layout not fully mapped.
		NATIVE_DECL void REGISTER_4AZ(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14) { NATIVE_INVOKE<Void>((Void)HASH::QSPRITE_REGISTER_4AZ, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14); }
	}

	namespace TRANSCONTEXT {
		NATIVE_DECL void SET_ACTIVE(void* ctx) { NATIVE_INVOKE<Void>((Void)HASH::TRANSCONTEXT_SET_ACTIVE_TRANS_CONTEXT, ctx); }
	}
	// ═══════════════════════════════════════════════════════════════
	// SDK coverage extensions - wrappers for remaining verified natives.
	// ═══════════════════════════════════════════════════════════════
	namespace MISC {
		// printf-style variadic (proven: call-site add esp,8 + vsprintf helper 0x4A5702).
		NATIVE_DECL void ERROR_SHOW(const char* format) { NATIVE_INVOKE<Void>((Void)HASH::ERROR_SHOW, format); }
		NATIVE_DECL void ERROR_SHOW(const char* format, const void* arg) { NATIVE_INVOKE<Void>((Void)HASH::ERROR_SHOW, format, arg); }
		NATIVE_DECL void WARNING_SHOW(const char* format) { NATIVE_INVOKE<Void>((Void)HASH::WARNING_SHOW, format); }
		NATIVE_DECL void WARNING_SHOW(const char* format, const void* arg) { NATIVE_INVOKE<Void>((Void)HASH::WARNING_SHOW, format, arg); }
		NATIVE_DECL void LOADING_SCREEN_SHOW(int loading_type) { NATIVE_INVOKE<Void>((Void)HASH::LOADING_SCREEN_SHOW, loading_type); }
	}

	namespace LEVEL {
		NATIVE_DECL void START(int param) { NATIVE_INVOKE<Void>((Void)HASH::LEVEL_START, param); }
	}

	namespace GAME {
		NATIVE_DECL void MISSION_SET(int mission) { NATIVE_INVOKE<Void>((Void)HASH::GAME_SET_MISSION, mission); }
		NATIVE_DECL void DELETE_HANDLER() { NATIVE_INVOKE<Void>((Void)HASH::GAME_DELETE_HANDLER); }
	}

	namespace SFX {
		NATIVE_DECL void RUNTIME_MUSIC_VOLUME_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::GAME_SET_MUSIC_VOLUME, volume); }
		NATIVE_DECL void RUNTIME_SFX_VOLUME_SET(float volume) { NATIVE_INVOKE<Void>((Void)HASH::GAME_SET_SFX_VOLUME, volume); }
		NATIVE_DECL void SOUND_LOAD(const char* sound_dir) { NATIVE_INVOKE<Void>((Void)HASH::SOUND_LOAD, sound_dir); }
		NATIVE_DECL void EVENT_TRIGGER(const char* event_name, uint32_t event_id, const uint32_t* params) { NATIVE_INVOKE<Void>((Void)HASH::SOUND_EVENT_TRIGGER, event_name, event_id, params); }
	}

 namespace WEAPON {
		NATIVE_DECL void AMMO_TYPE_OPEN() { NATIVE_INVOKE<Void>((Void)HASH::AMMO_TYPE_OPEN); }
		NATIVE_DECL int COUNT_GET() { return NATIVE_INVOKE<int>((Void)HASH::WEAPON_TOTAL); }
		NATIVE_DECL void* ENTITY_CREATE(uint32_t p1, uint16_t object_type, uint32_t weapon_type, uint32_t p4, uint8_t p5) { return NATIVE_INVOKE<void*>((Void)HASH::WEAPON_ENTITY_CREATE, p1, object_type, weapon_type, p4, p5); }
		NATIVE_DECL uint8_t FIRING_STATE_GET() { return NATIVE_INVOKE<uint8_t>((Void)HASH::WEAPON_FIRING_STATE_GET); }
		NATIVE_DECL void GUN_PICKUP(void* player, void* pickupEntity) { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_GUN_PICKUP, player, pickupEntity); }
		NATIVE_DECL void AMMO_PICKUP(void* player, void* pickupEntity) { NATIVE_INVOKE<Void>((Void)HASH::WEAPON_AMMO_PICKUP, player, pickupEntity); }
	}

	namespace HUMAN {
		NATIVE_DECL void TASK_VIEW_RESET(void* human) { NATIVE_INVOKE<Void>((Void)HASH::HUMAN_TASK_VIEW_RESET, human); }
	}

	namespace GRAPH {
		NATIVE_DECL void OPEN(unsigned int level, const char* graph_str) { NATIVE_INVOKE<Void>((Void)HASH::GRAPH_OPEN, level, graph_str); }
	}

 namespace SCRIPT {
		NATIVE_DECL void PARSE_CONFIG(const char* cfg_path) { NATIVE_INVOKE<Void>((Void)HASH::ANIM_TRIGGER_PARSE, cfg_path); }
 }

	// ═══════════════════════════════════════════════════════════════
	// PARSER - Define-block natives. Call ONLY from within their own
	// .qsc definition-block context (the engine's parser drives them).
	// ═══════════════════════════════════════════════════════════════
	namespace PARSER {
		NATIVE_DECL void DEFINE_AMMO_TYPE() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_AMMO_TYPE); }
		NATIVE_DECL void DEFINE_GAME_MATERIAL() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_GAME_MATERIAL); }
		NATIVE_DECL void DEFINE_GRAPH() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_GRAPH); }
		NATIVE_DECL void DEFINE_GROUP() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_GROUP); }
		NATIVE_DECL void DEFINE_HUMAN_PLAYER_AMMO_LIMIT() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_HUMAN_PLAYER_AMMO_LIMIT); }
		NATIVE_DECL void DEFINE_HUMAN_PLAYER_WEAPON_CATEGORY() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_HUMAN_PLAYER_WEAPON_CATEGORY); }
		NATIVE_DECL void DEFINE_HUMAN_PLAYER_WEAPON_CYCLE() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_HUMAN_PLAYER_WEAPON_CYCLE); }
		NATIVE_DECL void DEFINE_MAGIC_OBJ() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_MAGIC_OBJ); }
		NATIVE_DECL void DEFINE_MISSION() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_MISSION); }
		NATIVE_DECL void DEFINE_Q_MATERIAL() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_Q_MATERIAL); }
		NATIVE_DECL void DEFINE_SOUND() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_SOUND); }
		NATIVE_DECL void DEFINE_TRIGGER_ONCE() { NATIVE_INVOKE<Void>((Void)HASH::DEFINE_TRIGGER_ONCE); }
		NATIVE_DECL void CREATE_TERRAIN_TILE_MAP() { NATIVE_INVOKE<Void>((Void)HASH::CREATE_TERRAIN_TILE_MAP); }
		NATIVE_DECL void RIGID_DYNCUBE_OBJ_READ(uint32_t* cfg_file) { NATIVE_INVOKE<Void>((Void)HASH::RIGID_DYNCUBE_OBJ_READ, cfg_file); }
	}

	namespace CONFIG {
		NATIVE_DECL void* GET_ACTIVE_GRAPHIC_OPTIONS() { return NATIVE_INVOKE<void*>((Void)HASH::CONFIG_GET_ACTIVE_GRAPHIC_OPTIONS); }
	}

 namespace QTASK {
		NATIVE_DECL void HASH_TABLE_SET(int** symbol, void* handler, int nameVal, int p4, int p5, int p6, int p7) { NATIVE_INVOKE<Void>((Void)HASH::QTASK_HASH_TABLE, symbol, handler, nameVal, p4, p5, p6, p7); }
	}

 namespace PHYSICS {
		NATIVE_DECL void TYPE_PARSE_CONFIG(const char* cfg_path) { NATIVE_INVOKE<Void>((Void)HASH::PHYSICS_OBJ_TYPE_PARSE, cfg_path); }
	}

}
