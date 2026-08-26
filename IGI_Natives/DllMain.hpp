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
#include "Utils/FiberPoolEx.hpp"
#include <thread>
#include <atomic>

inline bool g_DbgEnabled = true;
inline std::atomic_bool g_PlayerEnabled{true};
inline std::atomic_bool g_FreeCamStepQueued{false};
inline std::atomic_int g_FreeCamLevel{-1};
inline std::atomic_int g_FreeCamMenu{-1};
inline std::atomic_bool g_CleanupCameraDone{false};
inline constexpr int delay_ms = 2500;

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

inline void RestoreFreeCamInput() {
  GAME::INPUT_ENABLE();
  g_PlayerEnabled.store(true);
}

inline void QueueFreeCamRequest(const Camera::Controls& controls, int level,
                                int menu) {
  if (g_FreeCamStepQueued.exchange(true)) return;

  g_FreeCamLevel.store(level);
  g_FreeCamMenu.store(menu);
  g_PlayerEnabled.store(false);
  FiberPool::Instance().RunExternal([controls, level, menu]() mutable {
    if (g_game_level != level || g_menu_screen != menu) {
      RestoreFreeCamInput();
      g_FreeCamStepQueued.store(false);
      return;
    }

    GAME::INPUT_DISABLE();
    g_Camera.BeginFreeCam(controls);
    g_FreeCamStepQueued.store(false);
  }, 0);
}

inline bool QueueFreeCamStep() {
  if (g_FreeCamStepQueued.load()) return true;
  if (!g_Camera.IsFreeCamRunning()) return false;

  bool expected = false;
  if (!g_FreeCamStepQueued.compare_exchange_strong(expected, true)) return true;

  const int level = g_FreeCamLevel.load();
  const int menu = g_FreeCamMenu.load();
  FiberPool::Instance().RunExternal([level, menu] {
    if (g_game_level != level || g_menu_screen != menu) {
      g_Camera.EndFreeCam();
      RestoreFreeCamInput();
    } else if (!g_Camera.FreeCamStep()) {
      RestoreFreeCamInput();
    }
    g_FreeCamStepQueued.store(false);
  }, 0);
  return true;
}

BOOL __stdcall DllMain(HINSTANCE, DWORD, LPVOID);
void DllMainLoop();
void CleanUpAndExitThread(HMODULE hModule);

// Global thread control variables
extern std::atomic<bool> g_running;
extern std::thread g_mainLoopThread;
