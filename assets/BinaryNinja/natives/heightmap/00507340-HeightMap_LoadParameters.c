// IGI native provenance: HeightMap_LoadParameters - 0x00507340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00507340-HeightMap_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
