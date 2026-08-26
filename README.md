# Project I.G.I Natives

[![Version](https://img.shields.io/badge/version-v2.6.1-blue.svg)](https://github.com/heaven-hm/project-igi-natives)
[![Build](https://img.shields.io/badge/build-f0f30e5-green.svg)](https://github.com/heaven-hm/project-igi-natives)
[![Platform](https://img.shields.io/badge/platform-Windows-lightgrey.svg)](https://github.com/heaven-hm/project-igi-natives)
[![License](https://img.shields.io/badge/license-Research-orange.svg)](https://github.com/heaven-hm/project-igi-natives)

[Project I.G.I](https://en.wikipedia.org/wiki/Project_I.G.I.) Natives is Project to access native methods of the game by using **DLL injection method** into the game and calling [IGI Natives methods](https://github.com/IGI-Research-Devs/IGI-Internals-Data/blob/main/IGI-Natives.json) to modify/alter the behaviour of the game.</br>
This was originally intended for research project to understand the game mechanics and how developers worked hard to create them.</br>
So don't use this project to misuse the game's identity and source of original game devs.</br>

## Pre-Requisite
- **General section.**
- [DLL File](https://en.wikipedia.org/wiki/Dynamic-link_library) - This project is DLL file rather than standard application.</br>
- [DLL Injection](https://en.wikipedia.org/wiki/DLL_injection) - This project needs DLL injection into _IGI_ game.</br>
- [Hooking](https://en.wikipedia.org/wiki/Hooking) - This project uses [Minhook](https://github.com/TsudaKageyu/minhook) for API calls.</br>
- [GTLibc](https://github.com/Jones-HM/GTLibCpp) -C/C++ library for interactig with Game.</br>
- [Pattern Scanning](https://github.com/GH-Rake/PatternScan) - This project use pattern memory scanning to check Game/Player is loaded properly.</br>
- **Game specific section.**
- [IGI Graphs Structure](https://github.com/Jones-HM/project-igi-research-data/blob/main/Research/GRAPH/Graph-Structure.md) - Project IGI 1 Graph structure data.
- [IGI 3D Models](https://github.com/Jones-HM/project-igi-research-data/blob/main/Research/Natives/IGI-Models.json) - Project IGI uses 3D models in 
form of _MEF_ (**M**esh **E**xternal **F**ile).
- [IGI Camera View](https://www.researchgate.net/figure/Definition-of-pitch-roll-and-yaw-angle-for-camera-state-estimation_fig15_273225757) - IGI use game Camera called [Viewport](https://en.wikipedia.org/wiki/Viewport) to display the game updates.
- **Native section.**
- Native Invoker - Native invoker is a technology to invoke native methods from Game using their **Hash** with its **Handler**. 

## Building DLL project.

### 🏗️ Platform Requirements
**⚠️ Important**: This project supports **only x86 (32-bit) builds** because IGI (2000) is a 32-bit game. Any attempt to build or inject a 64-bit DLL will fail.

### 🚀 Auto-Inject DLL with Hot Reload
Use the `build_and_reload.bat` batch file for automated building and DLL injection with hot reload capability:

```bash
# Debug build with auto-injection
.\IGI_Natives\build_and_reload.bat Debug Win32

# Release build with auto-injection  
.\IGI_Natives\build_and_reload.bat Release Win32
```

**Configuration**: Update `OUTDLL` and `INJECTOR` paths in the batch file according to your setup.

### 🔧 Manual Building
Open this project in Visual Studio and build it. Your output will be in **Release/Debug** folder depending on configuration. You'll find `IGI-Natives-Debug.dll` or `IGI-Natives-Release.dll`. Use any **x86(32-bit)** compatible DLL injector or the recommended [IGI-Injector](https://github.com/IGI-Research-Devs/IGI-Injector).

## 🎮 IGI Debug Keys Integration & Enhanced Features

This DLL seamlessly integrates with IGI's built-in debug functionality while adding powerful enhancement features. See [IGIDebug.md](IGI_Natives/IGIDebug.md) for complete documentation on IGI's native debug keys and activation methods.

### 🚀 **Core Features:**
- 🔓 **Mission Unlock** - Access all missions instantly without progression
- ⚔️ **Weapon Unlock** - Unlock complete weapon collection
- 🛡️ **Invincible Mode** - Unlimited health and damage immunity
- ✈️ **Fly Mode** - Fly through levels with unrestricted movement
- 👁️ **3rd Person Mode** - Enhanced perspective for better gameplay

### 🔥 **Advanced Capabilities:**
- 📷 **Free Camera Controls** - Professional camera manipulation
- 🏗️ **Level Management** - Instant level loading and restart functionality
- 💾 **Memory Operations** - Real-time game state modification
- 🎮 **Enhanced Debugging** - Native IGI functionality integration

### 🧵 **Task Scheduling Architecture:**
- **FiberPool.hpp** - IGI-specific task scheduler optimized for IGI (2000) game architecture
- **FiberPoolEx.hpp** - Generic fiber pool implementation for modern game engines
- **Dual-thread system** - Separated DLL management from game operations for better performance

### ⚠️ **IGI Game Loop Architecture Limitations:**
IGI (2000) uses a **Windows Message-based event loop** rather than modern game engine loops:

- **Current Implementation**: `TextPrintDetour()` hook calls `FiberPool::Instance().RunPending()`
- **Critical Limitation**: Only executes when HUD text is being drawn (e.g., weapon names, status messages)
- **Problem**: When player shows knife or no HUD text is displayed, the scheduler stops running
- **Impact**: Task execution becomes inconsistent and frame-dependent on UI state

**🔍 Alternative GameLoop Methods Under Investigation:**
- **SFX Sound hooks** - May provide more consistent per-frame execution
- **Render pipeline hooks** - Graphics calls that execute every frame
- **Input polling hooks** - Continuous input processing methods
- **Timer-based approaches** - Windows timer integration for consistent execution

### 🌟 **Coming Soon:**
- More gameplay enhancement modes
- Advanced AI manipulation
- Custom mission scripting
- Enhanced visual effects

**🙏 Special Recognition:** Massive thanks to **BlankName** for discovering and documenting IGI's debug key system, making this integration possible!

## Building project for IGI Editor.
The project could be build for [IGI Editor](https://github.com/IGI-Research-Devs/IGI1Editor) the only thing we need to change is **Features.cpp** file we have to update with **Features file for Editor** which could be found here [Features_Editor.cpp](https://github.com/heaven-hm/project-igi-natives/blob/develop/IGI_Natives/Features_Editor.cpp)


## 🎮 Current Features & Hotkeys

The DLL provides the following implemented features accessible via hotkeys during gameplay:

### 🔧 **Active Hotkeys** (Ctrl + F1-F6):
- **Ctrl+F1**: Random weapon pickup - Equips a random available weapon
- **Ctrl+F2**: Random FPS setting - Sets game framerate to random value
- **Ctrl+F3**: Load humanplayer - Loads/reloads the human player character
- **Ctrl+F4**: Free Camera Mode - Activates free camera (Arrow keys to move, Space/Alt for up/down, Home to exit) 
- **Ctrl+F5**: Show status message - Displays game status information
- **Ctrl+F6**: Write config - Saves current game configuration

### 🛠️ **Debug Features**:
- **Home** (Debug builds only): Display all available hotkeys in console

### 🚀 **IGI Enhancer Patch Hotkeys** (Alt + F1-F12 / Alt + 1-5):
All enhancer mutations execute on the game thread via the FiberPool, and every
patched address was re-verified against the retail IGI 1 `igi.exe` with radare2
and Ghidra (see the evidence comments in `NativeHelper.hpp` / `Hook.cpp`).
- **Alt+F1**: Cycle FPS (30 → 60 → 120 → 144) via the verified `FramesSet` native (`0x00402820`)
- **Alt+F2**: Cycle FOV (75 → 90 → 100 → 110) via the live half-FOV doubles at `0x005335E8`/`0x005339C0`
- **Alt+F3**: Cycle binoculars zoom (2x → 4x → 8x → 12x → 16x) — re-applied per frame through the `Binoculars_Draw` game-thread hook
- **Ctrl+B**: Toggle enhanced binoculars (ESP boxes + zoom; restores retail view when disabled)
- **Alt+F5 / Alt+F6**: Gamma up/down via the verified profile-record gamma float (`profile+0x220`, read live by the lighting math)
- **Alt+F7 / Alt+F8**: Music volume up/down
- **Alt+F9 / Alt+F10**: SFX volume up/down
- **Alt+F11**: Show enhancer status overlay
- **Alt+F12**: Cycle draw distance request *(state only — no verified LOD patch exists yet; degrades honestly)*
- **Alt+1**: HDR gamma boost ON/OFF (retail gamma path; this engine build has no DX7 post-processing)
- **Alt+2**: Temporal pacing toggle (120/60 FPS; no motion-blur pass exists in the engine)
- **Alt+3**: Cycle lightmap modes via the verified byte setters `0x0048F240`/`0x0048F260`
- **Alt+4**: Cycle graphics profiles (STANDARD/HIGH/ULTRA)
- **Alt+5**: Enhanced computer map — tactical vector overlay drawn from the verified render hooks

## Modifying this project.
You can modify the project by focusing on the **Features.cpp** file located in the _DllMainLoop()_ method under the _MENU_SCREEN_INGAME_ section. Add your logic for Adding/Removing Buildings/Weapons/A.I etc into the game using the FiberPool task scheduler for thread-safe execution.

**⚠️ Important Note**: Due to IGI's Windows Message-based architecture, the current FiberPool scheduler relies on `TextPrintDetour()` which only executes when HUD text is being rendered. This means task execution may be inconsistent when no UI text is displayed (e.g., when showing knife weapon). Consider this limitation when implementing time-sensitive features.

## Adding new hashes for Natives.
Lets say you found new hash for Native now how to add them into project and use them.
So you have to follow the steps.
1. First Add your Hash to _Natives.hpp_ class like this 
```cpp
  MY_FIRST_NATIVE = 0x00402F90
```
2. Go to Natives folder and open _NativeHelper.hpp_ file and in any relevant section add its definition.
```cpp
  NATIVE_DECL void MY_FIRST_NATIVE_LOAD() { NATIVE_INVOKE<Void>((Void)HASH::MY_FIRST_NATIVE); }
```
3. Now go to _Features.cpp_ class and use it. 
```cpp
  // Native method.
  if (GT_HotKeysPressed(VK_CONTROL, VK_F1)) {
	MY_FIRST_NATIVE_LOAD();
  }
```
## 📋 Changelog

For detailed version history and comprehensive changelog information, see **[CHANGELOG.md](CHANGELOG.md)**.

### 🎉 Latest Release - Version 2.6.1 (September 8, 2025)

**Debug Hotkey Improvement:**
- 🔧 **Hotkey Update**: Changed debug hotkey logging from `Space` to `Home` key
  - 🎯 **Reason**: Prevents conflicts with game controls and provides dedicated debug access
  - 📋 **Scope**: Updated in both `Features.cpp` and `Features_Editor.cpp`
  - 🛠️ **Function**: `LogAllHotkeys()` now triggered by Home key in debug builds

**Previous Architecture Updates (v2.6.0):**
- 🧵 **Dual-Thread Architecture**: Major architectural overhaul separating DLL and Game threads
- 🔄 **Auto-Ejection Technology**: Single-keypress DLL unloading with CreateRemoteThread
- 🛡️ **Crash Prevention System**: Console control handler and MinHook protection
- ⚡ **Optimized Performance**: 100Hz responsive hotkey detection (10ms intervals)
- 🎯 **Thread-Safe Operations**: Detached thread architecture with proper cleanup

**Technical Achievements:**
- ✅ **Zero-Crash DLL Lifecycle**: Complete elimination of detachment crashes
- 🔧 **Smart Cleanup System**: Automatic debug hotkey, console, and MinHook cleanup
- 📊 **Performance**: 100Hz hotkey responsiveness, instant DLL ejection
- 🧵 **Thread Architecture**: Separated game thread from DLL management thread
- 🎮 **Seamless Re-injection**: No external ejector needed for development workflow

[View Full Changelog →](CHANGELOG.md)

## 📚 Resource Documentation

For comprehensive resource management documentation including Resource operations, MEF Models, Script handling, Camera controls, Memory operations, and Configuration management, see **[resource_docs.md](resource_docs.md)**.

**Quick Reference:**
- 🔧 **Resource Operations**: Loading, unloading, and managing game resources
- 🎮 **MEF Models**: 3D model management and manipulation
- 📜 **Script Handling**: QSC, QAS, and QVM script operations
- 📷 **Camera Controls**: Free camera implementation with custom controls
- 💾 **Memory Operations**: Memory allocation and player management
- ⚙️ **Configuration**: Game and weapon configuration management

[View Complete Resource Documentation →](resource_docs.md)

---

## 📄 License & Credits

Original Author: _HeavenHM@2022_
