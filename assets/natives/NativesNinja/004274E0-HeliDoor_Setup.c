#include "004274E0-HeliDoor_Setup.h"
/* 0x004274e0 HeliDoor_Setup full linked: callers=0 callees=6 */
int32_t HeliDoor_Setup(float a1, int32_t* a2)

{
    int32_t eax_1 = **(a1 + 0x138);
    double var_40;
    memcpy(&var_40, a1 + 0xf0, 0x18);
    double var_38;
    double var_30;

    if (!eax_1)
        var_40 = *(a1 + 0x13c) + var_40;
    else if (eax_1 == 1)
        var_38 = *(a1 + 0x13c) + var_38;
    else if (eax_1 == 2)
        var_30 = *(a1 + 0x13c) + var_30;

    float* eax_2 = a2[1];
    double var_28 = eax_2[2] * var_30 + eax_2[1] * var_38 + *eax_2 * var_40;
    double var_20 = eax_2[5] * var_30 + eax_2[4] * var_38 + eax_2[3] * var_40;
    double* eax_3 = *a2;
    double var_18 = eax_2[8] * var_30 + eax_2[7] * var_38 + eax_2[6] * var_40;
    long double x87_r7_19 = var_28;
    memcpy(&var_40, &var_28, 0x18);
    var_40 = x87_r7_19 + *eax_3;
    double var_38_1 = var_38 + eax_3[1];
    double var_30_1 = var_30 + eax_3[2];
    long double x87_r7_25 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_25;
    long double x87_r7_26;

    if (!(*(&((x87_r6_12 < x87_r7_25 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_25) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_25 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_26 = *(a1 + 0xa0);
    else
        x87_r7_26 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_26;
    long double x87_r7_28;

    if (*(&((x87_r6_13 < x87_r7_26 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_26) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_29 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_29;

        if (!(*(&((x87_r6_14 < x87_r7_29 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_29) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_29 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_28 = *(a1 + 0xa0);
        else
            x87_r7_28 = *(a1 + 0x9c);
    }
    else
        x87_r7_28 = *(a1 + 0x98);

    float var_54_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_28;
    double* var_58 = &var_40;
    sub_4c6940(Level_StartMission_4(), a1, var_58, var_54_1);
    float* eax_6 = a2[1];
    var_28 = *(a1 + 0x114) * eax_6[1] + eax_6[2] * *(a1 + 0x120) + *(a1 + 0x108) * *eax_6;
    *(&var_28 + 4) =
        *(a1 + 0x118) * eax_6[1] + eax_6[2] * *(a1 + 0x124) + *(a1 + 0x10c) * *eax_6;
    var_20 = *(a1 + 0x11c) * eax_6[1] + eax_6[2] * *(a1 + 0x128) + *(a1 + 0x110) * *eax_6;
    *(&var_20 + 4) =
        eax_6[4] * *(a1 + 0x114) + *(a1 + 0x120) * eax_6[5] + *(a1 + 0x108) * eax_6[3];
    var_18 = eax_6[4] * *(a1 + 0x118) + *(a1 + 0x124) * eax_6[5] + *(a1 + 0x10c) * eax_6[3];
    *(&var_18 + 4) =
        eax_6[4] * *(a1 + 0x11c) + *(a1 + 0x128) * eax_6[5] + *(a1 + 0x110) * eax_6[3];
    float var_10 =
        eax_6[7] * *(a1 + 0x114) + *(a1 + 0x120) * eax_6[8] + *(a1 + 0x108) * eax_6[6];
    float var_c =
        eax_6[7] * *(a1 + 0x118) + *(a1 + 0x124) * eax_6[8] + *(a1 + 0x10c) * eax_6[6];
    int32_t result = eax_6[9];
    int32_t var_4 = result + *(a1 + 0x12c) + 1;
    float var_8 =
        eax_6[7] * *(a1 + 0x11c) + *(a1 + 0x128) * eax_6[8] + *(a1 + 0x110) * eax_6[6];
    memcpy(a1 + 0x70, &var_28, 0x28);
    return result;
}
