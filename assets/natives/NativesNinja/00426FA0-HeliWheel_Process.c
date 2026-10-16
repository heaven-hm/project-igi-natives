#include "00426FA0-HeliWheel_Process.h"
/* 0x00426fa0 HeliWheel_Process full linked: callers=0 callees=6 */
int32_t HeliWheel_Process(float a1, int32_t* a2)

{
    float* eax = a2[1];
    long double x87_r7 = eax[2];
    double var_40;
    memcpy(&var_40, a1 + 0xf0, 0x18);
    double var_38;
    double var_30;
    double var_28 = x87_r7 * var_30 + eax[1] * var_38 + *eax * var_40;
    double var_20 = eax[5] * var_30 + eax[4] * var_38 + eax[3] * var_40;
    double* eax_1 = *a2;
    double var_18 = eax[8] * var_30 + eax[7] * var_38 + eax[6] * var_40;
    long double x87_r7_12 = var_28;
    memcpy(&var_40, &var_28, 0x18);
    var_40 = x87_r7_12 + *eax_1;
    double var_38_1 = var_38 + eax_1[1];
    double var_30_1 = var_30 + eax_1[2];
    long double x87_r7_18 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = *(a1 + 0xa0);
    else
        x87_r7_19 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = *(a1 + 0xa0);
        else
            x87_r7_21 = *(a1 + 0x9c);
    }
    else
        x87_r7_21 = *(a1 + 0x98);

    float var_54_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_21;
    double* var_58 = &var_40;
    sub_4c6940(Level_StartMission_4(), a1, var_58, var_54_1);
    float* eax_5 = a2[1];
    var_28 = *(a1 + 0x114) * eax_5[1] + eax_5[2] * *(a1 + 0x120) + *(a1 + 0x108) * *eax_5;
    *(&var_28 + 4) =
        *(a1 + 0x118) * eax_5[1] + eax_5[2] * *(a1 + 0x124) + *(a1 + 0x10c) * *eax_5;
    var_20 = *(a1 + 0x11c) * eax_5[1] + eax_5[2] * *(a1 + 0x128) + *(a1 + 0x110) * *eax_5;
    *(&var_20 + 4) =
        eax_5[4] * *(a1 + 0x114) + *(a1 + 0x120) * eax_5[5] + *(a1 + 0x108) * eax_5[3];
    var_18 = eax_5[4] * *(a1 + 0x118) + *(a1 + 0x124) * eax_5[5] + *(a1 + 0x10c) * eax_5[3];
    *(&var_18 + 4) =
        eax_5[4] * *(a1 + 0x11c) + *(a1 + 0x128) * eax_5[5] + *(a1 + 0x110) * eax_5[3];
    float var_10 =
        eax_5[7] * *(a1 + 0x114) + *(a1 + 0x120) * eax_5[8] + *(a1 + 0x108) * eax_5[6];
    float var_c =
        eax_5[7] * *(a1 + 0x118) + *(a1 + 0x124) * eax_5[8] + *(a1 + 0x10c) * eax_5[6];
    int32_t result = *(a1 + 0x12c);
    int32_t var_4 = eax_5[9] + result + 1;
    float var_8 =
        eax_5[7] * *(a1 + 0x11c) + *(a1 + 0x128) * eax_5[8] + *(a1 + 0x110) * eax_5[6];
    memcpy(a1 + 0x70, &var_28, 0x28);
    return result;
}
