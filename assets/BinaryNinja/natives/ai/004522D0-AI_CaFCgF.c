#include "AI_CaFCgF.h"
int32_t AI_CaFCgF(long double a1 @ fp0, long double a2 @ fp1, void* a3, int32_t a4, float a5, char a6)

{
    double v_20;
    memcpy(&v_20, a4, 0x18);
    double v_10;

    if (a6)
    {
        v_10 = *(a3 + 0x48);
        *(&v_10 + 4) = *(a3 + 0x4c);
    }

    long double x87_r7_1 = v_20 - *(a3 + 0x38);
    double v_18;
    long double x87_r6_1 = v_18 - *(a3 + 0x40);
    long double x87_r5_1 = v_10 - *(a3 + 0x48);
    v_20 = *(a3 + 0x90) * x87_r5_1 + *(a3 + 0x78) * x87_r7_1 + *(a3 + 0x84) * x87_r6_1;
    double v_18_1 =
        *(a3 + 0x7c) * x87_r7_1 + *(a3 + 0x88) * x87_r6_1 + *(a3 + 0x94) * x87_r5_1;
    double v_10_1 =
        *(a3 + 0x8c) * x87_r6_1 + *(a3 + 0x98) * x87_r5_1 + *(a3 + 0x80) * x87_r7_1;
    int32_t v_58;
    memcpy(&v_58, &v_20, 0x18);
    WeaponType_GetConfig();
    long double fpu0 = -(a1);
    long double f0 = 0f;
    fpu0 - f0;
    float v_2c = fpu0;
    float v_24 = fpu0;
    bool c1 = /* bool c1 = unknown  {fst dword [esp+0x34], fp0} */;

    if (*(&((fpu0 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(fpu0, f0) ? 1 : 0) << 0xa | (fpu0 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        fpu0 = -(fpu0);

    long double f1 = 1.57079637f;
    fpu0 - f1;
    float v_30_1;

    if (*(&((fpu0 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f1) ? 1 : 0) << 0xa
        | (fpu0 == f1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        memcpy(&v_58, &v_20, 0x18);
        WeaponType_InitType();
        v_30_1 = a2;
    }
    else
    {
        v_20 = *(a3 + 0x7c);
        double v_18_2 = *(a3 + 0x88);
        double v_10_2 = *(a3 + 0x94);
        memcpy(&v_58, &v_20, 0x18);
        WeaponType_InitType();
        long double fpu1 = -(a2);
        v_30_1 = fpu1;
        long double f2_1 = 0f;
        fpu1 - f2_1;
        long double x87_r1_1 = v_30_1;

        if (*(&((fpu1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu1, f2_1) ? 1 : 0) << 0xa
                | (fpu1 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_1 = -(x87_r1_1);

        long double f3_1 = 1.57079637f;
        x87_r1_1 - f3_1;

        if (!(*(&((x87_r1_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r1_1 == f3_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
        {
            long double x87_r1_2 = v_30_1;
            long double f4_1 = 0f;
            x87_r1_2 - f4_1;

            a2 = !(*(&((x87_r1_2 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r1_2, f4_1) ? 1 : 0) << 0xa
                | (x87_r1_2 == f4_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1) ? 3.14159274f - v_30_1
                : -3.14159274f - v_30_1;

            v_30_1 = a2;
        }
    }

    long double x87_r1_6 = -(*(a3 + 0x3ec8));
    long double x87_r0_4 = v_30_1;
    x87_r0_4 - x87_r1_6;
    float v_28 = v_30_1;

    if (*(&((x87_r0_4 < x87_r1_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_4, x87_r1_6) ? 1 : 0) << 0xa
            | (x87_r0_4 == x87_r1_6 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        v_30_1 = x87_r1_6;
    else
    {
        long double x87_r1_8 = *(a3 + 0x3ec8);
        long double f5_1 = v_30_1;
        x87_r1_8 - f5_1;

        if (*(&((x87_r1_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_8, f5_1) ? 1 : 0) << 0xa
                | (x87_r1_8 == f5_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            v_30_1 = *(a3 + 0x3ec8);
    }

    long double x87_r1_10 = -(*(a3 + 0x3ecc));
    long double x87_r0_5 = v_2c;
    x87_r0_5 - x87_r1_10;

    if (*(&((x87_r0_5 < x87_r1_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_5, x87_r1_10) ? 1 : 0) << 0xa
            | (x87_r0_5 == x87_r1_10 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        v_2c = x87_r1_10;
    else
    {
        long double x87_r1_12 = *(a3 + 0x3ecc);
        long double f6_1 = v_2c;
        x87_r1_12 - f6_1;

        if (*(&((x87_r1_12 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_12, f6_1) ? 1 : 0) << 0xa
                | (x87_r1_12 == f6_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            v_2c = *(a3 + 0x3ecc);
    }

    double v_48 = v_2c;
    double v_50 = v_30_1;
    char* v_54 = "CA: %f, CG: %f";
    v_58 = 0xffffffff;
    void* v_5c = a3;
    double v_48_1 = v_24;
    double v_50_1 = v_28;
    char* v_54_1 = "A:  %f,  G: %f";
    v_58 = 0xffffffff;
    void* v_5c_1 = a3;
    *(a3 + 0x3c74) = v_2c * 0.318309873f;
    *(a3 + 0x3c78) = v_30_1 * 0.318309873f;
    long double x87_r1_21 = v_28;
    long double f7 = 0f;
    x87_r1_21 - f7;
    long double x87_r1_22 = v_28;

    if (*(&((x87_r1_21 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_21, f7) ? 1 : 0) << 0xa
            | (x87_r1_21 == f7 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        x87_r1_22 = -(x87_r1_22);

    long double f8 = a5;
    x87_r1_22 - f8;
    int16_t result = (x87_r1_22 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_22, f8) ? 1 : 0) << 0xa
        | (x87_r1_22 == f8 ? 1 : 0) << 0xe | 0x1000;

    if (*(&result + 1) & 0x41)
    {
        long double x87_r1_23 = v_24;
        long double f9_1 = 0f;
        x87_r1_23 - f9_1;
        long double x87_r1_24 = v_24;

        if (*(&((x87_r1_23 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_23, f9_1) ? 1 : 0) << 0xa
                | (x87_r1_23 == f9_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_24 = -(x87_r1_24);

        long double f10_1 = a5;
        x87_r1_24 - f10_1;
        result = (x87_r1_24 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_24, f10_1) ? 1 : 0) << 0xa
            | (x87_r1_24 == f10_1 ? 1 : 0) << 0xe | 0x1000;

        if (*(&result + 1) & 0x41)
        {
            result = 1;
            return result;
        }
    }

    result = 0;
    return result;
}
