#include "gi_platform.h"
#include "004F9460-Script_NoFreeNodesizeElemen.h"
int16_t* Script_NoFreeNodesizeElemen(int16_t a1, int32_t a2)

{
    int32_t tmpD = 0xffffffff;
    int32_t objC = 0;
    int16_t* i;

    for (i = &g_a77228; i < &g_a77248; )
    {
        if (tmpD == 0xffffffff && *i == 0x181)
            tmpD = objC;

        if (*i == a1)
        {
            *((objC << 3) + &g_a7722c) = a2;
            return a2;
        }

        i = &i[4];
        objC += 1;
    }

    if (tmpD != 0xffffffff)
    {
        *((tmpD << 3) + &g_a77228) = a1;
        *((tmpD << 3) + &g_a7722c) = a2;
        return i;
    }

    Error_Show("NO FREE NODESIZE ELEMENTS");

    while (true)
        /* nop */
}
