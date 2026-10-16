#include "Frames_GetTaskCounter.h"
uint32_t Frames_GetTaskCounter()

// Sig: int Frames_GetTaskCounter(void)
// Note: Returns the second task/processing counter at game-context field +0x38.
// Frames_Set resets it and the retail main loop increments it during the second
// processing pass.
{
    return g_frames_ctx->unk38;
}
