#include "Features.hpp"
#include "Utils/FiberPool.hpp"
#include <map>

// Key press debouncing system
static std::map<int, bool> g_key_states;

// Function to detect single key press events for 30 FPS.
BOOL IsKeyPressed(CONST INT key) {
  SHORT key_state = GetAsyncKeyState(key);
  bool is_down = (key_state & 0x8000) != 0;
  bool &was_down = g_key_states[key]; // persistent state per key

  if (is_down && !was_down) {
    was_down = true; // mark as pressed
    return TRUE;     // fires once when going UP → DOWN
  }

  if (!is_down && was_down) {
    was_down = false; // reset when released
  }

  return FALSE; // held down or idle, no new press
}

// Main loop for DLL Internals.
void DllMainLoop() {
  g_menu_screen = READ_PTR(menu_screen_ptr);
  g_game_level = LEVEL::GET();
  // LOG_INFO("Features: Menu Screen = %d, Game Level = %d", g_menu_screen,
  // g_game_level);

  // Detect level change
  if (g_curr_level != g_game_level) {
    g_curr_level = g_game_level;
    g_level_changed = true;
  }

  if (g_level_changed) {
    if (!READ_PTR(humanplayer_ptr))
      GT_ShowError("Humanplayer structure isn't loaded or invalid.\nSome "
                   "features won't work.");
    else
      LOG_INFO("Humanplayer structure loaded at 0x%x",
               READ_PTR(humanplayer_ptr));

    if (!READ_PTR(gun_pickup_ptr))
      GT_ShowError("Weapon structure isn't loaded or invalid.\nSome features "
                   "won't work.");
    else
      LOG_INFO("Weapon structure loaded at 0x%x", READ_PTR(gun_pickup_ptr));

    g_level_changed ^= 1;
  }

  // Menu handling
  if (g_menu_screen == MENU_SCREEN_MAINMENU) {
    game_resources.clear();
    g_level_graphs.clear();
  }

  else if (g_menu_screen == MENU_SCREEN_INGAME) {

    if (IsKeyPressed(VK_SPACE)) {
      LOG_INFO("Mod Hotkeys information");
      LOG_INFO("F1: Toggle Debug Mode");
      LOG_INFO("F2: Find Next Human Camera");
      LOG_INFO("F3: Dispatch Weapon Pickup");
      LOG_INFO("F4: Set Random FPS");
      LOG_INFO("F5: Load Humanplayer");
      LOG_INFO("F6: Restart Level");
      LOG_INFO("F7: Start New Level");
      LOG_INFO("F8: Quit Current Level");
    }

    // Enable Debug mode.
    if (IsKeyPressed(VK_F1)) {

      LOG_INFO("F1 pressed, toggling debug mode");
      FiberPool::Instance().RunExternal(
          [=] {
            DEBUG::INIT(GAME_FONT_BIG);
            DEBUG::ENABLE(g_DbgEnabled);
            string dbg_msg =
                "Debug mode " +
                std::string((g_DbgEnabled) ? "Enabled" : "Disabled");
            LOG_INFO("Features: %s", dbg_msg.c_str());
          },
          3);
      g_DbgEnabled = !g_DbgEnabled;
    }

    // Restart game.
    else if (IsKeyPressed(VK_F2)) {
      LOG_INFO("F2 pressed, Finding next human camera");
      FiberPool::Instance().RunExternal(
          [=] {
            if (READ_PTR(DEBUG_KEYS_ADDR) != 1) {
              *DEBUG_KEYS_ADDR = 1; // Enable debug keys if not already enabled.
            }
            int human_addr = (int)READ_PTR(humanplayer_ptr);
            if (human_addr == 0) {
              MISC::STATUS_MESSAGE_SHOW("Humanplayer structure not available");
            } else {
              HUMAN::FIND_NEXT_CAMERA(human_addr);
              LOG_INFO("Humanplayer structure not available");
            }
          },
          3);
    }

    // Weapon pickup - (Random available weapon).
    else if (IsKeyPressed(VK_F3)) {
      LOG_INFO("F3 pressed, dispatching weapon pickup");
      try {
        int weapon_id = static_cast<int>(IGI::GetRandomAvailableWeapon());

        FiberPool::Instance().RunExternal(
            [=] {
              LOG_INFO("Features: Executing weapon pickup task for id %d",
                       weapon_id);
              WEAPON::WEAPON_PICKUP(weapon_id);
            },
            3);
      } catch (const std::exception &ex) {
        LOG_INFO("Exception: %s", ex.what());
      }
    }

    // Frames setting - Random FPS.
    else if (IsKeyPressed(VK_F4)) {
      LOG_INFO("F4 pressed, setting FPS");
      try {
        FiberPool::Instance().RunExternal(
            [=] {
              int frames = 30 + rand() % 211;
              MISC::FRAMES_SET(frames);
              LOG_INFO("Game frames changed to %d", frames);
            },
            3);
      } catch (const std::exception &ex) {
        LOG_INFO("Exception: %s", ex.what());
      }
    }

    // Humanplayer load.
    else if (IsKeyPressed(VK_F5)) {
      LOG_INFO("F5 pressed, loading humanplayer");

      FiberPool::Instance().RunExternal(
          [=] {
            HUMAN::PLAYER_LOAD();
            LOG_INFO("Humanplayer loaded");
          },
          3);
    }

    // Find next human camera via native (Ctrl+F6)
    else if (IsKeyPressed(VK_F6)) {
      LOG_INFO("F6 pressed, Restarting level");
      try {
        RestartLevel();
      } catch (const std::exception &ex) {
        LOG_INFO("Exception: %s", ex.what());
      }
    }

    // Start new level
    else if (IsKeyPressed(VK_F7)) {
      LOG_INFO("F7 pressed, starting new level");
      int next_level =
          (g_game_level >= GAME_LEVEL_MAX) ? 1 : (g_game_level + 1);
      StartLevelMain(next_level, true, true);
    }

    // Quit current level.
    else if (IsKeyPressed(VK_F8)) {
      LOG_INFO("F8 pressed, quiting new level");
      QuitLevelMain();
    }

  } else if (g_menu_screen == MENU_SCREEN_RESTART) {
    soldiers.clear();
    if (!g_PlayerEnabled)
      GAME::INPUT_DISABLE();
  }
}

#pragma region Native Helper Methods
string InternalDataRead() {
  string data;
  try {
    string internal_data_file =
        g_Utility.GetModuleFolder() + "\\" + PROJECT_NAME + "-data.txt";
    std::ifstream in_stream(internal_data_file);

    if (in_stream.good()) {
      std::getline(in_stream, data);
    } else {
      throw std::runtime_error(
          "Internal data file doesn't exist in current directory");
    }
  } catch (const std::exception &ex) {
    LOG_INFO("Exception: %s", ex.what());
  }
  return data;
}

bool InternalDataWrite(string data) {
  string internal_data_file =
      g_Utility.GetModuleFolder() + "\\" + PROJECT_NAME + "-data.txt";
  auto status = WriteFileType(internal_data_file,
                              binary_t(data.begin(), data.end()), BINARY_FILE);
  return status;
}

void RestartLevel() {
  FiberPool::Instance().RunExternal(
      [] {
        QTASK::HASH_INIT(1);
        QTASK::UPDATE();
        LEVEL::LOAD();
      },
      20 * 10);
}

void StartLevelMain(int level, bool disable_warn, bool disable_err,
                    int hash_val) {
  FiberPool::Instance().RunExternal(
      [=] {
        LEVEL::SET(level);
        if (disable_warn)
          MISC::WARNINGS_DISABLE();
        if (disable_err)
          MISC::ERRORS_DISABLE();

        QTASK::HASH_INIT(1);
        QTASK::UPDATE();

        auto level_caller = (int(__cdecl *)(int))0x00416900;
        level_caller(*(PINT)0x00567C8C);

        QTASK::RESET();
      },
      20 * 10);
}

void QuitLevelMain() {
  FiberPool::Instance().RunExternal(
      [=] {
        auto sub_416d40 = (int(__cdecl *)())0x00416D40;
        auto data = (int **)sub_416d40();

        auto sub_004015f0 = (int(__cdecl *)(int **))0x004015F0;
        sub_004015f0(data);

        *(int *)(0x00567C8C + 0x28) = 3; // Main menu screen ID

        auto sub_402890 = (int(__cdecl *)())0x402890;
        int menu_data = sub_402890();

        auto menuManager =
            (int(__cdecl *)(int, const char *, char, char, int))0x00418B00;
        menuManager(menu_data, "LOCAL:menusystem\\mainmenu.qsc", '\x1', '\x1',
                    1);
      },
      50 * 10);
}

void StatusMsgShow() {
  try {
    string data = InternalDataRead();
    MISC::STATUS_MESSAGE_SHOW(data);
  } catch (const std::exception &ex) {
    LOG_INFO("Exception: %s", ex.what());
  }
}

void ScriptCompile() {
  try {
    string script_file = InternalDataRead();
    SCRIPT::COMPILE(script_file);
    LOG_INFO("Script Compile file '%s' done!", script_file.c_str());
  } catch (const std::exception &ex) {
    LOG_INFO("Exception: %s", ex.what());
  }
}

#pragma endregion
