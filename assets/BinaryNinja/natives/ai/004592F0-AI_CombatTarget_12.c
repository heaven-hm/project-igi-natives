// IGI native provenance: AI_CombatTarget_12 - 0x004592F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004592F0-AI_CombatTarget_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_12.h"
int32_t AI_CombatTarget_12(void* context, void* param_2)

{
    int32_t result = *(context + 8);

    if (!(result & 4))
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1d;
        int32_t data_1 = *(entity_1 + 0x74);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (result & 0x20000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x20;
        int32_t data_4 = *(entity_2 + 0x80);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    if (!(result & 1))
        return result;

    FX_DebrisSpawn_15(param_2);
    int32_t* entity_3 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_7 = *entity_3;
    *(context + 0x14) = data_7;
    return data_7(context, param_2);
}
