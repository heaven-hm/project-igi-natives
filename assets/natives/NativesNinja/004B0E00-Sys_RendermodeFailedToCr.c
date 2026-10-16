#include "004B0E00-Sys_RendermodeFailedToCr.h"
/* 0x004b0e00 Sys_RendermodeFailedToCr full linked: callers=2 callees=1 */
int32_t sub_4b0e00(int32_t a1)

{
    int32_t result = 0;

    for (char* i = &g_a952a4; i < 0xa962e4; )
    {
        if (!*i)
        {
            int32_t ecx_3 = result * 0x208;
            *(ecx_3 + &g_a950a0) = a1;
            *(ecx_3 + &g_a952a4) = 1;
            return result;
        }

        i = &i[0x208];
        result += 1;
    }

    int32_t var_4 = a1;
    Error_Show("RenderMode: Failed to create new rendermode '%s'");

    while (true)
        /* nop */
}
