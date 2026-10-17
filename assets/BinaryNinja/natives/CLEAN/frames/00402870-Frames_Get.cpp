// IGI native provenance: Frames_Get - 0x00402870 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402870-Frames_Get.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Frames_Get.h"
int32_t Frames_Get()

// Sig: int Frames_Get(void)
// Note: Returns the configured game frame limit from the global context field
// +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate
// limit.
{
    return g_frames_ctx->limit;
}
