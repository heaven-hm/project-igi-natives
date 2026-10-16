#include "Camera_ApplyBandFilter_22.h"
int32_t Camera_ApplyBandFilter_22(int32_t a1, void*** a2, int32_t* a3)

{
    void** i = &g_5446b0;

    do
    {
        if (a1 > i[4] && a1 < i[5])
        {
            if (a1 & 0xf || (a1 & 0xfff) < 0x100)
                break;

            *a2 = i;
            int32_t objC = a1;
            objC &= 0xf000;
            *a3 = objC;
            return ((a1 - objC - 0x100) >> 4) + objC + 8;
        }

        i = *i;
    } while (i != &g_5446b0);

    return 0;
}
