#include "00468DE0-AI_CheckHearing_26.h"
/* 0x00468de0 AI_CheckHearing_26 full linked: callers=1 callees=0 */
int32_t sub_468de0(int32_t a1)

{
    int32_t ecx_1 = g_5bdd6c;

    if (ecx_1 < 0x32)
    {
        *((ecx_1 << 2) + &g_5bdc9c) = a1;
        g_5bdd6c = ecx_1 + 1;
        return a1;
    }

    for (int32_t* i = &g_5bdc9c; i < 0x5bdd60; i = &i[1])
        *i = i[1];

    *((ecx_1 << 2) + &g_5bdc98) = a1;
    return a1;
}
