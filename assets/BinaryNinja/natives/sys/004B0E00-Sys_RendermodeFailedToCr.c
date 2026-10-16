#include "Sys_RendermodeFailedToCr.h"
int32_t Sys_RendermodeFailedToCr(int32_t a1)

{
    int32_t result = 0;

    for (char* i = &g_a952a4; i < 0xa962e4; )
    {
        if (!*i)
        {
            int32_t objC3 = result * 0x208;
            *(objC3 + &g_a950a0) = a1;
            *(objC3 + &g_a952a4) = 1;
            return result;
        }

        i = &i[0x208];
        result += 1;
    }

    int32_t v_4 = a1;
    Error_Show("RenderMode: Failed to create new rendermode '%s'");

    while (true)
        /* nop */
}
