/* LOGIC NOTE (Flow_RequestEvent @ 0x00402780)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Flow
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Flow_RequestEvent.h"

int32_t Flow_RequestEvent(int32_t arg1, float arg2 @ 0xc)

// Sig: void Flow_RequestEvent(int eventId)
// Note: Requests a flow-task event by id (drives the level's flow state
// machine). Param: eventId = flow event number used in the level flow script.
// Use from mission flow scripts to trigger scripted transitions. FLOW_EVENT
// enum: None=0, QUIT=1, INTRO=2, MAINMENU=3, GAME=4, RESTART_GAME=5 (events 6-8
// exist internally but have no registered constants).
{
    Flow_SetState(Script_GetArg(arg2, 0));
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}
