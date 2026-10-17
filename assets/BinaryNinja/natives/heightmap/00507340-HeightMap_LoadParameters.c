// Original IGI.EXE function: HeightMap_LoadParameters (VA 0x00507340; static CFG gate PASS, CFG score 1.000).
#include "HeightMap_LoadParameters.h"
void* HeightMap_LoadParameters(void* context)

{
    if (!*(context + 0xe0))
    {
        void* data_1 = *(context + 0xc0);

        if (data_1 != 0xffffffff && !*(data_1 + 0xb81920))
        {
            Sys_ExecuteBytecode_2(*(*(*(context + 0x68) + 0xdd0) + data_1 * 0xc));
            *(*(*(context + 0x68) + 0xdd0) + *(context + 0xc0) * 0xc) = 0;
            *(*(*(context + 0x68) + 0xdd0) + *(context + 0xc0) * 0xc) = 0;
        }

        int32_t data_7 = *(context + 0xf8);

        if (data_7 != 0xffffffff)
        {
            int32_t entity_6 = g_a7b250;

            if (data_7 != entity_6 - 1)
            {
                void* entity_7 = *((entity_6 << 2) + &g_a7ad0c);
                *((data_7 << 2) + &g_a7ad10) = entity_7;
                *(entity_7 + 0xf8) = data_7;
            }

            g_a7b250 -= 1;
        }
    }

    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
