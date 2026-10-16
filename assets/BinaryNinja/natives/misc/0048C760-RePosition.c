#include "RePosition.h"
int32_t* RePosition(void* a1, int32_t* a2)

{
    char* v_10 = "Combat - RePosition";
    int32_t v_14 = 0xffffffff;
    void* v_18 = a1;
    void* dstD1 = a2[0xa] + 8;
    *(a1 + 0x3cdc) = 0x3f800000;
    FX_SmokeEmit_17(a1, dstD1);

    if (!*(a1 + 0x3de4))
        return AI_CombatTarget_2(a1, a2);

    void* valA2 = *(a1 + 0x3ea0);

    if (!valA2)
    {
        int32_t v_14_6 = Script_EvaluateCondition_4(a1);
        return Warning_Show("HumanAI #%d has no nodeoccupationiten");
    }

    int32_t v_1c_1 = 0x3fd33333;

    if (!
        Script_FormatString_23(a1 + 0x3eb0, Script_ExecuteLevelScript_23(*(a1 + 0x3b6c), *(valA2 + 0xc)), 4.17232506e-08f, 0))
    {
        int32_t v_10_3 = *(*(a1 + 0x3ea0) + 0xc);
        char* v_14_3 = "Position not on node #%d";
        int32_t v_18_1 = 0xffffffff;
        void* v_1c_2 = a1;
    }

    int32_t* result = AI_MoveToNode_3(a1, *(*(a1 + 0x3ea0) + 0xc), a1 + 0x3eb0, 0);

    if (!result)
        return result;

    return FX_FireBallUpdate_18(a1, a2, a2[7], 0);
}
