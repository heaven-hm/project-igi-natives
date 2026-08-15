#pragma once
#include "DllMain.hpp"

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
void DllMainLoop();
void QuitLevelMain();
inline bool g_DbgEnabled = true, g_PlayerEnabled = true;
const int delay_ms = 2500;
