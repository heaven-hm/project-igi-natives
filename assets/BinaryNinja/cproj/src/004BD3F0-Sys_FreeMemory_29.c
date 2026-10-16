#include "gi_platform.h"
#include "004BD3F0-Sys_FreeMemory_29.h"
int32_t Sys_FreeMemory_29(int32_t a1, int32_t a2, int32_t a3, int32_t a4)

{
    if (a1 >= 0 && a1 < 0x31 && a2 >= 0 && a2 < 4)
    {
        int32_t objC3 = (*(int32_t*)(uintptr_t)(((a2 + a1 * 6) << 2) + &g_a96108));

        if (objC3)
            return objC3(a3, a4, a1, a2);
    }

    return a1;
}
