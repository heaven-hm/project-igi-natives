#pragma once 
#define GT_BUILD_DLL 
#define GT_BUILD_CLI 
#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING  1 
#define _CRT_SECURE_NO_DEPRECATE 
#define DLL_EXPORT __declspec( dllexport )

#include "Common.hpp" 
#include "Utils/Logger.hpp" 
#include "Utils/Console.hpp" 
#include "Utils/Utility.hpp" 
#include "Natives/NativeCaller.hpp" 
#include "Natives/NativeHelper.hpp" 
#include "Natives/Natives.hpp" 
#include "Memory/Memory.hpp"
#include "GameResources/GameResource.hpp"
#include "Player/HumanSoldier.hpp"
#include "Camera/Camera.hpp"
#include "Graphs/Graph.hpp"

#include "Utils/FiberPool.hpp" // add scheduler declaration for RunPending/RunExternal
#include <thread>
#include <atomic>

#ifdef USE_MINHOOK_LIB 
#include "Hook/Hook.hpp" 
#endif 

#ifdef USE_GTLIBC_LIB 
#include "Libs/GTLibc.hpp" 
#endif 

#if defined(USE_STACKTRACE_LIB) && defined(RLS_x86)
#pragma warning (Stacktrace only works for optimised code. Change your build settings to Debug)
#elif defined(USE_STACKTRACE_LIB) && defined(DBG_x86)
#include "Utils/DbgHelper.hpp" 
#endif 

using namespace IGI;

BOOL __stdcall DllMain(HINSTANCE, DWORD, LPVOID);
void DllMainLoop();

// Global thread control variables
extern std::atomic<bool> g_running;
extern std::thread g_mainLoopThread;