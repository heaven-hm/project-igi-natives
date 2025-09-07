#pragma once
#include "DllMain.hpp"

void ScriptCompile();
void StatusMsgShow();
void DllMainLoop();
void QuitLevelMain();
inline bool g_DbgEnabled = true, g_PlayerEnabled = true;
const int delay_ms = 2500;