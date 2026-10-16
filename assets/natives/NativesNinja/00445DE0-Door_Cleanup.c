#include "00445DE0-Door_Cleanup.h"
/* 0x00445de0 Door_Cleanup full linked: callers=0 callees=6 */
int32_t sub_445de0(float a1, int32_t* a2)

{
    float* eax = a2[1];
    double var_48 = eax[2] * *(a1 + 0x2f8) + eax[1] * *(a1 + 0x2f0) + *eax * *(a1 + 0x2e8);
    int32_t var_40 = eax[5] * *(a1 + 0x2f8) + eax[4] * *(a1 + 0x2f0) + eax[3] * *(a1 + 0x2e8);
    double var_38 = eax[8] * *(a1 + 0x2f8) + eax[7] * *(a1 + 0x2f0) + eax[6] * *(a1 + 0x2e8);
    memcpy(a1 + 0xf0, &var_48, 0x18);
    *(a1 + 0xf0) = **a2 + *(a1 + 0xf0);
    *(a1 + 0xf8) = *(*a2 + 8) + *(a1 + 0xf8);
    *(a1 + 0x100) = *(*a2 + 0x10) + *(a1 + 0x100);
    float* eax_3 = a2[1];
    float var_30 =
        eax_3[2] * *(a1 + 0x318) + eax_3[1] * *(a1 + 0x30c) + *(a1 + 0x300) * *eax_3;
    float var_2c =
        eax_3[2] * *(a1 + 0x31c) + eax_3[1] * *(a1 + 0x310) + *(a1 + 0x304) * *eax_3;
    float var_28 =
        eax_3[2] * *(a1 + 0x320) + eax_3[1] * *(a1 + 0x314) + *(a1 + 0x308) * *eax_3;
    float var_24 =
        eax_3[4] * *(a1 + 0x30c) + *(a1 + 0x318) * eax_3[5] + *(a1 + 0x300) * eax_3[3];
    float var_20 =
        eax_3[4] * *(a1 + 0x310) + *(a1 + 0x31c) * eax_3[5] + *(a1 + 0x304) * eax_3[3];
    float var_1c =
        eax_3[4] * *(a1 + 0x314) + *(a1 + 0x320) * eax_3[5] + *(a1 + 0x308) * eax_3[3];
    float var_18 =
        eax_3[7] * *(a1 + 0x30c) + *(a1 + 0x318) * eax_3[8] + *(a1 + 0x300) * eax_3[6];
    float var_14 =
        eax_3[7] * *(a1 + 0x310) + *(a1 + 0x31c) * eax_3[8] + *(a1 + 0x304) * eax_3[6];
    int32_t var_c = eax_3[9] + *(a1 + 0x324) + 1;
    float var_10 =
        eax_3[7] * *(a1 + 0x314) + *(a1 + 0x320) * eax_3[8] + *(a1 + 0x308) * eax_3[6];
    memcpy(a1 + 0x110, &var_30, 0x28);
    sub_446290(a1);
    var_30 = *(a1 + 0x110);
    long double x87_r7_54 = var_30;
    float var_2c_1 = *(a1 + 0x114);
    long double temp1 = 0f;
    x87_r7_54 - temp1;
    float var_28_1 = *(a1 + 0x118);

    if (!(*(&((x87_r7_54 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_54, temp1) ? 1 : 0) << 0xa
        | (x87_r7_54 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_44604f:
        long double x87_r7_57 = var_28_1;
        long double x87_r6_48 = var_2c_1;
        long double x87_r5_1 = var_30;
        long double x87_r7_59 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_48 * x87_r6_48 + x87_r7_57 * x87_r7_57);
        var_30 = var_30 * x87_r7_59;
        var_2c_1 = var_2c_1 * x87_r7_59;
        var_28_1 = var_28_1 * x87_r7_59;
    }
    else
    {
        long double x87_r7_55 = var_2c_1;
        long double temp2_1 = 0f;
        x87_r7_55 - temp2_1;

        if (!(*(&((x87_r7_55 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_55, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_55 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_44604f;

        long double x87_r7_56 = var_28_1;
        long double temp4_1 = 0f;
        x87_r7_56 - temp4_1;

        if (!(*(&((x87_r7_56 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_44604f;
    }

    float var_54 = *(a1 + 0x118) * *(a1 + 0x12c) - *(a1 + 0x114) * *(a1 + 0x130);
    float var_24_1 = var_54;
    float var_50 = -((*(a1 + 0x118) * *(a1 + 0x128) - *(a1 + 0x110) * *(a1 + 0x130)));
    float var_4c = *(a1 + 0x114) * *(a1 + 0x128) - *(a1 + 0x110) * *(a1 + 0x12c);
    var_48 = var_4c * var_2c_1 - var_50 * var_28_1;
    int32_t var_18_1 = var_48;
    *(&var_48 + 4) = -((var_4c * var_30 - var_54 * var_28_1));
    var_40 = var_50 * var_30 - var_54 * var_2c_1;
    long double x87_r7_81 = var_54;
    long double temp3 = 0f;
    x87_r7_81 - temp3;

    if (!(*(&((x87_r7_81 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_81, temp3) ? 1 : 0) << 0xa
        | (x87_r7_81 == temp3 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_446194:
        long double x87_r7_84 = var_54;
        long double x87_r6_68 = var_50;
        long double x87_r5_3 = var_4c;
        long double x87_r7_90 =
            1.0 / sqrtl(x87_r7_84 * x87_r7_84 + x87_r5_3 * x87_r5_3 + x87_r6_68 * x87_r6_68);
        float var_24_2 = var_54 * x87_r7_90;
        float var_20_2 = var_50 * x87_r7_90;
        float var_1c_2 = var_4c * x87_r7_90;
    }
    else
    {
        long double x87_r7_82 = var_50;
        long double temp5_1 = 0f;
        x87_r7_82 - temp5_1;

        if (!(*(&((x87_r7_82 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_82, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_82 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446194;

        long double x87_r7_83 = var_4c;
        long double temp7_1 = 0f;
        x87_r7_83 - temp7_1;

        if (!(*(&((x87_r7_83 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_83, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_83 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446194;
    }

    long double x87_r7_92 = var_48;
    long double temp6 = 0f;
    x87_r7_92 - temp6;

    if (!(*(&((x87_r7_92 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_92, temp6) ? 1 : 0) << 0xa
        | (x87_r7_92 == temp6 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_446213:
        long double x87_r7_95 = var_40;
        long double x87_r6_76 = *(&var_48 + 4);
        long double x87_r5_8 = var_48;
        long double x87_r7_97 =
            1.0 / sqrtl(x87_r5_8 * x87_r5_8 + x87_r6_76 * x87_r6_76 + x87_r7_95 * x87_r7_95);
        float var_18_2 = var_48 * x87_r7_97;
        float var_14_2 = *(&var_48 + 4) * x87_r7_97;
        float var_10_2 = var_40 * x87_r7_97;
    }
    else
    {
        long double x87_r7_93 = *(&var_48 + 4);
        long double temp8_1 = 0f;
        x87_r7_93 - temp8_1;

        if (!(*(&((x87_r7_93 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_93, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_93 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446213;

        long double x87_r7_94 = var_40;
        long double temp9_1 = 0f;
        x87_r7_94 - temp9_1;

        if (!(*(&((x87_r7_94 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_94, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_94 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446213;
    }

    memcpy(a1 + 0x110, &var_30, 0x28);
    *(a1 + 0x134) = 0;
    memcpy(a1 + 0x70, a1 + 0x110, 0x28);
    return sub_4463b0(a1);
}
