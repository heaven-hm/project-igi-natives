// Original IGI.EXE function: Sys_ResolveSymbol_19 (VA 0x004B7490; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_19.h"
void* Sys_ResolveSymbol_19(void* context)

{
    if (context)
    {
        int32_t temp_1 = *(context + 4);

        if (temp_1)
        {
            int32_t data_1 = *(context + 8);
            int32_t entity_2 = ~(data_1 - 1);

            if ((entity_2 & data_1) != data_1)
                g_a43e5c = 1;
            else
            {
                void* data_3 = (data_1 + 0x13) & entity_2;

                if (data_3 < temp_1)
                    return data_3 + context;
            }
        }
    }

    return 0;
}
