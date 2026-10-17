// IGI native provenance: FX_WalkToNodeD - 0x0048EBF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EBF0-FX_WalkToNodeD.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_WalkToNodeD.h"
int32_t FX_WalkToNodeD(int32_t context, int32_t* param_2)

{
    void* dest_val = param_2[0xa];
    int32_t item_10 = *(dest_val + 8);
    char* item_14 = "Walk To Node - %d";
    int32_t item_18 = 0xffffffff;
    int32_t item_1c = context;
    AI_AlertAllies_3(context);
    int32_t dest_1 = *(dest_val + 8);
    *(context + 0x3e30) = dest_1;
    char result = AI_MoveToNode_3(context, dest_1, nullptr, 1);

    if (!result)
        return result;

    return AI_CombatTarget_2(context, param_2);
}
