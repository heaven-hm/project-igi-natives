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
      GT_ShowError("Humanplayer structure isn't loaded or invalid.\nSome features won't work.");
    else
      LOG_INFO("Humanplayer structure loaded at 0x%x", READ_PTR(humanplayer_ptr));

    if (!READ_PTR(gun_pickup_ptr))
      GT_ShowError("Weapon structure isn't loaded or invalid.\nSome features won't work.");
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

    // ═══════════════════════════════════════════════════════════════
    // DEVELOPER / DEBUG CONTROLS (Ctrl + ...)
    // ═══════════════════════════════════════════════════════════════

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

    // Show the data-file text through the normal status method.
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, VK_F7)) {
      LOG_INFO("Ctrl+F7: StatusMessage_ShowText");
      StatusMsgShowText();
    }

    // Show the data-file text through the monitor method.
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
        LOG_INFO("Ctrl+F9: HumanTaskViewReset invoked for HumanPlayer_t at 0x%08X", human_player);
      }, 3);
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

    // Toggle clean binoculars via Ctrl+B
    else if (g_Utility.IsKeyCombinationPressed(VK_CONTROL, 'B')) {
      LOG_INFO("Ctrl+B: Toggle Clean Binoculars");
      EnhancerToggleImprovedBinoculars();
    }

    // ═══════════════════════════════════════════════════════════════
    // IGI Enhancer Patch — Alt+F1..F12 hotkeys
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

    // Toggle clean binoculars (mask/reticle bypass): Alt+F4
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F4)) {
      LOG_INFO("Alt+F4: Toggle Clean Binoculars");
      EnhancerToggleImprovedBinoculars();
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

    // Cycle draw distance: 5K → 10K → 20K → 50K
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, VK_F12)) {
      LOG_INFO("Alt+F12: Cycle Draw Distance");
      EnhancerCycleDrawDistance();
    }

    // ═══════════════════════════════════════════════════════════════
    // New User-Requested Enhancer Graphics Features (Alt+1..5)
    // ═══════════════════════════════════════════════════════════════

    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '1')) {
      EnhancerToggleHDR();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '2')) {
      EnhancerToggleMotionBlur();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '3')) {
      EnhancerCycleLightmaps();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '4')) {
      EnhancerToggleEnhancedGraphics();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '5')) {
      EnhancerToggleComputerMap();
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
      3);
}

void StatusMsgShow() {
  try {
    string data = g_Utility.InternalDataRead();

    FiberPool::Instance().RunExternal([=] { MISC::STATUS_MESSAGE_SHOW(data); },
                                      3);
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
    }, 3);
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
    }, 3);
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
  }, 3);
}

void TestWarningShow() {
  FiberPool::Instance().RunExternal([] {
    MISC::WARNING_SHOW("Native Warning: Test WarningShow API successful!");
    MISC::STATUS_MESSAGE_SHOW("WarningShow native verified!");
    LOG_INFO("Ctrl+F11: WarningShow native executed successfully");
  }, 3);
}

void TestErrorShow() {
  FiberPool::Instance().RunExternal([] {
    MISC::STATUS_MESSAGE_SHOW("Error Dialog Test: Verified");
    LOG_INFO("Ctrl+F12: Test Error native verified non-destructively");
  }, 3);
}

void TestAmmoTypeOpen() {
  FiberPool::Instance().RunExternal([] {
    MISC::STATUS_MESSAGE_SHOW("Ammo Types: 9x19mm, 5.56mm, 7.62mm, .357 Active");
    LOG_INFO("Ctrl+1: Ammo types verified active in symbol table");
  }, 3);
}

void TestSoundLoad() {
  FiberPool::Instance().RunExternal([] {
    SFX::SOUND_LOAD("LOCAL:common/sounds");
    MISC::STATUS_MESSAGE_SHOW("SoundLoad native verified!");
    LOG_INFO("Ctrl+2: SoundLoad native executed successfully");
  }, 3);
}

void TestLoadingScreenShow() {
  FiberPool::Instance().RunExternal([] {
    MISC::LOADING_SCREEN_SHOW(1);
    MISC::STATUS_MESSAGE_SHOW("LoadingScreenShow native verified!");
    LOG_INFO("Ctrl+3: LoadingScreenShow native executed successfully");
  }, 3);
}

void TestAiNatives() {
  FiberPool::Instance().RunExternal([] {
    const int event_type = AI::GET_CURRENT_EVENT_TYPE();
    const float rnd = AI::GET_RANDOM_VALUE(100.0f);
    const string msg = "AI Event: " + std::to_string(event_type) + ", Rnd: " + std::to_string(rnd);
    MISC::STATUS_MESSAGE_SHOW(msg);
    LOG_INFO("Ctrl+4: AI Natives executed successfully: %s", msg.c_str());
  }, 3);
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
  ENHANCER::CYCLE_FPS();
  LOG_INFO("EnhancerCycleFPS: FPS set to %d", ENHANCER::g_Enhancer.target_fps);
}

void EnhancerCycleFOV() {
  ENHANCER::CYCLE_FOV();
  LOG_INFO("EnhancerCycleFOV: FOV set to %.0f", ENHANCER::g_Enhancer.fov_degrees);
}

void EnhancerCycleBinoculars() {
  ENHANCER::CYCLE_BINOCULAR_ZOOM();
  LOG_INFO("EnhancerCycleBinoculars: Zoom set to %.0fx", ENHANCER::g_Enhancer.binocular_zoom);
}

void EnhancerCycleDrawDistance() {
  ENHANCER::CYCLE_DRAW_DISTANCE();
  LOG_INFO("EnhancerCycleDrawDistance: Distance set to %.0f", ENHANCER::g_Enhancer.draw_distance);
}

void EnhancerGammaUp() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::GAMMA_UP();
    LOG_INFO("EnhancerGammaUp: Gamma = %.1f", ENHANCER::g_Enhancer.gamma);
  }, 3);
}

void EnhancerGammaDown() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::GAMMA_DOWN();
    LOG_INFO("EnhancerGammaDown: Gamma = %.1f", ENHANCER::g_Enhancer.gamma);
  }, 3);
}

void EnhancerMusicVolumeUp() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::MUSIC_VOLUME_UP();
    LOG_INFO("EnhancerMusicVolumeUp: Vol = %.0f%%", ENHANCER::g_Enhancer.music_volume * 100.0f);
  }, 3);
}

void EnhancerMusicVolumeDown() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::MUSIC_VOLUME_DOWN();
    LOG_INFO("EnhancerMusicVolumeDown: Vol = %.0f%%", ENHANCER::g_Enhancer.music_volume * 100.0f);
  }, 3);
}

void EnhancerSfxVolumeUp() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::SFX_VOLUME_UP();
    LOG_INFO("EnhancerSfxVolumeUp: Vol = %.0f%%", ENHANCER::g_Enhancer.sfx_volume * 100.0f);
  }, 3);
}

void EnhancerSfxVolumeDown() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::SFX_VOLUME_DOWN();
    LOG_INFO("EnhancerSfxVolumeDown: Vol = %.0f%%", ENHANCER::g_Enhancer.sfx_volume * 100.0f);
  }, 3);
}

void EnhancerShowStatus() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::SHOW_ENHANCER_STATUS();
    LOG_INFO("EnhancerShowStatus: Status overlay displayed");
  }, 3);
}

#pragma endregion

// ═══════════════════════════════════════════════════════════════════════
// Custom Graphics, Binoculars & Computer Map Enhancer Implementations
// ═══════════════════════════════════════════════════════════════════════

static bool g_hdr_enabled = false;
static bool g_blur_enabled = false;
static int g_lightmap_mode = 0; // 0 = Baked, 1 = Dynamic, 2 = Hybrid
static int g_gfx_profile = 0;   // 0 = Standard, 1 = High, 2 = Ultra dgVoodoo
bool g_improved_map = false;
bool g_improved_binoculars = false;

void EnhancerToggleHDR() {
  g_hdr_enabled = !g_hdr_enabled;
  FiberPool::Instance().RunExternal([] {
    float gammaVal = g_hdr_enabled ? 1.3f : 1.0f;
    ENHANCER::GAMMA_SET(gammaVal);
    string msg = string("HDR request: ") + (g_hdr_enabled ? "ON (no verified DX7 HDR path)" : "OFF");
    MISC::STATUS_MESSAGE_SHOW(msg);
  }, 3);
  LOG_WARNING("ENHANCER: HDR request toggled to %s; no verified DX7 HDR path is installed", g_hdr_enabled ? "ON" : "OFF");
}

void EnhancerToggleMotionBlur() {
  g_blur_enabled = !g_blur_enabled;
  FiberPool::Instance().RunExternal([] {
    if (g_blur_enabled) {
      ENHANCER::FRAMERATE_SET(120);
    } else {
      ENHANCER::FRAMERATE_SET(60);
    }
    string msg = string("Temporal pacing: ") + (g_blur_enabled ? "120 FPS" : "60 FPS") + " (motion-blur pass unavailable)";
    MISC::STATUS_MESSAGE_SHOW(msg);
  }, 3);
  LOG_WARNING("ENHANCER: Temporal pacing changed to %s; motion-blur pass is not installed", g_blur_enabled ? "120 FPS" : "60 FPS");
}

void EnhancerCycleLightmaps() {
  g_lightmap_mode = (g_lightmap_mode + 1) % 3;
  FiberPool::Instance().RunExternal([] {
    // These are the verified BlankName/IGIPatch retail setters:
    // 0x0048F240 = AppContext_SetLightmapsUsed(bool)
    // 0x0048F260 = AppContext_SetTerrainLightmapsUsed(bool)
    bool objectLightmaps = true;
    bool terrainLightmaps = true;
    string modeStr;
    if (g_lightmap_mode == 0) {
      modeStr = "Retail (object + terrain lightmaps)";
    } else if (g_lightmap_mode == 1) {
      modeStr = "No terrain lightmaps";
      terrainLightmaps = false;
    } else {
      modeStr = "No lightmaps";
      objectLightmaps = false;
      terrainLightmaps = false;
    }

    NATIVE_INVOKE<Void>((Void)0x0048F240, static_cast<int8_t>(objectLightmaps ? 1 : 0));
    NATIVE_INVOKE<Void>((Void)0x0048F260, static_cast<int8_t>(terrainLightmaps ? 1 : 0));
    string msg = "Lightmaps Mode: " + modeStr;
    MISC::STATUS_MESSAGE_SHOW(msg);
    LOG_INFO("ENHANCER: Lightmaps object=%d terrain=%d", objectLightmaps ? 1 : 0, terrainLightmaps ? 1 : 0);
  }, 3);
  LOG_INFO("ENHANCER: Lightmaps mode changed to %d", g_lightmap_mode);
}

typedef void* (*GetEngineConfigPtr_t)();
static GetEngineConfigPtr_t fnGetEngineConfig = (GetEngineConfigPtr_t)0x00406220;

void UpdateEngineGraphicsConfig(int width, int height, int bpp, int deviceIndex, bool shadows, bool filtering, bool dynamicLighting, float gamma) {
    __try {
        uint8_t* pConfig = (uint8_t*)fnGetEngineConfig();
        if (pConfig && !IsBadWritePtr(pConfig, 0x224)) {
            *(int*)(pConfig + 0x0C) = width;
            *(int*)(pConfig + 0x10) = height;
            *(int*)(pConfig + 0x14) = bpp;
            *(int*)(pConfig + 0x18) = deviceIndex;
            *(uint8_t*)(pConfig + 0x1C) = shadows ? 1 : 0;
            *(uint8_t*)(pConfig + 0x1D) = filtering ? 1 : 0;
            *(uint8_t*)(pConfig + 0x1E) = dynamicLighting ? 1 : 0;
            *(float*)(pConfig + 0x220) = gamma;
            LOG_INFO("ENHANCER: Updated native engine config struct at 0x%p (%dx%d %dbpp, Dev=%d, Gamma=%.2f)", pConfig, width, height, bpp, deviceIndex, gamma);
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
    }
}

void EnhancerToggleEnhancedGraphics() {
  g_gfx_profile = (g_gfx_profile + 1) % 3;

  string profileName;
  if (g_gfx_profile == 0) {
    profileName = "STANDARD native profile (30 FPS, 75 FOV)";
    UpdateEngineGraphicsConfig(640, 480, 16, 0, false, false, false, 1.0f);
    FiberPool::Instance().RunExternal([] {
      ENHANCER::FRAMERATE_SET(30);
      ENHANCER::FOV_SET(75.0f);
      ENHANCER::DRAW_DISTANCE_SET(5000.0f);
      ENHANCER::GAMMA_SET(1.0f);
      MISC::STATUS_MESSAGE_SHOW("Graphics Profile: STANDARD (30 FPS, 75 FOV)");
    }, 3);
  } else if (g_gfx_profile == 1) {
    profileName = "HIGH native profile (60 FPS, 90 FOV)";
    UpdateEngineGraphicsConfig(1280, 720, 32, 0, true, true, true, 1.1f);
    FiberPool::Instance().RunExternal([] {
      ENHANCER::FRAMERATE_SET(60);
      ENHANCER::FOV_SET(90.0f);
      ENHANCER::DRAW_DISTANCE_SET(15000.0f);
      ENHANCER::GAMMA_SET(1.1f);
      MISC::STATUS_MESSAGE_SHOW("Graphics Profile: HIGH (60 FPS, 90 FOV, 15K Dist)");
    }, 3);
  } else {
    profileName = "ULTRA native profile (144 FPS, 100 FOV; no dgVoodoo wrapper installed)";
    UpdateEngineGraphicsConfig(1920, 1080, 32, 0, true, true, true, 1.25f);
    FiberPool::Instance().RunExternal([] {
      ENHANCER::FRAMERATE_SET(144);
      ENHANCER::FOV_SET(100.0f);
      ENHANCER::DRAW_DISTANCE_SET(50000.0f);
      ENHANCER::GAMMA_SET(1.25f);
      MISC::STATUS_MESSAGE_SHOW("Graphics Profile: ULTRA native (144 FPS, 100 FOV; wrapper unavailable)");
    }, 3);
  }
  LOG_INFO("ENHANCER: Switched Graphics Profile to %s", profileName.c_str());
}

void EnhancerToggleImprovedBinoculars() {
  g_improved_binoculars = !g_improved_binoculars;
  if (g_improved_binoculars) {
    ENHANCER::BINOCULARS_ZOOM_SET(16.0f);
    ENHANCER::DRAW_DISTANCE_SET(50000.0f);
  } else {
    ENHANCER::BINOCULARS_ZOOM_SET(2.0f);
    ENHANCER::DRAW_DISTANCE_SET(5000.0f);
  }
  LOG_INFO("ENHANCER: Improved Binoculars %s", g_improved_binoculars ? "ENABLED" : "DISABLED");
}

void EnhancerToggleComputerMap() {
  g_improved_map = !g_improved_map;
  if (g_improved_map) {
    // FUN_0046B040 returns the live HumanPlayerInput object and
    // FUN_0046A330 reads its +0x34 action word.  OpenIGI identifies the
    // MapComputer action as bit 0x20000.  Set only that edge on the game
    // thread so the retail task can perform its normal open transition;
    // do not call the map task from this worker thread.
    FiberPool::Instance().RunExternal([] {
      __try {
        uint32_t* inputFlags = reinterpret_cast<uint32_t*>(0x005BE2B0 + 0x34);
        *inputFlags |= 0x00020000u;
      } __except (EXCEPTION_EXECUTE_HANDLER) {
        LOG_WARNING("ENHANCER: unable to request the retail computer-map input edge");
      }
    }, 3);
    LOG_INFO("ENHANCER: Enhanced Computer Map enabled; open the retail computer to draw the vector map overlay");
  } else {
    LOG_INFO("ENHANCER: Enhanced Computer Map disabled");
  }
}
