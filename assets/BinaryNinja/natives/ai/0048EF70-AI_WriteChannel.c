// IGI native provenance: AI_WriteChannel - 0x0048EF70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EF70-AI_WriteChannel.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_WriteChannel.h"
void* AI_WriteChannel(void* context, int32_t param_2, float param_3)

{
    int32_t entity_2 = *(*((*(context + 0x3d38) << 2) + &g_54151c) + (param_2 << 2));

    if (entity_2 != 0xffffffff)
    {
        *(context + (entity_2 << 2) + 0x3c74) = param_3;
        return context;
    }

    int32_t item_104 = param_2;
    void* item_108 = context + 0x3d15;
    int32_t item_10c_1 = Script_EvaluateCondition_4(context);
    void item_100;
    return Game_DataSymbolLoad(&item_100, "AI(%d) type(%s) channel(%d)");
}
