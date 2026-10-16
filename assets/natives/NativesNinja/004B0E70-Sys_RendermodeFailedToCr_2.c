#include "004B0E70-Sys_RendermodeFailedToCr_2.h"
/* 0x004b0e70 Sys_RendermodeFailedToCr_2 full linked: callers=46 callees=1 */
int32_t sub_4b0e70(int32_t a1)

{
    int32_t result = 0;

    for (char* i = &g_a94a84; i < &g_a94e84; )
    {
        if (!*i)
        {
            *((result << 3) + &g_a94a80) = a1;
            *((result << 3) + &g_a94a84) = 1;
            return result;
        }

        i = &i[8];
        result += 1;
    }

    int32_t var_4 = a1;
    Error_Show("RenderMode: Failed to create new method '%s'");

    while (true)
        /* nop */
}
