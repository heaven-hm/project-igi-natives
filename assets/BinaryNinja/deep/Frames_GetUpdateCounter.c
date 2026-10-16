/* LOGIC NOTE (Frames_GetUpdateCounter @ 0x004028B0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : Car_Run, Elevator_Setup, InputBox_LoadParameters, ScrollListBox_LoadParameters, Train_Update
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Frames_GetUpdateCounter.h"

uint32_t Frames_GetUpdateCounter()

// Sig: int Frames_GetUpdateCounter(void)
// Note: Returns the update-loop counter at game-context field +0x34. Frames_Set
// resets it and the retail main loop increments it once per simulation/update
// pass; gameplay timeout code compares against this value.
{
    return g_frames_ctx->unk34;
}
