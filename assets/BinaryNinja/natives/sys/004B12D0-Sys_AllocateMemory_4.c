#include "Sys_AllocateMemory_4.h"
int32_t* Sys_AllocateMemory_4()

{
    int32_t* i;

    for (i = &g_9423c0; i < 0x943640; i = &i[0x25])
        *i = 0;

    return i;
}
