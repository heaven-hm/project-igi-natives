// Original IGI.EXE function: Sys_AllocateMemory_7 (VA 0x004B1E00; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_7.h"
char* Sys_AllocateMemory_7(char* a1, int32_t a2, char* a3)

{
    int32_t srcS = 0;
    char i = *a3;

    while (i)
    {
        if (i == 0x3a)
        {
            if (a1)
            {
                Camera_ApplyLineFilter_5(a1, &a3[srcS + 1], a2);
                a1[a2 - 1] = 0;
            }

            return &a3[srcS + 1];
        }

        i = a3[srcS + 1];
        srcS += 1;
    }

    if (a1)
    {
        Camera_ApplyLineFilter_5(a1, a3, a2);
        a1[a2 - 1] = 0;
    }

    return a3;
}
