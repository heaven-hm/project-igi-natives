// Original IGI.EXE function: AI_CheckSector_4 (VA 0x004532D0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_4.h"
int32_t* AI_CheckSector_4(int32_t a1)

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
