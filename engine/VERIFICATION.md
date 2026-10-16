# Gameplay verification notes

## Current native gameplay MVP

The application now loads and runs the original Level 1 scene. The current test results, runtime encounter, bundle checks, and explicit fidelity gaps are recorded in [MVP_STATUS.md](MVP_STATUS.md). The shell-only observations below are historical component checks from before that integration.

## Native application loop

- `igi_game` is a C++20 executable using SDL2 2.32.72 through SDL's C API. It
  initializes, processes quit/escape events, clears a frame, and shuts down.
- The bounded timer-only loop passed through CTest, and a three-frame SDL dummy
  video run exercised window and software-renderer setup in this environment.
- A normal macOS window could not be exercised from the current shell because
  SDL reported that the video driver had no displays. This is an environment
  limitation, not evidence of successful desktop rendering.
- CrossOver 26.3.0 launched the retail `igi.exe` (SHA-256 recorded below) with
  `window level1`; Wine logged the `igi.exe` process starting. The shell still
  had no capturable display, so no scene, input, or movement was observed. The
  task-launched process was closed after this startup check.
- The application loop does not yet invoke player simulation, collision,
  animation, assets, or other game systems. It is an executable shell, not a
  playable prototype or an IGI gameplay parity result.

## Locomotion graph

- CMake builds `igi_gameplay` with AppleClang in C++20 mode.
- A native smoke program checked the idle transition count/order, walk/run
  pairing, jump/fall reachability, invalid-state handling, and that every edge
  targets one of the 49 states.
- A row-by-row comparison against
  `open-igi/src/OpenIGI.Game/Player/HumanLocomotionGraph.cs` found 49/49 rows
  identical. That is a source cross-check of the port, not an independent
  replay comparison against `igi.exe`.

## Human movement integrator

- The source translation is `assets/BinaryNinja/cproj/src/004614B0-Human_MovementIntegrator.c`.
  REA/Ghidra pseudo-code evidence `ev_6a9564f5d84daa287a444b641a8e06fd2e967ffcc91b3b1248a482e9363ea1d4`
  and the call sequence recorded in `assets/BinaryNinja/cproj/PLAYER_MOVEMENT_PARITY.md`
  are the static basis for `HumanMovementIntegrator` in the C++20 gameplay library.
- The C++ translation preserves slope-slide thresholds, the 0.9 velocity and slide
  damping, position adjustment order, roof-contact flag clearing, wall/ground/
  separation query order, ground-query budgets, and transform-commit ordering.
- The source-field map is retained: world position `+0x20`, movement flags `+0x2F4`,
  animation movement `+0x520`, base movement `+0x664`, velocity `+0x670`, slide
  acceleration `+0x67C`, committed movement `+0x688`, collision controls
  `+0x694..+0x698`, slope normal `+0x6D8`, slope-enable value `+0x6F8`,
  position adjustment `+0x728`, and collision radius `+0xA0`. The interface uses
  named fields and leaves byte-offset marshaling to the future native-state adapter.
- `human_movement_integrator_probe` checks movement composition, collision call
  order, and the extended query budget for slope sliding with synthetic state
  and a recording mock world. It is a component check, not retail gameplay evidence.
- The movement source and probe pass individual AppleClang C++20 checks with
  `-Wall -Wextra -Wpedantic -Werror`. CTest passes both the bounded app-loop
  check and movement probe; a separate AddressSanitizer + UndefinedBehaviorSanitizer
  build also passes the movement probe. Leak detection was not independently verified.
- The real mission/world query and transform providers are not implemented, and
  `igi_game` does not invoke this component yet. Floor following, real collision,
  and retail-versus-port movement parity remain unverified.

## Retail binary observations

REA opened `/Users/haseeb-mir/Downloads/IGI/igi.exe` as PE32 x86 with SHA-256
`dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`, using
Ghidra 12.1.2.

The CrossOver bottle copy at
`/Users/haseeb-mir/Library/Application Support/CrossOver/Bottles/project-igi/drive_c/IGI/igi.exe`
was checked and had the same SHA-256. The direct CrossOver launch is only a
process-start observation; it did not produce a movement trace or a visual
retail-versus-port comparison.

- Evidence `ev_8052e7790e7178e7660cb649098e80d5c4ac7508ed25481bcfb1c640d50a6f9f`:
  body at `0x4614B0`, 1,468 bytes, 31 basic blocks, seven direct callees.
  This is a static observation of `Human_MovementIntegrator` as named by the
  local catalog; it does not establish the generated C translation is correct.
- Evidence `ev_bc129a3f925f0b0e4622e2cc92d7c84a5826ad0574fd19c3aa5d0c3f429046cb`:
  cataloged `HumanPlayer_UpdateMotion` at `0x408320` is a six-byte body with no
  direct calls in Ghidra's function analysis.
- Evidence `ev_efe7173636efc6f5820dd959dff90d3b1fb5e848fc7b29a209f85a5b54b787a0`:
  cataloged `HumanPlayer_ApplyPhysics` at `0x408420` is a 59-byte body with four
  blocks and one direct call.
- Evidence `ev_ca47b794e915c94e573d496819cfb0af31e173c8edb30e7882dfd60ae2cb8a92`:
  the 694-byte, 27-block function at `0x408460` subtracts `84.74169` from
  vertical velocity and adds movement-slot steering through the body basis.
  Steering magnitude comes from a runtime global, so the port accepts it as an
  argument instead of inventing a retail default.
- Evidence `ev_cabc8c58e5b97087e2544062c195e1782eec8ab45722dbda5d9271ff3c323a07`:
  the 175-byte, five-block ladder-slide routine at `0x40DBF0` multiplies X/Y
  velocity by `0.99` and evaluates `(Z - 44.600887) * 0.99`, in that order.
- Evidence `ev_178401a834b6929403a4049b09024de136b0422bd014a3605fbe8f9dfa6bf8b1`:
  the on-disk initialized bytes for the steering global at `0x56E1F4` are zero.
  That does not establish its runtime value after script setup.

The native smoke program also checked airborne gravity and steering, ladder
gravity/damping order, and root-motion scaling/suppression against the current
ported equations. Root-motion transformation is cross-checked against the
OpenIGI source; it has not yet been independently matched to a complete REA
instruction trace.

An AddressSanitizer build of `igi_gameplay` and the same smoke harness completed
with exit code 0 and no reported memory errors. LeakSanitizer is not supported
by this macOS toolchain, so leak detection was not verified.

The native catalog has 4,814 rows: 4,337 `PASS`, 476 `FAIL`, and one
`CANDIDATE`. Zero rows currently have `L5_runtime=true`. Catalog size and CFG
gates are not proof of runtime behavior.

## re-agent source-only check

The local `auto-re-agent` Python source tree ran a source-only parity check of
the generated C at `0x4614B0`. It returned `RED`: its body contains decompiler
stub markers. This check had no live Ghidra backend input and is not a binary
parity result. The full native runner also remains an isolated harness: all
five representative calls fault without initialized engine state, so it does
not provide gameplay runtime evidence.

CrossOver replay of the original remains necessary before movement, weapon,
collision, animation, or sound behavior can be called runtime-verified.
