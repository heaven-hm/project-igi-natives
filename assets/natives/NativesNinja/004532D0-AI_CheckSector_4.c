#include "004532D0-AI_CheckSector_4.h"
/* 0x004532d0 AI_CheckSector_4 full linked: callers=2 callees=0 */
int32_t* sub_4532d0(int32_t a1)

{
    int32_t* i_1 = g_5bda28;
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[2] == a1)
        {
            i = 1;
            return i;
        }

        i_1 = i;
    }

    i = 0;
    return i;
}
