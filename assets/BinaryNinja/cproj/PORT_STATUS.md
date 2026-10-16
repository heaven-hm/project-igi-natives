# igi.exe -> macOS native C port

## Current measured state
- Native functions exported as C source: **4646**
- Native translation units in the build allowlist: **2173 of 4646 (46.8%)** compile and link with the current macOS shim on arm64 (Apple Clang 16.0.0, C11, `-O2`). The CMake target links **2183** translation units. These are build counts, not behavioral coverage.
- Core player movement bodies compiled and linked: **3 of 4**. `Human_MovementIntegrator` has a typed C translation based on REA/Ghidra evidence. `Human_WallSweep` has a readable partial translation for ray construction, hit filtering, nearest-wall selection, sliding, flag handling, and the iteration cap. Its host world-trace provider is a weak no-op that emits a timestamped warning once. REA/Ghidra caller and body evidence establishes the `World_TraceBatch` ABI (nine arguments, integer ray count in argument five, no caller-observed return value); the generated C body remains excluded because its broader data flow is not normalized. The wall sweep's roof/ceiling branches are not translated. `Human_Separation` has an instruction-backed C translation, but its default candidate provider is empty until guest-state initialization is implemented. `Human_GroundQuery` has a confirmed six-argument ABI and documented static behavior, but its generated body is malformed and the compiled library still resolves it to a weak no-op; see `HUMAN_GROUND_QUERY_RESEARCH.md`.
- An isolated C11 harness passed checks for movement damping and position updates, collision call order and slope ground-query budget, and timestamped null-object error handling. It uses synthetic object memory and mocked engine callbacks; it does not establish gameplay parity.
- CMake produces an arm64 `libiginatives.dylib` and `igi_natives_runner`. The Makefile delegates to this same CMake build, so it uses no Python helper or separate native-source list.
- The repository-root CMake project now enables C and C++, builds the C++ application with the C11 native library, and links `igi_game` to `libiginatives`. The app does not call recovered routines yet. The C layer uses SDL2's C timer API for the translated `GetTickCount` shim and selects platform-specific shared-library linker settings. Windows and Linux builds have not yet been run.
- The isolated diagnostic runner faults on four of five representative calls without initialized engine state; `QTask_Init` returns normally with its verified `void` signature. This is not a gameplay runtime test. Runtime-verified behavior against the original game: **0**.
- This is not an `igi.app` or a runnable game. The native engine loop, renderer, audio, input, VFS, and game-data integration are not implemented here.
- Verification rerun (2026-10-16): the CMake C11 build produced arm64 `libiginatives.dylib` and `igi_natives_runner`. CTest passed 7/7 targeted probes. Movement probes call the translated C functions directly with mocked providers: `human_movement_integrator_collision_order` checks collision ordering, damping, transform commit, flags, and ground-query budgets; `human_wall_sweep_single_wall_response` checks a synthetic perpendicular hit and clear follow-up; `world_trace_batch_stub_abi` checks the audited interface and unchanged hit buffer from the unavailable provider. Both movement probes passed AddressSanitizer and UndefinedBehaviorSanitizer. The diagnostic runner exits with status 1 because four native calls fault against unavailable engine state; `QTask_Init` returns normally. These checks verify library compilation and selected synthetic behavior only; they do not run the game.
- Verification rerun (2026-10-16): a clean repository-root CMake configure and build compiled the C++ application, C++ gameplay library, C11 native library, and diagnostic runner on arm64 macOS with Apple Clang 16.0.0. CTest passed 9/9 tests: the two C++ tests and seven C probes. The `human_movement_integrator_probe` target collision between subprojects was resolved by renaming the C target to `cproj_human_movement_integrator_probe`. This verifies a unified macOS build; it does not prove Windows/Linux portability, native game integration, or retail parity.
- Verification rerun (2026-10-16): after linking `igi_game` to `libiginatives.dylib`, `otool -L` confirmed the dependency and `igi_game --headless --frames 3` completed cleanly. CTest passed 9/9. The application still does not call native functions or load a mission; this verifies linkage and startup only.
- Verification rerun (2026-10-16): five task-event translations were individually compiled, added to the allowlist, and linked into the C library. The `qtask_event_dispatch_table_and_recursion` probe passed alongside the prior suite (10/10); it checks registered-name lookup, both allocator flag variants, table indices, recursion guards, and dispatch-depth restoration in synthetic guest memory. It does not run retail callbacks or the game.
- Verification rerun (2026-10-16): `Frames_Get` was translated from REA/Ghidra evidence `ev_28d810006f19668907182f901338458c2a0b55a1c1cadd90121342f565754dd6`. It reads the game-context guest pointer at `0x00567C8C` and the frame-limit field at offset `0x3C` through the guest-memory adapter. An individual strict C compile passed, and the new synthetic probe covers valid, null, and unmapped context cases. The full CMake build linked `igi_game`; CTest passed 11/11. This does not initialize or run the retail game context.
- `nm -m libiginatives.dylib` reports 2,892 unique weak external references. This count includes both function and data symbols, so it is not a missing-function count. The CMake link uses `-undefined dynamic_lookup`; successful linking therefore does not prove that native dependencies are implemented or resolvable at runtime.
- QTask table-clear translation: REA/Ghidra evidence `ev_b0cbd57cd8663c36fc61b9080d89dfdb99c54e8cf7fc087e80b5f301b1b49a5d` for `0x004011D0` shows a guest-address walk from `0x0054F932` to `< 0x0054FF26` in six-byte steps, clearing the first byte of each record. The C body now performs that operation through `GI_PE_DATA_PTR`, avoiding host-pointer comparisons against 32-bit guest addresses. A CTest probe initializes sentinel bytes, verifies each cleared byte and preserved neighboring bytes, and checks both bounds; it passes on arm64 macOS. This validates the translated table-clear routine against static evidence, not the live original engine.
- QTask initialization's hard-coded guest-memory write at `0x00A969E0` uses the guest data backing store. REA segment evidence `ev_804fcccc242aec0962e7741af633200ecbdb9e972540f56b0bb58f2e565d50eb` places this address inside the writable `.data` range `0x00536000..0x00C32558`.
- Guest heap storage now assigns 32-bit game addresses to host allocations and resolves them only at memory access. `Sys_FreeMemory_2` uses this adapter for its x86 pointer fields instead of truncating 64-bit host pointers. `Mem_Alloc` at `0x004B0C60` is included explicitly in both build systems and uses the host allocator, preserving requested alignment and `Mem_DeallocAll` lifetime tracking. Ghidra evidence `ev_2cf9c8541c4d9360e7ca8cf519b458a972221d89d756a30c7de8ab5897c4113d` shows the retail routine calling `malloc` before its alignment and tracking logic; this replaces an incorrectly named weak fallback that returned null. The former `0x0000BD80` fault is gone, but task/hash registration remains incomplete.
- Qhash stack translations: REA/Ghidra evidence `ev_dd7cebbb624310c9208bb417de2af723aa3f45c02d570422ea21454fd9dfc0c7` for `Qhash_Init` (`0x004B0D60`) and `ev_acc2a0cac6b3456dabde987d40eb7a881d34d4b21dd77368bef17b3bd07476ec` for `Qhash_Reset` (`0x004B0D90`) establish the guest stack and active-hash addresses. The CTest probe verifies nested save/restore and rejection of invalid stack depths using synthetic guest memory. This does not validate task/hash registration or retail gameplay.

`clean_sources.json` contains 2174 successful entries (including the shared stubs source) and 2473 rejected native source files. CMake omits the shared stubs entry from the allowlist loop and links it separately. The generated CMake object list contains 2183 translation units. Compiler acceptance and synthetic probes are not behavioral validation; the allowlist is not an independently audited verification manifest. See `PLAYER_MOVEMENT_PARITY.md` for the player movement audit.

REA/Ghidra evidence `ev_7f8aa6e5987bfde75b927c4ea131533c9e73d26395ac2d0cc954d9e569a2e9ad` establishes `QTask_RemoveEventCallback`'s table indices, recursion guard, 0x30-byte task walk, and dispatch-depth update. Its C translation uses those guest addresses directly through the PE data image and compiles individually; this static parity does not establish live task-system behavior.

REA/Ghidra evidence `ev_9942847a6d3b0c0f9d7ef5a54817252d9ba7630e04166589a782faa3eedabb84` establishes `QTask_TriggerEvent`'s event-table row calculation, dispatch guard, task walk, recursive call, and depth counter. The C source retains the unmasked second argument used by the retail assembly; runtime event-table state is still uninitialized in the native runner.

REA/Ghidra evidence `ev_9e006df00d0d933adf9e5edd18041bd72e40b1ed13aba4c95e38e5e0b2182d3d` establishes the 6-byte slot scan, task type write, two flag bytes, and fatal full-table path in `QTask_UnableToAllocateEvent`. The synthetic event-dispatch probe checks the first available slot's address and field layout; it does not exercise the fatal full-table loop.

REA/Ghidra evidence `ev_a366b812c02056cdcad9b7440544a64baf16cf1fb2b89ca600dd436d537ced4e` confirms the second allocator uses the same six-byte slot layout but writes zero to the third byte. The C probe checks this distinction independently.

REA/Ghidra evidence `ev_1d6c1c87174c21c52b5b426e8ae953a2db7d1543517e8e2aac2f0b895d271e18` confirms `QTask_CleanupEvents` masks its slot index to eight bits, writes the task type and both active flags, and returns the six-byte slot offset. The synthetic probe covers index `0xff`.

REA/Ghidra evidence `ev_ed4d28c60446be367ff9fc8bc55a8fd522ddb582134e026d2ece3d89cc4268ca` establishes `QTask_QtaskTypeSNotDefined`'s active-record scan, name lookup, index return, and fatal unknown-name behavior. The probe resolves one registered guest string and verifies the returned task index. The fatal unknown-name loop remains untested because it intentionally never returns.

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
5. Link `libiginatives.dylib` (built by CMake, also available through `make`) against that harness -> igi.app

## Layout
```
cproj/src/*.c *.h        4646 native bodies, clang -std=c11
cproj/src/gi_platform.h  shared native types and SDL2-backed monotonic tick interface
cproj/Makefile           delegates configure, build, test, and clean to CMake
cproj/reference/         IGI_Structures.hpp, IGINatives.map, OpenIGITaskTypes.json, OpenIGI REA json
cproj/CPROJ_BUILD_REPORT.json  measured compile results + error categories
```
