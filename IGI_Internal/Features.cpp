#include "Features.hpp"
#include "CommonConst.hpp"
#include "Libs/GTLibc.hpp"
#include "Natives/NativeHelper.hpp"
#include "Utils/FiberPool.hpp"
#include "Utils/Utility.hpp"

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

#ifdef _DEBUG
    if (g_Utility.IsKeyPressed(VK_SPACE)) {
      g_Utility.LogAllHotkeys(__FILE__);
    }
#endif

    // Weapon pickup - (Random available weapon).
    if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F1)) {
      LOG_INFO("Ctrl+F1: Weapon pickup");
      try {
        int weapon_id = static_cast<int>(IGI::GetRandomAvailableWeapon());

        FiberPool::Instance().RunExternal(
            [=] {
              WEAPON::WEAPON_PICKUP(weapon_id);
			  LOG_INFO("Features: Executing weapon pickup task for id %d", weapon_id);
            },
            3);
      } catch (const std::exception &ex) {
        LOG_INFO("Exception: %s", ex.what());
      }
    }

    // Frames setting - Random FPS.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F2)) {
      LOG_INFO("Ctrl+F2: setting FPS");

      try {
        int frames = 30 + rand() % 211;

        FiberPool::Instance().RunExternal(
            [=] {
              MISC::FRAMES_SET(frames);
              LOG_INFO("Game frames changed to %d", frames);
            },
            3);
      } catch (const std::exception &ex) {
        LOG_INFO("Exception: %s", ex.what());
      }
    }

    // Humanplayer load.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F3)) {
      LOG_INFO("Ctrl+F3: loading humanplayer");

      FiberPool::Instance().RunExternal(
          [=] {
            HUMAN::PLAYER_LOAD();
            LOG_INFO("Humanplayer loaded");
          },
          3);
    }

    // Quit current level.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F4)) {
      LOG_INFO("Ctrl+F4: quiting new level");
      QuitLevelMain();
    }

    // Show status message.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F5)) {
      LOG_INFO("Ctrl+F5: showing status message");
      StatusMsgShow();
    }

  } else if (g_menu_screen == MENU_SCREEN_RESTART) {
    soldiers.clear();
    if (!g_PlayerEnabled)
      GAME::INPUT_DISABLE();
  }
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
    string data = g_Utility.InternalDataRead();

    FiberPool::Instance().RunExternal([=] { MISC::STATUS_MESSAGE_SHOW(data); },
                                      10);
    LOG_INFO("Status message shown: %s", data.c_str());

  } catch (const std::exception &ex) {
    LOG_INFO("Exception: %s", ex.what());
  }
}

void ScriptCompile() {
  try {
    string script_file = g_Utility.InternalDataRead();
    SCRIPT::COMPILE(script_file);
    LOG_INFO("Script Compile file '%s' done!", script_file.c_str());
  } catch (const std::exception &ex) {
    LOG_INFO("Exception: %s", ex.what());
  }
}

#pragma endregion
