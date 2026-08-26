# Camera_ResetFrameCounters

Address: 0x004D9950
Signature: void Camera_ResetFrameCounters(CameraContext* camCtx)
Data types: CameraContext

## Recovered behavior

Resets the camera frame-selection fields camCtx+0x4C to -1 and camCtx+0x50 to 0. Camera_SubmitFrame (0x004D9870) increments and consumes these same fields; Level_Start calls this reset on the global camera context. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl 1-argument store.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
