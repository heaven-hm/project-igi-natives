// Original IGI.EXE function: FX_FragmentSimulate_3 (VA 0x00482C30; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_3.h"
int32_t FX_FragmentSimulate_3(void* a1)

{
    if (WeaponType_GetConfig_2(0x49))
        *(a1 + 0x110) = *(a1 + 0x110) - 512f;

    if (WeaponType_GetConfig_2(0x51))
        *(a1 + 0x110) = *(a1 + 0x110) + 512f;

    long double x87_r7_5 = *(a1 + 0x110);
    long double f0 = 1024f;
    x87_r7_5 - f0;

    if (!(*(&((x87_r7_5 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f0) ? 1 : 0) << 0xa
        | (x87_r7_5 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = *(a1 + 0x110);
        long double f1_1 = 409600f;
        x87_r7_6 - f1_1;

        if (!(*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0x110) = 0x48c80000;
    }
    else
        *(a1 + 0x110) = 0x44800000;

    if (WeaponType_GetConfig_2(0x48))
        *(a1 + 0x108) = *(a1 + 0x108) - 0.0872664675f;

    if (WeaponType_GetConfig_2(0x50))
        *(a1 + 0x108) = *(a1 + 0x108) + 0.0872664675f;

    long double x87_r7_11 = *(a1 + 0x108);
    long double f2 = -1.55334306f;
    x87_r7_11 - f2;

    if (*(&((x87_r7_11 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f2) ? 1 : 0) << 0xa
            | (x87_r7_11 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        *(a1 + 0x108) = 0xbfc6d3f2;

    long double x87_r7_12 = *(a1 + 0x108);
    long double f3 = 1.55334306f;
    x87_r7_12 - f3;

    if (!(*(&((x87_r7_12 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f3) ? 1 : 0) << 0xa
            | (x87_r7_12 == f3 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(a1 + 0x108) = 0x3fc6d3f2;

    if (WeaponType_GetConfig_2(0x4b))
        *(a1 + 0x10c) = *(a1 + 0x10c) - 0.0872664675f;

    int32_t result = WeaponType_GetConfig_2(0x4d);

    if (result)
        *(a1 + 0x10c) = *(a1 + 0x10c) + 0.0872664675f;

    return result;
}
