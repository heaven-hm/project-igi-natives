// Original IGI.EXE function: Menu_RequestScreen_20 (VA 0x00428B60; static CFG gate FAIL, CFG score 0.833).
#include "Menu_RequestScreen_20.h"
int32_t Menu_RequestScreen_20(long double a1 @ fp0, long double a2 @ fp1, void* a3, double* a4)

{
    long double x87_r7_1 = *a4 - *(a3 + 0x20);
    long double x87_r6_1 = a4[1] - *(a3 + 0x28);
    long double x87_r5_1 = a4[2] - *(a3 + 0x30);
    double v_20 =
        *(a3 + 0x88) * x87_r5_1 + *(a3 + 0x7c) * x87_r6_1 + *(a3 + 0x70) * x87_r7_1;
    double v_18 =
        *(a3 + 0x8c) * x87_r5_1 + *(a3 + 0x80) * x87_r6_1 + *(a3 + 0x74) * x87_r7_1;
    double v_10 =
        *(a3 + 0x90) * x87_r5_1 + *(a3 + 0x84) * x87_r6_1 + *(a3 + 0x78) * x87_r7_1;
    void v_50;
    memcpy(&v_50, &v_20, 0x18);
    WeaponType_InitType();
    double v_28 = a1;
    memcpy(&v_50, &v_20, 0x18);
    WeaponType_GetConfig();
    long double fpu0 = -1.0;
    long double f0 = v_28;
    fpu0 - f0;

    if (*(&((fpu0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f0) ? 1 : 0) << 0xa
        | (fpu0 == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        long double x87_r0_1 = 1.0;
        long double f1_1 = v_28;
        x87_r0_1 - f1_1;

        if (*(&((x87_r0_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r0_1 == f1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        {
            v_28 = 0;
            *(&v_28 + 4) = 0x3ff00000;
        }
    }
    else
    {
        v_28 = 0;
        *(&v_28 + 4) = 0xbff00000;
    }

    long double x87_r0_2 = -1.0;
    x87_r0_2 - a2;
    int16_t result = (x87_r0_2 < a2 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_2, a2) ? 1 : 0) << 0xa
        | (x87_r0_2 == a2 ? 1 : 0) << 0xe | 0x800;

    if (*(&result + 1) & 0x41)
    {
        long double x87_r0_3 = 1.0;
        x87_r0_3 - a2;
        result = (x87_r0_3 < a2 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_3, a2) ? 1 : 0) << 0xa
            | (x87_r0_3 == a2 ? 1 : 0) << 0xe | 0x800;

        if (*(&result + 1) & 1)
            a2 = 1.0;
    }
    else
        a2 = -1.0;

    *(a3 + 0x734) = v_28;
    *(a3 + 0x73c) = a2;
    return result;
}
