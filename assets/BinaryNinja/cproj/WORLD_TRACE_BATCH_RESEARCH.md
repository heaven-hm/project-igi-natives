# World Trace Batch Research

## Target and evidence

- Executable: `/Users/haseeb-mir/Downloads/IGI/igi.exe`
- SHA-256: `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`
- Architecture: PE32 x86
- REA provider: Ghidra 12.1.2
- Procedure: `0x004CDB20`, 63 basic blocks, 1,391 bytes
- Procedure metadata evidence: `ev_0caa2887be40e575cea463077ff99cf3e87320ccf021de029037027745ee07c4`
- Pseudocode evidence: `ev_231cae1c459d951cc2ceb92abf80042bfca1dee86512fd8519a637da663331c8`
- Caller evidence: `ev_e34bb13a1607905cc68df0616115fdd16a5d091525d31d0f86e26f6d5f41ef36`
- Callee evidence: `ev_3117704652bdae0471a184f66d71ed3ecc169cad3c9af6d26b2a80640d6550d2`

## Recovered interface

The shared C declaration uses this nine-argument interface:

```c
void World_TraceBatch(
    int world_context,
    int *hit_records,
    double *ray_start_positions,
    double *ray_end_positions,
    int ray_count,
    char trace_flags,
    double *trace_auxiliary,
    int collision_mask,
    int trace_mode);
```

Argument five is the ray count. The three observed callers do not consume a return value. The generated source still declares this argument as an `int32_t *` and performs pointer arithmetic on it, so that body remains excluded from the CMake build.

## Observed control flow

For a nonzero ray count, the procedure initializes each hit record and copies the corresponding ray end position into its output record. It then builds an aggregate bounds volume across the rays, with two units of horizontal padding and approximately 16,387 units of vertical padding.

The low 31 bits of the collision mask select terrain or spatial-tree work. The procedure dispatches four orientations (indices 0, 1, 4, and 5) to `0x004C8130` when ray starts and ends are not shared in XY, or to `0x004C7770` when they are. The high mask bit selects an additional cell traversal path: it initializes a traversal record, uses world origin offsets at context fields `+0xDE0`, `+0xDE4`, and `+0xDE8`, calls `0x004C9A30` to descend the spatial structure, and checks candidate objects through `0x004CC810`. Candidate hit selection also references `0x004B32F0` and `0x004CE090`.

The function therefore depends on initialized world-context state and several spatial-tree and dynamic-object routines. Replacing it with a flat height test or a synthetic empty provider would not reproduce the observed path.

## Current implementation boundary

`gi_stubs.h` and the movement call sites use the recovered nine-argument interface. `gi_stubs.c` supplies the current weak unavailable-provider fallback, which leaves hit records unchanged and logs once. The movement probes validate this interface and their mocked collision callbacks only; they do not validate terrain traversal, collision masks, candidate objects, or retail gameplay.

Before translating the body, recover the record layouts and call contracts for `0x004C8130`, `0x004C7770`, `0x004C9A30`, `0x004CC810`, and `0x004CE090`, then map the required `.CTR`, `.CMD`, and `.BIT` structures onto host-safe guest-memory views. The converter documents binary layouts for those assets but does not implement this runtime traversal.

## Runtime observation

On 2026-10-16, CrossOver 26.3.0 launched the hash-matched executable from the `project-igi` bottle with arguments `window level1`. The launcher emitted an `igi.exe` process-start line and remained active. No input sequence, screen capture, memory sample, or collision result was collected, so this is launch evidence only and does not increase runtime gameplay verification coverage.
