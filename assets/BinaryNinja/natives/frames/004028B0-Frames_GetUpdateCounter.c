// IGI native provenance: Frames_GetUpdateCounter - 0x004028B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004028B0-Frames_GetUpdateCounter.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Frames_GetUpdateCounter.h"
uint32_t Frames_GetUpdateCounter()

// Sig: int Frames_GetUpdateCounter(void)
// Note: Returns the update-loop counter at game-context field +0x34. Frames_Set
// resets it and the retail main loop increments it once per simulation/update
// pass; gameplay timeout code compares against this value.
{
    return g_frames_ctx->unk34;
}
