# Verified native gameplay milestone

Updated 2026-10-16 from the owner's active goal. Reference: `/Users/haseeb-mir/Downloads/IGI/igi.exe`. Native delivery: `/Users/haseeb-mir/Downloads/IGI/igi.app`.

The active working tree is `/Users/haseeb-mir/Documents/Code/project-igi-natives`, branch `feature/native-gameplay-mvp`. This records the actual source location; `project-open-igi` was an earlier requested project name and is not the working tree used by this build.

## Goal and scope

Reconstruct original gameplay with evidence. Visual resemblance and successful prototype tests do not satisfy the acceptance target. Keep the existing game loop and improve one measured divergence at a time.

Required now:

- Player walking, running, crouching, jumping, camera movement, collision, slopes, steps, and building entry.
- Original weapon inventory, switching, firing, recoil, spread, projectiles, reloads, damage, and health.
- Enemy perception, authored AI tasks, graph navigation, patrols, combat, and damage.
- Original character and hand rigs, skeletal animation, weapon attachments, timing, hits, and deaths.
- Gameplay QVM execution, interactions, doors, objectives, triggers, and mission state needed to play a level.
- Original terrain, 3D models, 2D gameplay assets, textures, materials, and recursive MEF ATTA attachments. Preserve original detail and rendering behavior; avoid artistic replacements.
- Static, runtime, memory, unit, integration, and end-to-end verification against the original executable.

Deferred: sound engine, intro/outro cutscenes, main menus, exact text/font drawing. Gameplay-only startup must not activate cinematic actors as enemies. Deferred presentation must not block mission initialization or gameplay state.

## Ordered work

| Order | Slice | Acceptance evidence |
| --- | --- | --- |
| 1 | Reproducible original and port capture | Matching executable hash, mission, difficulty, controls, initial state, inputs, tick boundaries and trace schema; genuine original runtime and memory observations |
| 2 | Movement and building collision | Full walk/run/crouch/jump trajectories; doorway, interior, stair, roof, wall and slope cases; first differing tick identified and corrected |
| 3 | Weapons and health | Same inventory/switch sequence, trigger/reload events, ammo, trajectories, hit locations, damage/death, shared ammo and difficulty |
| 4 | AI and navigation | Same graph/link interpretation, task transitions, patrol destinations, perception and firing; obstructed, interior, disconnected and combat routes |
| 5 | Animation synchronization | Same clips, bone transforms, phase, transitions, hit/death states, first-person hand and weapon transforms |
| 6 | Gameplay scripts and interactions | Required runtime opcodes/native calls; doors, pickups, objectives, triggers and completion without cutscenes |
| 7 | Asset and graphics parity | Recursive attachment transforms, original models/textures/materials, terrain, visibility, lighting and camera; aligned original/native frames |
| 8 | Delivery regression | Functional, sanitizer, captured differential, bounded GUI and installed-bundle checks; preserve failures/evidence; small local German commits |

Slices overlap when dependencies require it. The next priority is a reproducible building-entry/movement divergence and a usable original runtime capture.

## Existing experimental foundation

The app loads real missions and assets, runs the game loop, moves the player, supports several weapons, follows graph-based patrols, samples skeletal animations, renders original hands, and resolves recursive visual attachments. These are implemented prototype capabilities, not verified retail equivalence. See [MVP_STATUS.md](MVP_STATUS.md).

## Verification rule

Record original routine boundaries, instructions, constants, callers and evidence IDs with REA/Ghidra plus independent radare2; use Binary Ninja as an additional check. Capture retail behavior with a compatible Windows x86 IGIProbe/CrossOver workflow. Frida support must match the target architecture; a host arm64-only workflow cannot substitute for PE32 instrumentation.

For each correction: reproduce, add a failing regression, make the smallest justified change, compile the touched component, run focused tests, then integration/sanitizer checks and the original-versus-port comparison. Keep inferred behavior labeled unverified. Generated stubs, catalog counts, hook installation messages and screenshots are not gameplay parity evidence.

The retail gate covers active gameplay and fails until genuine capture pairs exist. Sound/cutscene/menu/text checks are deferred. See [FIDELITY_REQUIREMENTS.md](FIDELITY_REQUIREMENTS.md) and [VERIFICATION.md](VERIFICATION.md).

## Implementation and delivery

Use stable C++20 and existing C interfaces; Rust may be used for a justified component. Runtime code remains limited to C/C++/Rust. Separate OS and presentation adapters from game rules. macOS is delivered first; Windows/Linux need their own later build/runtime verification.

Reuse converter parsers and inspect editor/OpenIGI implementation ideas, preserving licenses and provenance. The original executable is authoritative where those projects differ. Do not relocate the working project during gameplay fixes.

Keep development experimental. Stable branches require verification gates. Commit locally in small changes with the `Himmel - Ich liebe dich ;) IGI:` prefix; do not push during this work.
