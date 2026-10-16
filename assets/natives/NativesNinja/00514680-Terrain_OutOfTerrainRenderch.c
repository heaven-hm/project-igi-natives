#include "00514680-Terrain_OutOfTerrainRenderch.h"
/* 0x00514680 Terrain_OutOfTerrainRenderch full linked: callers=3 callees=2 */
int32_t* sub_514680(int32_t a1, int32_t a2)

{
    uint32_t edx_2 = COMBINE(0, a2 * 0xb5af + a1 * 0x9d) % 0x1fd * 3;
    int32_t* i_1 = *((edx_2 << 2) + &g_a7e080);

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[0xbbb] == a1 && i_1[0xbbc] == a2)
            return i_1;

        i_1 = i;
    }

    int32_t eax_3 = g_a7f880;

    if (eax_3 != g_a7f884)
    {
        int32_t* esi_3 = *(g_a7f87c + (eax_3 << 2)) * g_a7f888 + g_a7f878;
        *(g_a7f88c + esi_3) = eax_3;
        g_a7f880 += 1;
        esi_3[0xbba] = 0;
        esi_3[0xbbb] = a1;
        esi_3[0xbbc] = a2;
        esi_3[1] = 0;
        *esi_3 = 0;
        sub_4af910((edx_2 << 2) + &g_a7e080, esi_3);
        return esi_3;
    }

    Error_Show("Out of terrain renderchunks");

    while (true)
        /* nop */
}
