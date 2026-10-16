#include "Sys_FreeMemory_3.h"
int32_t Sys_FreeMemory_3(int32_t a1)

{
    if (a1 != g_a94a64)
    {
        g_a94a64 = a1;
        memcpy(0xa94e80, a1 * 0x208 + &g_a950a0, 0x208);
    }

    return a1;
}
