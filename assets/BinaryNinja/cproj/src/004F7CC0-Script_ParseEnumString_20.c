#include "gi_platform.h"
#include "004F7CC0-Script_ParseEnumString_20.h"
long double Script_ParseEnumString_20(void* a1, float a2, float a3)

{
    double* srcS = a2;
    double v_18 = *srcS - (*(int32_t*)(uintptr_t)(a1 + 0x2c08));
    double v_10 = srcS[1] - (*(int32_t*)(uintptr_t)(a1 + 0x2c10));
    double v_8 = srcS[2] - (*(int32_t*)(uintptr_t)(a1 + 0x2c18));
    Camera_ApplyHandiCam_5();
    long double x87_r6_2 = *srcS - (v_18 - a3);
    *srcS = x87_r6_2;
    Camera_ApplyHandiCam_5();
    long double x87_r5_2 = srcS[1] - (v_10 - a3);
    srcS[1] = x87_r5_2;
    Camera_ApplyHandiCam_5();
    long double x87_r4_1 = v_8;
    long double x87_r3_2 = srcS[2] - (x87_r4_1 - a3);
    srcS[2] = x87_r3_2;
    long double x87_r2_1 = a3 * 0.5.0f;
    long double f1 = v_18;
    x87_r2_1 - f1;

    if (*(&((x87_r2_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, f1) ? 1 : 0) << 0xa
            | (x87_r2_1 == f1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
        *srcS = x87_r6_2 - a3;

    long double f2 = v_10;
    x87_r2_1 - f2;

    if (*(&((x87_r2_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, f2) ? 1 : 0) << 0xa
            | (x87_r2_1 == f2 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
        srcS[1] = x87_r5_2 - a3;

    x87_r4_1 - x87_r2_1;

    if (!(*(&((x87_r4_1 < x87_r2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_1, x87_r2_1) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        srcS[2] = x87_r3_2 - a3;

    long double x87_r3_5 = a3 * -0.5.0f;
    long double f3 = v_18;
    x87_r3_5 - f3;

    if (!(*(&((x87_r3_5 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_5, f3) ? 1 : 0) << 0xa
            | (x87_r3_5 == f3 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        *srcS = a3 + *srcS;

    long double f4 = v_10;
    x87_r3_5 - f4;

    if (!(*(&((x87_r3_5 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_5, f4) ? 1 : 0) << 0xa
            | (x87_r3_5 == f4 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        srcS[1] = a3 + srcS[1];

    x87_r4_1 - x87_r3_5;

    if (*(&((x87_r4_1 < x87_r3_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_1, x87_r3_5) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r3_5 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        srcS[2] = a3 + srcS[2];

    return v_8;
}
