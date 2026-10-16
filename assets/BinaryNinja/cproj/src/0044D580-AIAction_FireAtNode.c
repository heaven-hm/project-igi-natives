#include "gi_platform.h"
#include "0044D580-AIAction_FireAtNode.h"
int32_t AIAction_FireAtNode(long double a1 , long double a2 , int32_t a3, float a4 )

// Sig: void AIAction_FireAtNode(int nodeId, int p1, int p2, int p3, int p4)
// Note: Makes the AI fire AT a nav-node position. Params: nodeId = target node
// id, remaining 4 args = firing stance/behaviour values observed in retail AI
// scripts (map before inventing values). Use in combat handlers when target is
// a position.
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    int32_t v_30 = 0;
    valA1[2] = Script_GetArg(a4, v_30);
    Profile_ValueSet(a4, 1.40129846e-45.0f);
    valA1[3] = a1 * 30.0;
    Profile_ValueSet(a4, 2.80259693e-45.0f);
    valA1[4] = a2 * 30.0;
    valA1[6] = Script_GetArg(a4, 3);
    AI_SelectTarget(sub_48eca0, valA1, Script_GetArg(a4, 4));
    int32_t v_18 = 5;
    int32_t v_10 = 0;
    int32_t v_c = 0x40140000;
    char* v_8 = &g_567c74;
    memcpy(a3, &v_18, 0x18);
    return a3;
}
