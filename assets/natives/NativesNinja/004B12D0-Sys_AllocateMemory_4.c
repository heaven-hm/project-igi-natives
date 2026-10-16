#include "004B12D0-Sys_AllocateMemory_4.h"
/* 0x004b12d0 Sys_AllocateMemory_4 full linked: callers=1 callees=0 */
int32_t* sub_4b12d0()

{
    int32_t* i;

    for (i = &g_9423c0; i < 0x943640; i = &i[0x25])
        *i = 0;

    return i;
}
