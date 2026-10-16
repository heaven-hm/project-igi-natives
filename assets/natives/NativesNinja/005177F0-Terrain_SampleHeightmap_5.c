#include "005177F0-Terrain_SampleHeightmap_5.h"
/* 0x005177f0 Terrain_SampleHeightmap_5 full linked: callers=1 callees=4 */
int32_t sub_5177f0(void* a1)

{
    int32_t i = 0;
    int32_t* eax = *(a1 + 8);
    int32_t* ebx = a1 + 0xc;

    if (eax)
    {
        sub_4b7d30(eax);
        sub_4b0d10(*(a1 + 8));
        *(a1 + 8) = 0;
    }

    if (*(a1 + 4) > 0)
    {
        do
        {
            Struct_Clear36(ebx);
            i += 1;
            ebx = &ebx[9];
        } while (i < *(a1 + 4));
    }

    return sub_4b0d10(a1);
}
