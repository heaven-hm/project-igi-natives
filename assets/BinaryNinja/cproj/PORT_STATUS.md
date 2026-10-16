# igi.exe -> macOS native C port

## Current measured state
- Native functions exported as C source: **4646**
- Native translation units in the build allowlist: **2165 of 4646 (46.6%)** compile and link with the current macOS shim on arm64 (Homebrew Clang 23.1.3, C11, `-O2`). The latest CMake build also links the movement integrator, wall-sweep body, separation body, guest-memory adapters, and native heap allocator, for **2172** C translation units in the library, as counted from CMake’s generated object list.
- Core player movement bodies compiled and linked: **3 of 4**. `Human_MovementIntegrator` has a typed C translation based on REA/Ghidra evidence. `Human_WallSweep` now has a readable partial translation for ray construction, hit filtering, nearest-wall selection, sliding, flag handling, and the iteration cap. Its host world-trace provider is a weak no-op that emits a timestamped warning once. The generated `World_TraceBatch` body is excluded because its fifth parameter is incorrectly typed as a pointer; REA Ghidra evidence identifies it as an integer ray count. The wall sweep's roof/ceiling branches are not translated. `Human_Separation` has an instruction-backed C translation, but its default candidate provider is empty until guest-state initialization is implemented. `Human_GroundQuery` still resolves to a weak no-op fallback.
- An isolated Clang 23.1.3 C11 harness passed checks for movement damping and position updates, collision call order and slope ground-query budget, and timestamped null-object error handling. It uses synthetic object memory and mocked engine callbacks; it does not establish gameplay parity.
- CMake produces an arm64 `libiginatives.dylib` from those native files plus `gi_stubs.c`. Make has not been revalidated with the new wall-sweep translation.
- The isolated harness can load the library. Four of its five representative native calls fault without initialized engine state; `QTask_Init` returns null because its task/hash registration services are still weak fallbacks. Runtime-verified behavior against the original game: **0**.
- This is not an `igi.app` or a runnable game. The native engine loop, renderer, audio, input, VFS, and game-data integration are not implemented here.
- Verification rerun (2026-10-16): CMake and Make both built arm64 `libiginatives.dylib` plus `igi_natives_runner`; CTest passed 3/3 targeted probes. The Make pattern now depends on common and per-native headers so edits cannot leave stale objects linked. The diagnostic runner reports four faults; `QTask_Init` returns a null context after initialization reaches the still-unimplemented task/hash services. This verifies library compilation and selected native behavior only; it does not run the game.
- `nm -m libiginatives.dylib` reports 2,892 unique weak external references. This count includes both function and data symbols, so it is not a missing-function count. The CMake link uses `-undefined dynamic_lookup`; successful linking therefore does not prove that native dependencies are implemented or resolvable at runtime.
- QTask table-clear translation: REA/Ghidra evidence `ev_b0cbd57cd8663c36fc61b9080d89dfdb99c54e8cf7fc087e80b5f301b1b49a5d` for `0x004011D0` shows a guest-address walk from `0x0054F932` to `< 0x0054FF26` in six-byte steps, clearing the first byte of each record. The C body now performs that operation through `GI_PE_DATA_PTR`, avoiding host-pointer comparisons against 32-bit guest addresses. A CTest probe initializes sentinel bytes, verifies each cleared byte and preserved neighboring bytes, and checks both bounds; it passes on arm64 macOS. This validates the translated table-clear routine against static evidence, not the live original engine.
- QTask initialization's hard-coded guest-memory write at `0x00A969E0` uses the guest data backing store. REA segment evidence `ev_804fcccc242aec0962e7741af633200ecbdb9e972540f56b0bb58f2e565d50eb` places this address inside the writable `.data` range `0x00536000..0x00C32558`.
- Guest heap storage now assigns 32-bit game addresses to host allocations and resolves them only at memory access. `Sys_FreeMemory_2` uses this adapter for its x86 pointer fields instead of truncating 64-bit host pointers. `Mem_Alloc` at `0x004B0C60` is included explicitly in both build systems and uses the host allocator, preserving requested alignment and `Mem_DeallocAll` lifetime tracking. Ghidra evidence `ev_2cf9c8541c4d9360e7ca8cf519b458a972221d89d756a30c7de8ab5897c4113d` shows the retail routine calling `malloc` before its alignment and tracking logic; this replaces an incorrectly named weak fallback that returned null. The former `0x0000BD80` fault is gone, but task/hash registration remains incomplete.

`clean_sources.json` contains 2166 successful entries and 2481 rejected native source files. The allowlist contains 2166 entries; CMake omits the shared stubs entry from that list and links the platform stubs separately. The generated object list currently contains 2172 C translation units, including the explicit movement bodies, guest-memory adapters, and native heap allocator. Compiler acceptance and synthetic probes are not behavioral validation; the allowlist is not an independently audited verification manifest. See `PLAYER_MOVEMENT_PARITY.md` for the player movement audit.

## Remaining source blockers
The files omitted from `clean_sources.json` still include the previously measured categories in `CPROJ_BUILD_REPORT.json`:
1. `expected ')'` - Borland/MSVC register-pair and far-pointer ABI artifacts
2. incomplete `void*` and missing recovered struct types
3. incompatible integer/pointer conversions from address-backed globals with incomplete types
4. undeclared engine callees and remaining x87/char/pointer mismatches

## Path to a runnable igi.app
1. Audit the allowlist and source provenance; do not treat successful compilation as semantic validation
2. Finish the per-method struct pass for unbuildable files and recover missing engine interfaces
3. Normalize ABI artifacts with per-file review
4. Engine subsystems are NOT in the natives set: renderer, audio, input, VFS.
   open-igi has the macOS port of those. A C port needs a Vulkan/Metal renderer,
   OpenAL audio (open-igi has it), POSIX VFS - engine harness, not natives work.
5. Link `libiginatives.dylib` (Makefile builds it) against that harness -> igi.app

## Layout
```
cproj/src/*.c *.h        4646 native bodies, clang -std=c11
cproj/src/gi_platform.h  macOS shim - GetTickCount via mach_absolute_time, zero Win32 headers
cproj/Makefile           builds allowlisted native files into libiginatives.dylib
cproj/reference/         IGI_Structures.hpp, IGINatives.map, OpenIGITaskTypes.json, OpenIGI REA json
cproj/CPROJ_BUILD_REPORT.json  measured compile results + error categories
```
