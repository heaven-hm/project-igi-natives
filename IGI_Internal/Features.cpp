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
    if (g_Utility.IsKeyPressed(VK_HOME)) {
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
              LOG_INFO("Features: Executing weapon pickup task for id %d",
                       weapon_id);
            },
            3);
      } catch (const std::exception &ex) {
        LOG_INFO("Exception: %s", ex.what());
      }
    }

    // Frames setting - Random FPS.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F2)) {
      LOG_INFO("Ctrl+F2: Setting FPS");

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
      LOG_INFO("Ctrl+F3: Load humanplayer");

      FiberPool::Instance().RunExternal(
          [=] {
            HUMAN::PLAYER_LOAD();
            LOG_INFO("Humanplayer loaded");
          },
          3);
    }

    // Free camera mode.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F4)) {
      LOG_INFO("Ctrl+F4: Free Camera Mode");

      FiberPool::Instance().RunExternal([] { GAME::INPUT_DISABLE(); }, 3);
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
      g_Camera.RunFreeCamFiber(controls);

      FiberPool::Instance().RunExternal([] { GAME::INPUT_ENABLE(); }, 3);
      LOG_INFO("Free camera mode activated");
      g_PlayerEnabled = true;
    }

    // Show status message.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F5)) {
      LOG_INFO("Ctrl+F5: Show status message");
      StatusMsgShow();
    }

    // Script compile.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F6)) {
      LOG_INFO("Ctrl+F6: Write config");
      CONFIG::WRITE();
    }

    // Show the data-file text through the Ghidra-identified normal status method.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F7)) {
      LOG_INFO("Ctrl+F7: StatusMessage_ShowText");
      StatusMsgShowText();
    }

    // Show the data-file text through the Ghidra-identified monitor method.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F8)) {
      LOG_INFO("Ctrl+F8: StatusMessage_ShowMonitorText");
      StatusMsgShowMonitorText();
    }

    // Reset the HumanPlayer_t view structure after zooming.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F9)) {
      LOG_INFO("Ctrl+F9: HumanTaskViewReset");
      FiberPool::Instance().RunExternal([] {
        const int human_player = READ_PTR(humanplayer_ptr);
        if (!human_player) {
          LOG_INFO("Ctrl+F9: HumanPlayer_t pointer is unavailable");
          return;
        }
        HUMAN::TASK_VIEW_RESET();
        LOG_INFO("Ctrl+F9: HumanTaskViewReset invoked for HumanPlayer_t at 0x%08X",
                 human_player);
      }, 10);
    }

    // Read PlayerXPHit and display the returned value in the status message.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F10)) {
      LOG_INFO("Ctrl+F10: PlayerXPHit");
      PlayerXPHitShow();
    }

    // Test WarningShow native.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F11)) {
      LOG_INFO("Ctrl+F11: TestWarningShow");
      TestWarningShow();
    }

    // Test ErrorShow native.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F12)) {
      LOG_INFO("Ctrl+F12: TestErrorShow");
      TestErrorShow();
    }

    // Test AmmoTypeOpen native.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, '1')) {
      LOG_INFO("Ctrl+1: TestAmmoTypeOpen");
      TestAmmoTypeOpen();
    }

    // Test SoundLoad native.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, '2')) {
      LOG_INFO("Ctrl+2: TestSoundLoad");
      TestSoundLoad();
    }

    // Test LoadingScreenShow native.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, '3')) {
      LOG_INFO("Ctrl+3: TestLoadingScreenShow");
      TestLoadingScreenShow();
    }

    // Test AI Natives.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, '4')) {
      LOG_INFO("Ctrl+4: TestAiNatives");
      TestAiNatives();
    }

    // ═══════════════════════════════════════════════════════════════
    // IGI Enhancer Patch — Alt+F1..F10 hotkeys
    // ═══════════════════════════════════════════════════════════════

    // Cycle FPS: 30 → 60 → 120 → 144
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F1)) {
      LOG_INFO("Alt+F1: Cycle FPS");
      EnhancerCycleFPS();
    }

    // Cycle FOV: 75 → 90 → 100 → 110
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F2)) {
      LOG_INFO("Alt+F2: Cycle FOV");
      EnhancerCycleFOV();
    }

    // Cycle binoculars zoom: 2x → 4x → 8x → 12x → 16x
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F3)) {
      LOG_INFO("Alt+F3: Cycle Binoculars Zoom");
      EnhancerCycleBinoculars();
    }

    // Cycle draw distance: 5K → 10K → 20K → 50K
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F4)) {
      LOG_INFO("Alt+F4: Cycle Draw Distance");
      EnhancerCycleDrawDistance();
    }

    // Gamma up (+0.1)
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F5)) {
      LOG_INFO("Alt+F5: Gamma Up");
      EnhancerGammaUp();
    }

    // Gamma down (-0.1)
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F6)) {
      LOG_INFO("Alt+F6: Gamma Down");
      EnhancerGammaDown();
    }

    // Music volume up (+10%)
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F7)) {
      LOG_INFO("Alt+F7: Music Volume Up");
      EnhancerMusicVolumeUp();
    }

    // Music volume down (-10%)
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F8)) {
      LOG_INFO("Alt+F8: Music Volume Down");
      EnhancerMusicVolumeDown();
    }

    // SFX volume up (+10%)
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F9)) {
      LOG_INFO("Alt+F9: SFX Volume Up");
      EnhancerSfxVolumeUp();
    }

    // SFX volume down (-10%)
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F10)) {
      LOG_INFO("Alt+F10: SFX Volume Down");
      EnhancerSfxVolumeDown();
    }

    // Show enhancer status overlay
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F11)) {
      LOG_INFO("Alt+F11: Show Enhancer Status");
      EnhancerShowStatus();
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

void StatusMsgShowText() {
  try {
    const string data = g_Utility.InternalDataRead();
    if (data.empty()) {
      LOG_INFO("Ctrl+F7: IGI-Internals-data.txt is empty or unavailable");
      return;
    }
    FiberPool::Instance().RunExternal([data] {
      MISC::STATUS_MESSAGE_SHOW_TEXT(data.c_str());
    }, 10);
  } catch (const std::exception &ex) {
    LOG_INFO("Ctrl+F7 exception: %s", ex.what());
  }
}

void StatusMsgShowMonitorText() {
  try {
    const string data = g_Utility.InternalDataRead();
    if (data.empty()) {
      LOG_INFO("Ctrl+F8: IGI-Internals-data.txt is empty or unavailable");
      return;
    }
    FiberPool::Instance().RunExternal([data] {
      MISC::STATUS_MESSAGE_SHOW_MONITOR_TEXT(data.c_str());
    }, 10);
  } catch (const std::exception &ex) {
    LOG_INFO("Ctrl+F8 exception: %s", ex.what());
  }
}

void HumanTaskViewReset() {
  const int human_player = READ_PTR(humanplayer_ptr);
  if (!human_player) {
    LOG_INFO("Ctrl+F9: HumanPlayer_t pointer is unavailable");
    return;
  }
  HUMAN::TASK_VIEW_RESET();
  LOG_INFO("Ctrl+F9: HumanTaskViewReset invoked for HumanPlayer_t at 0x%08X",
           human_player);
}

void PlayerXPHitShow() {
  FiberPool::Instance().RunExternal([] {
    const uint32_t hit_value = HUMAN::PLAYER_XP_HIT();
    const string message = "Player Hit: " + std::to_string(hit_value);
    LOG_INFO("Ctrl+F10: %s", message.c_str());
    MISC::STATUS_MESSAGE_SHOW(message);
  }, 10);
}

void TestWarningShow() {
  FiberPool::Instance().RunExternal([] {
    MISC::WARNING_SHOW("Native Warning: Test WarningShow API successful!");
    MISC::STATUS_MESSAGE_SHOW("WarningShow native verified!");
    LOG_INFO("Ctrl+F11: WarningShow native executed successfully");
  }, 10);
}

void TestErrorShow() {
  FiberPool::Instance().RunExternal([] {
    MISC::ERROR_SHOW("Native Error: Test ErrorShow API successful!");
    MISC::STATUS_MESSAGE_SHOW("ErrorShow native verified!");
    LOG_INFO("Ctrl+F12: ErrorShow native executed successfully");
  }, 10);
}

void TestAmmoTypeOpen() {
  FiberPool::Instance().RunExternal([] {
    WEAPON::AMMO_TYPE_OPEN();
    MISC::STATUS_MESSAGE_SHOW("AmmoTypeOpen native verified!");
    LOG_INFO("Ctrl+1: AmmoTypeOpen native executed successfully");
  }, 10);
}

void TestSoundLoad() {
  FiberPool::Instance().RunExternal([] {
    SFX::SOUND_LOAD("LOCAL:common/sounds");
    MISC::STATUS_MESSAGE_SHOW("SoundLoad native verified!");
    LOG_INFO("Ctrl+2: SoundLoad native executed successfully");
  }, 10);
}

void TestLoadingScreenShow() {
  FiberPool::Instance().RunExternal([] {
    MISC::LOADING_SCREEN_SHOW(1);
    MISC::STATUS_MESSAGE_SHOW("LoadingScreenShow native verified!");
    LOG_INFO("Ctrl+3: LoadingScreenShow native executed successfully");
  }, 10);
}

void TestAiNatives() {
  FiberPool::Instance().RunExternal([] {
    const int event_type = AI::GET_CURRENT_EVENT_TYPE();
    const float rnd = AI::GET_RANDOM_VALUE(100.0f);
    const string msg = "AI Event: " + std::to_string(event_type) + ", Rnd: " + std::to_string(rnd);
    MISC::STATUS_MESSAGE_SHOW(msg);
    LOG_INFO("Ctrl+4: AI Natives executed successfully: %s", msg.c_str());
  }, 10);
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

// ═══════════════════════════════════════════════════════════════════════
// IGI Enhancer Patch — Handler implementations
// ═══════════════════════════════════════════════════════════════════════

void EnhancerCycleFPS() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_FPS();
    LOG_INFO("EnhancerCycleFPS: FPS set to %d", ENHANCER::g_Enhancer.target_fps);
  }, 10);
}

void EnhancerCycleFOV() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_FOV();
    LOG_INFO("EnhancerCycleFOV: FOV set to %.0f", ENHANCER::g_Enhancer.fov_degrees);
  }, 10);
}

void EnhancerCycleBinoculars() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_BINOCULAR_ZOOM();
    LOG_INFO("EnhancerCycleBinoculars: Zoom set to %.0fx", ENHANCER::g_Enhancer.binocular_zoom);
  }, 10);
}

void EnhancerCycleDrawDistance() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_DRAW_DISTANCE();
    LOG_INFO("EnhancerCycleDrawDistance: Distance set to %.0f", ENHANCER::g_Enhancer.draw_distance);
  }, 10);
}

void EnhancerGammaUp() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::GAMMA_UP();
    LOG_INFO("EnhancerGammaUp: Gamma = %.1f", ENHANCER::g_Enhancer.gamma);
  }, 10);
}

void EnhancerGammaDown() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::GAMMA_DOWN();
    LOG_INFO("EnhancerGammaDown: Gamma = %.1f", ENHANCER::g_Enhancer.gamma);
  }, 10);
}

void EnhancerMusicVolumeUp() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::MUSIC_VOLUME_UP();
    LOG_INFO("EnhancerMusicVolumeUp: Vol = %.0f%%", ENHANCER::g_Enhancer.music_volume * 100.0f);
  }, 10);
}

void EnhancerMusicVolumeDown() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::MUSIC_VOLUME_DOWN();
    LOG_INFO("EnhancerMusicVolumeDown: Vol = %.0f%%", ENHANCER::g_Enhancer.music_volume * 100.0f);
  }, 10);
}

void EnhancerSfxVolumeUp() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::SFX_VOLUME_UP();
    LOG_INFO("EnhancerSfxVolumeUp: Vol = %.0f%%", ENHANCER::g_Enhancer.sfx_volume * 100.0f);
  }, 10);
}

void EnhancerSfxVolumeDown() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::SFX_VOLUME_DOWN();
    LOG_INFO("EnhancerSfxVolumeDown: Vol = %.0f%%", ENHANCER::g_Enhancer.sfx_volume * 100.0f);
  }, 10);
}

void EnhancerShowStatus() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::SHOW_ENHANCER_STATUS();
    LOG_INFO("EnhancerShowStatus: Status overlay displayed");
  }, 10);
}

#pragma endregion
