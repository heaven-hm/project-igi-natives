// Original IGI.EXE function: TerrainLightMap_Init_2 (VA 0x004F82B0; static CFG gate PASS, CFG score 1.000).
#include "TerrainLightMap_Init_2.h"

void* TerrainLightMap_Init_2(void* pThis)

{
    bool cond:0 = Script_ParseEnumReal32_5();
    int32_t ecx = *(pThis + 0x108);

    if (cond:0)
    {
        if (ecx)
        {
            int32_t edx = *(pThis + 0xd8);
            *(pThis + 0xe0) = 1;
            int32_t b97d24_2 = g_b97d24;
            *((b97d24_2 << 2) + &data_b97b20) = edx;
            g_b97d24 = b97d24_2 + 1;
            return b97d24_2 + 1;
        }
    }
    else if (ecx)
    {
        int32_t ecx_1 = *(pThis + 0xd8);
        *(pThis + 0xe0) = 1;
        int32_t b97d24_1 = g_b97d24;
        *((b97d24_1 << 2) + &data_b97b20) = ecx_1;
        g_b97d24 = b97d24_1 + 1;
        return b97d24_1 + 1;
    }

    *(pThis + 0xe0) = 0;
    return pThis;
}
