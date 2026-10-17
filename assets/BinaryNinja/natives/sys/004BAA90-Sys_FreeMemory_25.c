// Original IGI.EXE function: Sys_FreeMemory_25 (VA 0x004BAA90; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_25.h"
int32_t* Sys_FreeMemory_25(int32_t context)

{
    int32_t* i_1 = g_a43e90;
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[2] == context)
            i_1[2] = 0;

        i_1 = i;
    }

    return i;
}
