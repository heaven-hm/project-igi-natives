#include "00517510-Terrain_UpdateWaterWaves_5.h"
/* 0x00517510 Terrain_UpdateWaterWaves_5 full linked: callers=1 callees=1 */
int32_t sub_517510(char* a1)

{
    char* edx = a1;
    char eax = *edx;
    int32_t ecx;

    if (eax != 0x24)
    {
        if (eax != 0x30)
            return sub_4a5490(edx);

        ecx = edx[1];

        if (ecx != 0x78 && ecx != 0x58)
            return sub_4a5490(edx);

        if (eax != 0x24)
            edx = &edx[1];
    }

    ecx = edx[1];
    void* edx_1 = &edx[1];
    int32_t result = 0;

    while (ecx)
    {
        int32_t eax_2 = result << 4;

        if (ecx <= 0x39)
        {
            ecx &= 0xf;
            result = eax_2 + ecx;
        }
        else
        {
            ecx &= 0xf;
            result = eax_2 + ecx + 9;
        }

        ecx = *(edx_1 + 1);
        edx_1 += 1;
    }

    return result;
}
