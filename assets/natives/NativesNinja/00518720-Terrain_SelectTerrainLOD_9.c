#include "00518720-Terrain_SelectTerrainLOD_9.h"
/* 0x00518720 Terrain_SelectTerrainLOD_9 full linked: callers=1 callees=1 */
int32_t sub_518720(int32_t a1)

{
    int32_t edi = 0;
    int32_t result;

    for (int32_t* i = &g_a800fc; i < &g_a801fc; )
    {
        result = 1 << (edi & 0x1f);

        if (a1 & result)
        {
            result = sub_4b8920(*i);
            i[-1] = 0;
            *i = 0;
        }

        i = &i[2];
        edi += 1;
    }

    return result;
}
