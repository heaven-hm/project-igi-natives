#include "AI_CheckHearing_26.h"
int32_t AI_CheckHearing_26(int32_t a1)

{
    int32_t objC1 = g_5bdd6c;

    if (objC1 < 0x32)
    {
        *((objC1 << 2) + &g_5bdc9c) = a1;
        g_5bdd6c = objC1 + 1;
        return a1;
    }

    for (int32_t* i = &g_5bdc9c; i < 0x5bdd60; i = &i[1])
        *i = i[1];

    *((objC1 << 2) + &g_5bdc98) = a1;
    return a1;
}
