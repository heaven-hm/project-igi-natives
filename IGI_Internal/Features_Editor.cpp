#include "Features_Editor.hpp"
#include "Utils/FiberPool.hpp"
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
		
		if (g_Utility.IsKeyPressed(VK_SPACE)) {
			LOG_INFO("Mod Hotkeys information: Editor_DLL");
			// Ctrl + Fx
			LOG_INFO("Ctrl+F1: Toggle Debug Mode");
			LOG_INFO("Ctrl+F2: Update & Load Level");
			LOG_INFO("Ctrl+F3: Weapon Pickup (ID from data)");
			LOG_INFO("Ctrl+F4: Set FPS (from data)");
			LOG_INFO("Ctrl+F5: Config Read");
			LOG_INFO("Ctrl+F6: Config Write");
			LOG_INFO("Ctrl+F7: Weapon Config Read");
			LOG_INFO("Ctrl+F8: Load Humanplayer");
			LOG_INFO("Ctrl+F9: Human Camera View Set (from data)");
			LOG_INFO("Ctrl+F10: Input Enable");
			LOG_INFO("Ctrl+F11: Input Disable");
			LOG_INFO("Ctrl+F12: Free Camera Mode");

			// Shift + Fx
			LOG_INFO("Shift+F1: Remove MEF Model (from data)");
			LOG_INFO("Shift+F2: Restore MEF Models");
			LOG_INFO("Shift+F3: Extract MEF");
			LOG_INFO("Shift+F4: Load QVM File (from data)");
			LOG_INFO("Shift+F5: QVM Read (address from data)");
			LOG_INFO("Shift+F6: QVM Cleanup (file from data)");
			LOG_INFO("Shift+F7: Music Enable");
			LOG_INFO("Shift+F8: Music Disable");
			LOG_INFO("Shift+F9: Volume Set (from data)");
			LOG_INFO("Shift+F10: SFX Volume Set (from data)");
			LOG_INFO("Shift+F11: Volume Update");
			LOG_INFO("Shift+F12: Graphics Reset");

			// Alt + Fx
			LOG_INFO("Alt+F1: Start Level (level from data)");
			LOG_INFO("Alt+F2: Quit Level");
			LOG_INFO("Alt+F3: Script Parse (file from data)");
			LOG_INFO("Alt+F4: Script Assemble (file from data)");
			LOG_INFO("Alt+F5: Script Compile (file from data)");
			LOG_INFO("Alt+F6: Resource Load (file from data)");
			LOG_INFO("Alt+F7: Resource Unload (list from data)");
			LOG_INFO("Alt+F8: Resource Unpack (file from data)");
			LOG_INFO("Alt+F9: Resource Flush (name from data)");
			LOG_INFO("Alt+F10: Resource IsLoaded? (name from data)");
			LOG_INFO("Alt+F11: Resource Find (name from data)");
			LOG_INFO("Alt+F12: Save Game Resource Info (to files)");

			// Ctrl + Numpad and others
			LOG_INFO("Ctrl+Add: Write Active Player Name to data");
			LOG_INFO("Ctrl+Subtract: Write Active Mission to data");
			LOG_INFO("Ctrl+Numpad0: Set Active Mission (from data)");
			LOG_INFO("Ctrl+Numpad1: Set Active Name (from data)");
			LOG_INFO("Ctrl+Numpad2: Set Index/Mission (from data)");
			LOG_INFO("Ctrl+Numpad3: Set Index/Name (from data)");
			LOG_INFO("Ctrl+Numpad4: Load GameMaterial");
			LOG_INFO("Ctrl+Numpad5: Load MagicObject");
			LOG_INFO("Ctrl+Numpad6: Load PhysicsObject");
			LOG_INFO("Ctrl+Numpad7: Load AnimTrigger");
			LOG_INFO("Ctrl+Numpad8: Delete Cutscene");
			LOG_INFO("Ctrl+Insert: Show Status Message (from data)");
			LOG_INFO("Ctrl+Home: Graph Node Links (graph id from data)");
			LOG_INFO("PrintScreen: Clear Console");
		}

		//Ctrl-Menu Controls.
		if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F1)) {
			FiberPool::Instance().RunExternal([=] {
				DEBUG::INIT(GAME_FONT_BIG);
				DEBUG::ENABLE(g_DbgEnabled);
				string dbg_msg = "Debug mode " + std::string((g_DbgEnabled) ? "Enabled" : "Disabled");
				LOG_INFO("%s", dbg_msg.c_str());
			}, 3);
			g_DbgEnabled = !g_DbgEnabled;
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F2)) {
			FiberPool::Instance().RunExternal([] {
				QTASK::UPDATE();
				LEVEL::LOAD();
			}, 20 * 10);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F3)) {
			try {
				auto internal_data = InternalDataRead();
				int weapon_id = std::stoi(internal_data);
				FiberPool::Instance().RunExternal([=] {
					WEAPON::WEAPON_PICKUP(weapon_id);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F4)) {
			try {
				auto internal_data = InternalDataRead();
				int frames = std::stoi(internal_data);
				FiberPool::Instance().RunExternal([=] {
					MISC::FRAMES_SET(frames);
					MISC::STATUS_MESSAGE_SHOW(string("Game frames changed to " + std::to_string(frames) + "FPS"));
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F5)) {
			FiberPool::Instance().RunExternal([] {
				CONFIG::READ();
				MISC::STATUS_MESSAGE_SHOW("Game config read!");
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F6)) {
			FiberPool::Instance().RunExternal([] {
				CONFIG::WRITE();
				MISC::STATUS_MESSAGE_SHOW("Game config write!");
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F7)) {
			FiberPool::Instance().RunExternal([] {
				CONFIG::WEAPON_CONFIG_READ();
				MISC::STATUS_MESSAGE_SHOW("Weapon config read!");
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F8)) {
			FiberPool::Instance().RunExternal([] {
				HUMAN::PLAYER_LOAD();
				MISC::STATUS_MESSAGE_SHOW("Humanplayer load success!");
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F9)) {
			auto internal_data = InternalDataRead();
			int view = std::stoi(internal_data);
			int cam_view = (view <= 0 || view > 5) ? 1 : view;
			FiberPool::Instance().RunExternal([=] {
				HUMAN::CAM_VIEW_SET(cam_view);
				MISC::STATUS_MESSAGE_SHOW("Humanplayer Camera #" + std::to_string(cam_view));
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F10)) {
			FiberPool::Instance().RunExternal([] {
				GAME::INPUT_ENABLE();
			}, 3);
			g_PlayerEnabled = true;
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F11)) {
			FiberPool::Instance().RunExternal([] {
				GAME::INPUT_DISABLE();
			}, 3);
			g_PlayerEnabled = false;
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F12)) {
			FiberPool::Instance().RunExternal([] {
				GAME::INPUT_DISABLE();
				
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

				g_Camera.RunFreeCamThread(controls);
				GAME::INPUT_ENABLE();
			}, 3);
			g_PlayerEnabled = false;
			g_PlayerEnabled = true;
		}

		//Alt-Menu Controls.
		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F1)) {
			try {
				string level = InternalDataRead();
				LOG_INFO("StarLevel level '%s'", level.c_str());
				int level_num = std::stoi(level);
				FiberPool::Instance().RunExternal([=] {
					StartLevelMain(level_num);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F2)) {
			FiberPool::Instance().RunExternal([] {
				QuitLevelMain();
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F3)) {
			try {
				string script_file = InternalDataRead();
				LOG_INFO("Script Parsing file '%s'", script_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					int status = SCRIPT::PARSE(script_file); //Status '0' success, 'Non-zero' error.
					if (status == 0) MISC::STATUS_MESSAGE_SHOW("Script Parsing file done!");
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F4)) {
			try {
				string script_file = InternalDataRead();
				LOG_INFO("Script Assembling file '%s'", script_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					int status = SCRIPT::ASSEMBLE(script_file); //Status '0' success, 'Non-zero' error.
					if (status == 0) MISC::STATUS_MESSAGE_SHOW("Script Assemble file done!");
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F5)) {
			FiberPool::Instance().RunExternal([] {
				ScriptCompile();
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F6)) {
			try {
				string resource_file = InternalDataRead();
				LOG_INFO("Resource Load file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					auto resource_addr = RESOURCE::LOAD(resource_file);
					string data = "Resource '" + resource_file + "' loaded at address " + HEX_ADDR_STR(resource_addr);
					InternalDataWrite(data);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F7)) {
			try {
				string resource_file = InternalDataRead();
				LOG_INFO("Resource Unload file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([resource_file] {
					std::vector<string> res_list;
					string file_copy = resource_file;
					g_Utility.Tokenize(file_copy, '\n', res_list);
					RESOURCE::UNLOAD(res_list);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F8)) {
			try {
				string resource_file = InternalDataRead();
				LOG_INFO("Resource Unpack file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					auto resource_addr = RESOURCE::UNPACK(resource_file);
					string data = "Resource '" + resource_file + "' unpacked at address " + HEX_ADDR_STR(resource_addr);
					InternalDataWrite(data);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F9)) {
			try {
				string resource_file = InternalDataRead();
				LOG_INFO("Resource Flush file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					auto resource_addr = RESOURCE::FIND(resource_file);
					RESOURCE::FLUSH(resource_addr);
					string data = "Resource '" + resource_file + "' found at address " + HEX_ADDR_STR(resource_addr);
					InternalDataWrite(data);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F10)) {
			try {
				string resource_file = InternalDataRead();
				LOG_INFO("Resource is loaded file '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					bool is_loaded = RESOURCE::IS_LOADED(resource_file);
					string data = is_loaded ? "TRUE" : "FALSE";
					InternalDataWrite(data);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F11)) {
			try {
				string resource_file = InternalDataRead();
				LOG_INFO("Resource Unpack find name '%s'", resource_file.c_str());
				FiberPool::Instance().RunExternal([=] {
					auto resource_addr = RESOURCE::FIND(resource_file);
					string data = "Resource '" + resource_file + "' found at address " + HEX_ADDR_STR(resource_addr);
					LOG_INFO("'%s'", data.c_str());
					InternalDataWrite(HEX_ADDR_STR(resource_addr));
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F12)) {
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
		}

		//Shift-Menu Controls.
		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F1)) {
			try {
				string model = InternalDataRead();
				LOG_INFO("MEF Model remove '%s'", model.c_str());
				FiberPool::Instance().RunExternal([=] {
					RESOURCE::MEF_REMOVE_MODEL(model);
				}, 3);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F2)) {
			FiberPool::Instance().RunExternal([] {
				RESOURCE::MEF_RESTORE_MODELS();
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F3)) {
			FiberPool::Instance().RunExternal([] {
				RESOURCE::MEF_EXTRACT();
			}, 3);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F4)) {
			try {
				string qvm_file = InternalDataRead();
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

				string qvm_addr = InternalDataRead();
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
				string qvm_file = InternalDataRead();
				LOG_INFO("QVM cleanup file '%s'", qvm_file.c_str());
				auto qvm_addr = QVM::LOAD(qvm_file);
				int status = QVM::READ((int)qvm_addr); //Overloaded method 'QVM::READ(int)'
				if (status == 0) QVM::CLEANUP(qvm_addr);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}
		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F7)) {
			SFX::MUSIC_ENABLE();
			LOG_INFO("Music Enabled");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F8)) {
			SFX::MUSIC_DISABLE();
			LOG_INFO("Music Disabled");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F9)) {
			string volume = InternalDataRead();
			LOG_INFO("Volume set %s", volume.c_str());
			SFX::VOLUME_SET(std::stof(volume));
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F10)) {
			try {
				string volume = InternalDataRead();
				LOG_INFO("Volume SFX set %s", volume.c_str());
				SFX::VOLUME_SFX_SET(std::stof(volume));
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F11)) {
			try {
				SFX::VOLUME_UPDATE();
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_SHIFT, VK_F12)) {
			try {
				GFX::RESET();
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		//Ctrl-Numpad Controls.

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_ADD)) {
			try
			{
				string active_name = PLAYER::ACTIVE_NAME_GET();
				LOG_INFO("Player active name %s", active_name.c_str());

				string name(active_name.data());
				InternalDataWrite(name);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_SUBTRACT)) {
			try
			{
				int active_mission = PLAYER::ACTIVE_MISSION_GET();
				LOG_INFO("Player active mission %d", active_mission);

				if (active_mission > 0 && active_mission <= 14) {
					InternalDataWrite(std::to_string(active_mission));
				}
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD0)) {
			string mission = InternalDataRead();
			LOG_INFO("Player Active mission set %d", mission.c_str());
			PLAYER::ACTIVE_MISSION_SET(std::stoi(mission));
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD1)) {
			string name = InternalDataRead();
			LOG_INFO("Player Active name set %d", name.c_str());
			PLAYER::ACTIVE_NAME_SET(name);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD2)) {
			string data = InternalDataRead();
			std::vector<string> vec;
			g_Utility.Tokenize(data, '\n', vec);

			int index = 0;
			byte mission = 1;
			index = std::stoi(vec.at(0));
			mission = std::stoi(vec.at(1));

			LOG_INFO("Player index mission set mission %d\tIndex: %d", mission, index);
			PLAYER::INDEX_MISSION_SET(index, mission);
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD3)) {
			string data = InternalDataRead();
			std::vector<string> vec;
			g_Utility.Tokenize(data, '\n', vec);

			int index = 0;
			string name = "Jones";
			index = std::stoi(vec.at(0));
			name = std::stoi(vec.at(1));

			LOG_INFO("Player index name set name %s\tIndex: %d", name, index);
			PLAYER::INDEX_NAME_SET(index, name);
		}
		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD4)) {
			MISC::GAMEMATERIAL_LOAD();
		}
		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD5)) {
			MISC::MAGIC_OBJECT_LOAD();
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD6)) {
			MISC::PHYSICS_OBJECT_LOAD();
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD7)) {
			MISC::ANIM_TRIGGER_LOAD();
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_NUMPAD8)) {
			MISC::CUTSCENE_DELETE();
			MISC::STATUS_MESSAGE_SHOW("Cutscene removed");
		}

		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_INSERT)) {
			StatusMsgShow();
		}

		//Alt-Numpad Controls.
		else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_HOME)) {
			try
			{
				auto data = InternalDataRead();
				int graph_id = std::stoi(data);
				string node_links = GRAPH::GET_NODE_LINKS(graph_id);
				InternalDataWrite(node_links);
			}
			catch (const std::exception& ex)
			{
				LOG_INFO("Exception: %s", ex.what());
			}
		}

		else if (GT_IsKeyToggled(VK_SNAPSHOT)) {
			g_Console->Clear();
		}
	}

	else if (g_menu_screen == MENU_SCREEN_RESTART) {
		soldiers.clear();
		if (!g_PlayerEnabled) GAME::INPUT_DISABLE();
	}
}