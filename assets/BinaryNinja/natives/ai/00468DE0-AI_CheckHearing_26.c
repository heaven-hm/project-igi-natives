// IGI native provenance: AI_CheckHearing_26 - 0x00468DE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00468DE0-AI_CheckHearing_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_26.h"
int32_t AI_CheckHearing_26(int32_t context)

{
    int32_t entity_1 = g_5bdd6c;

    if (entity_1 < 0x32)
    {
        *((entity_1 << 2) + &g_5bdc9c) = context;
        g_5bdd6c = entity_1 + 1;
        return context;
    }

    for (int32_t* i = &g_5bdc9c; i < 0x5bdd60; i = &i[1])
        *i = i[1];

    *((entity_1 << 2) + &g_5bdc98) = context;
    return context;
}
