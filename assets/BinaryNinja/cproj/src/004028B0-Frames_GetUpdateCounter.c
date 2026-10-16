#include "gi_platform.h"
#include "004028B0-Frames_GetUpdateCounter.h"
uint32_t Frames_GetUpdateCounter()

// Sig: int Frames_GetUpdateCounter(void)
// Note: Returns the update-loop counter at game-context field +0x34. Frames_Set
// resets it and the retail main loop increments it once per simulation/update
// pass; gameplay timeout code compares against this value.
{
    return g_frames_ctx->unk34;
}
