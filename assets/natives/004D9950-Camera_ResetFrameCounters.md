# Camera_ResetFrameCounters

| Field | Value |
|---|---|
| Address/hash | `0x004D9950` |
| Signature | `void Camera_ResetFrameCounters(void* camCtx)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Resets the camera frame-selection fields camCtx+0x4C to -1 and camCtx+0x50 to 0. Camera_SubmitFrame (0x004D9870) increments and consumes these same fields; Level_Start calls this reset on the global camera context. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl 1-argument store.

## How it was found

Retail evidence: Ghidra/r2: stores -1 at camCtx+0x4C and 0 at camCtx+0x50.; Camera_SubmitFrame 0x004D9870 reads/writes the same two fields; Level_Start calls this function on DAT_0057BABC+0x60 and other camera setup callers use the same reset.; r2 afij: cdecl, 1 arg, size 19, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
