#pragma once
#include "DllMain.hpp"
#include <atomic>

void DllMainLoop();
void QuitLevelMain();
inline bool g_DbgEnabled = true, g_PlayerEnabled = true;
const int delay_ms = 2500;

// Existing feature handlers
void ScriptCompile();
void StatusMsgShow();
void StatusMsgShowText();
void StatusMsgShowMonitorText();
void HumanTaskViewReset();
void PlayerXPHitShow();
void TestWarningShow();
void TestErrorShow();
void TestAmmoTypeOpen();
void TestSoundLoad();
void TestLoadingScreenShow();
void TestAiNatives();

// IGI Enhancer Patch handlers
void EnhancerCycleFPS();
void EnhancerCycleFOV();
void EnhancerCycleBinoculars();
void EnhancerToggleImprovedBinoculars();
void EnhancerCycleDrawDistance();
void EnhancerGammaUp();
void EnhancerGammaDown();
void EnhancerMusicVolumeUp();
void EnhancerMusicVolumeDown();
void EnhancerSfxVolumeUp();
void EnhancerSfxVolumeDown();
void EnhancerShowStatus();

// Shared enhancer state read by the render detours in Hook.cpp.
extern std::atomic<bool> g_improved_map;
extern std::atomic<bool> g_improved_binoculars;

// New User-Requested Enhancer Graphics Features
void EnhancerToggleHDR();
void EnhancerToggleMotionBlur();
void EnhancerCycleLightmaps();
void EnhancerToggleEnhancedGraphics();
void EnhancerToggleComputerMap();
