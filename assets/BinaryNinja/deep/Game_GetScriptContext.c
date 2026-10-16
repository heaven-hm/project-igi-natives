/* LOGIC NOTE (Game_GetScriptContext @ 0x00402890)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : Flow_LoadParameters, Level_Start
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Game_GetScriptContext.h"

int32_t Game_GetScriptContext()

// Sig: void* Game_GetScriptContext(void)
// Note: Returns *(void**)(Game_GetContext()+0x20), the script/task context
// initialized during game setup. Level_Start passes it through the script-data
// wrapper; the main-menu path pushes its return value as Menu_Manager's first
// argument.
{
    struct frames_ctx* frames_ctx_1 = g_frames_ctx;
    int32_t result;
    result = frames_ctx_1->pad_00[0x20];
    *(&result + 1) = frames_ctx_1->pad_00[0x21];
    *(&result + 2) = frames_ctx_1->pad_00[0x22];
    *(&result + 3) = frames_ctx_1->pad_00[0x23];
    return result;
}
