/* LOGIC NOTE (Game_GetContext @ 0x00402880)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : QTask_DispatchEvent, QTask_OpenEvent
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Game_GetContext.h"

struct frames_ctx* Game_GetContext()

// Sig: void* Game_GetContext(void)
// Note: Returns the global IGI game-context pointer at DAT_00567C8C. Retail
// callers use it to dispatch context callbacks and initialize the main game
// state.
{
    return g_frames_ctx;
}
