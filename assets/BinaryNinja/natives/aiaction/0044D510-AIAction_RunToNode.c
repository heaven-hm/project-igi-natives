// Original IGI.EXE function: AIAction_RunToNode (VA 0x0044D510; static CFG gate PASS, CFG score 0.933).
#include "AIAction_RunToNode.h"
int32_t AIAction_RunToNode(int32_t context, float param_2 )

// Sig: void AIAction_RunToNode(int nodeId, int flags)
// Note: Runs the AI to a nav node (fast). Same params as AIAction_WalkToNode:
// nodeId = node id, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    int32_t data_2 = Script_GetArg(param_2, 0);
    int32_t item_30 = 1;
    data_1[2] = data_2;
    AI_SelectTarget(sub_48ec40, data_1, Script_GetArg(param_2, item_30));
    int32_t item_18 = 2;
    int32_t item_10 = 0;
    int32_t item_c = 0x40000000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
