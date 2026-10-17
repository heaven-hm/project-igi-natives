// IGI native provenance: RePosition - 0x0048C760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048C760-RePosition.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RePosition.h"
int32_t* RePosition(void* context, int32_t* param_2)

{
    char* item_10 = "Combat - RePosition";
    int32_t item_14 = 0xffffffff;
    void* item_18 = context;
    void* dest_1 = param_2[0xa] + 8;
    *(context + 0x3cdc) = 0x3f800000;
    FX_SmokeEmit_17(context, dest_1);

    if (!*(context + 0x3de4))
        return AI_CombatTarget_2(context, param_2);

    void* data_2 = *(context + 0x3ea0);

    if (!data_2)
    {
        int32_t item_14_6 = Script_EvaluateCondition_4(context);
        return Warning_Show("HumanAI #%d has no nodeoccupationiten");
    }

    int32_t item_1c_1 = 0x3fd33333;

    if (!
        Script_FormatString_23(context + 0x3eb0, Script_ExecuteLevelScript_23(*(context + 0x3b6c), *(data_2 + 0xc)), 4.17232506e-08.0f, 0))
    {
        int32_t item_10_3 = *(*(context + 0x3ea0) + 0xc);
        char* item_14_3 = "Position not on node #%d";
        int32_t item_18_1 = 0xffffffff;
        void* item_1c_2 = context;
    }

    int32_t* result = AI_MoveToNode_3(context, *(*(context + 0x3ea0) + 0xc), context + 0x3eb0, 0);

    if (!result)
        return result;

    return FX_FireBallUpdate_18(context, param_2, param_2[7], 0);
}
