// ich liebe es zu programmieren und Deustchland <3
#include "Natives/NativeHelper.hpp"
#define USE_STACKTRACE_LIB
#define USE_MINHOOK_LIB
#define USE_GTLIBC_LIB
#define NATIVES_DLL_VERSION std::string("2.8.0")
#include "DllMain.hpp"
#include "Logging/RuntimeLog.hpp"

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
std::atomic<bool> g_hookCallbacksClosing{false};
std::atomic<unsigned int> g_hookCallbacksInFlight{0};
std::mutex g_hookCallbacksMutex;
std::condition_variable g_hookCallbacksDrained;
std::atomic<bool> g_minHookCleaned{false};
std::thread g_mainLoopThread;
std::thread g_runtimeLogHotkeyThread;
namespace {
constexpr char kShutdownRequestEventName[] = "Local\\IGI_Natives_ShutdownRequest";
constexpr char kShutdownCompleteEventName[] = "Local\\IGI_Natives_ShutdownComplete";

void ShowRuntimeLogHotkeyFeedback(const string& message) {
  LOG_INFO("%s", message.c_str());
#ifdef _DEBUG
  LOG_CONSOLE("[Runtime Log] %s", message.c_str());
#else
  // The retail game provides a lightweight status-text overlay. Hotkey
  // feedback runs only after injection, when the game is fully initialized.
  try {
    MISC::STATUS_MESSAGE_SHOW_TEXT(message.c_str());
  } catch (...) {
    LOG_ERROR("Unable to show runtime-log hotkey status in game");
  }
#endif
  RuntimeLogRecord("[Hotkey] " + message);
}

void RuntimeLogHotkeyLoop() {
  bool f1WasDown = false;
  bool f2WasDown = false;
  LOG_WARNING("Runtime logging hotkey thread started (Ctrl+F1, Ctrl+F2)");
  while (g_running.load(std::memory_order_acquire)) {
    const bool ctrlDown = (GetAsyncKeyState(VK_CONTROL) & 0x8000) != 0;
    const bool f1Down = ctrlDown && (GetAsyncKeyState(VK_F1) & 0x8000) != 0;
    const bool f2Down = ctrlDown && (GetAsyncKeyState(VK_F2) & 0x8000) != 0;
    if (f1Down && !f1WasDown) {
      const bool enabled = RuntimeLogSetEnabled(
          !g_RuntimeLogEnabled.load(std::memory_order_relaxed));
      ShowRuntimeLogHotkeyFeedback(enabled ? "Runtime Log: ON"
                                           : "Runtime Log: OFF");
    }
    if (f2Down && !f2WasDown) {
      const bool verbose = RuntimeLogSetVerbose(
          !g_RuntimeLogVerbose.load(std::memory_order_relaxed));
      ShowRuntimeLogHotkeyFeedback(verbose ? "Runtime Log: VERBOSE"
                                           : "Runtime Log: NORMAL");
    }
    f1WasDown = f1Down;
    f2WasDown = f2Down;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }
  LOG_WARNING("Runtime logging hotkey thread stopped");
}
}
HANDLE g_shutdownRequestEvent{};
HANDLE g_shutdownCompleteEvent{};

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID reserved) {
  if (dwReason == DLL_PROCESS_DETACH) {
    // During process termination Windows will stop the worker threads itself.
    // Detach the std::thread objects first so their destructors cannot call
    // terminate()/abort() while the CRT is being torn down.
    g_running.store(false, std::memory_order_release);
    if (g_runtimeLogHotkeyThread.joinable())
      g_runtimeLogHotkeyThread.detach();
    if (g_mainLoopThread.joinable())
      g_mainLoopThread.detach();
    if (g_shutdownRequestEvent) {
      CloseHandle(g_shutdownRequestEvent);
      g_shutdownRequestEvent = nullptr;
    }
    if (g_shutdownCompleteEvent) {
      CloseHandle(g_shutdownCompleteEvent);
      g_shutdownCompleteEvent = nullptr;
    }
    return TRUE;
  }

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
      g_shutdownRequestEvent = CreateEventA(nullptr, TRUE, FALSE, kShutdownRequestEventName);
      g_shutdownCompleteEvent = CreateEventA(nullptr, TRUE, FALSE, kShutdownCompleteEventName);
      if (!g_shutdownRequestEvent || !g_shutdownCompleteEvent)
        throw std::runtime_error("Failed to create shutdown events");
      ResetEvent(g_shutdownRequestEvent);
      ResetEvent(g_shutdownCompleteEvent);
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

      // Runtime-logging hooks (retail IGI.EXE I/O + Win32 debug output capture).
      RuntimeLogReadConfig();
      LOG_WARNING("Runtime logging %s.",
                  g_RuntimeLogEnabled.load() ? "enabled" : "disabled");
      LOG_WARNING("Runtime log file: %s", RuntimeLogFilePath().c_str());

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



      // Set Game Handle
      HANDLE g_handle = reinterpret_cast<HANDLE>(GetModuleHandle(NULL));
      if (g_handle == NULL || g_handle == INVALID_HANDLE_VALUE)
        throw std::runtime_error("Failed to get game handle");

      g_Utility.SetHandle(g_handle);
      LOG_WARNING("Game handle set to 0x%x", g_handle);

      const string injected_message =
          PROJECT_NAME + std::string(" v" + NATIVES_DLL_VERSION + " Injected");
      MISC::STATUS_MESSAGE_SHOW_TEXT(injected_message.c_str());
      LOG_WARNING("IGI Retail logging DLL attached; see igi.log");

      // Poll logging controls independently of game pointers and natives.
      g_running = true;
      g_runtimeLogHotkeyThread = std::thread(RuntimeLogHotkeyLoop);

      // The retail logging build has no DLL-owned feature loop. Game methods
      // are observed by the installed detours, and the hotkey worker is kept
      // independent so shutdown cannot race game-pointer reads.
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
bool CleanUpAndExitThread(HMODULE hModule) {
  (void)hModule;
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
      g_running.store(true);
      DEBUG::KEYS_ENABLE(false);
      return false;
    }
  }

  HookCallbackGuard::BeginClosing();
#ifdef USE_MINHOOK_LIB
  if (hook_instance && hook_instance->DisableHooks() != MH_OK) {
    LOG_ERROR("Unable to disable hooks for DLL unload; keeping DLL loaded");
    HookCallbackGuard::Reopen();
    return false;
  }
#endif
  HookCallbackGuard::WaitForDrain();
#ifdef USE_MINHOOK_LIB
  if (hook_instance) hook_instance->Uninitialize();
#endif
  g_running.store(false);
  // CleanUpAndExitThread is called by the main-loop worker, so the hotkey
  // worker can be joined safely before the logger and DLL are unloaded.
  if (g_runtimeLogHotkeyThread.joinable())
    g_runtimeLogHotkeyThread.join();
  // Disable debug hotkeys only after game-thread camera cleanup succeeds.
  DEBUG::KEYS_ENABLE(false);
  LOG_INFO("Debug Hotkeys disabled");

  // Console cleanup
  if (console_instance && console_instance->IsAllocated()) {
    LOG_INFO("Console cleanup started");
    console_instance->DeAllocate();
    LOG_INFO("Console cleanup finished");
  }
  g_Camera.StopFreeCam();
  FiberPool::Instance().Shutdown();
  FiberPoolEx::Instance().Shutdown();
  RuntimeLogShutdown();
  g_cleanupDone.store(true);

  DEBUG::TEXT_ENABLE(false);

  LOG_INFO("Cleanup completed; hooks remain installed in pass-through mode until process exit");
  return true;
}
