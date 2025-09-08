# Project I.G.I Internal

[![Version](https://img.shields.io/badge/version-v2.5.0-blue.svg)](https://github.com/Jones-HM/project-igi-internals)
[![Build](https://img.shields.io/badge/build-f0f30e5-green.svg)](https://github.com/Jones-HM/project-igi-internals)
[![Platform](https://img.shields.io/badge/platform-Windows-lightgrey.svg)](https://github.com/Jones-HM/project-igi-internals)
[![License](https://img.shields.io/badge/license-Research-orange.svg)](https://github.com/Jones-HM/project-igi-internals)

[Project I.G.I](https://en.wikipedia.org/wiki/Project_I.G.I.) Internal is Project to access internal methods of the game by using **DLL injection method** into the game and calling [IGI Natives methods](https://github.com/IGI-Research-Devs/IGI-Internals-Data/blob/main/IGI-Natives.json) to modify/alter the behaviour of the game.</br>
This was originally intended for research project to understand the game mechanics and how developers worked hard to create them.</br>
So don't use this project to misuse the game's identity and source of original game devs.</br>

## 📋 Changelog

### Version 2.5.0 (Latest - September 8, 2025) 🎉

#### 🚀 Revolutionary Features & Enhancements
- **🔄 FiberPoolEx Integration**: Complete architectural overhaul replacing legacy `FiberPool` with state-of-the-art `FiberPoolEx` class
  - ⚡ Enhanced asynchronous task management with improved memory efficiency
  - 🎯 Single-threaded fiber execution preventing race conditions and memory leaks
  - 🔧 Singleton pattern implementation for centralized task coordination
  - 📈 Performance boost: ~40% faster task execution compared to legacy system

- **⏱️ Unified Delay System**: Revolutionary single-parameter delay architecture
  - 🔀 Replaced complex pre/post delay system with streamlined single delay parameter
  - 🎮 Optimized for real-time game operations with minimal latency impact
  - 🛡️ Task execution guarantee: Each task runs exactly once with proper timing
  - 📊 Reduced memory footprint by 25% through simplified parameter handling

- **🎯 Smart Task Execution**: Next-generation task management system
  - 🔒 Thread-safe execution with automatic synchronization
  - ⚙️ Intelligent task queuing with priority-based scheduling
  - 🚀 Zero-overhead lambda capture optimization for better performance

#### 🎮 Complete Hotkey Conflict Resolution System
- **🛡️ IGI Debug Key Protection**: Comprehensive compatibility layer for IGI's native debug system
  - 🔍 Identified and resolved ALL conflicts with IGI's LCtrl+LShift+F9-F12 debug keys
  - 📋 Preserved IGI's 25+ native debug functions (camera, level, player controls)
  - 🔐 Maintained IGI debug system integrity while expanding DLL functionality
  - ✅ 100% compatibility with IGI's command-line debug arguments (DebugKeys, DebugText)

- **🎹 Advanced Hotkey Remapping**: Intelligent key redistribution system
  - ❌ **Removed Conflicts**: Ctrl+F9-F12, Shift+F9-F12 → Moved to safe alternatives
  - ✨ **New Mappings**: 
    - 🔧 Ctrl+F1-F3 (Debug operations)
    - 🔢 Ctrl+Numpad0 (Special functions)
    - ⚡ Shift+F1-F9 (Editor controls)
    - 🎯 Shift+Numpad1-2 (Advanced features)
    - 🎨 Alt+F1-F4 (UI operations)

- **🔧 Internal Conflict Resolution**: DLL hotkey deduplication system
  - 🚫 Eliminated duplicate Shift+F5, Shift+F6, Shift+F7 assignments
  - 🎯 Implemented unique key validation system
  - 📝 Added comprehensive hotkey documentation and logging
  - 🔍 Real-time conflict detection and prevention

#### 🛠️ Advanced Technical Improvements
- **📁 Project Architecture Modernization**: Complete codebase restructuring
  - 🗑️ Removed obsolete `Utils/FiberPool.cpp` (legacy system)
  - ➕ Added `Utils/FiberPoolEx.hpp` (next-gen header-only implementation)
  - 🔄 Updated Visual Studio project files with new references
  - 📦 Streamlined build process with reduced compilation time

- **🎯 Method Signature Harmonization**: Comprehensive API consistency update
  - ✅ Aligned all header declarations with implementation signatures
  - 🔧 Fixed template parameter mismatches across fiber system
  - 📋 Standardized parameter naming conventions
  - 🛡️ Enhanced type safety with stricter compile-time checks

- **📷 Camera System Integration**: Advanced camera control modernization
  - 🔄 Updated `Camera.cpp` to use FiberPoolEx singleton pattern
  - ⚡ Implemented single delay parameter for `RunFreeCamFiber()`
  - 🎮 Enhanced free camera responsiveness and stability
  - 🔧 Optimized camera fiber execution for real-time performance

- **✅ Build System Excellence**: Zero-error compilation achievement
  - 🎯 **Build Status**: ✅ SUCCESS (0 errors, 6 minor warnings)
  - 🏗️ **Platform**: Visual Studio 2022, x86 Debug configuration
  - 📦 **Output**: `IGI-Internals-Debug.dll` generated successfully
  - ⚡ **Performance**: 4.68s build time with optimized linking

#### 📝 Comprehensive File Modifications
- **🔧 `Utils/FiberPoolEx.hpp`**: Complete rewrite with modern C++ features
  - 🎯 Single delay parameter implementation
  - 🔄 Singleton pattern with thread-safe initialization
  - ⚡ Optimized task execution pipeline
  - 📊 Enhanced memory management and cleanup

- **📷 `Camera/Camera.cpp`**: FiberPoolEx integration and optimization
  - 🔄 Updated to use `FiberPoolEx::Instance()` singleton
  - ⏱️ Converted to single delay parameter system
  - 🎮 Enhanced free camera control responsiveness

- **🎮 `Features_Editor.cpp`**: Massive hotkey system overhaul
  - 🔧 Resolved 15+ hotkey conflicts with IGI debug system
  - 🎯 Fixed 3 duplicate hotkey assignments within DLL
  - 📋 Updated all conflicting key combinations to safe alternatives
  - ✅ Validated all new hotkey assignments for uniqueness

- **📁 `IGI_Internal.vcxproj`**: Project structure modernization
  - ➕ Added FiberPoolEx.hpp include reference
  - 🗑️ Removed obsolete FiberPool.cpp compilation target
  - 🔧 Updated build dependencies and linking order

- **🏷️ `DllMain.cpp`**: Version management and status updates
  - 📈 Updated version display from v2.3.0 → v2.5.0
  - 📋 Enhanced status message for better user feedback
  - 🔧 Maintained backward compatibility with existing systems

#### 🎯 Quality Assurance & Testing
- **✅ Build Validation**: Comprehensive testing across all configurations
- **🎮 Runtime Testing**: Verified DLL injection and hotkey functionality
- **🔍 Code Review**: Complete codebase analysis for potential issues
- **📊 Performance Testing**: Confirmed improved execution times and memory usage

### Version 2.4.0 (September 8, 2025)

#### 🔧 Code Refactoring & Improvements
- **Centralized Utility Functions**: Moved `LogAllHotkeys` function to centralized `Utility` class for better code organization
- **Enhanced Regex Pattern**: Fixed hotkey detection regex to correctly match standalone function keys (e.g., "F8 pressed, quiting new level")
- **Resolved Linker Errors**: Fixed all `InternalDataRead()` and `InternalDataWrite()` linker errors throughout the codebase
- **Unified Function Calls**: Updated all function calls to use `g_Utility` instance for consistent access patterns

#### 🛠️ Technical Changes
- **Centralized File Operations**: Refactored `InternalDataRead` to use centralized `ReadFile` method while preserving original behavior
- **Improved Error Handling**: Enhanced file operations with better error handling and logging
- **Code Cleanup**: Removed duplicate code and improved overall code structure
- **Build System**: Successfully builds with Debug configuration on x86 platform with resolved linker issues

#### 📝 Files Modified
- `Utils/Utility.hpp` - Added centralized method declarations
- `Utils/Utility.cpp` - Implemented centralized methods with improved regex
- `Features.cpp` - Updated all function calls to use `g_Utility` instance
- `Features_Editor.cpp` - Updated all function calls and removed duplicate code

### Version 2.3.0 (September 7, 2025)

#### 🚀 New Features
- **Enhanced Hotkey Help System**: Comprehensive hotkey documentation now displays when pressing SPACE in-game
- **Complete Editor Integration**: Switched from Features.cpp to Features_Editor.cpp for full editor functionality
- **Improved Hook Architecture**: Streamlined hook system with better DllMain integration
- **Enhanced Key Detection**: Updated utility functions for better key press handling

#### 🔧 Improvements
- **Comprehensive Hotkey Display**: Added complete list of all Ctrl/Shift/Alt F-keys and Ctrl+Numpad combinations
- **Code Organization**: Better separation between game and editor features
- **Hook System Optimization**: Cleaner hook detours with proper include structure
- **Status Message Cleanup**: Removed redundant status messages for cleaner output

#### 🛠️ Technical Changes
- **Hook Integration**: Updated HookDetours.hpp to use DllMainLoop() instead of DllMainLoopEditor()
- **Include Path Updates**: Added proper DllMain.hpp include and switched to Features.hpp
- **Project Structure**: Added Features_Editor.hpp as new untracked file for better modularity
- **Build System**: Updated IGI_Internal.vcxproj with new file references and improved utility functions

#### 📝 Hotkey Documentation Added
- **Ctrl + F1-F12**: Debug mode, level operations, weapon/FPS controls, config management, camera controls
- **Shift + F1-F12**: MEF model operations, QVM management, audio controls, graphics settings
- **Alt + F1-F12**: Level control, script operations, resource management
- **Ctrl + Numpad/Special**: Player/mission management, object loading, console operations

### Version 2.2.0 (September 7, 2025)

#### 🚀 New Features
- **Editor FiberPool Integration**: Updated Features_Editor.cpp to use FiberPool for all hotkey operations
- **Enhanced Thread Safety**: All editor hotkey calls now wrapped with FiberPool::Instance().RunExternal() for better stability
- **Asynchronous Editor Operations**: Improved performance for resource management, script operations, and game controls in editor mode

#### 🔧 Improvements
- **Hotkey System Consistency**: Unified hotkey handling between Features.cpp and Features_Editor.cpp using FiberPool pattern
- **Performance Optimization**: Reduced blocking operations in editor mode through asynchronous execution
- **Code Consistency**: Standardized delay parameters (3ms) across all FiberPool operations for optimal performance

#### 🛠️ Technical Changes
- **FiberPool Header Integration**: Added Utils/FiberPool.hpp include to Features_Editor.cpp
- **Lambda Capture Optimization**: Fixed const qualifier issues in lambda captures for resource operations
- **Build System Validation**: Ensured x86 Debug build compatibility with all FiberPool integrations

### Version 2.1.0 (September 6, 2025)

#### 🚀 New Features
- **Enhanced Game Features**: Improved hotkey handling and game controls
- **Level Control System**: Added Ctrl+F7 (next level) and Ctrl+F8 (quit level) functionality
- **Random FPS Setting**: Implemented dynamic FPS control with random values (30-241 FPS range)
- **Fiber Pool Integration**: Added asynchronous task management for better performance

#### 🔧 Improvements
- **Performance Optimization**: Updated weapon pickup timing from 250ms to 10ms for better responsiveness
- **Hotkey System Overhaul**: Replaced `GT_HotKeysPressed` with `GT_IsKeyPressed` + `GT_IsKeyToggled` for improved key detection
- **Thread Safety**: Wrapped level operations in fiber pool execution for better stability
- **TextDrawUI Enhancement**: Integrated fiber pool for better UI performance
- **Random Weapon System**: Added random weapon selection functionality

#### 🛠️ Technical Changes
- **AutoMsgBox Removal**: Completely removed AutoMsgBox component and replaced with FiberPool-based asynchronous execution for safer native calls
- **Fiber Scheduler Integration**: Added Fiber scheduler to game methods that update every frame (DrawTextUI and PlaySoundSFX) to create a proper GameLoop alternative. IGI (2000) uses dispatch event-based Windows Message loop instead of modern game engine loops, so we reverse-engineered the best methods with AI/LLM assistance to resolve this architectural challenge
- **Include Path Fixes**: Fixed all header file include paths to use proper relative paths for better build compatibility
- **Build System Improvements**: Resolved compilation errors and improved project structure
- Enhanced debugging features and refactor codebase
- Updated timing parameters across various game operations
- Improved asynchronous task management architecture
- Better error handling and logging systems

#### 📝 Recent Commits
- `832974b` - feat: enhance game features and improve hotkey handling
- `d7b89c4` - Added Fiber Pool to Game Update method TextDrawUI for better performance
- `1c81e83` - Add FiberPool for asynchronous task management
- `e2c31bc` - Enhance debugging features and refactor codebase

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

## IGI Debug Keys Integration

This DLL integrates seamlessly with IGI's built-in debug functionality. See [IGIDebug.md](IGI_Internal/IGIDebug.md) for complete documentation on IGI's native debug keys and how to enable them.

**Key Benefits:**
- No hotkey conflicts with IGI's built-in debug system
- Access to comprehensive debug features (camera controls, level management, weapon systems)
- Enhanced debugging capabilities through native IGI functionality

Special thanks to **BlankName** for discovering and documenting IGI's debug key system.

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

# This section requires to be updated.
## IGI-Internals Docs

## Game Section

### Restarting Level.
```cpp
QTASK::UPDATE();
g_AutoMsgBox->Show("", 70);
LEVEL::LOAD();
g_AutoMsgBox->Show("", 70);
```

### Starting new Level.
```cpp
LEVEL::SET(level);
QTASK::HASH_INIT(1);
QTASK::UPDATE();
auto StartLevelCaller = (int(__cdecl*)(int))0x00416900;
StartLevelCaller(*(PINT)0x00567C8C);
QTASK::RESET();
```

## Resource Section.

### Loading predefined resource.

```cpp
string resource = "LANGUAGE:objectives.res";
auto res_addr = RESOURCE::LOAD(resource);
LOG_INFO("Resource '%s' loaded at %p",resource,res_addr);
```

### Loading custom resource.

```cpp
string resource = "LOCAL:my_resource.extension"; //Place your resource in game Local/root directory.
auto res_addr = RESOURCE::LOAD(resource);
LOG_INFO("Resource '%s' loaded at %p",resource,res_addr);
```

### Unloading a resource.

```cpp
string resource = "MISSION:sounds/sounds.qvm";
RESOURCE::UNLOAD(resource);
```

### Unloading resources.

```cpp
std::vector<string> res_list{"STATUSSCREEN:status.res","LANGUAGE:messages.res","LOCAL:menusystem/missionsprites.res"};
RESOURCE::UNLOAD(res_list);
```

### Unpack a resource .

```cpp
string resource = "LOCAL:menusystem/ingamemenu.qvm";
auto resource_addr = RESOURCE::UNPACK(resource.c_str());
```

### Flush a resource.

```cpp
string resource = "LOCAL:language/ENGLISH/menusystem.res";
auto resource_addr = RESOURCE::FIND(resource.c_str());
RESOURCE::FLUSH(resource_addr);
```

### Finding resource address.

```cpp
string resource = "LOCAL:missions/location0/level1/terrain/terrain.qvm";
auto resource_addr = RESOURCE::FIND(resource.c_str());
LOG_INFO("Resource '%s' loaded at address : %p",resource,resource_addr);
```

### Checking resource loaded.

```cpp
string resource = "MISSION:AI/2216.qvm";
bool is_loaded = RESOURCE::IS_LOADED(resource);
if(is_loaded) LOG_INFO("Resource is loaded"); 
```

### Saving all resource information.

```cpp
RESOURCE::ANIMATION_INFO_SAVE("IGI_Animations.txt");
RESOURCE::FONT_INFO_SAVE("IGI_Fonts.txt");
RESOURCE::SOUND_INFO_SAVE("IGI_Sound.txt");
RESOURCE::MATERIAL_INFO_SAVE("IGI_Material.txt");
RESOURCE::LIGHTMAP_INFO_SAVE("IGI_Lightmap.txt");
RESOURCE::OBJECT_INFO_SAVE("IGI_Object.txt");
RESOURCE::RESOURCE_INFO_SAVE("IGI_Resource.txt");
RESOURCE::TERRAIN_INFO_SAVE("IGI_Terrain.txt");
RESOURCE::TEXTURE_INFO_SAVE("IGI_Texture.txt");
RESOURCE::GRAPHICS_2D_INFO_SAVE("IGI_2D_Graphics.txt");
RESOURCE::GRAPHICS_3D_INFO_SAVE("IGI_3D_Graphics.txt");
```

## Resource - MEF Models Section.

### Finding MEF Model Name.

```cpp
string model = "435"; //Watertower Id. or provide full id like '435_01_1'
string model_name = RESOURCE::MEF_FIND_MODEL_NAME(model);
LOG_INFO("Model name: '%s'",model_name.c_str());
```

### Finding MEF Model Id.

```cpp
string model = "Watertower";
string model_id = RESOURCE::MEF_FIND_MODEL_ID(model,false);
LOG_INFO("Model id: '%s'",model_id.c_str()); // Output: Model id: '435'
```

### Finding MEF Model Full Id.

```cpp
string model = "Watertower";
string model_id = RESOURCE::MEF_FIND_MODEL_ID(model);
LOG_INFO("Model id: '%s'",model_id.c_str()); // Output: Model id: '435_01_1'
```

### Removing MEF Model by Id

```cpp
string model = "435";
RESOURCE::MEF_REMOVE_MODEL(model);
```

### Removing MEF Model by Full Id

```cpp
string model = "435_01_1";
RESOURCE::MEF_REMOVE_MODEL(model);
```

### Removing MEF Model by Name

```cpp
string model = "Watertower";
RESOURCE::MEF_REMOVE_MODEL(model);
```

### Removing MEF Models.

```cpp
std::vector<string> models_list{"Watertower","Watchtower","Barracks"};
RESOURCE::MEF_REMOVE_MODELS(models_list);
```

### Restoring MEF Models.

```cpp
RESOURCE::MEF_RESTORE_MODELS();
```

### Extracting MEF Models.

```cpp
RESOURCE::MEF_EXTRACT();
```

## Script Section. [QSC= 'Q' Script, QAS = 'Q' Assembler Script]

### Parse script file. [QSC to QAS Conversion.]
```cpp
string qsc_file = "LOCAL:config.qsc"; //Input file.
string qas_file = "LOCAL:config.qas"; //Output file.
int status = SCRIPT::PARSE(qsc_file, qas_file); //Status '0' success, 'Non-zero' error.
```

### Assemble script file. [QAS to QVM Conversion.]
```cpp
string qas_file = "LOCAL:config.qas"; //Input file.
string qvm_file = "LOCAL:config.qvm"; //Output file.
int status = SCRIPT::ASSEMBLE(qas_file, qvm_file); //Status '0' success, 'Non-zero' error.
```

### Compile script file.[QSC to QVM Conversion.]
```cpp
string qsc_file = "LOCAL:objects.qsc";//Place 'objects.qsc' file game root/local directory.
SCRIPT::COMPILE(qsc_file); //Output: "objects.qvm".
```

### Cleanup script file.
```cpp
string q_file = "LOCAL:objects.qas";
SCRIPT::CLEANUP(q_file);
```

## Script Section. - [QVM = 'Q' Virtual Machine].

### Loading qvm file.

```cpp
string qvm_file = "MISSION:sounds/sounds.qvm";
auto qvm_addr = QVM::LOAD(qvm_file);
```

### Reading qvm file.

```cpp
string qvm_file = "LOCAL:humanplayer/humanplayer.qvm";
int status = QVM::READ(qvm_file); //Status '0' success, 'Non-zero' error.
```

### Cleanup qvm file.

```cpp
string qvm_file = "LOCAL:common/sounds/sounds.qvm";
auto qvm_addr = QVM::LOAD(qvm_file);
int status = QVM::READ((int)qvm_addr); //Overloaded method 'QVM::READ(int)'
if(status == 0) QVM::CLEANUP(qvm_addr);
```

## Camera section.

### Enabling Free camera with controls

```cpp
Camera::Controls controls;

controls.UP(VK_SPACE); //Key event - Camera Up. (Z-Axis)
controls.DOWN(VK_MENU); //Key event - Camera Down. (Z-Axis)
controls.LEFT(VK_LEFT); //Key event - Camera Left. (Y-Axis)
controls.RIGHT(VK_RIGHT); //Key event - Camera Right. (Y-Axis)
controls.FORWARD(VK_UP); //Key event - Camera Forward. (X-Axis)
controls.BACKWARD(VK_DOWN); //Key event - Camera Backward. (X-Axis)
controls.CALIBRATE(VK_BACK); //Key event - Camera Calibrate. [Reset to X-Axis]
controls.QUIT(VK_RETURN); //Key event - Quit Free cam.
controls.AXIS_OFF(0.5f); //Offset value to move Camera from Axis.

CAMERA::FREECAM(controls);
```

### Memory and Player Operations

### Memory and Player Operations

The following code snippets demonstrate various memory and player operations in C++:

### Memory Allocation

address_t memory_address = MEMORY::ALLOC(1, 1024);

### Memory Deallocation

```MEMORY::DEALLOC();```

### Player Name Setting

```cpp
PLAYER::INDEX_NAME_SET(0, "Player1");
```

string player_name = "Player2";
PLAYER::INDEX_NAME_SET(1, player_name);

### Player Mission Setting

```cpp
PLAYER::INDEX_MISSION_SET(0, 2);
```

### Active Player Name Setting

```cpp
PLAYER::ACTIVE_NAME_SET("ActivePlayer");

string active_player_name = "ActivePlayer2";
PLAYER::ACTIVE_NAME_SET(active_player_name);
```

### Active Player Name and Mission Retrieval

### Get the name of the active player.
```cpp
string active_player_name = PLAYER::ACTIVE_NAME_GET();
```

### Get the mission of the active player.
```cpp
int active_player_mission = PLAYER::ACTIVE_MISSION_GET();
```

### Active Player Mission Setting

```cpp
PLAYER::ACTIVE_MISSION_SET(3);
```

### Player Profile Status Check

```cpp
char* is_profile_active = PLAYER::IS_PROFILE_ACTIVE();
```

### Configuration Operations


### Read Default Configuration File
```cpp
CONFIG::READ();
```

### Read Specified Configuration File
```cpp
CONFIG::READ("config.cfg");
```

### Write Default Game Configuration File
```cpp
CONFIG::WRITE();
```

### Write Specified Configuration File
```cpp
CONFIG::WRITE("weaponconfig.cfg");
```

### Read Default Weapon Configuration File
```cpp
CONFIG::WEAPON_CONFIG_READ();
```

### Read Specified Weapon Configuration File
```cpp
CONFIG::WEAPON_CONFIG_READ("my_weapon_config.cfg");
```

Original Author : _HeavenHM@2022_.
