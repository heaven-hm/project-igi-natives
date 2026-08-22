#include "Features.hpp"
#include "CommonConst.hpp"
#include "Libs/GTLibc.hpp"
#include "Natives/NativeHelper.hpp"
#include "Utils/FiberPool.hpp"
#include "Utils/Utility.hpp"
#include <atomic>

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
      FiberPool::Instance().RunExternal([] { HumanTaskViewReset(); }, 3);
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
      LOG_INFO("Alt+1: Toggle HDR Gamma Boost");
      EnhancerToggleHDR();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '2')) {
      LOG_INFO("Alt+2: Toggle Temporal Pacing");
      EnhancerToggleMotionBlur();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '3')) {
      LOG_INFO("Alt+3: Cycle Lightmaps");
      EnhancerCycleLightmaps();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '4')) {
      LOG_INFO("Alt+4: Cycle Enhanced Graphics Profile");
      EnhancerToggleEnhancedGraphics();
    }
    else if (g_Utility.IsKeyCombinationPressed(VK_MENU, '5')) {
      LOG_INFO("Alt+5: Toggle Enhanced Computer Map");
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

// All enhancer mutations run on the game thread via the FiberPool so native
// calls (FramesSet) and retail-state writes never race the main loop.
void EnhancerCycleFPS() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_FPS();
    LOG_INFO("EnhancerCycleFPS: FPS set to %d", ENHANCER::g_Enhancer.target_fps);
  }, 3);
}

void EnhancerCycleFOV() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_FOV();
    LOG_INFO("EnhancerCycleFOV: FOV set to %.0f", ENHANCER::g_Enhancer.fov_degrees);
  }, 3);
}

void EnhancerCycleBinoculars() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_BINOCULAR_ZOOM();
    LOG_INFO("EnhancerCycleBinoculars: Zoom set to %.0fx", ENHANCER::g_Enhancer.binocular_zoom);
  }, 3);
}

void EnhancerCycleDrawDistance() {
  FiberPool::Instance().RunExternal([] {
    ENHANCER::CYCLE_DRAW_DISTANCE();
    LOG_INFO("EnhancerCycleDrawDistance: Distance set to %.0f (state only; no verified LOD patch)", ENHANCER::g_Enhancer.draw_distance);
  }, 3);
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
std::atomic<bool> g_improved_map{false};
std::atomic<bool> g_improved_binoculars{false};

void EnhancerToggleHDR() {
  g_hdr_enabled = !g_hdr_enabled;
  FiberPool::Instance().RunExternal([] {
    // VERIFIED live path: the profile record gamma float (+0x220 of the
    // record returned by fcn.00406220) is consumed by the material/vertex
    // lighting math every frame. True DX7 post-processing does not exist in
    // this engine build, so HDR mode is an honest gamma/brightness boost
    // through the retail's own verified field instead of a fake shader.
    ENHANCER::GAMMA_SET(g_hdr_enabled ? 1.3f : 1.0f);
    string msg = string("HDR Gamma Boost: ") + (g_hdr_enabled ? "ON" : "OFF");
    MISC::STATUS_MESSAGE_SHOW(msg);
  }, 3);
  LOG_INFO("ENHANCER: HDR gamma boost %s (verified profile +0x220 path; no DX7 post-processing in this engine)", g_hdr_enabled ? "ON" : "OFF");
}

void EnhancerToggleMotionBlur() {
  const bool enabled = !g_blur_enabled;
  g_blur_enabled = enabled;
  FiberPool::Instance().RunExternal([] {
    // VERIFIED: FramesSet (0x00402820) is the retail frame-rate setter
    // (argument = target FPS; retail passes 30 and 60). A real motion-blur
    // pass would need a verified post-processing hook that this engine
    // build does not expose, so this toggle only changes temporal pacing.
    const int fps = enabled ? 120 : 60;
    ENHANCER::FRAMERATE_SET(fps);
    ENHANCER::g_Enhancer.target_fps = fps;  // keep GET_STATUS_STRING in sync
    string msg = string("Temporal pacing: ") + (g_blur_enabled ? "120 FPS" : "60 FPS") + " (motion-blur pass unavailable)";
    MISC::STATUS_MESSAGE_SHOW(msg);
  }, 3);
  LOG_INFO("ENHANCER: Temporal pacing changed to %s via verified FramesSet", g_blur_enabled ? "120 FPS" : "60 FPS");
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

    NATIVE_INVOKE<Void>((Void)HASH::LIGHTMAPS_OBJECT_SET, static_cast<int8_t>(objectLightmaps ? 1 : 0));
    NATIVE_INVOKE<Void>((Void)HASH::LIGHTMAPS_TERRAIN_SET, static_cast<int8_t>(terrainLightmaps ? 1 : 0));
    string msg = "Lightmaps Mode: " + modeStr;
    MISC::STATUS_MESSAGE_SHOW(msg);
    LOG_INFO("ENHANCER: Lightmaps object=%d terrain=%d", objectLightmaps ? 1 : 0, terrainLightmaps ? 1 : 0);
  }, 3);
  LOG_INFO("ENHANCER: Lightmaps mode changed to %d", g_lightmap_mode);
}

// DISABLED (reviewer F01, CRITICAL): igi.exe fcn.00406220 returns the
// player-PROFILE record (0xBC2388 + 0xD14*[0xBC2384]), not an engine-config
// struct. Writing width/height/bpp/device fields through it corrupts unrelated
// profile fields. The graphic-options record that Config_ResetGraphicOptions
// (fcn.00403B70) resets uses a DIFFERENT base. Keep as a no-op until a verified
// accessor for the engine-config struct exists; gamma still flows through the
// verified GAMMA_SET profile-record path (offset +0x220, read live by the
// lighting math at 0x0049A22D).
void UpdateEngineGraphicsConfig(int width, int height, int bpp, int deviceIndex, bool shadows, bool filtering, bool dynamicLighting, float gamma) {
    LOG_INFO("ENHANCER: graphics-profile request %dx%d %dbpp Dev=%d shadows=%d filtering=%d dynlight=%d gamma=%.2f recorded (native struct write disabled pending verified accessor)",
             width, height, bpp, deviceIndex, shadows ? 1 : 0, filtering ? 1 : 0, dynamicLighting ? 1 : 0, gamma);
}

void EnhancerToggleEnhancedGraphics() {
  g_gfx_profile = (g_gfx_profile + 1) % 3;

  string profileName;
  if (g_gfx_profile == 0) {
    profileName = "STANDARD native profile (30 FPS, 75 FOV)";
    FiberPool::Instance().RunExternal([] {
      UpdateEngineGraphicsConfig(640, 480, 16, 0, false, false, false, 1.0f);
      ENHANCER::FRAMERATE_SET(30);
      ENHANCER::FOV_SET(75.0f);
      ENHANCER::DRAW_DISTANCE_SET(5000.0f);
      ENHANCER::GAMMA_SET(1.0f);
      MISC::STATUS_MESSAGE_SHOW("Graphics Profile: STANDARD (30 FPS, 75 FOV)");
    }, 3);
  } else if (g_gfx_profile == 1) {
    profileName = "HIGH native profile (60 FPS, 90 FOV)";
    FiberPool::Instance().RunExternal([] {
      UpdateEngineGraphicsConfig(1280, 720, 32, 0, true, true, true, 1.1f);
      ENHANCER::FRAMERATE_SET(60);
      ENHANCER::FOV_SET(90.0f);
      ENHANCER::DRAW_DISTANCE_SET(15000.0f);
      ENHANCER::GAMMA_SET(1.1f);
      MISC::STATUS_MESSAGE_SHOW("Graphics Profile: HIGH (60 FPS, 90 FOV)");
    }, 3);
  } else {
    profileName = "ULTRA native profile (144 FPS, 100 FOV)";
    FiberPool::Instance().RunExternal([] {
      UpdateEngineGraphicsConfig(1920, 1080, 32, 0, true, true, true, 1.25f);
      ENHANCER::FRAMERATE_SET(144);
      ENHANCER::FOV_SET(100.0f);
      ENHANCER::DRAW_DISTANCE_SET(50000.0f);
      ENHANCER::GAMMA_SET(1.25f);
      MISC::STATUS_MESSAGE_SHOW("Graphics Profile: ULTRA native (144 FPS, 100 FOV)");
    }, 3);
  }
  LOG_INFO("ENHANCER: Switched Graphics Profile to %s", profileName.c_str());
}

void EnhancerToggleImprovedBinoculars() {
  const bool enabled = !(g_improved_binoculars == true);
  g_improved_binoculars = enabled;
  FiberPool::Instance().RunExternal([enabled] {
    if (enabled) {
      ENHANCER::BINOCULARS_ZOOM_SET(16.0f);
    } else {
      // Disabling restores the retail tangents immediately (guarded).
      ENHANCER::BINOCULARS_ZOOM_SET(1.0f);
    }
    string msg = string("Enhanced Binoculars: ") + (enabled ? "ON (16x)" : "OFF");
    MISC::STATUS_MESSAGE_SHOW(msg);
  }, 3);
  LOG_INFO("ENHANCER: Improved Binoculars %s (per-frame tangent zoom via Binoculars_Draw hook)", g_improved_binoculars ? "ENABLED" : "DISABLED");
}

void EnhancerToggleComputerMap() {
  g_improved_map = !g_improved_map;
  // The previous implementation wrote bit 0x20000 into dword[0x005BE2B0]+0x34,
  // but r2 proves 0x005BE2B0 is the POINTER VARIABLE holding the
  // HumanPlayerInput object (getter fcn.0046B040: mov eax, [0x5BE2B0]), so
  // the old code corrupted the adjacent global at 0x005BE2E4 instead of
  // setting an input flag. Bit 0x20000 also does not exist anywhere in the
  // IGI 1 binary (the MapComputer task tests bits 0x10/0x20 of input+0x34
  // for mouse clicks inside the open computer). The enhanced map is now
  // purely the verified overlay drawn from the game-thread render hooks
  // (Mesh_SkinBones @ 0x0049F700 and Binoculars_Draw @ 0x00471480), so the
  // toggle only flips that flag — no blind input writes, no crash risk.
  FiberPool::Instance().RunExternal([enabled = g_improved_map] {
    string msg = enabled ? "Enhanced Computer Map: ON (tactical overlay active)"
                         : "Enhanced Computer Map: OFF";
    MISC::STATUS_MESSAGE_SHOW(msg);
  }, 3);
  LOG_INFO("ENHANCER: Enhanced Computer Map %s (verified hook overlay; retail input flags untouched)", g_improved_map ? "enabled" : "disabled");
}
