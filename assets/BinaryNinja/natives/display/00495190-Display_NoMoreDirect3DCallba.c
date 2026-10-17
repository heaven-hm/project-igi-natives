// Original IGI.EXE function: Display_NoMoreDirect3DCallba (VA 0x00495190; static CFG gate PASS, CFG score 1.000).
#include "Display_NoMoreDirect3DCallba.h"
int32_t* Display_NoMoreDirect3DCallba(int32_t context, int32_t* param_2)

{
    int32_t entity_val = 0;

    for (int32_t* i = &g_bcad24; i < &g_bcad74; )
    {
        if (!*i)
        {
            *((entity_val << 3) + &g_bcad20) = *param_2;
            *((entity_val << 3) + &g_bcad24) = context;
            *param_2 = (entity_val << 3) + &g_bcad20;
            return (entity_val << 3) + &g_bcad20;
        }

        i = &i[2];
        entity_val += 1;
    }

    Error_Show("No more Direct3D callbacks available.");

    while (true)
        /* nop */
}
