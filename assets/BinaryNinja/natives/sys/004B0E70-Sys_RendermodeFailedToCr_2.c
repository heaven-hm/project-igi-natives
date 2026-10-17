// Original IGI.EXE function: Sys_RendermodeFailedToCr_2 (VA 0x004B0E70; static CFG gate PASS, CFG score 1.000).
#include "Sys_RendermodeFailedToCr_2.h"
int32_t Sys_RendermodeFailedToCr_2(int32_t a1)

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

    int32_t v_4 = a1;
    Error_Show("RenderMode: Failed to create new method '%s'");

    while (true)
        /* nop */
}
