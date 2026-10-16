#include "Sys_FreeMemory_25.h"
int32_t* Sys_FreeMemory_25(int32_t a1)

{
    int32_t* i_1 = g_a43e90;
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[2] == a1)
            i_1[2] = 0;

        i_1 = i;
    }

    return i;
}
