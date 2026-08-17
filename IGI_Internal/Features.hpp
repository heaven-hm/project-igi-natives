#pragma once
#include "DllMain.hpp"

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
void EnhancerCycleDrawDistance();
void EnhancerGammaUp();
void EnhancerGammaDown();
void EnhancerMusicVolumeUp();
void EnhancerMusicVolumeDown();
void EnhancerSfxVolumeUp();
void EnhancerSfxVolumeDown();
void EnhancerShowStatus();
