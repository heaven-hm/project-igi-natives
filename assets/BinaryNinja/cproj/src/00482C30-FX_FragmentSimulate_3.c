#include "gi_platform.h"
#include "00482C30-FX_FragmentSimulate_3.h"
int32_t FX_FragmentSimulate_3(void* a1)

{
    if (WeaponType_GetConfig_2(0x49))
        (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x110)) - 512.0f;

    if (WeaponType_GetConfig_2(0x51))
        (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x110)) + 512.0f;

    long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x110));
    long double f0 = 1024.0f;
    x87_r7_5 - f0;

    if (!(*(&((x87_r7_5 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f0) ? 1 : 0) << 0xa
        | (x87_r7_5 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = (*(int32_t*)(uintptr_t)(a1 + 0x110));
        long double f1_1 = 409600.0f;
        x87_r7_6 - f1_1;

        if (!(*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0x110)) = 0x48c80000;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0x110)) = 0x44800000;

    if (WeaponType_GetConfig_2(0x48))
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = (*(int32_t*)(uintptr_t)(a1 + 0x108)) - 0.0872664675.0f;

    if (WeaponType_GetConfig_2(0x50))
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = (*(int32_t*)(uintptr_t)(a1 + 0x108)) + 0.0872664675.0f;

    long double x87_r7_11 = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    long double f2 = -1.55334306.0f;
    x87_r7_11 - f2;

    if (*(&((x87_r7_11 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f2) ? 1 : 0) << 0xa
            | (x87_r7_11 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0xbfc6d3f2;

    long double x87_r7_12 = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    long double f3 = 1.55334306.0f;
    x87_r7_12 - f3;

    if (!(*(&((x87_r7_12 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f3) ? 1 : 0) << 0xa
            | (x87_r7_12 == f3 ? 1 : 0) << 0xe) + 1) & 0x41))
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0x3fc6d3f2;

    if (WeaponType_GetConfig_2(0x4b))
        (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = (*(int32_t*)(uintptr_t)(a1 + 0x10c)) - 0.0872664675.0f;

    int32_t result = WeaponType_GetConfig_2(0x4d);

    if (result)
        (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + 0.0872664675.0f;

    return result;
}
