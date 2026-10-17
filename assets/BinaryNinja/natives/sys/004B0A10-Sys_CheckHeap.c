// Original IGI.EXE function: Sys_CheckHeap (VA 0x004B0A10; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap.h"
int32_t Sys_CheckHeap(char* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    if (g_9422e4 <= param_4)
    {
        if (param_2)
            *context = 0;
    }
    else if (param_2)
    {
        char* i = nullptr;

        if (param_2 - 1 > 0)
        {
            do
            {
                int32_t entity_1 = g_9422e0;

                if (i >= *(entity_1 + (param_4 << 3) + 4) - 1)
                    break;

                char* entity_3 = *(entity_1 + (param_4 << 3)) + i;
                i = &i[1];
                *(i + context - 1) = entity_3[param_3];
            } while (i < param_2 - 1);
        }

        *(i + context) = 0;
        return 1;
    }

    return 0;
}
