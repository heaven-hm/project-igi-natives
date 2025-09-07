#pragma once
#include "DllMain.hpp"

void ScriptCompile();
void StatusMsgShow();
void DllMainLoop();
void StartLevelMain(int = 1, bool = true, bool = true, int = 1);
void QuitLevelMain();
inline bool g_DbgEnabled = true, g_PlayerEnabled = true;
const int delay_ms = 2500;