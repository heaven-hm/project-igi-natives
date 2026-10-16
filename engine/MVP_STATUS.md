# Native gameplay MVP status

Measured on 2026-10-16 in `/Users/haseeb-mir/Documents/Code/project-igi-natives`.

## Implemented prototype

- Native macOS arm64 application, CMake packaging, local code signing, SDL window/input/presentation, and a 30 Hz simulation loop.
- Direct reuse of the converter's complete parser directory: 52 source/header files copied unchanged, with SHA-256 manifest and license notices. The runtime builds the MEF, TEX, RES, DAT, MTP, IFF, and QVM parser units it needs. Other copied parser units are available for later integration.
- Level 1 `OBJECTS.QVM` initializer evaluation, original player spawn, resource archives, MTP material mappings, terrain CTR/CMD geometry, BIT material masks, HMP displacement, terrain QVM material bands and tile maps, original MEF geometry/collision, and original TEX pixels.
- Original mode-2 ARGB1555 color and transparency decoding, perspective texturing, depth testing, near-plane clipping, bilinear sampling, and SDL frame presentation. Rendering is currently on the CPU.
- Original player root-motion clips, Hermite sampling, loop seam handling, root-motion scale, jump parameters, airborne gravity, and the existing C++ translation of the movement integrator.
- Triangle BVH queries, capsule collision, wall sliding, ground contact, steps, jumping, crouching, and player/actor separation.
- MP5 script parameters, magazine/reserve ammunition, fire timing, finite-speed swept projectiles, occlusion, damage, reload, death, and restart.
- Basic guards with vision, line-of-sight, shot investigation, movement, combat, and death. This is a provisional AI implementation.
- Timestamped diagnostics, verbose logging, bounded execution, replay input, CSV state output, and BMP frame capture.

## Measured Level 1 content

| Item | Count |
| --- | ---: |
| Indexed original resources | 1,237 |
| Model material mappings | 730 |
| Loaded nearby objects including soldiers | 439 |
| Loaded soldiers | 28 |
| Loaded textures including fallback | 245 |
| Player root-motion clips | 122 |
| Terrain triangles | 28,614 |
| Total render triangles | 51,946 |
| Total collision triangles | 54,601 |
| Missing model errors | 0 |

The initializer contains 29 soldier declarations; one lies outside the prototype's loaded area. The scene deliberately loads a bounded area around the original spawn.

## Verification

- Release build: Apple Clang 16.0.0, C++20, arm64 macOS 15.3.1. Individual authored translation units were compiled with strict warnings during implementation.
- Standalone CTest: 7/7 passed. Optional recovered-C configuration: 16/16 passed.
- AddressSanitizer and UndefinedBehaviorSanitizer: 5/5 MVP probes passed, including the original-level integration scenario. Leak detection was disabled; it is not a leak audit.
- Static analyzer: authored asset readers, scene adapters, terrain surface, collision, player simulation, combat, and renderer checked with Apple Clang. One unused combat assignment was removed after the analyzer reported it.
- Negative checks cover truncated formats, invalid bounds, unsafe paths, unsupported QVM opcodes, recursive initializer limits, invalid texture data/indices, and non-finite collision input.
- Component checks cover root-motion scaling and looping, jumping/landing, crouch height, floor/wall/ceiling collision, thin-wall tunneling, wall sliding, magazine limits, reload timing, AI stimulus/combat, projectile occlusion, damage/death, restart, and deterministic simulation.
- The original-level probe moved, jumped, landed, aimed at original soldier **3031** at **59.1427 m**, and defeated him with **21 shots / 20 hits**. This verifies the prototype's integrated loop using original assets.
- A staged, signed bundle opened a real macOS SDL window and replayed the same encounter for **120 rendered frames**. It ended with **21 shots, 20 hits, one defeated soldier**, and player health **2.39999962 / 3**. The observed run took **3.359464 s**, about **35.7 frames/s** at 800×600. This is one local run, not a comprehensive performance benchmark.
- The bundle includes SDL2 and SDL3 rather than depending on Homebrew installation paths. `codesign --verify --deep --strict` passed.

## Fidelity evidence and limits

Reference executable: `/Users/haseeb-mir/Downloads/IGI/igi.exe`, SHA-256 `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`.

The existing movement translation and its REA evidence are described in [VERIFICATION.md](VERIFICATION.md). The MVP samples original player and weapon QVM values and original IFF root tracks rather than assigning walking speeds. An independent radare2 check at `0x00410070` identified a 326-byte, five-block parameter routine and the original conversion constants at `0x005334A4` and `0x005334A0`. The live REA session was on the matching executable but did not expose a procedure at that address; a new dual-provider verification gate was therefore not established for that routine.

This release does **not** establish 70% or 100% behavioral parity. No retail-versus-port runtime trace comparison was completed in this session. Remaining work includes:

- Matching the capsule, step, camera, slope, roof, and separation behavior to complete retail wall/ground-query and movement-state traces. The current collision provider is authored C++ over real geometry.
- Retail weapon spread, recoil, damage details, projectile gravity, inventory, weapon switching, and animation event timing. The MVP uses straight swept projectiles and simplified damage application.
- Retail AI task execution, authored patrols, navigation graphs, cover, perception constants, and full combat behavior. Current AI thresholds and movement are provisional.
- Skeletal character/weapon animation, full orientation and hierarchy handling, dynamic doors, vehicles, ladders, interactions, mission objectives, and general QVM runtime execution. The QVM reader currently evaluates initialization declarations.
- Original lighting/lightmaps, terrain material blending and LOD morphing, mip selection, sky, and complete DX7 rendering equivalence.
- Sound, menus, other mission verification, Windows/Linux builds, and broad hardware/performance testing.

Sound and menus remain deferred under the gameplay-first scope. The prototype is playable; full engine equivalence remains unfinished.
