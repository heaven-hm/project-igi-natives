# Native gameplay MVP

Work in `/Users/haseeb-mir/Documents/Code/project-igi-natives` with C++20 and the existing C11 library. macOS is the first supported delivery; game rules and asset readers remain portable C++.

## Acceptance

- Load Level 1 terrain, objects, textures, player spawn, and soldiers from the owner's original game directory.
- Run a visible first-person scene with mouse look, walking, running, crouching, jumping, wall collision, and ground collision.
- Equip a weapon, fire with occlusion and damage, reload, and encounter soldiers with perception and combat states.
- Provide restart, bounded deterministic replay, frame capture, and useful timestamped failure logs.
- Package `igi.app` with native dependencies; keep proprietary assets external.
- Record recovered behavior and temporary approximations separately. Compilation and a playable encounter do not establish retail parity.

## Ordered slices

1. Bounded file, resource, and QVM initializer readers; inspect the real Level 1 task graph.
2. Terrain and MEF scene loading, original textures, scene rendering, and world collision.
3. Connect the existing movement integrator to input and real world queries.
4. Weapon and AI encounter, restart, and deterministic integration scenario.
5. Validate malformed assets, collision, gameplay events, capture output, and bundle startup; record remaining fidelity gaps.

Menus and sound are deferred. Runtime code uses C/C++ only; Rust remains available where a specific component warrants it. Existing recovered routines are used when their interfaces and state providers are understood.
