# Player movement parity audit

Status: **partial static translation; retail runtime parity is unverified**.

## Retail reference

- Executable: `/Users/haseeb-mir/Downloads/IGI/igi.exe`
- SHA-256: `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`
- Static provider: REA with Ghidra 12.1.2; analysis is read-only against the retail executable.
- Movement integrator: `0x004614B0`, 1,468 bytes, 31 basic blocks; latest pseudo-code evidence `ev_6a9564f5d84daa287a444b641a8e06fd2e967ffcc91b3b1248a482e9363ea1d4`.
- Procedure metadata for the integrator: evidence `ev_83288af7a48337beb8aa976e87e3347dcc196ab183787cdab2f969f6eb139a2d`.
- Arcsine helper: `0x004B27D0`, clamps its float input to `[-1, 1]` and invokes the x87 math helper; evidence `ev_f1515107c355f589a91a599a9609b8e37e7c797a2acd47cb112781c37c34aceb`.
- Wall sweep: `0x00461A70`; ground query: `0x00462390`; separation: `0x00462BA0`.
- Wall-sweep ABI: `void Human_WallSweep(void *, const double[3], double[3], float[3], uint32_t *)`; independently checked against REA/Ghidra pseudo-code and the call sequence described in `HUMAN_WALL_SWEEP_RESEARCH.md`.

## Behavior translated into C

`src/004614B0-Human_MovementIntegrator.c` now replaces the malformed decompiler output with named C operations. It:

1. Reads movement flags, base movement (`+0x664..+0x66C`), animation movement (`+0x520..+0x528`), and slope state (`+0x6D8..+0x6E0`).
2. When slope processing is enabled and the grounded bit is set, normalizes the slope vector and applies the retail strict angle thresholds (`>80`, `>60`, `>50`, `>45` degrees) with factors `1137`, `948`, `56.88889`, and `18.962963`.
3. Multiplies slide acceleration (`+0x67C..+0x684`) and velocity (`+0x670..+0x678`) by the retail `0.9f` damping factor; clears movement flag `0x10`.
4. Combines the damped terms with base and animation movement, applies the three position adjustments at `+0x728..+0x730`, and creates the mutable destination position.
5. Calls collision routines in retail order: wall sweep, ground query, then human separation, subject to the object's per-pass flags and collision-disable byte.
6. Commits the transform, saves the resulting movement delta plus position adjustments at `+0x688..+0x690`, and optionally logs timestamped diagnostics when `IGI_NATIVE_VERBOSE_LOGS` is set.

`human_movement_integrator_probe` calls this C translation directly with mocked collision callbacks. It checks collision order (wall, ground, separation), the `0.9f` velocity damping, collision-adjusted transform and committed movement, roof-flag clearing, the grounded `2048` query budget, and the steep-slope `8192` budget. It passes CTest and AddressSanitizer plus UndefinedBehaviorSanitizer. This validates the translated integrator under controlled callbacks; it does not validate the unavailable ground-query implementation or retail gameplay.

The position and collision call signatures were checked against REA/Ghidra pseudo-code and the x86 call sequence. The ground query is six arguments: human object, starting position, destination position, movement delta, flags, and vertical budget. A second caller at `0x00463260` confirmed the same ABI; its previously malformed C call was corrected to pass all six arguments. Current ground-query body findings and their evidence are in `HUMAN_GROUND_QUERY_RESEARCH.md`.

## Remaining fidelity blockers

- `Human_WallSweep` is now a readable C translation of the primary horizontal wall path: it constructs the three standing/crouching ray profiles, scans the 0x70-byte hit records, rejects surfaces with `|normal.z| >= 0.1`, picks the nearest wall, projects movement along the wall, applies the 10.24-unit offset, sets bit `0x08`, and rolls back after 11 continuing passes. `human_wall_sweep_probe` checks the standing ray profile, one perpendicular synthetic wall hit, the follow-up clear trace, the resulting wall flag, and the translated destination and movement delta. It passed CTest and an AddressSanitizer plus UndefinedBehaviorSanitizer run. This checks the isolated C translation against the controlled mock; it is not a retail runtime comparison.
- This wall translation does not yet implement the retail routine's ceiling/vertical-obstruction response branch. The real level trace provider is absent. REA/Ghidra caller and body evidence now establish `World_TraceBatch` as a nine-argument routine with an integer ray count in argument five and no caller-observed return value. Its generated C body remains excluded because the decompiler output has broader type and data-flow errors. The linked weak stub warns once and reports no collision data. The ground query still resolves to its weak no-op fallback. Therefore the build and mock probe do not establish in-game wall blocking, floor following, slope landing, or roof/ground transitions.
- The separation implementation is linked, but its default candidate provider returns no humans. It cannot produce in-game character separation until guest pointers and the real candidate-list provider are wired to initialized engine state.
- `WorldObject_CommitTransform`, `Level_StartMission_4`, animation translation production, input, and the containing human-object allocation remain host stubs or engine integration boundaries. The isolated library is not a runnable game engine.
- The original x86 uses x87 extended-precision operations. The macOS arm64 build uses the platform's floating-point implementation; per-tick numeric parity still needs differential measurements and may need explicit precision handling.
- No successful retail-versus-port frame capture has been produced. CrossOver previously started the original executable process, but no game-scene capture or movement samples were collected.

## Verification still required

Build the library with the repository's selected Clang/C11 configuration, then exercise the function with an initialized native human object and real world-query/transform providers. Capture retail and port values per tick for idle, walk, run, crouch, jump, landing, slopes, wall contact, separation, and attachment. Compare position, all three velocity vectors, flags, query results, and state transitions. A successful compile or a synthetic memory harness proves ABI/build behavior only; it does not establish retail gameplay parity.
