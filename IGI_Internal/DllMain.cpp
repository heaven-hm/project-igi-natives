// ich liebe es zu programmieren und Deustchland <3
#define USE_STACKTRACE_LIB
#define USE_MINHOOK_LIB
#define USE_GTLIBC_LIB

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


	  // Enable Debug Keys and Debug mode.
	  DEBUG::KEYS_ENABLE(true);
	  DEBUG::TEXT_ENABLE(true);

      // Set Game Handle
      HANDLE g_handle = reinterpret_cast<HANDLE>(GetModuleHandle(NULL));
      if (g_handle == NULL || g_handle == INVALID_HANDLE_VALUE)
        throw std::runtime_error("Failed to get game handle");

      g_Utility.SetHandle(g_handle);
      LOG_WARNING("Game handle set to 0x%x", g_handle);

      MISC::STATUS_MESSAGE_SHOW(PROJECT_NAME + std::string(" v2.3.0 Attached"));
    } catch (const std::exception &ex) {
      GT_ShowError(ex.what());
#if defined(USE_STACKTRACE_LIB) && defined(DBG_x86)
      if (dbg_instance)
        dbg_instance->StackTrace(true);
#endif
    }
  } else if (dwReason == DLL_PROCESS_DETACH) {
#ifdef USE_MINHOOK_LIB
    MH_DisableHook(MH_ALL_HOOKS);
    MH_Uninitialize();
#endif
#if defined(USE_STACKTRACE_LIB) && defined(DBG_x86)
    if (dbg_instance)
      dbg_instance.reset();
#endif
#ifdef _DEBUG
    if (console_instance && console_instance->IsAllocated())
      console_instance->DeAllocate();
#endif
  }
  return TRUE;
}
