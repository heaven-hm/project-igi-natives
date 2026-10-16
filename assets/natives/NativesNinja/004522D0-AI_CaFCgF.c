#include "004522D0-AI_CaFCgF.h"
/* 0x004522d0 AI_CaFCgF full linked: callers=2 callees=9 */
int32_t sub_4522d0(long double a1 @ st0, long double a2 @ st1, void* a3, int32_t a4, float a5, char a6)

{
    double var_20;
    memcpy(&var_20, a4, 0x18);
    double var_10;

    if (a6)
    {
        var_10 = *(a3 + 0x48);
        *(&var_10 + 4) = *(a3 + 0x4c);
    }

    long double x87_r7_1 = var_20 - *(a3 + 0x38);
    double var_18;
    long double x87_r6_1 = var_18 - *(a3 + 0x40);
    long double x87_r5_1 = var_10 - *(a3 + 0x48);
    var_20 = *(a3 + 0x90) * x87_r5_1 + *(a3 + 0x78) * x87_r7_1 + *(a3 + 0x84) * x87_r6_1;
    double var_18_1 =
        *(a3 + 0x7c) * x87_r7_1 + *(a3 + 0x88) * x87_r6_1 + *(a3 + 0x94) * x87_r5_1;
    double var_10_1 =
        *(a3 + 0x8c) * x87_r6_1 + *(a3 + 0x98) * x87_r5_1 + *(a3 + 0x80) * x87_r7_1;
    int32_t var_58;
    memcpy(&var_58, &var_20, 0x18);
    WeaponType_GetConfig();
    long double x87_r0 = -(a1);
    long double temp0 = 0f;
    x87_r0 - temp0;
    float var_2c = x87_r0;
    float var_24 = x87_r0;
    bool c1 = /* bool c1 = unknown  {fst dword [esp+0x34], st0} */;

    if (*(&((x87_r0 < temp0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(x87_r0, temp0) ? 1 : 0) << 0xa | (x87_r0 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
        x87_r0 = -(x87_r0);

    long double temp1 = 1.57079637f;
    x87_r0 - temp1;
    float var_30_1;

    if (*(&((x87_r0 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0, temp1) ? 1 : 0) << 0xa
        | (x87_r0 == temp1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        memcpy(&var_58, &var_20, 0x18);
        WeaponType_InitType();
        var_30_1 = a2;
    }
    else
    {
        var_20 = *(a3 + 0x7c);
        double var_18_2 = *(a3 + 0x88);
        double var_10_2 = *(a3 + 0x94);
        memcpy(&var_58, &var_20, 0x18);
        WeaponType_InitType();
        long double x87_r1 = -(a2);
        var_30_1 = x87_r1;
        long double temp2_1 = 0f;
        x87_r1 - temp2_1;
        long double x87_r1_1 = var_30_1;

        if (*(&((x87_r1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r1 == temp2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_1 = -(x87_r1_1);

        long double temp3_1 = 1.57079637f;
        x87_r1_1 - temp3_1;

        if (!(*(&((x87_r1_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r1_1 == temp3_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
        {
            long double x87_r1_2 = var_30_1;
            long double temp4_1 = 0f;
            x87_r1_2 - temp4_1;

            a2 = !(*(&((x87_r1_2 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r1_2, temp4_1) ? 1 : 0) << 0xa
                | (x87_r1_2 == temp4_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1) ? 3.14159274f - var_30_1
                : -3.14159274f - var_30_1;

            var_30_1 = a2;
        }
    }

    long double x87_r1_6 = -(*(a3 + 0x3ec8));
    long double x87_r0_4 = var_30_1;
    x87_r0_4 - x87_r1_6;
    float var_28 = var_30_1;

    if (*(&((x87_r0_4 < x87_r1_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_4, x87_r1_6) ? 1 : 0) << 0xa
            | (x87_r0_4 == x87_r1_6 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        var_30_1 = x87_r1_6;
    else
    {
        long double x87_r1_8 = *(a3 + 0x3ec8);
        long double temp5_1 = var_30_1;
        x87_r1_8 - temp5_1;

        if (*(&((x87_r1_8 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_8, temp5_1) ? 1 : 0) << 0xa
                | (x87_r1_8 == temp5_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            var_30_1 = *(a3 + 0x3ec8);
    }

    long double x87_r1_10 = -(*(a3 + 0x3ecc));
    long double x87_r0_5 = var_2c;
    x87_r0_5 - x87_r1_10;

    if (*(&((x87_r0_5 < x87_r1_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_5, x87_r1_10) ? 1 : 0) << 0xa
            | (x87_r0_5 == x87_r1_10 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        var_2c = x87_r1_10;
    else
    {
        long double x87_r1_12 = *(a3 + 0x3ecc);
        long double temp6_1 = var_2c;
        x87_r1_12 - temp6_1;

        if (*(&((x87_r1_12 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_12, temp6_1) ? 1 : 0) << 0xa
                | (x87_r1_12 == temp6_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            var_2c = *(a3 + 0x3ecc);
    }

    double var_48 = var_2c;
    double var_50 = var_30_1;
    char* var_54 = "CA: %f, CG: %f";
    var_58 = 0xffffffff;
    void* var_5c = a3;
    double var_48_1 = var_24;
    double var_50_1 = var_28;
    char* var_54_1 = "A:  %f,  G: %f";
    var_58 = 0xffffffff;
    void* var_5c_1 = a3;
    *(a3 + 0x3c74) = var_2c * 0.318309873f;
    *(a3 + 0x3c78) = var_30_1 * 0.318309873f;
    long double x87_r1_21 = var_28;
    long double temp7 = 0f;
    x87_r1_21 - temp7;
    long double x87_r1_22 = var_28;

    if (*(&((x87_r1_21 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_21, temp7) ? 1 : 0) << 0xa
            | (x87_r1_21 == temp7 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        x87_r1_22 = -(x87_r1_22);

    long double temp8 = a5;
    x87_r1_22 - temp8;
    int16_t result = (x87_r1_22 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_22, temp8) ? 1 : 0) << 0xa
        | (x87_r1_22 == temp8 ? 1 : 0) << 0xe | 0x1000;

    if (*(&result + 1) & 0x41)
    {
        long double x87_r1_23 = var_24;
        long double temp9_1 = 0f;
        x87_r1_23 - temp9_1;
        long double x87_r1_24 = var_24;

        if (*(&((x87_r1_23 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_23, temp9_1) ? 1 : 0) << 0xa
                | (x87_r1_23 == temp9_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_24 = -(x87_r1_24);

        long double temp10_1 = a5;
        x87_r1_24 - temp10_1;
        result = (x87_r1_24 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_24, temp10_1) ? 1 : 0) << 0xa
            | (x87_r1_24 == temp10_1 ? 1 : 0) << 0xe | 0x1000;

        if (*(&result + 1) & 0x41)
        {
            result = 1;
            return result;
        }
    }

    result = 0;
    return result;
}
