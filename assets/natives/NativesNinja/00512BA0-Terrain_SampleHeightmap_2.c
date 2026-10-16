#include "00512BA0-Terrain_SampleHeightmap_2.h"
/* 0x00512ba0 Terrain_SampleHeightmap_2 full linked: callers=1 callees=2 */
int32_t sub_512ba0()

{
    int32_t eax_2 = g_a800ec;
    int32_t edi = 0;

    if (eax_2 <= 0)
    {
        g_a800ec = 0;
        return eax_2;
    }

    int32_t* esi = &g_afa844;
    int32_t eax_1;

    do
    {
        int32_t* eax = sub_497800(0x28);
        eax[1] = g_a7dc60;
        eax[3] = esi[-1];
        eax[4] = *esi;
        eax[5] = esi[1];
        eax[6] = esi[2];
        eax[7] = esi[3];
        eax[8] = esi[4];
        eax[9] = esi[5];
        sub_4978b0(0, eax);
        eax_1 = g_a800ec;
        edi += 1;
        esi = &esi[7];
    } while (edi < eax_1);

    g_a800ec = 0;
    return eax_1;
}
