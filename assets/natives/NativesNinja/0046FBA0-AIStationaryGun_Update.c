#include "0046FBA0-AIStationaryGun_Update.h"
/* 0x0046fba0 AIStationaryGun_Update full linked: callers=0 callees=8 */
int32_t sub_46fba0(double* a1, int32_t* a2)

{
    float* eax = a2[1];
    double var_94 = eax[2] * a1[0x20] + eax[1] * a1[0x1f] + *eax * a1[0x1e];
    double var_8c = eax[5] * a1[0x20] + eax[4] * a1[0x1f] + eax[3] * a1[0x1e];
    double* eax_1 = *a2;
    double var_84 = eax[8] * a1[0x20] + eax[7] * a1[0x1f] + eax[6] * a1[0x1e];
    long double x87_r7_12 = var_94;
    double var_40;
    memcpy(&var_40, &var_94, 0x18);
    var_40 = x87_r7_12 + *eax_1;
    double var_38;
    double var_38_1 = var_38 + eax_1[1];
    double var_30;
    double var_30_1 = var_30 + eax_1[2];
    long double x87_r7_18 = *(a1 + 0x9c);
    long double x87_r6_12 = a1[0x14];
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = a1[0x14];
    else
        x87_r7_19 = *(a1 + 0x9c);

    long double x87_r6_13 = a1[0x13];
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = *(a1 + 0x9c);
        long double x87_r6_14 = a1[0x14];
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = a1[0x14];
        else
            x87_r7_21 = *(a1 + 0x9c);
    }
    else
        x87_r7_21 = a1[0x13];

    long double x87_r7_24 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_21;
    void* edx = a1[0xd];
    float var_a8_1 = x87_r7_24;
    double* i_1 = &var_40;
    sub_4c6940(edx, a1, i_1, var_a8_1);
    float eax_4 = a1[0x38];
    float var_68;
    int32_t* var_bc = &var_68;
    sub_4b3be0(var_bc, eax_4);
    float var_5c;
    float var_50;
    var_94 = var_50 * a1[0x22] + var_68 * a1[0x21] + var_5c * *(a1 + 0x10c);
    float var_64;
    float var_58;
    float var_4c;
    *(&var_94 + 4) = var_4c * a1[0x22] + var_64 * a1[0x21] + var_58 * *(a1 + 0x10c);
    float var_60;
    float var_54;
    float var_48;
    var_8c = var_48 * a1[0x22] + var_60 * a1[0x21] + var_54 * *(a1 + 0x10c);
    *(&var_8c + 4) = var_50 * *(a1 + 0x11c) + var_68 * *(a1 + 0x114) + var_5c * a1[0x23];
    var_84 = var_4c * *(a1 + 0x11c) + var_64 * *(a1 + 0x114) + var_58 * a1[0x23];
    *(&var_84 + 4) = var_48 * *(a1 + 0x11c) + var_60 * *(a1 + 0x114) + var_54 * a1[0x23];
    int32_t var_44;
    int32_t edx_2 = *(a1 + 0x12c) + var_44 + 1;
    float* eax_6 = a2[1];
    int32_t var_70 = edx_2;
    float var_7c = var_50 * a1[0x25] + var_68 * a1[0x24] + var_5c * *(a1 + 0x124);
    float var_78 = var_4c * a1[0x25] + var_64 * a1[0x24] + var_58 * *(a1 + 0x124);
    float var_74 = var_48 * a1[0x25] + var_60 * a1[0x24] + var_54 * *(a1 + 0x124);
    memcpy(&var_68, &var_94, 0x28);
    float var_28 = *(&var_8c + 4) * eax_6[1] + var_94 * *eax_6 + var_7c * eax_6[2];
    float var_24 = var_84 * eax_6[1] + *(&var_94 + 4) * *eax_6 + var_78 * eax_6[2];
    float var_20 = *(&var_84 + 4) * eax_6[1] + var_8c * *eax_6 + var_74 * eax_6[2];
    float var_1c = *(&var_8c + 4) * eax_6[4] + var_7c * eax_6[5] + var_94 * eax_6[3];
    int32_t var_4 = eax_6[9] + edx_2 + 1;
    float var_18 = var_84 * eax_6[4] + var_78 * eax_6[5] + *(&var_94 + 4) * eax_6[3];
    float var_14 = *(&var_84 + 4) * eax_6[4] + var_74 * eax_6[5] + var_8c * eax_6[3];
    float var_10 = *(&var_8c + 4) * eax_6[7] + var_7c * eax_6[8] + var_94 * eax_6[6];
    float var_c = var_84 * eax_6[7] + var_78 * eax_6[8] + *(&var_94 + 4) * eax_6[6];
    float var_8 = *(&var_84 + 4) * eax_6[7] + var_74 * eax_6[8] + var_8c * eax_6[6];
    memcpy(&a1[0xe], &var_28, 0x28);
    sub_470050(a1);
    double* i = a1[1];
    int32_t result = *i;

    if (result && i)
    {
        *(&var_94 + 4) = &a1[0xe];
        var_94 = &a1[4];

        if (result && i)
        {
            int32_t ecx_1 = g_afa7e0;

            do
            {
                int32_t* edx_4 = *i;
                void* eax_10;

                if (!edx_4)
                    eax_10 = nullptr;
                else
                {
                    int32_t eax_7 = *edx_4;
                    int32_t eax_8 = -(eax_7);
                    eax_10 = (eax_8 - eax_8) & edx_4;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_10;
                g_afa7e0 = ecx_1 + 1;
                uint32_t eax_12 = MagicObj_GetEventId();
                int32_t ecx_3 = 0;
                ecx_3 = *(i + 0x1c);
                result = *(((eax_12 * 0x180 + ecx_3) << 2) + &g_a96ae0);

                if (result)
                {
                    double* var_a8_2 = &var_94;
                    i_1 = i;
                    result = result(i_1, var_a8_2);
                }

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
