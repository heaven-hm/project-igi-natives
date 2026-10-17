// Original IGI.EXE function: AI_CheckHearing_26 (VA 0x00468DE0; static CFG gate PASS, CFG score 1.000).
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
