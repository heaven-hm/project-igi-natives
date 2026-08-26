#include "Features_Editor.hpp"
#include "Natives/NativeHelper.hpp"
#include "Utils/FiberPool.hpp"
#include "Utils/FiberPoolEx.hpp"
#include "Utils/Logger.hpp"


void DllMainLoopEditor() {
	static bool model_bool = false;
	g_menu_screen = READ_PTR(menu_screen_ptr);
	g_game_level = LEVEL::GET();
	if (g_curr_level != g_game_level) {
		g_curr_level = g_game_level;
		g_level_changed = true;
	}

	if (g_level_changed) {

		if (READ_PTR(humanplayer_ptr) == NULL)
			GT_ShowError("Humanplayer structure isn't loaded or invalid\nSome of features related to humanplayer wont work.\n");
		else LOG_INFO("Humanplayer structure is loaded properly at address 0x%x", READ_PTR(humanplayer_ptr));

		if (READ_PTR(gun_pickup_ptr) == NULL)
			GT_ShowError("Weapon structure isn't loaded or invalid\nSome of features related to Weapon wont work.\n");
		else LOG_INFO("Weapon structure is loaded properly at address 0x%x", READ_PTR(gun_pickup_ptr));

		g_level_changed ^= 1;
	}

	if (g_menu_screen == MENU_SCREEN_MAINMENU) {

		game_resources.clear();
		g_level_graphs.clear();
	}

	else if (g_menu_screen == MENU_SCREEN_INGAME) {


		
#ifdef _DEBUG
		if (g_Utility.IsKeyPressed(VK_HOME)) {
			g_Utility.LogAllHotkeys(__FILE__);
		}
#endif

		//Ctrl-Menu Controls.
		if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F4)) {
			LOG_INFO("Ctrl+F4: Set FPS (from data)");
			try {
				auto internal_data = g_Utility.InternalDataRead();
				int frames = std::stoi(internal_data);
				FiberPool::Instance().RunExternal([=] {
					MISC::FRAMES_SET(frames);
					LOG_INFO("Game frames changed to %d FPS", frames);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F5)) {
			LOG_INFO("Ctrl+F5: Config Read");
			FiberPool::Instance().RunExternal([] {
				CONFIG::READ();
			}, 3);
			LOG_INFO("Game config read!");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F6)) {
			LOG_INFO("Ctrl+F6: Config Write");
			FiberPool::Instance().RunExternal([] {
				CONFIG::WRITE();
			}, 3);
			LOG_INFO("Game config write!");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F7)) {
			LOG_INFO("Ctrl+F7: Weapon Config Read");
			FiberPool::Instance().RunExternal([] {
				CONFIG::WEAPON_CONFIG_READ();
			}, 3);
			LOG_INFO("Weapon config read!");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F8)) {
			LOG_INFO("Ctrl+F8: Load Humanplayer");
			FiberPool::Instance().RunExternal([] {
				HUMAN::PLAYER_LOAD();
			}, 3);
			LOG_INFO("Humanplayer load success!");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F1)) {
			LOG_INFO("Ctrl+F1: Human Camera View Set (from data)");
			try {
				string internal_data = g_Utility.InternalDataRead();
				int view = std::stoi(internal_data);
				int cam_view = (view <= 0 || view > 5) ? 1 : view;
				FiberPool::Instance().RunExternal([=] {
					HUMAN::CAM_VIEW_SET(cam_view);
					LOG_INFO("Humanplayer Camera #%d", cam_view);
				}, 3);
			}
			catch (const std::exception& ex) {
				LOG_INFO("Invalid camera view: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F2)) {
			LOG_INFO("Ctrl+F2: Input Enable");
			FiberPool::Instance().RunExternal([] {
				GAME::INPUT_ENABLE();
			}, 3);
			LOG_INFO("Input enabled");
			g_PlayerEnabled = true;
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F3)) {
			LOG_INFO("Ctrl+F3: Input Disable");
			FiberPool::Instance().RunExternal([] {
				GAME::INPUT_DISABLE();
			}, 3);
			LOG_INFO("Input disabled");
			g_PlayerEnabled = false;
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD0)) {
			LOG_INFO("Ctrl+Numpad0: Free Camera Mode");

			FiberPool::Instance().RunExternal([] {
				GAME::INPUT_DISABLE();
			}, 3);
			g_PlayerEnabled = false;

			Camera::Controls controls;
			controls.UP(VK_SPACE);
			controls.DOWN(VK_MENU);
			controls.LEFT(VK_LEFT);
			controls.RIGHT(VK_RIGHT);
			controls.FORWARD(VK_UP);
			controls.BACKWARD(VK_DOWN);
			controls.CALIBRATE(VK_BACK);
			controls.QUIT(VK_HOME);
			controls.AXIS_OFF(0.5f);
			FiberPoolEx::Instance().RunExternal([controls]() mutable {
				g_Camera.FreeCam(controls);
				FiberPool::Instance().RunExternal([] {
					GAME::INPUT_ENABLE();
					g_PlayerEnabled = true;
					LOG_INFO("Free camera mode activated");
				}, 0);
			}, 0);
		}

		//Alt-Menu Controls.
		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F2)) {
			LOG_INFO("Alt+F2: Quit Level");
			FiberPool::Instance().RunExternal([] {
				QuitLevelMain();
			}, 100);
			LOG_INFO("Level quit");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F3)) {
			LOG_INFO("Alt+F3: Script Parse (file from data)");
			try {
				string script_file = g_Utility.InternalDataRead();
				LOG_INFO("Script Parsing file '%s'", script_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					int status = SCRIPT::PARSE(script_file); //Status '0' success, 'Non-zero' error.
					if (status == 0) LOG_INFO("Script Parsing file done!");
				}, 3);
				LOG_INFO("Script parsing completed");
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F4)) {
			LOG_INFO("Alt+F4: Script Assemble (file from data)");
			try {
				string script_file = g_Utility.InternalDataRead();
				LOG_INFO("Script Assembling file '%s'", script_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					int status = SCRIPT::ASSEMBLE(script_file); //Status '0' success, 'Non-zero' error.
					if (status == 0) LOG_INFO("Script Assemble file done!");
				}, 3);
				LOG_INFO("Script assembly completed");
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F5)) {
			LOG_INFO("Alt+F5: Script Compile (file from data)");
			FiberPool::Instance().RunExternal([] {
				ScriptCompile();
			}, 3);
			LOG_INFO("Script compile completed");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F6)) {
			LOG_INFO("Alt+F6: Resource Load (file from data)");
			try {
				string resource_file = g_Utility.InternalDataRead();
				LOG_INFO("Resource Load file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([resource_file] {
					auto resource_addr = (address_t)(intptr_t)RESOURCE::LOAD(resource_file);
					LOG_INFO("Resource loaded at 0x%X", resource_addr);
					string data = "Resource '" + resource_file + "' loaded at address " + HEX_ADDR_STR(resource_addr);
					g_Utility.InternalDataWrite(data);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F7)) {
			LOG_INFO("Alt+F7: Resource Unload (list from data)");
			try {
				string resource_file = g_Utility.InternalDataRead();
				LOG_INFO("Resource Unload file '%s'", resource_file.c_str());
				std::vector<string> res_list;
				string file_copy = resource_file;
				g_Utility.Tokenize(file_copy, '\n', res_list);
				FiberPool::Instance().RunExternal([res_list] {
					RESOURCE::UNLOAD(res_list);
				}, 3);
				LOG_INFO("Resources unloaded");
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F8)) {
			LOG_INFO("Alt+F8: Resource Unpack (file from data)");
			try {
				string resource_file = g_Utility.InternalDataRead();
				LOG_INFO("Resource Unpack file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([resource_file] {
					auto resource_addr = (address_t)(intptr_t)RESOURCE::UNPACK(resource_file);
					LOG_INFO("Resource unpacked at 0x%X", resource_addr);
					string data = "Resource '" + resource_file + "' unpacked at address " + HEX_ADDR_STR(resource_addr);
					g_Utility.InternalDataWrite(data);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F1)) {
			LOG_INFO("Alt+F1: Resource Flush (name from data)");
			try {
				string resource_file = g_Utility.InternalDataRead();
				LOG_INFO("Resource Flush file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([resource_file] {
					auto resource_addr = RESOURCE::FIND(resource_file);
					RESOURCE::FLUSH(resource_addr);
					string data = "Resource '" + resource_file + "' found at address " + HEX_ADDR_STR(resource_addr);
					g_Utility.InternalDataWrite(data);
				}, 3);
				LOG_INFO("Resource flushed");
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F9)) {
			LOG_INFO("Alt+F9: Resource IsLoaded? (name from data)");
			try {
				string resource_file = g_Utility.InternalDataRead();
				LOG_INFO("Resource is loaded file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([resource_file] {
					const bool is_loaded = RESOURCE::IS_LOADED(resource_file);
					string data = is_loaded ? "TRUE" : "FALSE";
					g_Utility.InternalDataWrite(data);
					LOG_INFO("Resource loaded status: %s", data.c_str());
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F10)) {
			LOG_INFO("Alt+F10: Resource Find (name from data)");
			try {
				string resource_file = g_Utility.InternalDataRead();
				LOG_INFO("Resource Unpack find name '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([resource_file] {
					auto resource_addr = RESOURCE::FIND(resource_file);
					string data = "Resource '" + resource_file + "' found at address " + HEX_ADDR_STR(resource_addr);
					LOG_INFO("'%s'", data.c_str());
					g_Utility.InternalDataWrite(HEX_ADDR_STR(resource_addr));
				}, 3);
				LOG_INFO("Resource found");
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F11)) {
			LOG_INFO("Alt+F11: Save Game Resource Info (to files)");
			FiberPool::Instance().RunExternal([] {
				RESOURCE::ANIMATION_INFO_SAVE("IGI_Animations.txt");
				RESOURCE::FONT_INFO_SAVE("IGI_Fonts.txt");
				RESOURCE::SOUND_INFO_SAVE("IGI_Sound.txt");
				RESOURCE::MATERIAL_INFO_SAVE("IGI_Material.txt");
				RESOURCE::LIGHTMAP_INFO_SAVE("IGI_Lightmap.txt");
				RESOURCE::OBJECT_INFO_SAVE("IGI_Object.txt");
				RESOURCE::RESOURCE_INFO_SAVE("IGI_Resource.txt");
				RESOURCE::TERRAIN_INFO_SAVE("IGI_Terrain.txt");
				RESOURCE::TEXTURE_INFO_SAVE("IGI_Texture.txt");
				RESOURCE::GRAPHICS_2D_INFO_SAVE("IGI_2D_Graphics.txt");
				RESOURCE::GRAPHICS_3D_INFO_SAVE("IGI_3D_Graphics.txt");
			}, 3);
			LOG_INFO("Game resource info saved to files");
		}

		//Shift-Menu Controls.
		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F1)) {
			LOG_INFO("Shift+F1: Remove MEF Model (from data)");
			try {
				string model = g_Utility.InternalDataRead();
				LOG_INFO("MEF Model remove '%s'", model.c_str());
				FiberPool::Instance().RunExternal([=] {
					RESOURCE::MEF_REMOVE_MODEL(model);
					LOG_INFO("MEF model removed");
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F2)) {
			LOG_INFO("Shift+F2: Restore MEF Models");
			FiberPool::Instance().RunExternal([] {
				RESOURCE::MEF_RESTORE_MODELS();
				LOG_INFO("MEF models restored");
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F3)) {
			LOG_INFO("Shift+F3: Extract MEF");
			FiberPool::Instance().RunExternal([] {
				RESOURCE::MEF_EXTRACT();
				LOG_INFO("MEF extracted");
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F4)) {
			LOG_INFO("Shift+F4: Load QVM (from data)");
			try {
				string qvm_file = g_Utility.InternalDataRead();
				LOG_INFO("QVM Load file '%s'", qvm_file.c_str());
				auto qvm_addr = QVM::LOAD(qvm_file);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F5)) {
			try {
				LOG_INFO("Shift+F5: Read QVM (from data)");
				string qvm_addr = g_Utility.InternalDataRead();
				LOG_INFO("QVM Read Address '%s'", qvm_addr.c_str());
				int status = QVM::READ(std::stoi(qvm_addr)); //Status '0' success, 'Non-zero' error.
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}
		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F6)) {

			try {
				LOG_INFO("Shift+F6: Cleanup QVM (from data)");
				string qvm_file = g_Utility.InternalDataRead();
				LOG_INFO("QVM cleanup file '%s'", qvm_file.c_str());
				FiberPool::Instance().RunExternal([qvm_file] {
					int* qvm_addr = QVM::LOAD(qvm_file);
					const int status = QVM::READ((int)(intptr_t)qvm_addr);
					if (status == 0) QVM::CLEANUP(qvm_addr);
					LOG_INFO("QVM cleanup status: %d", status);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}
		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F7)) {
			LOG_INFO("Shift+F7: Enable Music");
			FiberPool::Instance().RunExternal([] {
				SFX::MUSIC_ENABLE();
			}, 3);
			LOG_INFO("Music Enabled");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F8)) {
			LOG_INFO("Shift+F8: Disable Music");
			FiberPool::Instance().RunExternal([] {
				SFX::MUSIC_DISABLE();
			}, 3);
			LOG_INFO("Music Disabled");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_NUMPAD1)) {
			LOG_INFO("Shift+Numpad1: Set Volume (from data)");
			try {
				string volume = g_Utility.InternalDataRead();
				LOG_INFO("Volume set %s", volume.c_str());
				float vol = std::stof(volume);
				FiberPool::Instance().RunExternal([=] {
					SFX::VOLUME_SET(vol);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_NUMPAD2)) {
			LOG_INFO("Shift+Numpad2: Set Volume SFX (from data)");
			try {
				string volume = g_Utility.InternalDataRead();
				LOG_INFO("Volume SFX set %s", volume.c_str());
				float vol = std::stof(volume);
				FiberPool::Instance().RunExternal([=] {
					SFX::VOLUME_SFX_SET(vol);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F12)) {
			LOG_INFO("Shift+F12: Update Volume");
			try {
				FiberPool::Instance().RunExternal([] {
					SFX::VOLUME_UPDATE();
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F9)) {
			LOG_INFO("Shift+F9: Reset Graphics");
			try {
				FiberPool::Instance().RunExternal([] {
					GFX::RESET();
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		//Ctrl-Numpad Controls.

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_ADD)) {
			LOG_INFO("Ctrl+Numpad +: Get Player Active Name");
			try
			{
				string active_name = PLAYER::ACTIVE_NAME_GET();
				LOG_INFO("Player active name %s", active_name.c_str());

				string name(active_name.data());
				g_Utility.InternalDataWrite(name);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_SUBTRACT)) {
			LOG_INFO("Ctrl+Numpad -: Get Player Active Mission");
			try
			{
				int active_mission = PLAYER::ACTIVE_MISSION_GET();
				LOG_INFO("Player active mission %d", active_mission);

				if (active_mission > 0 && active_mission <= 14) {
					g_Utility.InternalDataWrite(std::to_string(active_mission));
				}
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD0)) {
			LOG_INFO("Ctrl+Numpad 0: Set Player Active Mission (from data)");
			try {
				string mission = g_Utility.InternalDataRead();
				LOG_INFO("Player Active mission set %s", mission.c_str());
				int mission_id = std::stoi(mission);
				FiberPool::Instance().RunExternal([=] {
					PLAYER::ACTIVE_MISSION_SET(mission_id);
				}, 3);
			}
			catch (const std::exception& ex) {
				LOG_INFO("Invalid mission id: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD1)) {
			LOG_INFO("Ctrl+Numpad 1: Set Player Active Name (from data)");
			string name = g_Utility.InternalDataRead();
			LOG_INFO("Player Active name set %s", name.c_str());
			FiberPool::Instance().RunExternal([=] {
				PLAYER::ACTIVE_NAME_SET(name);
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD2)) {
			LOG_INFO("Ctrl+Numpad 2: Set Player Index Mission (from data)");
			string data = g_Utility.InternalDataRead();
			std::vector<string> vec;
			g_Utility.Tokenize(data, '\n', vec);

			try {
				if (vec.size() < 2) throw std::invalid_argument("expected index and mission");
				int index = std::stoi(vec.at(0));
				byte mission = (byte)std::stoi(vec.at(1));
				FiberPool::Instance().RunExternal([=] {
					PLAYER::INDEX_MISSION_SET(index, mission);
				}, 3);
				LOG_INFO("Player index mission set mission %d\tIndex: %d", mission, index);
			}
			catch (const std::exception& ex) {
				LOG_INFO("Invalid indexed mission data: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD3)) {
			LOG_INFO("Ctrl+Numpad 3: Set Player Index Name (from data)");
			string data = g_Utility.InternalDataRead();
			std::vector<string> vec;
			g_Utility.Tokenize(data, '\n', vec);

			try {
				if (vec.size() < 2) throw std::invalid_argument("expected index and name");
				int index = std::stoi(vec.at(0));
				string name = vec.at(1);
				FiberPool::Instance().RunExternal([=] {
					PLAYER::INDEX_NAME_SET(index, name);
				}, 3);
				LOG_INFO("Player index name set name %s\tIndex: %d", name.c_str(), index);
			}
			catch (const std::exception& ex) {
				LOG_INFO("Invalid indexed player name data: %s", ex.what());
			}
		}
		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD4)) {
			LOG_INFO("Ctrl+Numpad 4: Load Game Material");
			FiberPool::Instance().RunExternal([] {
				MISC::GAMEMATERIAL_LOAD();
			}, 3);
			LOG_INFO("Game material loaded");
		}
		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD5)) {
			LOG_INFO("Ctrl+Numpad 5: Load Magic Object");
			FiberPool::Instance().RunExternal([] {
				MISC::MAGIC_OBJECT_LOAD();
			}, 3);
			LOG_INFO("Magic object loaded");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD6)) {
			LOG_INFO("Ctrl+Numpad 6: Load Physics Object");
			FiberPool::Instance().RunExternal([] {
				MISC::PHYSICS_OBJECT_LOAD();
			}, 3);
			LOG_INFO("Physics object loaded");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD7)) {
			LOG_INFO("Ctrl+Numpad 7: Load Anim Trigger");
			FiberPool::Instance().RunExternal([] {
				MISC::ANIM_TRIGGER_LOAD();
			}, 3);
			LOG_INFO("Anim trigger loaded");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD8)) {
			LOG_INFO("Ctrl+Numpad 8: Delete Cutscene");
			FiberPool::Instance().RunExternal([] {
				MISC::CUTSCENE_DELETE();
			}, 3);
			LOG_INFO("Cutscene removed");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_INSERT)) {
			LOG_INFO("Ctrl+Insert: Show Status Message");
			StatusMsgShow();
		}

		//Alt-Numpad Controls.
		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_HOME)) {
			LOG_INFO("CTRL+Home: Get Node Links (from data)");
			try
			{
				auto data = g_Utility.InternalDataRead();
				int graph_id = std::stoi(data);
				FiberPool::Instance().RunExternal([graph_id] {
					string node_links = GRAPH::GET_NODE_LINKS(graph_id);
					g_Utility.InternalDataWrite(node_links);
					LOG_INFO("Node links retrieved for graph ID: %d", graph_id);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (GT_IsKeyToggled(VK_SNAPSHOT)) {
			if (g_Console) g_Console->Clear();
		}
	}

	else if (g_menu_screen == MENU_SCREEN_RESTART) {
		soldiers.clear();
		if (!g_PlayerEnabled) GAME::INPUT_DISABLE();
	}
}
