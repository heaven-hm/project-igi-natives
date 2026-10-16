/* LOGIC NOTE (Frames_Set @ 0x00402820)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Timer_
   called by : Flow_LoadParameters, Level_Start, MenuManager_Setup, Menu_Manager, sub_402070
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Frames_Set.h"

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
