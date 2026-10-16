#include "gi_platform.h"
#include "004950F0-Display_SetGammaRamp_7.h"
int32_t* Display_SetGammaRamp_7(int32_t* a1, int32_t* a2, int32_t* a3)

{
    *a1 = *a2;
    a1[1] = a2[3];
    a1[2] = a2[6];
    a1[3] = 0;
    a1[4] = a2[1];
    a1[5] = a2[4];
    a1[6] = a2[7];
    a1[7] = 0;
    a1[8] = a2[2];
    a1[9] = a2[5];
    a1[0xa] = a2[8];
    a1[0xb] = 0;

    if (!a3)
    {
        a1[0xc] = 0;
        a1[0xd] = 0;
        a1[0xe] = 0;
        a1[0xf] = 0x3f800000;
        return a1;
    }

    a1[0xc] = *a3;
    a1[0xd] = a3[1];
    a1[0xe] = a3[2];
    a1[0xf] = 0x3f800000;
    return a1;
}
