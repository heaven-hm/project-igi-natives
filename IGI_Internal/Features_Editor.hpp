#pragma once
#include "DllMain.hpp"

void ScriptCompile();
void StatusMsgShow();
string InternalDataRead();
bool InternalDataWrite(string data);
void DllMainLoopEditor();
void RestartLevel();
void StartLevelMain(int = 1, bool = true, bool = true, int = 1);
void QuitLevelMain();
inline bool g_DbgEnabled = true, g_PlayerEnabled = true;
const LPVOID viewport_x = (LPVOID)0x00BCAB08, viewport_y = (LPVOID)0x00BCAB10, viewport_z = (LPVOID)0x00BCAB18;
const int delay_ms = 2500;