// Original IGI.EXE function: Flow_SetState (VA 0x004028A0; static CFG gate PASS, CFG score 1.000).
#include "Flow_SetState.h"
int32_t Flow_SetState(int32_t context)

// Sig: void Flow_SetState(int stateId)
// Note: Stores a pending flow state in game-context field +0x2C. The main loop
// consumes it, copies it to +0x28, clears the pending field, and dispatches
// state IDs 1 through 8. Flow_RequestEvent reaches this setter after converting
// its event ID.
{
    struct frames_ctx* frames_ctx_1 = g_frames_ctx;
    frames_ctx_1->pad_00[0x2c] = context;
    frames_ctx_1->pad_00[0x2d] = *(&context + 1);
    frames_ctx_1->pad_00[0x2e] = *(&context + 2);
    frames_ctx_1->pad_00[0x2f] = *(&context + 3);
    return context;
}
