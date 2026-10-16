#include "FX_WalkToNodeD.h"
int32_t FX_WalkToNodeD(int32_t a1, int32_t* a2)

{
    void* dstD = a2[0xa];
    int32_t v_10 = *(dstD + 8);
    char* v_14 = "Walk To Node - %d";
    int32_t v_18 = 0xffffffff;
    int32_t v_1c = a1;
    AI_AlertAllies_3(a1);
    int32_t dstD1 = *(dstD + 8);
    *(a1 + 0x3e30) = dstD1;
    char result = AI_MoveToNode_3(a1, dstD1, nullptr, 1);

    if (!result)
        return result;

    return AI_CombatTarget_2(a1, a2);
}
