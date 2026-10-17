// Original IGI.EXE function: Display_NoMoreDisplayCallbac (VA 0x00491650; static CFG gate PASS, CFG score 1.000).
#include "Display_NoMoreDisplayCallbac.h"
int32_t* Display_NoMoreDisplayCallbac(int32_t context, int32_t* param_2)

{
    int32_t entity_val = 0;

    for (int32_t* i = &g_c28a44; i < &g_c28b44; )
    {
        if (!*i)
        {
            *((entity_val << 3) + &g_c28a40) = *param_2;
            *((entity_val << 3) + &g_c28a44) = context;
            *param_2 = (entity_val << 3) + &g_c28a40;
            return (entity_val << 3) + &g_c28a40;
        }

        i = &i[2];
        entity_val += 1;
    }

    Error_Show("No more Display callbacks available.");

    while (true)
        /* nop */
}
