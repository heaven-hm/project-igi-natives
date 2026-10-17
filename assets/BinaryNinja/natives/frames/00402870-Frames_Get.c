// Original IGI.EXE function: Frames_Get (VA 0x00402870; static CFG gate PASS, CFG score 1.000).
#include "Frames_Get.h"
int32_t Frames_Get()

// Sig: int Frames_Get(void)
// Note: Returns the configured game frame limit from the global context field
// +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate
// limit.
{
    return g_frames_ctx->limit;
}
