// IGI native provenance: Frames_GetTaskCounter - 0x004028C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004028C0-Frames_GetTaskCounter.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Frames_GetTaskCounter.h"
uint32_t Frames_GetTaskCounter()

// Sig: int Frames_GetTaskCounter(void)
// Note: Returns the second task/processing counter at game-context field +0x38.
// Frames_Set resets it and the retail main loop increments it during the second
// processing pass.
{
    return g_frames_ctx->unk38;
}
