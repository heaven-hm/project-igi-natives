# igi.exe -> macOS native C port

## Current measured state
- Native functions exported as C source: **4646**
- Native translation units in the build allowlist: **2165 of 4646 (46.6%)** compile and link with the current macOS shim on arm64 (Homebrew Clang 23.1.3, C11, `-O2`). The latest CMake build also links the movement integrator, wall-sweep body, and separation body outside the allowlist, for **2171** C translation units in the library, as counted from CMake’s generated object list.
- Core player movement bodies compiled and linked: **3 of 4**. `Human_MovementIntegrator` has a typed C translation based on REA/Ghidra evidence. `Human_WallSweep` now has a readable partial translation for ray construction, hit filtering, nearest-wall selection, sliding, flag handling, and the iteration cap. Its host world-trace provider is a weak no-op that emits a timestamped warning once. The generated `World_TraceBatch` body is excluded because its fifth parameter is incorrectly typed as a pointer; REA Ghidra evidence identifies it as an integer ray count. The wall sweep's roof/ceiling branches are not translated. `Human_Separation` has an instruction-backed C translation, but its default candidate provider is empty until guest-state initialization is implemented. `Human_GroundQuery` still resolves to a weak no-op fallback.
- An isolated Clang 23.1.3 C11 harness passed checks for movement damping and position updates, collision call order and slope ground-query budget, and timestamped null-object error handling. It uses synthetic object memory and mocked engine callbacks; it does not establish gameplay parity.
- CMake produces an arm64 `libiginatives.dylib` from those native files plus `gi_stubs.c`. Make has not been revalidated with the new wall-sweep translation.
- The isolated harness can load the library, but all five representative native calls fault without initialized engine state. Runtime-verified native behavior: **0**.
- This is not an `igi.app` or a runnable game. The native engine loop, renderer, audio, input, VFS, and game-data integration are not implemented here.
- Verification rerun (2026-10-16): `cmake --build cmake_build --parallel 4` completed on arm64 macOS and produced `libiginatives.dylib` plus `igi_natives_runner`. Running the runner reproduced five faults out of five calls. This verifies compilation and failure handling only; it does not run the game.
- `nm -m libiginatives.dylib` reports 2,892 unique weak external references. This count includes both function and data symbols, so it is not a missing-function count. The CMake link uses `-undefined dynamic_lookup`; successful linking therefore does not prove that native dependencies are implemented or resolvable at runtime.

`clean_sources.json` contains 2166 successful entries and 2481 rejected native source files. The allowlist contains 2166 entries; CMake omits the shared stubs entry from that list and links the platform stubs separately. The generated object list currently contains 2171 C translation units including the explicit movement bodies and adapters. CMake explicitly includes the `Human_MovementIntegrator`, `Human_WallSweep`, and `Human_Separation` bodies, plus the candidate-provider adapter. Compiler acceptance and synthetic probes are not behavioral validation; the allowlist is not an independently audited verification manifest. See `PLAYER_MOVEMENT_PARITY.md` for the player movement audit.

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
