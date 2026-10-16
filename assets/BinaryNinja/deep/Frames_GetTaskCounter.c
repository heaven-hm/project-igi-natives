/* LOGIC NOTE (Frames_GetTaskCounter @ 0x004028C0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : sub_44f410, sub_45f280, sub_460c80
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Frames_GetTaskCounter.h"

uint32_t Frames_GetTaskCounter()

// Sig: int Frames_GetTaskCounter(void)
// Note: Returns the second task/processing counter at game-context field +0x38.
// Frames_Set resets it and the retail main loop increments it during the second
// processing pass.
{
    return g_frames_ctx->unk38;
}
