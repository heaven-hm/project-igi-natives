// Original IGI.EXE function: Game_GetScriptContext (VA 0x00402890; static CFG gate PASS, CFG score 1.000).
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
