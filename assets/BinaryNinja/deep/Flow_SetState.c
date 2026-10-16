/* LOGIC NOTE (Flow_SetState @ 0x004028A0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : Flow_RequestEvent, Game_Setup, IntroScreen_LoadParameters, Level_TimeSpentRedrawing2F, QTask_CreateTask
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Flow_SetState.h"

int32_t Flow_SetState(int32_t arg1)

// Sig: void Flow_SetState(int stateId)
// Note: Stores a pending flow state in game-context field +0x2C. The main loop
// consumes it, copies it to +0x28, clears the pending field, and dispatches
// state IDs 1 through 8. Flow_RequestEvent reaches this setter after converting
// its event ID.
{
    struct frames_ctx* frames_ctx_1 = g_frames_ctx;
    frames_ctx_1->pad_00[0x2c] = arg1;
    frames_ctx_1->pad_00[0x2d] = *(&arg1 + 1);
    frames_ctx_1->pad_00[0x2e] = *(&arg1 + 2);
    frames_ctx_1->pad_00[0x2f] = *(&arg1 + 3);
    return arg1;
}
