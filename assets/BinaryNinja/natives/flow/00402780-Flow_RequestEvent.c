// IGI native provenance: Flow_RequestEvent - 0x00402780 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402780-Flow_RequestEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Flow_RequestEvent.h"
int32_t Flow_RequestEvent(int32_t context, float param_2 )

// Sig: void Flow_RequestEvent(int eventId)
// Note: Requests a flow-task event by id (drives the level's flow state
// machine). Param: eventId = flow event number used in the level flow script.
// Use from mission flow scripts to trigger scripted transitions. FLOW_EVENT
// enum: None=0, QUIT=1, INTRO=2, MAINMENU=3, GAME=4, RESTART_GAME=5 (events 6-8
// exist internally but have no registered constants).
{
    Flow_SetState(Script_GetArg(param_2, 0));
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
