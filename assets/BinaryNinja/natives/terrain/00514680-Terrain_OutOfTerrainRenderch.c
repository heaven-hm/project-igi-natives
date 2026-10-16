#include "Terrain_OutOfTerrainRenderch.h"
int32_t* Terrain_OutOfTerrainRenderch(int32_t a1, int32_t a2)

{
    uint32_t tmpD2 = COMBINE(0, a2 * 0xb5af + a1 * 0x9d) % 0x1fd * 3;
    int32_t* i_1 = *((tmpD2 << 2) + &g_a7e080);

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[0xbbb] == a1 && i_1[0xbbc] == a2)
            return i_1;

        i_1 = i;
    }

    int32_t valA3 = g_a7f880;

    if (valA3 != g_a7f884)
    {
        int32_t* srcS3 = *(g_a7f87c + (valA3 << 2)) * g_a7f888 + g_a7f878;
        *(g_a7f88c + srcS3) = valA3;
        g_a7f880 += 1;
        srcS3[0xbba] = 0;
        srcS3[0xbbb] = a1;
        srcS3[0xbbc] = a2;
        srcS3[1] = 0;
        *srcS3 = 0;
        Camera_ApplyLineFilter_33((tmpD2 << 2) + &g_a7e080, srcS3);
        return srcS3;
    }

    Error_Show("Out of terrain renderchunks");

    while (true)
        /* nop */
}
