/* LOGIC NOTE (Frames_Get @ 0x00402870)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : InputBox_LoadParameters, Menu_Manager, ScrollListBox_LoadParameters, sub_489470
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Frames_Get.h"

int32_t Frames_Get()

// Sig: int Frames_Get(void)
// Note: Returns the configured game frame limit from the global context field
// +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate
// limit.
{
    return g_frames_ctx->limit;
}
