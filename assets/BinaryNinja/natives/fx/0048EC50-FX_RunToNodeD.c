// Original IGI.EXE function: FX_RunToNodeD (VA 0x0048EC50; static CFG gate PASS, CFG score 1.000).
#include "FX_RunToNodeD.h"
int32_t FX_RunToNodeD(int32_t a1, int32_t* a2)

{
    void* dstD = a2[0xa];
    int32_t v_10 = *(dstD + 8);
    char* v_14 = "Run To Node - %d";
    int32_t v_18 = 0xffffffff;
    int32_t v_1c = a1;
    AI_SelectTarget_3(a1);
    int32_t dstD1 = *(dstD + 8);
    *(a1 + 0x3e30) = dstD1;
    char result = AI_MoveToNode_3(a1, dstD1, nullptr, 1);

    if (!result)
        return result;

    return AI_CombatTarget_2(a1, a2);
}
