// IGI native provenance: FX_RunToNodeD - 0x0048EC50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EC50-FX_RunToNodeD.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_RunToNodeD.h"
int32_t FX_RunToNodeD(int32_t context, int32_t* param_2)

{
    void* dest_val = param_2[0xa];
    int32_t item_10 = *(dest_val + 8);
    char* item_14 = "Run To Node - %d";
    int32_t item_18 = 0xffffffff;
    int32_t item_1c = context;
    AI_SelectTarget_3(context);
    int32_t dest_1 = *(dest_val + 8);
    *(context + 0x3e30) = dest_1;
    char result = AI_MoveToNode_3(context, dest_1, nullptr, 1);

    if (!result)
        return result;

    return AI_CombatTarget_2(context, param_2);
}
