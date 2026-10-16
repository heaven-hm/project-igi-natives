#include "00402780-Flow_RequestEvent.h"
/* 0x00402780 Flow_RequestEvent full linked: callers=0 callees=3 */
int32_t Flow_RequestEvent(int32_t a1, float a2 @ 0xc)

// Sig: void Flow_RequestEvent(int eventId)
// Note: Requests a flow-task event by id (drives the level's flow state
// machine). Param: eventId = flow event number used in the level flow script.
// Use from mission flow scripts to trigger scripted transitions. FLOW_EVENT
// enum: None=0, QUIT=1, INTRO=2, MAINMENU=3, GAME=4, RESTART_GAME=5 (events 6-8
// exist internally but have no registered constants).
{
    Flow_SetState(sub_4b8a20(a2, 0));
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
