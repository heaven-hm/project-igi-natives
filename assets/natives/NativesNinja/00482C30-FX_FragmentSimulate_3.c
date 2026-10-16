#include "00482C30-FX_FragmentSimulate_3.h"
/* 0x00482c30 FX_FragmentSimulate_3 full linked: callers=1 callees=6 */
int32_t sub_482c30(void* a1)

{
    if (WeaponType_GetConfig_2(0x49))
        *(a1 + 0x110) = *(a1 + 0x110) - 512f;

    if (WeaponType_GetConfig_2(0x51))
        *(a1 + 0x110) = *(a1 + 0x110) + 512f;

    long double x87_r7_5 = *(a1 + 0x110);
    long double temp0 = 1024f;
    x87_r7_5 - temp0;

    if (!(*(&((x87_r7_5 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp0) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = *(a1 + 0x110);
        long double temp1_1 = 409600f;
        x87_r7_6 - temp1_1;

        if (!(*(&((x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0x110) = 0x48c80000;
    }
    else
        *(a1 + 0x110) = 0x44800000;

    if (WeaponType_GetConfig_2(0x48))
        *(a1 + 0x108) = *(a1 + 0x108) - 0.0872664675f;

    if (WeaponType_GetConfig_2(0x50))
        *(a1 + 0x108) = *(a1 + 0x108) + 0.0872664675f;

    long double x87_r7_11 = *(a1 + 0x108);
    long double temp2 = -1.55334306f;
    x87_r7_11 - temp2;

    if (*(&((x87_r7_11 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp2) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp2 ? 1 : 0) << 0xe) + 1) & 1)
        *(a1 + 0x108) = 0xbfc6d3f2;

    long double x87_r7_12 = *(a1 + 0x108);
    long double temp3 = 1.55334306f;
    x87_r7_12 - temp3;

    if (!(*(&((x87_r7_12 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp3) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp3 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(a1 + 0x108) = 0x3fc6d3f2;

    if (WeaponType_GetConfig_2(0x4b))
        *(a1 + 0x10c) = *(a1 + 0x10c) - 0.0872664675f;

    int32_t result = WeaponType_GetConfig_2(0x4d);

    if (result)
        *(a1 + 0x10c) = *(a1 + 0x10c) + 0.0872664675f;

    return result;
}
