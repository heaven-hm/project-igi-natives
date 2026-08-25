# Camera_SubmitFrame

| Field | Value |
|---|---|
| Address/hash | `0x004D9870` |
| Signature | `void Camera_SubmitFrame(void* camCtx)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Submits/presents the camera frame: increments frame counters at camCtx+0x50 against limit at +0x4C. IGI-MP hooks this as Camera_Submit for the lobby camera.

## How it was found

Retail evidence: Ghidra: updates camCtx+0x50/+0x4C, copies the accepted frame vectors and values, then dispatches each entry in the Qtask list through Qtask_GetList/Qtask_GetEventId.; r2 afij: exact 220-byte cdecl body at 0x004D9870, 9 basic blocks, 12 CFG edges, 10 stack arguments; branch targets and loop/exit shape match Ghidra graph_cfg_edges.; Camera_ResetFrameCounters at 0x004D9950 clears the same +0x4C/+0x50 fields and Level_Start calls that reset on the camera context..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
