// Original IGI.EXE function: Terrain_OutOfTerrainRenderch (VA 0x00514680; static CFG gate PASS, CFG score 1.000).
#include "Terrain_OutOfTerrainRenderch.h"
int32_t* Terrain_OutOfTerrainRenderch(int32_t context, int32_t param_2)

{
    uint32_t temp_2 = COMBINE(0, param_2 * 0xb5af + context * 0x9d) % 0x1fd * 3;
    int32_t* i_1 = *((temp_2 << 2) + &g_a7e080);

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[0xbbb] == context && i_1[0xbbc] == param_2)
            return i_1;

        i_1 = i;
    }

    int32_t data_3 = g_a7f880;

    if (data_3 != g_a7f884)
    {
        int32_t* source_3 = *(g_a7f87c + (data_3 << 2)) * g_a7f888 + g_a7f878;
        *(g_a7f88c + source_3) = data_3;
        g_a7f880 += 1;
        source_3[0xbba] = 0;
        source_3[0xbbb] = context;
        source_3[0xbbc] = param_2;
        source_3[1] = 0;
        *source_3 = 0;
        Camera_ApplyLineFilter_33((temp_2 << 2) + &g_a7e080, source_3);
        return source_3;
    }

    Error_Show("Out of terrain renderchunks");

    while (true)
        /* nop */
}
