#include "gi_platform.h"
#include "00444860-Cabinet_OnEvent.h"
int32_t Cabinet_OnEvent(double* a1, void* a2)

{
    double v_30;
    WeaponType_UpdateAnim(&v_30, a1, 0);
    long double x87_r7_1 = v_30 + a1[4];
    v_30 = x87_r7_1;
    double v_18 = (*(int32_t*)(uintptr_t)(a2 + 8)) - x87_r7_1;
    double v_28;
    double v_10 = (*(int32_t*)(uintptr_t)(a2 + 0x10)) - (v_28 + a1[5]);
    double v_20;
    double v_8 = (*(int32_t*)(uintptr_t)(a2 + 0x18)) - (v_20 + a1[6]);
    long double x87_r7_10 = a1[0x11] * v_8 + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * v_10 + a1[0xe] * v_18;
    long double x87_r6_13 = (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * v_8 + a1[0x10] * v_10 + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * v_18;
    long double f0 = 0.0;
    x87_r6_13 - f0;
    int16_t result = (x87_r6_13 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, f0) ? 1 : 0) << 0xa
        | (x87_r6_13 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 0x41))
    {
        long double f1_1 = 0.0;
        x87_r7_10 - f1_1;

        if (*(&((x87_r7_10 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_10 = -(x87_r7_10);

        long double f2_1 = 3072.0;
        x87_r7_10 - f2_1;
        result = (x87_r7_10 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == f2_1 ? 1 : 0) << 0xe;
        long double fpu0;
        long double fpu1;
        long double fpu2;
        long double fpu3;

        if (*(&result + 1) & 1)
            return Level_InitSprites_5(fpu0, fpu1, fpu2, fpu3, a2, a1, &v_30);
    }

    return result;
}
