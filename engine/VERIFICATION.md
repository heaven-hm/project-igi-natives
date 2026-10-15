# Gameplay verification notes

## Locomotion graph

- CMake builds `igi_gameplay` with AppleClang in C++20 mode.
- A native smoke program checked the idle transition count/order, walk/run
  pairing, jump/fall reachability, invalid-state handling, and that every edge
  targets one of the 49 states.
- A row-by-row comparison against
  `open-igi/src/OpenIGI.Game/Player/HumanLocomotionGraph.cs` found 49/49 rows
  identical. That is a source cross-check of the port, not an independent
  replay comparison against `igi.exe`.

## Retail binary observations

REA opened `/Users/haseeb-mir/Downloads/IGI/igi.exe` as PE32 x86 with SHA-256
`dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`, using
Ghidra 12.1.2.

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
