#include "Features.hpp"
#include "CommonConst.hpp"
#include "Libs/GTLibc.hpp"
#include "Logging/RuntimeLog.hpp"
#include "Natives/NativeHelper.hpp"
#include "Utils/FiberPool.hpp"
#include "Utils/Utility.hpp"

// Main loop for DLL Natives.
void DllMainLoop() {
  g_menu_screen = READ_PTR(menu_screen_ptr);
  g_game_level = LEVEL::GET();
  ObserveFreeCamContext(g_game_level.load(), g_menu_screen.load());
  // LOG_INFO("Features: Menu Screen = %d, Game Level = %d", g_menu_screen,
  // g_game_level);

  // Detect level change
  if (g_curr_level != g_game_level) {
    g_curr_level = g_game_level;
    g_level_changed = true;
    {
      std::lock_guard<std::mutex> lock(game_resources_mutex);
      game_resources.clear();
    }
    {
      std::lock_guard<std::mutex> lock(game_resources_set_mutex);
      game_resources_set.clear();
    }
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
  if (QueueFreeCamStep()) return;
  if (g_FreeCamStepQueued.load()) return;

  // Menu handling
  if (g_menu_screen == MENU_SCREEN_MAINMENU) {
    {
      std::lock_guard<std::mutex> lock(game_resources_mutex);
      game_resources.clear();
    }
    {
      std::lock_guard<std::mutex> lock(game_resources_set_mutex);
      game_resources_set.clear();
    }
    g_level_graphs.clear();
  }

  else if (g_menu_screen == MENU_SCREEN_INGAME) {
    // Only Ctrl+F1 and Ctrl+F2 logging controls are handled above.
  } else if (g_menu_screen == MENU_SCREEN_RESTART) {
    soldiers.clear();
    if (!g_PlayerEnabled.load(std::memory_order_acquire))
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
