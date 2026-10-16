#include "Camera_ApplyBandFilter_25.h"
int32_t* Camera_ApplyBandFilter_25(int32_t* a1, int32_t a2)

{
    int32_t* dstD = a1;
    int32_t i_1 = 3;
    int32_t f0 = a2 / 0x20;
    char f1 = a2 % 0x20;
    a2 = 0;
    int32_t i;

    do
    {
        int32_t valA6 = *dstD;
        *dstD = valA6 >> (f1 & 0x1f) | a2;
        dstD = &dstD[1];
        i = i_1;
        i_1 -= 1;
        a2 = (valA6 & ~(0xffffffff << (f1 & 0x1f))) << ((0x20 - f1) & 0x1f);
    } while (i != 1);
    int32_t ctxB1 = 2;
    int32_t* objC5 = 8;
    int32_t* result;
    int32_t* f3_1;

    do
    {
        if (ctxB1 < f0)
        {
            result = a1;
            *(objC5 + result) = 0;
        }
        else
        {
            result = *(objC5 - (f0 << 2) + a1);
            *(objC5 + a1) = result;
        }

        ctxB1 -= 1;
        f3_1 = objC5;
        objC5 -= 4;
    } while (f3_1 - 4 >= 0);
    return result;
}
