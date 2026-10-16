# Project I.G.I. Native macOS Port — Full Working Prompt

This document consolidates the project owner's instructions and the current working context for future contributors and coding agents. It is the project brief, not proof that any described feature or analysis is complete. Confirm current source, build output, tool availability, binary identity, and runtime evidence before making claims about status.

## 1. Main objective

Create a native macOS application for the original **Project I.G.I.** game, ultimately packaged as `igi.app`, using the owner's legally available original game data from:

- Game directory: `/Users/haseeb-mir/Downloads/IGI/`
- Retail executable used as the reverse-engineering reference: `/Users/haseeb-mir/Downloads/IGI/igi.exe`

The goal is to recreate the original game engine's behavior as faithfully as practical while replacing Windows-specific APIs and DirectX 7 with native macOS equivalents. Preserve the original game's rules, movement, physics, weapons, AI behavior, rendering appearance, animation, scripting, file loading, and gameplay. Do not turn this into a redesigned or enhanced game. The owner's stated target is a highly faithful port, with the immediate milestone being a playable gameplay prototype rather than a polished menu or complete audiovisual port.

Use the original game assets; do not redistribute them. Do not make an injector, trainer, cheat, or Windows API dependency the macOS engine architecture. This is a native port that may use reverse engineering to understand the original executable.

## 2. Priorities and prototype scope

Work in small, reviewable increments. Prioritize in this order:

1. A native application and game-loop foundation that loads an original mission and its assets.
2. Player state and movement: walk, run, crouch, jump, fall, land, slopes, collision, and movement animation state.
3. World collision and physics, including wall sweep, ground query, sliding, and separation from other humans.
4. Weapon behavior: equip, aim, fire, projectile/hit behavior, reload, and weapon-specific movement/state transitions.
5. AI perception, target selection, navigation, alert/combat state, and behavior.
6. Rendering of terrain, models, textures, and animation with original-game visual fidelity.
7. Input, resource/file-system integration, QVM/script execution, then sound and other presentation details.
8. Menus, intro sequences, and polish can follow the playable gameplay prototype.

Sound may be deferred initially, but keep the architecture compatible with implementing the original sound behavior later. Do not claim a prototype is playable until it launches a real level and the core gameplay loop works.

## 3. Language and platform choices

- Target native macOS, including Apple Silicon where practical.
- Runtime implementation code must use only C, C++, or Rust. Use C++20 for new engine and application code, C11 for direct native translations, and Rust only for isolated components when it materially helps correctness. Do not add Swift, Objective-C++, C#, or Python runtime code.
- Keep the game core portable across macOS, Windows, and Linux. Isolate operating-system services behind cross-platform C/C++/Rust interfaces. SDL2's C API is an approved platform boundary for window, input, and rendering services; project source must not depend on Swift, Objective-C++, Win32, or DirectX.
- The original executable is 32-bit x86 and uses DirectX 7. Treat its calling conventions and numeric behavior as reverse-engineering evidence. Do not copy its Windows platform layer into the macOS runtime.
- Favor readable, explicit code and narrow interfaces between platform services and game logic.

## 4. Source projects and research references

Use these local projects as references when relevant. Inspect their current state before relying on details:

- Main working repository: `/Users/haseeb-mir/Documents/Code/project-igi-natives`
- Open-source macOS port reference: `/Users/haseeb-mir/Documents/Code/open-igi`
  - The owner says this project has a `develop` branch and/or `macos-build` work. Use it for architectural ideas and platform integration. It is known by the owner to match only part of the retail game; do not copy behavior uncritically or inherit its known fidelity gaps.
- Game asset format converter: `/Users/haseeb-mir/Documents/Code/project-igi-converter`
- Converter format documentation: `/Users/haseeb-mir/Documents/Code/project-igi-converter/docs`
- Converter utility: `/Users/haseeb-mir/Documents/Code/project-igi-converter/igi1conv` (check the actual path/build and platform before use)
- REA / re-agent checkout: `/Users/haseeb-mir/Documents/Code/rea`
- Requested REA upstream: `https://github.com/heaven-hm/re-agent.git`
- Binary Ninja exports and catalogs: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/`
- Verified native catalog requested by the owner: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/IGINatives_VERIFIED.json`
- Current C prototype workspace: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/cproj/`

The repository also contains native catalogs, exports, and prior research under `assets/`. Treat catalog entries as leads or static evidence, not as implementations of whole engine subsystems. A large number of native functions does not mean the game engine has been ported.

## 5. Reverse-engineering and evidence workflow

Use static, runtime, memory, and verification analysis where available and safe for this owned game copy. Make evidence reproducible and record the target executable's identity (path, architecture, size, and SHA-256) with analysis results.

### Static analysis

- Use REA/re-agent, Ghidra, Radare2, and Binary Ninja to inspect functions, call sites, control flow, strings, data references, object layouts, constants, and calling conventions.
- Prefer corroboration across disassembly, decompilation, callers/callees, and data structures. A decompiler's guessed names or types are hypotheses until checked.
- Record evidence identifiers, addresses, tool versions, query/command details, and confidence or unresolved ambiguity in research notes.
- When additional natives are discovered, update the requested verified catalog and relevant Binary Ninja method names, variables, and identifiers. Preserve provenance and do not label a function verified solely because it exists in the binary.

### Runtime and memory analysis

- The original executable may be launched using the installed CrossOver environment when that environment is functioning. The owner's known launch form is `igi.exe window level1`; fullscreen has known Direct3D issues under CrossOver. Confirm the current CrossOver launch command and prefix before use.
- Collect comparable in-game state for the retail executable and native prototype: player position, velocity/acceleration, flags, collision results, animation state, weapon state, AI state, and per-tick transitions as applicable.
- Use Frida-like instrumentation, REA runtime capabilities, debuggers, or memory inspection tools only when actually installed and usable. Report the exact tool and invocation used; never state that runtime or memory analysis happened when it did not.
- Keep runtime sampling controlled and repeatable. Identify the mission, starting state, input sequence, frame/tick timing, and build used.

### Verification

Separate evidence levels clearly:

1. **Static existence/signature evidence**: function and call-site facts from the binary.
2. **Build/syntax evidence**: source compiles and links for the stated target.
3. **Unit or synthetic harness evidence**: isolated behavior with mocked callbacks and synthetic memory.
4. **Runtime integration evidence**: actual native build runs through a real level and engine providers.
5. **Behavioral parity evidence**: controlled retail-versus-port comparisons for equivalent inputs and states.

Never describe a compile, symbol export, mock harness, or static analysis as proof of gameplay parity. For parity, specify measured values, tolerances, sample size, and known platform floating-point differences. Validate failures, invalid pointers, missing assets, malformed files, and unavailable providers as well as successful paths.

## 6. Tool locations and current-session inventory

Known local tool locations (availability may change; re-check with `command -v`, version commands, and project configuration):

| Tool | Location / endpoint | Intended use |
|---|---|---|
| REA/re-agent checkout | `/Users/haseeb-mir/Documents/Code/rea` | Static/runtime reverse-engineering workflow; use the checkout's documented runner and commands. |
| REA upstream | `https://github.com/heaven-hm/re-agent.git` | Source/project reference; do not assume network or a fresh pull is available. |
| Binary Ninja MCP | `http://127.0.0.1:24642/mcp` | Binary Ninja analysis and symbol/identifier updates; authorization was specified as disabled. Confirm the MCP service is live before use. |
| Radare2 | `/opt/homebrew/bin/radare2`, `/opt/homebrew/bin/r2` | Independent disassembly and CFG cross-checks. |
| Ghidra launcher | `/opt/homebrew/bin/ghidraRun` | Ghidra GUI/analysis; determine headless installation path from local setup when needed. |
| CMake | `/opt/homebrew/bin/cmake` | Configure and build native C/C++ projects. |
| LLVM Clang | `/opt/homebrew/opt/llvm/bin/clang` (also `/opt/homebrew/bin/clang`) | C compiler and strict syntax checks. |
| LLVM Clang++ | `/opt/homebrew/opt/llvm/bin/clang++` | C++ compiler. |
| GCC command | `/usr/bin/gcc` | macOS toolchain alias; check its actual compiler/version before describing it as GNU GCC. |
| Rust compiler | `/opt/homebrew/bin/rustc` | Optional Rust component; use only when justified. |
| Cargo | `/opt/homebrew/bin/cargo` | Rust build tool. |
| CrossOver | `/Users/haseeb-mir/Applications/CrossOver.app/Contents/SharedSupport/CrossOver/bin/wine` | CrossOver 26.3.0 launcher used with the `project-igi` bottle; does not provide a capturable display in the current shell. |
| Game binary | `/Users/haseeb-mir/Downloads/IGI/igi.exe` | Retail reference; verify digest before collecting evidence. |
| Game assets | `/Users/haseeb-mir/Downloads/IGI/` | Local assets used by the original game and eventually the native app. |
| `gh-axi` | `~/.local/bin/gh-axi` | Preferred ergonomic wrapper for GitHub CLI operations when needed. Never push unless the owner explicitly requests it. |

This table lists tools and endpoints known in the current working context; it is not a claim that every tool was invoked during every task. At the start of each substantial task, record which tools were actually used and their versions. Do not expose credentials, authorization tokens, private memory, or unrelated local files in logs or this document.

## 7. Current repository and engineering status

Repository: `/Users/haseeb-mir/Documents/Code/project-igi-natives`

The repository currently contains a C11 prototype around recovered native functions in `assets/BinaryNinja/cproj/` and a C++20 gameplay library with an SDL2 application-loop shell. `HumanMovementIntegrator` is now a static-evidence C++ component with explicit world-query interfaces, but the application loop has no initialized player or real mission/world providers. Continue chronologically by connecting verified player-state production and real collision/world services before adding unrelated systems.

At the latest status recorded in `assets/BinaryNinja/cproj/PORT_STATUS.md` and `PLAYER_MOVEMENT_PARITY.md`:

- `Human_MovementIntegrator` (`0x004614B0`) has a readable partial C translation based on static REA/Ghidra evidence.
- `engine/src/human_movement_integrator.cpp` ports the reviewed damping, slope, movement composition, collision ordering, and transform commit flow. Its mock-provider probe passes; the application does not yet call it and retail runtime parity remains unverified.
- `Human_Separation` (`0x00462BA0`) has a C body, but its default candidate provider is empty without initialized engine state.
- `Human_WallSweep` (`0x00461A70`) now has a partial readable C translation for ray construction, verified hit-record scanning, nearest vertical-wall selection, sliding projection, wall flag updates, and the eleven-pass rollback. It does not yet translate the roof/ceiling response branches.
- `World_TraceBatch` (`0x004CDB20`) has an allowlisted generated C body, but its current fifth-argument pointer type conflicts with REA's instruction-level evidence that the argument is a ray count. Audit and correct the batch routine and all call sites before treating it as a functioning native collision provider. A synthetic wall probe used a mock provider and does not validate this routine.
- `Human_GroundQuery` (`0x00462390`) and real mission/world state integration remain unresolved. Verify the actual linked symbols and implementations before relying on existing build-report counts, which may be stale.
- The latest recorded CMake build produced an arm64 `libiginatives.dylib` and included the wall-sweep translation. Build acceptance does not establish correct native semantics.
- Synthetic movement checks were reported for damping, position updates, callback ordering, query budget, and null-pointer logging. These are isolated mock tests, not a running game.
- No runtime-verified native gameplay or retail-versus-port movement parity has been established. CrossOver 26.3.0 started the hash-matched retail executable with `window level1`, but this shell had no capturable display and produced no movement samples.
- `engine/src/main.cpp` now provides an SDL2 event/render loop and a bounded headless mode. It clears a blank frame and does not yet connect player simulation, assets, collision, VFS, QVM, or sound. This shell is not a playable game or an `igi.app`; do not advertise it as one.
- The `igi_game` target builds on the current Apple Silicon macOS toolchain. Its bounded headless run and SDL dummy-video render loop both pass; default window creation could not run in the current shell because SDL reports that no display is available.

Movement research notes:

- `assets/BinaryNinja/cproj/HUMAN_WALL_SWEEP_RESEARCH.md` records static analysis of `Human_WallSweep`, but verify its offsets and record layouts against REA/Ghidra assembly before encoding them. In particular, an earlier direct assembly review found a record-base offset discrepancy relative to a prose description; prefer verified instruction-level evidence and correct the research note if confirmed.
- `assets/BinaryNinja/cproj/PLAYER_MOVEMENT_PARITY.md` is the movement parity ledger. Keep it current and explicit about unverified behavior.
- The retail executable SHA-256 recorded in those notes is `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`; re-hash the on-disk executable before relying on that identity.

The workspace may contain unrelated, untracked research/catalog files and existing user changes. Inspect `git status` before editing. Do not discard or overwrite user work. Do not create a commit unless the owner asks for one in the current task; commits, when requested, should be small and local. Do not push unless explicitly requested.

## 8. Immediate engineering direction

Continue from the current C prototype and prioritize the world-trace ABI and wall/ground collision boundary:

1. Re-read the movement source, build configuration, parity ledger, and wall-sweep research note.
2. Re-verify the wall function ABI, collision flags, ray batches, hit-record layout, and `World_TraceBatch` call against REA/Ghidra assembly and call sites. Correct the generated trace body's count/pointer type mismatch and validate every caller. Resolve mismatches instead of copying a possibly incorrect prose report.
3. Identify whether the repository has a real world trace provider. If not, design a narrow, typed provider interface with an explicit unavailable-provider error/status. A mock provider may support isolated algorithm checks but must never masquerade as real collision integration.
4. Implement the statically supported wall-sweep behavior in readable portable C, preserving observed constants, order, state changes, and failure paths. Implement or characterize the ground query similarly; avoid claiming movement parity while either provider/body is a no-op.
5. Build with the selected CMake configuration and strict compiler diagnostics. Use focused synthetic fixtures for no hit, wall hit, sliding, multiple iterations, budget/iteration cap, bad provider, and invalid input. Keep test outputs tied to command/tool versions.
6. Update `PORT_STATUS.md`, `PLAYER_MOVEMENT_PARITY.md`, and research notes with what changed, evidence IDs, build results, and remaining runtime blockers.
7. Only then proceed to a real game state/asset/level integration and controlled CrossOver comparison. The deliverable is not complete until a native app actually launches a level and the requested core gameplay systems have runtime evidence.

Do not spend the initial milestone on menu animation, intro presentation, or complete sound implementation. Do not overclaim “100% identical”; use measured parity results and explicitly listed gaps.

## 9. Coding and maintenance standards requested by the owner

- Use full, descriptive names for variables, functions, methods, types, files, and identifiers. Prefer `int index = 0;` over `int i = 0;`; avoid unexplained abbreviations and one-letter names except conventional mathematical notation with clear context.
- Format code consistently with spaces around operators and after commas, readable indentation, and sensible blank lines. Keep punctuation and line wrapping clean.
- Write maintainable, modular code with clear ownership of state and explicit interfaces. Avoid needless duplication and opaque generated-looking code.
- Keep comments minimal and useful. Explain non-obvious behavior, reverse-engineered constants, and evidence references; do not narrate obvious syntax.
- Handle expected failures explicitly. Use C error/status returns or C++ exceptions only where appropriate to the interface; do not allow exceptions to cross C ABI boundaries. Validate pointers, sizes, ranges, asset paths, and provider availability before use.
- Add useful structured/timestamped logs for initialization, key state transitions, asset/provider failures, and diagnostics. Make verbose logging controllable so normal gameplay is not flooded. Never log secrets or dump unrelated memory.
- Use assertions for internal invariants during development, not as the only validation for untrusted files or runtime input.
- Keep native macOS platform code separate from game rules. Keep low-level recovered ABI details documented and isolated.
- Prefer stable language/toolchain versions over chasing the newest release. State compiler and language standard in build reports.

## 10. Git and delivery practices

- Keep changes small, focused, and reviewable. Maintain `.gitignore` so build products and temporary analysis outputs do not swamp source control; do not ignore needed fixtures, evidence manifests, or source research.
- The owner previously requested locally initialized project work, branches such as `main`/`master`, `develop`, and feature work, and a private GitHub destination under `heaven-hm`. Check actual repository and remote state before changing it; branch naming and remote setup are not permission to overwrite history or push.
- Local commits are allowed when explicitly requested. Use a concise German commit message if the owner repeats the earlier commit-message request. Do not push without a direct, current instruction.
- Before reporting a change, include paths changed, rationale, commands run and outcomes, and remaining limitations. Never imply that an artifact was copied to Downloads, committed, pushed, or launched unless that operation actually succeeded.

## 11. Required progress reporting

For each substantial work session, report:

- **Current project location** and exact files being worked on.
- **Immediate objective** and how it fits the gameplay-first priority.
- **Tools actually used**, with their executable paths/versions or MCP endpoint, and what each was used for.
- **Evidence level**: static, build, synthetic, runtime integration, or parity.
- **Commands/build outcomes**, including failures and environment blockers.
- **What remains** before the native game can launch and before movement/weapon/AI fidelity can be claimed.

Do not invent a minute-by-minute activity history. When the owner asks for detailed status, provide a timestamped, factual session log based on recorded actions; distinguish current-session activity from prior notes and plans.

## 12. Definition of meaningful milestones

### Movement prototype milestone

- Native code builds for macOS.
- Real human/player state is initialized from a real mission/game data path.
- World collision and ground-query providers are real, not weak no-op stubs.
- The player can walk, run, crouch, jump, fall, land, move on slopes, and slide/block at walls in a level.
- A repeatable input and capture procedure compares retail and port values and documents differences.

### Playable gameplay demo milestone

- `igi.app` launches natively and loads original game assets and at least one real level.
- Player movement, weapons, and basic AI work in the same gameplay loop.
- The app uses native macOS platform services and does not require Windows APIs or CrossOver to run the port.
- Known fidelity gaps and evidence are documented. Main-menu polish and sound may follow if deferred, but gameplay-critical animation/state behavior must be accounted for.

### Fidelity claim

Claim parity only for the specifically measured subsystem and scenarios. A “100%” claim requires comprehensive runtime comparisons across relevant states, supported inputs, collision cases, weapons, AI, assets, and platform conditions, not just static coverage or compilation.

