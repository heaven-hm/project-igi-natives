// Original IGI.EXE function: Camera_ResetFrameCounters (VA 0x004D9950; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetFrameCounters.h"
void* Camera_ResetFrameCounters(void* context)

// Sig: void Camera_ResetFrameCounters(CameraContext* camCtx)
// Note: Resets the camera frame-selection fields camCtx+0x4C to -1 and
// camCtx+0x50 to 0. Camera_SubmitFrame (0x004D9870) increments and consumes
// these same fields; Level_Start calls this reset on the global camera context.
// Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl 1-argument
// store.
{
    *(context + 0x4c) = 0xffffffff;
    *(context + 0x50) = 0;
    return context;
}
