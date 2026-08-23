# Project I.G.I Internal

[![Version](https://img.shields.io/badge/version-v2.6.1-blue.svg)](https://github.com/Jones-HM/project-igi-internals)
[![Build](https://img.shields.io/badge/build-f0f30e5-green.svg)](https://github.com/Jones-HM/project-igi-internals)
[![Platform](https://img.shields.io/badge/platform-Windows-lightgrey.svg)](https://github.com/Jones-HM/project-igi-internals)
[![License](https://img.shields.io/badge/license-Research-orange.svg)](https://github.com/Jones-HM/project-igi-internals)

[Project I.G.I](https://en.wikipedia.org/wiki/Project_I.G.I.) Internal is Project to access internal methods of the game by using **DLL injection method** into the game and calling [IGI Natives methods](https://github.com/IGI-Research-Devs/IGI-Internals-Data/blob/main/IGI-Natives.json) to modify/alter the behaviour of the game.</br>
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
.\build_and_reload.bat Debug x86

# Release build with auto-injection  
.\build_and_reload.bat Release x86
```

**Configuration**: Update `OUTDLL` and `INJECTOR` paths in the batch file according to your setup.

### 🔧 Manual Building
Open this project in Visual Studio and build it. Your output will be in **Release/Debug** folder depending on configuration. You'll find `IGI-Internals-Debug.dll` or `IGI-Internals-Release.dll`. Use any **x86(32-bit)** compatible DLL injector or the recommended [IGI-Injector](https://github.com/IGI-Research-Devs/IGI-Injector).

## 🎮 IGI Debug Keys Integration & Enhanced Features

This DLL seamlessly integrates with IGI's built-in debug functionality while adding powerful enhancement features. See [IGIDebug.md](IGI_Internal/IGIDebug.md) for complete documentation on IGI's native debug keys and activation methods.

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
The project could be build for [IGI Editor](https://github.com/IGI-Research-Devs/IGI1Editor) the only thing we need to change is **Features.cpp** file we have to update with **Features file for Editor** which could be found here [Features_Editor.cpp](https://github.com/IGI-Research-Devs/IGI_Internal/blob/master/IGI_Internal/Features_Editor.cpp)


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

## Modifying this project.
You can modify the project by focusing on the **Features.cpp** file located in the _DllMainLoop()_ method under the _MENU_SCREEN_INGAME_ section. Add your logic for Adding/Removing Buildings/Weapons/A.I etc into the game using the FiberPool task scheduler for thread-safe execution.

**⚠️ Important Note**: Due to IGI's Windows Message-based architecture, the current FiberPool scheduler relies on `TextPrintDetour()` which only executes when HUD text is being rendered. This means task execution may be inconsistent when no UI text is displayed (e.g., when showing knife weapon). Consider this limitation when implementing time-sensitive features.

## 🧩 Natives SDK (programming guide)

The DLL exposes the game's native functions as callable C++ wrappers. After injection, every
wrapper forwards through `NativeCaller::Invoke` to the verified address in `IGI-Natives.json`
(all 250+ addresses machine-verified against retail `igi.exe`; igi2.pdb used only as a naming
dictionary). Struct layouts recovered from the binary live in [`IGI_Structures.hpp`](IGI_Structures.hpp).

### How to call a native

All wrappers live under `IGI::` in [`IGI_Internal/Natives/NativeHelper.hpp`](IGI_Internal/Natives/NativeHelper.hpp).
Call them from any hotkey branch in `Features.cpp`, ideally scheduled on the game thread via the FiberPool:

```cpp
// inside Features.cpp hotkey dispatch
FiberPool::Instance().RunExternal([] {
    IGI::AI::SET_INVULNERABILITY(1);              // make current AI immortal
    IGI::CONFIGMENU::GFX_GAMMA_SET(1.25f);        // apply gamma
    IGI::MISC::STATUS_MESSAGE_SHOW("Done!");
}, 3);
```

### New natives added by this branch (by subsystem)

| Namespace | Natives | Highlights |
|---|---|---|
| `AI::` | 55 | `AIAction_*` + `AIFunction_*`: `PATROL(target,0,AIACTIONFLAG_NONE)`, `SET_INVULNERABILITY(onOff)`, `GET_CURRENT_EVENT_TYPE()` returns `AIEVENT_*` 0-23, `SET_ALARM_ACCESS(AIALARMACCESS_BEFORECOMBAT=0/AFTERCOMBAT=1)` |
| `CONFIGMENU::` | 45 | Retail menu-script natives: `GFX_GAMMA_GET/SET(float)`, `ACTIVE_PROFILE_INDEX_GET()`, `PROFILE_CREATE(name,source)`, plus `GO_*` config writers (`GO_PLAYER`, `GO_GFX_GAMMA`, ...) |
| `MENU::` | 10 | MenuManager screen stack: `PUSH_SCREEN(id)`, `POP_SCREEN(0)`, `ACTIVATE_POPUP(popupId)`, `LEAVE_MENUS(0,0)` |
| `SYMBOL::` | 11 | Game-data symbol table: `DATA_LOAD(buf,path,name)`, `REGISTER_INT32(table,addr)`, `WARNING_LEVEL_SET(lvl)` |
| `DISPLAY::` | 3 | `SET_MODE(modeStruct)`, `GET_ACTIVE_MODE()`, `BACKGROUND_COLOUR_SET(r,g,b)` |
| `APPCONTEXT::` | 4 | Engine flags (IGIPatch-corroborated): `LIGHTMAPS_SET(used)`, `TERRAIN_LIGHTMAPS_SET(used)`, `DEBUGGED_SET(state)` |
| `LEVELFLOW::` | 3 | `LEVEL_FAILED()`, `IS_COUNTRY_USA()`, `BREAK_CUTSCENE_KEY_GET()` |
| `FLOW::` | 1 | `REQUEST_EVENT(FLOW_EVENT_GAME=4)` drives the flow state machine |
| `PICTURE::` / `SPRITE::` / `TRANSCONTEXT::` | 4 | `WIDTH_GET/HEIGHT_GET`, quad-sprite registration, transform-context install |
| `PARSER::` | 14 | Define-block natives — call ONLY from their own `.qsc` definition context |
| Extensions | ~15 | `WEAPON::TYPE_OPEN/COUNT_GET/GUN_PICKUP`, `HUMAN::TASK_VIEW_RESET(human)` (retail FOV restore), `SFX::RUNTIME_MUSIC/SFX_VOLUME_SET(float)`, `GAME::MISSION_SET(m)`, `MISC::ERROR_SHOW(fmt,...)` variadic |

Full signatures + per-native evidence notes: [`IGI-Natives.json`](IGI-Natives.json)
(`{hash, address, name, signature, note}` per entry; notes include param meaning and enum values).

### Enum quick reference

- `AIEVENT_*`: CREATE=0 DELETE=1 DEAD=2 ANIMATION=3 IDLE=4 ALERT=5 ALERT_RESPONSE=6 COMBAT=7 ALARMON=8 ALARMOFF=9 WALK=10 GROUNDIMPACT=11 DOOR=12 FENCE=13 LADDER=14 TAKINGDAMAGE=15 GUNSHOT=16 GRENADETHROWN=17 GRENADELAND=18 FLASHBANG=19 GUNSHOTMISS=20 EXPLOSION=21 ENEMYDETECTION=22 FRIENDLYDETECTION=23
- `AIALARMACCESS_*`: BEFORECOMBAT=0, AFTERCOMBAT=1 · `AIACTIONFLAG_*`: NONE=0, PUSHABLE=1
- `FLOW_EVENT_*`: QUIT=1, INTRO=2, MAINMENU=3, GAME=4, RESTART_GAME=5

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
