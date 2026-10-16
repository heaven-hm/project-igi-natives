#include "00426880-CarDoor_Setup.h"
/* 0x00426880 CarDoor_Setup full linked: callers=0 callees=10 */
int32_t CarDoor_Setup(void* a1, int32_t* a2)

{
    float* eax = a2[1];
    long double x87_r7 = eax[2];
    double var_40;
    memcpy(&var_40, a1 + 0xf0, 0x18);
    double var_38;
    double var_30;
    double var_94 = x87_r7 * var_30 + eax[1] * var_38 + *eax * var_40;
    double var_8c = eax[5] * var_30 + eax[4] * var_38 + eax[3] * var_40;
    double* eax_1 = *a2;
    double var_84 = eax[8] * var_30 + eax[7] * var_38 + eax[6] * var_40;
    long double x87_r7_12 = var_94;
    memcpy(&var_40, &var_94, 0x18);
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

    float var_a8_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_21;
    double* var_ac = &var_40;
    sub_4c6940(Level_StartMission_4(), a1, var_ac, var_a8_1);
    int32_t eax_5 = **(a1 + 0x138);
    float var_68;

    if (!eax_5)
    {
        float eax_6 = *(a1 + 0x13c);
        var_ac = &var_68;
        sub_4b3b60(var_ac, eax_6);
    }
    else if (eax_5 == 1)
    {
        float edx_1 = *(a1 + 0x13c);
        var_ac = &var_68;
        sub_4b3ba0(var_ac, edx_1);
    }
    else if (eax_5 == 2)
    {
        float ecx_1 = *(a1 + 0x13c);
        var_ac = &var_68;
        sub_4b3be0(var_ac, ecx_1);
    }

    float var_5c;
    float var_50;
    var_94 = var_50 * *(a1 + 0x110) + var_68 * *(a1 + 0x108) + var_5c * *(a1 + 0x10c);
    float var_64;
    float var_58;
    float var_4c;
    *(&var_94 + 4) = var_4c * *(a1 + 0x110) + var_64 * *(a1 + 0x108) + var_58 * *(a1 + 0x10c);
    float var_60;
    float var_54;
    float var_48;
    var_8c = var_48 * *(a1 + 0x110) + var_60 * *(a1 + 0x108) + var_54 * *(a1 + 0x10c);
    *(&var_8c + 4) = var_50 * *(a1 + 0x11c) + var_68 * *(a1 + 0x114) + var_5c * *(a1 + 0x118);
    var_84 = var_4c * *(a1 + 0x11c) + var_64 * *(a1 + 0x114) + var_58 * *(a1 + 0x118);
    *(&var_84 + 4) = var_48 * *(a1 + 0x11c) + var_60 * *(a1 + 0x114) + var_54 * *(a1 + 0x118);
    float var_7c = var_50 * *(a1 + 0x128) + var_68 * *(a1 + 0x120) + var_5c * *(a1 + 0x124);
    float var_78 = var_4c * *(a1 + 0x128) + var_64 * *(a1 + 0x120) + var_58 * *(a1 + 0x124);
    int32_t var_44;
    int32_t edx_2 = *(a1 + 0x12c) + var_44 + 1;
    float* eax_8 = a2[1];
    int32_t var_70 = edx_2;
    float var_74 = var_48 * *(a1 + 0x128) + var_60 * *(a1 + 0x120) + var_54 * *(a1 + 0x124);
    long double x87_r7_61 = var_94;
    memcpy(&var_68, &var_94, 0x28);
    float var_28 = x87_r7_61 * *eax_8 + *(&var_8c + 4) * eax_8[1] + var_7c * eax_8[2];
    float var_24 = *(&var_94 + 4) * *eax_8 + var_84 * eax_8[1] + var_78 * eax_8[2];
    float var_20 = var_8c * *eax_8 + *(&var_84 + 4) * eax_8[1] + var_74 * eax_8[2];
    float var_1c = var_7c * eax_8[5] + var_94 * eax_8[3] + *(&var_8c + 4) * eax_8[4];
    float var_18 = var_78 * eax_8[5] + *(&var_94 + 4) * eax_8[3] + var_84 * eax_8[4];
    float var_14 = var_74 * eax_8[5] + var_8c * eax_8[3] + *(&var_84 + 4) * eax_8[4];
    float var_10 = var_7c * eax_8[8] + var_94 * eax_8[6] + *(&var_8c + 4) * eax_8[7];
    float var_c = var_78 * eax_8[8] + *(&var_94 + 4) * eax_8[6] + var_84 * eax_8[7];
    int32_t result = eax_8[9];
    int32_t var_4 = result + edx_2 + 1;
    float var_8 = var_74 * eax_8[8] + var_8c * eax_8[6] + *(&var_84 + 4) * eax_8[7];
    memcpy(a1 + 0x70, &var_28, 0x28);
    return result;
}
