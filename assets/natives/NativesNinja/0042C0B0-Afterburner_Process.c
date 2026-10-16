#include "0042C0B0-Afterburner_Process.h"
/* 0x0042c0b0 Afterburner_Process full linked: callers=0 callees=7 */
int32_t Afterburner_Process(void* a1, int32_t* a2)

{
    float* eax = a2[1];
    double var_8c = eax[5] * *(a1 + 0x100) + eax[4] * *(a1 + 0xf8) + eax[3] * *(a1 + 0xf0);
    double* eax_1 = *a2;
    double var_84 = eax[8] * *(a1 + 0x100) + eax[7] * *(a1 + 0xf8) + eax[6] * *(a1 + 0xf0);
    double var_18 =
        eax[2] * *(a1 + 0x100) + eax[1] * *(a1 + 0xf8) + *eax * *(a1 + 0xf0) + *eax_1;
    double var_10 = var_8c + eax_1[1];
    double var_8 = var_84 + eax_1[2];
    long double x87_r7_9 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_9;
    long double x87_r7_10;

    if (!(*(&((x87_r6_12 < x87_r7_9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = *(a1 + 0xa0);
    else
        x87_r7_10 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_10;
    long double x87_r7_12;

    if (*(&((x87_r6_13 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_13 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_13;

        if (!(*(&((x87_r6_14 < x87_r7_13 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_12 = *(a1 + 0xa0);
        else
            x87_r7_12 = *(a1 + 0x9c);
    }
    else
        x87_r7_12 = *(a1 + 0x98);

    float var_a8_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_12;
    sub_4c6940(Level_StartMission_4(), a1, &var_18, var_a8_1);
    float var_68;
    sub_4b3ba0(&var_68, sub_4b4770(&g_57bd00));
    float var_5c;
    float var_50;
    float var_94 = var_50 * *(a1 + 0x110) + var_68 * *(a1 + 0x108) + var_5c * *(a1 + 0x10c);
    float var_64;
    float var_58;
    float var_4c;
    float var_90 = var_4c * *(a1 + 0x110) + var_64 * *(a1 + 0x108) + var_58 * *(a1 + 0x10c);
    float var_60;
    float var_54;
    float var_48;
    var_8c = var_48 * *(a1 + 0x110) + var_60 * *(a1 + 0x108) + var_54 * *(a1 + 0x10c);
    *(&var_8c + 4) = var_50 * *(a1 + 0x11c) + var_68 * *(a1 + 0x114) + var_5c * *(a1 + 0x118);
    var_84 = var_4c * *(a1 + 0x11c) + var_64 * *(a1 + 0x114) + var_58 * *(a1 + 0x118);
    *(&var_84 + 4) = var_48 * *(a1 + 0x11c) + var_60 * *(a1 + 0x114) + var_54 * *(a1 + 0x118);
    int32_t var_44;
    int32_t edx = *(a1 + 0x12c) + var_44 + 1;
    float* eax_6 = a2[1];
    int32_t var_70 = edx;
    float var_7c = var_50 * *(a1 + 0x128) + var_68 * *(a1 + 0x120) + var_5c * *(a1 + 0x124);
    float var_78 = var_4c * *(a1 + 0x128) + var_64 * *(a1 + 0x120) + var_58 * *(a1 + 0x124);
    float var_74 = var_48 * *(a1 + 0x128) + var_60 * *(a1 + 0x120) + var_54 * *(a1 + 0x124);
    memcpy(&var_68, &var_94, 0x28);
    float var_40 = var_7c * eax_6[2] + *(&var_8c + 4) * eax_6[1] + var_94 * *eax_6;
    float var_3c = var_78 * eax_6[2] + var_84 * eax_6[1] + var_90 * *eax_6;
    float var_38 = var_74 * eax_6[2] + *(&var_84 + 4) * eax_6[1] + var_8c * *eax_6;
    float var_34 = var_7c * eax_6[5] + var_94 * eax_6[3] + *(&var_8c + 4) * eax_6[4];
    float var_30 = var_78 * eax_6[5] + var_90 * eax_6[3] + var_84 * eax_6[4];
    float var_2c = var_74 * eax_6[5] + var_8c * eax_6[3] + *(&var_84 + 4) * eax_6[4];
    float var_28 = var_7c * eax_6[8] + var_94 * eax_6[6] + *(&var_8c + 4) * eax_6[7];
    float var_24 = var_78 * eax_6[8] + var_90 * eax_6[6] + var_84 * eax_6[7];
    int32_t result = eax_6[9];
    int32_t var_1c = result + edx + 1;
    float var_20 = var_74 * eax_6[8] + var_8c * eax_6[6] + *(&var_84 + 4) * eax_6[7];
    memcpy(a1 + 0x70, &var_40, 0x28);
    return result;
}
