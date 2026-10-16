#include "00402870-Frames_Get.h"
/* 0x00402870 Frames_Get full linked: callers=4 callees=0 */
int32_t Frames_Get()

// Sig: int Frames_Get(void)
// Note: Returns the configured game frame limit from the global context field
// +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate
// limit.
{
    return g_frames_ctx->limit;
}
