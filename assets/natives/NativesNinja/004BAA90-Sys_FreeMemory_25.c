#include "004BAA90-Sys_FreeMemory_25.h"
/* 0x004baa90 Sys_FreeMemory_25 full linked: callers=1 callees=0 */
int32_t* sub_4baa90(int32_t a1)

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
