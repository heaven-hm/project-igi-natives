// ich liebe es zu programmieren und Deustchland <3
#include "Natives/NativeHelper.hpp"
#define USE_STACKTRACE_LIB
#define USE_MINHOOK_LIB
#define USE_GTLIBC_LIB
#define NATIVES_DLL_VERSION std::string("2.6.0")
#include "DllMain.hpp"

// Include all static libraries for project.
#if defined(_M_IX86)
#if defined(DBG_x86)
#pragma comment(lib, "hook/libMinHook-x86-Debug.lib")
#ifdef USE_GTLIBC_LIB
#pragma comment(lib, "libs/GTLibc-x86-Debug.lib")
#pragma comment(lib, "libs/GTConsole-x86-Debug.lib")
#endif

#elif defined(RLS_x86)
#pragma comment(lib, "hook/libMinHook-x86-Debug.lib")
#ifdef USE_GTLIBC_LIB
#pragma comment(lib, "libs/GTLibc-x86-Release.lib")
#pragma comment(lib, "libs/GTConsole-x86-Release.lib")
#endif
#endif
#else
#error This project supports only x86 (32-Bit) builds.
#endif

// Console control handler to prevent crashes when console X is clicked
BOOL WINAPI ConsoleCtrlHandler(DWORD dwCtrlType) {
  switch (dwCtrlType) {
  case CTRL_CLOSE_EVENT:
  case CTRL_C_EVENT:
  case CTRL_BREAK_EVENT:
    // Gracefully stop the main loop instead of terminating
    g_running = false;
    return TRUE; // Prevent default handler
  default:
    return FALSE;
  }
}

// Move these to file scope so they are accessible everywhere
std::unique_ptr<Console> console_instance;
std::unique_ptr<Log> logger_instance;
std::unique_ptr<Natives> native_instance;
std::unique_ptr<Memory> memory_instance;
std::unique_ptr<GameResource> game_resources_ptr;
#ifdef USE_MINHOOK_LIB
std::unique_ptr<Hook> hook_instance;
#endif
#if defined(USE_STACKTRACE_LIB) && defined(DBG_x86)
std::unique_ptr<DbgHelper> dbg_instance;
#endif

// Global thread control variables
std::atomic<bool> g_running{false};
std::atomic<bool> g_cleanupDone{false};
std::atomic<int> g_gameHookCallbacks{0};
std::atomic<bool> g_hookCallbacksClosing{false};
std::mutex g_hookCallbackStartMutex;
std::condition_variable g_hookCallbackCv;
std::atomic<bool> g_minHookCleaned{false};
std::thread g_mainLoopThread;

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID) {
  if (dwReason == DLL_PROCESS_ATTACH) {
    DisableThreadLibraryCalls(hModule);
    g_Hmodule = hModule;
    g_Utility.SetModuleHandle(hModule);

    try {
#ifdef _DEBUG
      console_instance = std::make_unique<Console>();
      console_instance->Allocate();
      console_instance->Clear();
#endif
      // Initialize Logger and Core Systems
      logger_instance = std::make_unique<Log>();
      auto game_font = LR"(
╔═══╦═══╦═══╗ ╔╦═══╦═══╦════╗  ╔══╦═══╦══╗                 
║╔═╗║╔═╗║╔═╗║░║║╔══╣╔═╗║╔╗╔╗║░░╚╣╠╣╔═╗╠╣╠╝	▄▌			▄ 
║╚═╝║╚═╝║║░║║░║║╚══╣║░╚╩╝║║╚╝░░░║║║║░╚╝║║	▓▓▓▓▓▓▓▓▓▓▓▓▄
║╔══╣╔╗╔╣║░║╠╗║║╔══╣║░╔╗░║║░╔══╗║║║║╔═╗║║	▓▓▓▓▓▓▓▓▓▓▓▓▄ 
║║░░║║║╚╣╚═╝║╚╝║╚══╣╚═╝║░║║░╚══╬╣╠╣╚╩═╠╣╠╬			▀▐▓▓▓▓
╚╝  ╚╝╚═╩═══╩══╩═══╩═══╝ ╚╝    ╚══╩═══╩══╝ 			   ▐▓▓▌
				)";
      LOG_RAW(game_font);
      LOG_WARNING("Logger initialized.");

      native_instance = std::make_unique<Natives>();
      LOG_WARNING("Natives initialized.");

      memory_instance = std::make_unique<Memory>(true);
      LOG_WARNING("Memory initialized.");

      game_resources_ptr = std::make_unique<GameResource>();
      LOG_WARNING("GameResources initialized.");

#ifdef USE_MINHOOK_LIB
      hook_instance = std::make_unique<Hook>(true);
      if (!hook_instance->IsReady())
        throw std::runtime_error("Hook initialization failed");
      LOG_WARNING("Hook initialized.");
#endif

#if defined(USE_STACKTRACE_LIB) && defined(DBG_x86)
      dbg_instance = std::make_unique<DbgHelper>(true);
      LOG_WARNING("DbgHelper initialized.");
#endif

#if defined(DBG_x86)
      // Invincible-Jones.
      HUMAN::UNLIMITED_HEALTH_SET();
      WEAPON::UNLIMITED_AMMO_SET(true);
#endif

      // Enable Debug Hotkeys. (Read IGIDebug.md for more info)
      DEBUG::KEYS_ENABLE(true);
      DEBUG::TEXT_ENABLE(true);

      // Set Game Handle
      HANDLE g_handle = reinterpret_cast<HANDLE>(GetModuleHandle(NULL));
      if (g_handle == NULL || g_handle == INVALID_HANDLE_VALUE)
        throw std::runtime_error("Failed to get game handle");

      g_Utility.SetHandle(g_handle);
      LOG_WARNING("Game handle set to 0x%x", g_handle);

      MISC::STATUS_MESSAGE_SHOW(PROJECT_NAME + std::string(" v" + NATIVES_DLL_VERSION + " Attached"));

      // Start DllMainLoop in separate thread with 30 FPS timing
      g_running = true;
      g_mainLoopThread = std::thread([hModule]() {
        LOG_WARNING("DllMainLoop thread started");
        while (g_running) {
          DllMainLoop();

          if (GT_IsKeyPressed(VK_END)) {
            LOG_INFO("END key pressed - starting cleanup");
            CleanUpAndExitThread(hModule);
            return;
          }

          std::this_thread::sleep_for(
              std::chrono::milliseconds(10)); // 100 Hz for responsive hotkeys
        }
        LOG_WARNING("DllMainLoop thread stopped");
        MISC::STATUS_MESSAGE_SHOW(PROJECT_NAME +
                                  std::string(" v" + NATIVES_DLL_VERSION + " Detached"));
      });

    } catch (const std::exception &ex) {
      GT_ShowError(ex.what());
#if defined(USE_STACKTRACE_LIB) && defined(DBG_x86)
      if (dbg_instance)
        dbg_instance->StackTrace(true);
#endif
    }
  }

  return TRUE;
}

// Cleanup and exit thread after DLL detach.
void CleanUpAndExitThread(HMODULE hModule) {
  g_running = false;

  // Disable debug hotkeys
  DEBUG::KEYS_ENABLE(false);
  LOG_INFO("Debug Hotkeys disabled");

  // Console cleanup
  if (console_instance && console_instance->IsAllocated()) {
    LOG_INFO("Console cleanup started");
    console_instance->DeAllocate();
    LOG_INFO("Console cleanup finished");
  }

  if (g_Camera.IsFreeCamRunning() || !g_PlayerEnabled.load()) {
    g_CleanupCameraDone.store(false);
    FiberPool::Instance().RunExternal([] {
      g_Camera.EndFreeCam();
      RestoreFreeCamInput();
      g_CleanupCameraDone.store(true);
    }, 0);

    for (int attempt = 0; attempt < 200 && !g_CleanupCameraDone.load(); ++attempt) {
      std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    if (!g_CleanupCameraDone.load()) {
      LOG_ERROR("Game-thread camera cleanup did not complete; keeping hooks and DLL loaded");
      return;
    }
  }
  g_Camera.StopFreeCam();
  FiberPool::Instance().Shutdown();
  FiberPoolEx::Instance().Shutdown();
  g_cleanupDone.store(true);
  g_hookCallbacksClosing.store(true);

	// Stop new detours before waiting for every entered detour to return.
	if (!g_minHookCleaned) MH_DisableHook(MH_ALL_HOOKS);
	std::unique_lock<std::mutex> hook_callback_lock(g_hookCallbackStartMutex);
  g_hookCallbackCv.wait(hook_callback_lock, [] {
    return g_gameHookCallbacks.load() == 0;
  });

  DEBUG::TEXT_ENABLE(false);

  // MinHook cleanup
  if (!g_minHookCleaned) {
    LOG_INFO("MinHook cleanup started");
    MH_Uninitialize();
    g_minHookCleaned = true;
    LOG_INFO("MinHook cleanup finished");
  } else {
    LOG_INFO("MinHook already cleaned up, skipping");
  }

  LOG_INFO("Cleanup completed - stopping main loop");

  // Create a remote thread to eject the DLL from outside its context
  std::thread ejectThread([hModule]() {
    if (g_mainLoopThread.joinable() &&
        g_mainLoopThread.get_id() != std::this_thread::get_id()) {
      g_mainLoopThread.join();
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    LOG_INFO("Auto-ejecting DLL...");

    // This API terminates the current thread without returning into DLL code.
    FreeLibraryAndExitThread(hModule, 0);
  });
  ejectThread.detach();
}
