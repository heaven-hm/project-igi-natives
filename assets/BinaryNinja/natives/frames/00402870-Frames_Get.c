#include "Frames_Get.h"
int32_t Frames_Get()

// Sig: int Frames_Get(void)
// Note: Returns the configured game frame limit from the global context field
// +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate
// limit.
{
    return g_frames_ctx->limit;
}
