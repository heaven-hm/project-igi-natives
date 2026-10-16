#include "004362C0-Rudder_Setup.h"
/* 0x004362c0 Rudder_Setup full linked: callers=0 callees=6 */
float* Rudder_Setup(void* a1, int32_t* a2)

{
    void* esi = a2[2];
    void* edi = *(*(esi + 0x1b4) + 0x2d4);
    float* eax_1 = a2[1];
    double var_88 =
        eax_1[5] * *(a1 + 0x100) + eax_1[4] * *(a1 + 0xf8) + eax_1[3] * *(a1 + 0xf0);
    double* eax_2 = *a2;
    double var_80 =
        eax_1[8] * *(a1 + 0x100) + eax_1[7] * *(a1 + 0xf8) + eax_1[6] * *(a1 + 0xf0);
    double var_18 =
        eax_1[2] * *(a1 + 0x100) + eax_1[1] * *(a1 + 0xf8) + *eax_1 * *(a1 + 0xf0) + *eax_2;
    double var_10 = var_88 + eax_2[1];
    double var_8 = var_80 + eax_2[2];
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

    float var_94 = x87_r7_12;
    float var_a8_1 = sub_4d0950(*(a1 + 0x6c)) * var_94;
    sub_4c6940(Level_StartMission_4(), a1, &var_18, var_a8_1);
    int32_t* eax_5 = *(a1 + 0x138);
    int32_t eax_6 = *eax_5;
    long double x87_r7_17 = eax_5[1] * 0.0174532924f;
    long double x87_r7_19;

    if (eax_6 != 1)
    {
        if (eax_6 == 2)
        {
            x87_r7_19 = x87_r7_17 * *(esi + 0x728) + x87_r7_17 * *(esi + 0x724);
            goto label_436428;
        }

        if (!eax_6)
            var_94 = -((x87_r7_17 * *(esi + 0x724)));
        else if (eax_6 == 3)
            var_94 = -((x87_r7_17 * *(esi + 0x72c)));
    }
    else
    {
        x87_r7_19 = x87_r7_17 * *(esi + 0x728) - x87_r7_17 * *(esi + 0x724);
    label_436428:
        var_94 = x87_r7_19;
        long double x87_r6_19 = *(edi + 4);
        x87_r7_19 - x87_r6_19;

        if (!(*(&((x87_r7_19 < x87_r6_19 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, x87_r6_19) ? 1 : 0) << 0xa
                | (x87_r7_19 == x87_r6_19 ? 1 : 0) << 0xe) + 1) & 1))
            var_94 = *(edi + 4);
    }
    float var_68;
    sub_4b3b60(&var_68, var_94);
    float var_5c;
    float var_50;
    float var_90 = var_50 * *(a1 + 0x110) + var_68 * *(a1 + 0x108) + var_5c * *(a1 + 0x10c);
    float var_64;
    float var_58;
    float var_4c;
    float var_8c = var_4c * *(a1 + 0x110) + var_64 * *(a1 + 0x108) + var_58 * *(a1 + 0x10c);
    float var_60;
    float var_54;
    float var_48;
    var_88 = var_48 * *(a1 + 0x110) + var_60 * *(a1 + 0x108) + var_54 * *(a1 + 0x10c);
    *(&var_88 + 4) = var_50 * *(a1 + 0x11c) + var_68 * *(a1 + 0x114) + var_5c * *(a1 + 0x118);
    var_80 = var_4c * *(a1 + 0x11c) + var_64 * *(a1 + 0x114) + var_58 * *(a1 + 0x118);
    *(&var_80 + 4) = var_48 * *(a1 + 0x11c) + var_60 * *(a1 + 0x114) + var_54 * *(a1 + 0x118);
    float var_78 = var_50 * *(a1 + 0x128) + var_68 * *(a1 + 0x120) + var_5c * *(a1 + 0x124);
    int32_t var_44;
    int32_t edx_1 = *(a1 + 0x12c) + var_44 + 1;
    float* result = a2[1];
    int32_t var_6c = edx_1;
    float var_74 = var_4c * *(a1 + 0x128) + var_64 * *(a1 + 0x120) + var_58 * *(a1 + 0x124);
    float var_70 = var_48 * *(a1 + 0x128) + var_60 * *(a1 + 0x120) + var_54 * *(a1 + 0x124);
    memcpy(&var_68, &var_90, 0x28);
    float var_40 = var_78 * result[2] + *(&var_88 + 4) * result[1] + var_90 * *result;
    float var_3c = var_74 * result[2] + var_80 * result[1] + var_8c * *result;
    float var_38 = var_70 * result[2] + *(&var_80 + 4) * result[1] + var_88 * *result;
    float var_34 = var_78 * result[5] + var_90 * result[3] + *(&var_88 + 4) * result[4];
    float var_30 = var_74 * result[5] + var_8c * result[3] + var_80 * result[4];
    float var_2c = var_70 * result[5] + var_88 * result[3] + *(&var_80 + 4) * result[4];
    int32_t var_1c = result[9] + edx_1 + 1;
    float var_28 = var_78 * result[8] + var_90 * result[6] + *(&var_88 + 4) * result[7];
    float var_24 = var_74 * result[8] + var_8c * result[6] + var_80 * result[7];
    float var_20 = var_70 * result[8] + var_88 * result[6] + *(&var_80 + 4) * result[7];
    memcpy(a1 + 0x70, &var_40, 0x28);
    return result;
}
