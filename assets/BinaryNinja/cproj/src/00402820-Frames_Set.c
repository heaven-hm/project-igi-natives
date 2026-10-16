#include "gi_platform.h"
#include "00402820-Frames_Set.h"
void Frames_Set(int32_t frames)

// Sig: void Frames_Set(int frames)
// Note: Set game frames, Params: 30,60 max 240FPS.
{
    g_frames_ctx->tick_base = Timer_Now();
    g_frames_ctx->unk50 = 0;
    g_frames_ctx->unk34 = 0;
    g_frames_ctx->unk38 = 0;
    g_frames_ctx->limit = frames;
    g_frames_ctx->dirty = 1;
    Timer_SetLimit(frames);
}
