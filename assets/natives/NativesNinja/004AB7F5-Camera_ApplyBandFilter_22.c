#include "004AB7F5-Camera_ApplyBandFilter_22.h"
/* 0x004ab7f5 Camera_ApplyBandFilter_22 full linked: callers=1 callees=0 */
int32_t sub_4ab7f5(int32_t a1, void*** a2, int32_t* a3)

{
    void** i = &g_5446b0;

    do
    {
        if (a1 > i[4] && a1 < i[5])
        {
            if (a1 & 0xf || (a1 & 0xfff) < 0x100)
                break;

            *a2 = i;
            int32_t ecx = a1;
            ecx &= 0xf000;
            *a3 = ecx;
            return ((a1 - ecx - 0x100) >> 4) + ecx + 8;
        }

        i = *i;
    } while (i != &g_5446b0);

    return 0;
}
