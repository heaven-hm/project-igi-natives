// Original IGI.EXE function: Render_NoMoreQcubeCallbacks (VA 0x004D2B80; static CFG gate PASS, CFG score 1.000).
#include "Render_NoMoreQcubeCallbacks.h"
int32_t* Render_NoMoreQcubeCallbacks(int32_t context)

{
    int32_t entity_val = 0;

    for (int32_t* i = &g_a4eeac; i < 0xa4eefc; )
    {
        if (!*i)
        {
            int32_t temp_val = g_a538e4;
            g_a538e4 = (entity_val << 3) + &g_a4eea8;
            *((entity_val << 3) + &g_a4eea8) = temp_val;
            *((entity_val << 3) + &g_a4eeac) = context;
            return (entity_val << 3) + &g_a4eea8;
        }

        i = &i[2];
        entity_val += 1;
    }

    Error_Show("No more QCube callbacks available.");

    while (true)
        /* nop */
}
