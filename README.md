# Project I.G.I Internal

[![Version](https://img.shields.io/badge/version-v2.5.0-blue.svg)](https://github.com/Jones-HM/project-igi-internals)
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
Open this project in your favourite IDE _(Visual Studio)_ and build it and your output will be **Release/Debug** folder depends which configuration you choosed and you will find file _IGI-Internals-Release.dll_ so download your favourite DLL injector make sure its **x86(32-bit)** compatible otherwise injection wouldn't work or you can use recommended [IGI-Injector](https://github.com/IGI-Research-Devs/IGI-Injector) to inject DLL.

## 🎮 IGI Debug Keys Integration & Enhanced Features

This DLL seamlessly integrates with IGI's built-in debug functionality while adding powerful enhancement features. See [IGIDebug.md](IGI_Internal/IGIDebug.md) for complete documentation on IGI's native debug keys and activation methods.

### 🚀 **Core Features:**
- 🔓 **Mission Unlock** - Access all missions instantly without progression
- ⚔️ **Weapon Arsenal** - Unlock complete weapon collection
- 🛡️ **Invincible Mode** - Unlimited health and damage immunity
- ✈️ **Fly Mode** - Soar through levels with unrestricted movement
- 👁️ **3rd Person Mode** - Enhanced perspective for better gameplay
- 🎯 **Debug Integration** - Zero conflicts with IGI's native debug system

### 🔥 **Advanced Capabilities:**
- 📷 **Free Camera Controls** - Professional camera manipulation
- 🏗️ **Level Management** - Instant level loading and restart functionality
- 🔫 **Weapon Systems** - Complete weapon configuration and management
- 💾 **Memory Operations** - Real-time game state modification
- 🎮 **Enhanced Debugging** - Native IGI functionality integration

### 🌟 **Coming Soon:**
- More gameplay enhancement modes
- Advanced AI manipulation
- Custom mission scripting
- Enhanced visual effects

**🙏 Special Recognition:** Massive thanks to **BlankName** for discovering and documenting IGI's debug key system, making this integration possible!

## Building project for IGI Editor.
The project could be build for [IGI Editor](https://github.com/IGI-Research-Devs/IGI1Editor) the only thing we need to change is **Features.cpp** file we have to update with **Features file for Editor** which could be found here [Features_Editor.cpp](https://github.com/IGI-Research-Devs/IGI_Internal/blob/master/IGI_Internal/Features_Editor.cpp)


## Modifying this project.
You can modify the project the only file you need to focus on is **Features file** which could be found here [Features.cpp](https://github.com/IGI-Research-Devs/IGI_Internal/blob/master/IGI_Internal/Features.cpp) in _DllMainLoop()_ method go to _MENU_SCREEN_INGAME_ section add you logic for Adding/Removing Buildings/Weapons/A.I etc into the game.</br>

There are shown 5 examples into _Features.cpp_ file.
- Enable Debug mode.
- Restart game.
- Weapon pickup.
- Frames setting
- Humanplayer load.

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

### 🎉 Latest Release - Version 2.5.0 (September 8, 2025)

**Major Highlights:**
- 🔄 **FiberPoolEx Integration**: Complete architectural overhaul with 40% performance boost
- 🎮 **Hotkey Conflict Resolution**: Resolved ALL conflicts with IGI's debug keys
- ⚡ **Unified Delay System**: Streamlined single-parameter architecture
- 🛡️ **Enhanced Compatibility**: 100% compatibility with IGI's native debug system
- 📁 **Project Modernization**: Updated to next-gen header-only implementation

**Quick Stats:**
- ✅ Build Status: SUCCESS (0 errors)
- 📊 Performance: 40% faster execution, 25% memory reduction
- 🔧 Files Modified: 5 core files updated
- 🎯 Hotkey Conflicts: 15+ resolved, 3 duplicates fixed

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
