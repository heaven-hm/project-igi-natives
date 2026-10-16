#include "gi_platform.h"
#include "004028A0-Flow_SetState.h"
int32_t Flow_SetState(int32_t a1)

// Sig: void Flow_SetState(int stateId)
// Note: Stores a pending flow state in game-context field +0x2C. The main loop
// consumes it, copies it to +0x28, clears the pending field, and dispatches
// state IDs 1 through 8. Flow_RequestEvent reaches this setter after converting
// its event ID.
{
    struct frames_ctx* frames_ctx_1 = g_frames_ctx;
    frames_ctx_1->pad_00[0x2c] = a1;
    frames_ctx_1->pad_00[0x2d] = (*(int32_t*)(uintptr_t)(&a1 + 1));
    frames_ctx_1->pad_00[0x2e] = (*(int32_t*)(uintptr_t)(&a1 + 2));
    frames_ctx_1->pad_00[0x2f] = (*(int32_t*)(uintptr_t)(&a1 + 3));
    return a1;
}
