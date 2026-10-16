#include "0044D4A0-AIAction_WalkToNode.h"
/* 0x0044d4a0 AIAction_WalkToNode full linked: callers=0 callees=5 */
int32_t AIAction_WalkToNode(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_WalkToNode(int nodeId, int flags)
// Note: Walks the AI to a nav node. Params: nodeId = graph/node id from the
// level nav data, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1). Use for calm
// movement in AI scripts.
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    int32_t eax_2 = sub_4b8a20(a2, 0);
    int32_t var_30 = 1;
    eax_1[2] = eax_2;
    sub_450e10(sub_48ebe0, eax_1, sub_4b8a20(a2, var_30));
    int32_t var_18 = 2;
    int32_t var_10 = 0;
    int32_t var_c = 0x40000000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
