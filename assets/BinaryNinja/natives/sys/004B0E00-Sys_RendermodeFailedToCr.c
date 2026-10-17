// Original IGI.EXE function: Sys_RendermodeFailedToCr (VA 0x004B0E00; static CFG gate PASS, CFG score 1.000).
#include "Sys_RendermodeFailedToCr.h"
int32_t Sys_RendermodeFailedToCr(int32_t context)

{
    int32_t result = 0;

    for (char* i = &g_a952a4; i < 0xa962e4; )
    {
        if (!*i)
        {
            int32_t entity_3 = result * 0x208;
            *(entity_3 + &g_a950a0) = context;
            *(entity_3 + &g_a952a4) = 1;
            return result;
        }

        i = &i[0x208];
        result += 1;
    }

    int32_t item_4 = context;
    Error_Show("RenderMode: Failed to create new rendermode '%s'");

    while (true)
        /* nop */
}
