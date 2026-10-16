#include "004F9460-Script_NoFreeNodesizeElemen.h"
/* 0x004f9460 Script_NoFreeNodesizeElemen full linked: callers=2 callees=1 */
int16_t* sub_4f9460(int16_t a1, int32_t a2)

{
    int32_t edx = 0xffffffff;
    int32_t ecx = 0;
    int16_t* i;

    for (i = &g_a77228; i < &g_a77248; )
    {
        if (edx == 0xffffffff && *i == 0x181)
            edx = ecx;

        if (*i == a1)
        {
            *((ecx << 3) + &g_a7722c) = a2;
            return a2;
        }

        i = &i[4];
        ecx += 1;
    }

    if (edx != 0xffffffff)
    {
        *((edx << 3) + &g_a77228) = a1;
        *((edx << 3) + &g_a7722c) = a2;
        return i;
    }

    Error_Show("NO FREE NODESIZE ELEMENTS");

    while (true)
        /* nop */
}
