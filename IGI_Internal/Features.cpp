#include "Features.hpp"
#include "Utils/FiberPool.hpp"

// Hotkey loop state
// FiberPool handles safe execution on main thread
void DllMainLoop() {
    g_menu_screen = READ_PTR(menu_screen_ptr);
    g_game_level = LEVEL::GET();
    //LOG_INFO("Features: Menu Screen = %d, Game Level = %d", g_menu_screen, g_game_level);

    // Detect level change
    if (g_curr_level != g_game_level) {
        g_curr_level = g_game_level;
        g_level_changed = true;
    }

    if (g_level_changed) {
        if (!READ_PTR(humanplayer_ptr))
            GT_ShowError("Humanplayer structure isn't loaded or invalid.\nSome features won't work.");
        //else LOG_INFO("Humanplayer structure loaded at 0x%x", READ_PTR(humanplayer_ptr));

        if (!READ_PTR(gun_pickup_ptr))
            GT_ShowError("Weapon structure isn't loaded or invalid.\nSome features won't work.");
        //else LOG_INFO("Weapon structure loaded at 0x%x", READ_PTR(gun_pickup_ptr));

        g_level_changed ^= 1;
    }

    // Menu handling
    if (g_menu_screen == MENU_SCREEN_MAINMENU) {
        game_resources.clear();
        g_level_graphs.clear();
    }
    else if (g_menu_screen == MENU_SCREEN_INGAME) {

        // Enable Debug mode.
        if (GT_HotKeysPressed(VK_CONTROL, VK_F1)) {
            LOG_INFO("Features: Ctrl+F1 pressed, toggling debug mode");
            DEBUG::INIT(GAME_FONT_BIG);
            DEBUG::ENABLE(g_DbgEnabled);
            string dbg_msg = "Debug mode " + std::string((g_DbgEnabled) ? "Enabled" : "Disabled");
            LOG_INFO("Features: %s", dbg_msg.c_str());
            MISC::STATUS_MESSAGE_SHOW(dbg_msg.c_str());
            g_DbgEnabled = !g_DbgEnabled;
        }

        // Restart game.
        else if (GT_IsKeyPressed(VK_CONTROL) && GT_IsKeyToggled(VK_F2)) {
            LOG_INFO("Features: Ctrl+F2 pressed, restarting level");
            RestartLevel();
        }

        // Weapon pickup - AK47 (or random available weapon).
        else if (GT_IsKeyPressed(VK_CONTROL) && GT_IsKeyToggled(VK_F3)) {
            LOG_INFO("Features: Ctrl+F3 pressed, dispatching weapon pickup");
            try {
                int weapon_id = static_cast<int>(IGI::GetRandomAvailableWeapon());
                LOG_INFO("Features: Chosen weapon id %d", weapon_id);

                FiberPool::Instance().RunExternal([=] {
                    LOG_INFO("Features: Executing weapon pickup task for id %d", weapon_id);
                    WEAPON::WEAPON_PICKUP(weapon_id);
                    LOG_INFO("Features: Weapon pickup task finished for id %d", weapon_id);
                }, 250, 250);
            }
            catch (const std::exception& ex)
            {
                LOG_INFO("Exception: %s", ex.what());
            }
        }

        // Frames setting - 60 FPS.
        else if (GT_HotKeysPressed(VK_CONTROL, VK_F4)) {
            LOG_INFO("Features: Ctrl+F4 pressed, setting FPS");
            try {
                int frames = 60;
                MISC::FRAMES_SET(frames);
                MISC::STATUS_MESSAGE_SHOW(string("Game frames changed to " + std::to_string(frames) + "FPS"));
            }
            catch (const std::exception& ex)
            {
                LOG_INFO("Exception: %s", ex.what());
            }
        }

        // Humanplayer load.
        else if (GT_HotKeysPressed(VK_CONTROL, VK_F5)) {
            LOG_INFO("Features: Ctrl+F5 pressed, loading humanplayer");
            HUMAN::HUMAN_PLAYER_LOAD();
            MISC::STATUS_MESSAGE_SHOW("Humanplayer load success!");
        }

        // Find next human camera via native (Ctrl+F6)
        else if (GT_HotKeysPressed(VK_CONTROL, VK_F6)) {
            LOG_INFO("Features: Ctrl+F6 pressed, finding next human camera");
            try {
                if (READ_PTR(DEBUG_KEYS_ADDR) != 1) {
                    *DEBUG_KEYS_ADDR = 1; // Enable debug keys if not already enabled.
                }
                int human_addr = (int)READ_PTR(humanplayer_ptr);
                if (human_addr == 0) {
                    MISC::STATUS_MESSAGE_SHOW("Humanplayer structure not available");
                }
                else {
                    HUMAN::FIND_NEXT_CAMERA(human_addr);
                    MISC::STATUS_MESSAGE_SHOW("Invoked FindNextHumanCamera");
                }
            }
            catch (const std::exception& ex)
            {
                LOG_INFO("Exception: %s", ex.what());
            }
        }
    }
    else if (g_menu_screen == MENU_SCREEN_RESTART) {
        soldiers.clear();
        if (!g_PlayerEnabled) GAME::INPUT_DISABLE();
    }
}

#pragma region Native Helper Methods
string InternalDataRead() {
    string data;
    try {
        string internal_data_file = g_Utility.GetModuleFolder() + "\\" + PROJECT_NAME + "-data.txt";
        std::ifstream in_stream(internal_data_file);

        if (in_stream.good()) {
            std::getline(in_stream, data);
        }
        else {
            throw std::runtime_error("Internal data file doesn't exist in current directory");
        }
    }
    catch (const std::exception& ex)
    {
        LOG_INFO("Exception: %s", ex.what());
    }
    return data;
}

bool InternalDataWrite(string data) {
    string internal_data_file = g_Utility.GetModuleFolder() + "\\" + PROJECT_NAME + "-data.txt";
    auto status = WriteFileType(internal_data_file, binary_t(data.begin(), data.end()), BINARY_FILE);
    return status;
}

void RestartLevel() {
    // Step 1: Reinitialize QTASK safely
    FiberPool::Instance().RunExternal([] {
        QTASK::HASH_INIT(1);
        QTASK::UPDATE();
        LEVEL::LOAD();
        }, 500, 100);
}

void StartLevelMain(int level, bool disable_warn, bool disable_err, int hash_val) {
    LEVEL::SET(level);
    if (disable_warn) MISC::WARNINGS_DISABLE();
    if (disable_err) MISC::ERRORS_DISABLE();

    QTASK::HASH_INIT(1);
    QTASK::UPDATE();

    auto StartLevelCaller = (int(__cdecl*)(int))0x00416900;
    StartLevelCaller(*(PINT)0x00567C8C);

    QTASK::RESET();
}

void QuitLevelMain() {
    auto sub_416d40 = (int(__cdecl*)
    ())0x00416D40;
    auto data = (int**)sub_416d40();

    auto sub_004015f0 = (int(__cdecl*)(int**))0x004015F0;
    sub_004015f0(data);

    *(int*)(0x00567c8c + 0x28) = 3; // Main menu screen ID

    auto sub_402890 = (int(__cdecl*)())0x402890;
    int menu_data = sub_402890();

    auto menuManager = (int(__cdecl*)(int, const char*, char, char, int))0x00418B00;
    menuManager(menu_data, "LOCAL:menusystem\\mainmenu.qsc", '\x1', '\x1', 1);
}


void StatusMsgShow() {
    try {
        string data = InternalDataRead();
        MISC::STATUS_MESSAGE_SHOW(data);
    }
    catch (const std::exception& ex)
    {
        LOG_INFO("Exception: %s", ex.what());
    }
}

void ScriptCompile() {
    try {
        string script_file = InternalDataRead();
        SCRIPT::COMPILE(script_file);
        LOG_INFO("Script Compile file '%s' done!", script_file.c_str());
    }
    catch (const std::exception& ex)
    {
        LOG_INFO("Exception: %s", ex.what());
    }
}

#pragma endregion
