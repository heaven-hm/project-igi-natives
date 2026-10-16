#include "0042D680-Rotor_Update.h"
/* 0x0042d680 Rotor_Update full linked: callers=0 callees=6 */
void* Rotor_Update(void* a1, float a2)

{
    int32_t* ebp = a2;
    float* eax = ebp[1];
    double var_40 = eax[2] * *(a1 + 0x100) + eax[1] * *(a1 + 0xf8) + *eax * *(a1 + 0xf0);
    double var_38 = eax[5] * *(a1 + 0x100) + eax[4] * *(a1 + 0xf8) + eax[3] * *(a1 + 0xf0);
    double* eax_1 = *ebp;
    double var_30 = eax[8] * *(a1 + 0x100) + eax[7] * *(a1 + 0xf8) + eax[6] * *(a1 + 0xf0);
    long double x87_r7_12 = var_40;
    double var_18;
    memcpy(&var_18, &var_40, 0x18);
    var_18 = x87_r7_12 + *eax_1;
    double var_10;
    double var_10_1 = var_10 + eax_1[1];
    double var_8;
    double var_8_1 = var_8 + eax_1[2];
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
    double* i_1 = &var_18;
    sub_4c6940(Level_StartMission_4(), a1, i_1, var_54_1);
    float* eax_5 = ebp[1];
    var_40 = *(a1 + 0x120) * eax_5[2] + *(a1 + 0x108) * *eax_5 + eax_5[1] * *(a1 + 0x114);
    *(&var_40 + 4) =
        *(a1 + 0x124) * eax_5[2] + *(a1 + 0x10c) * *eax_5 + eax_5[1] * *(a1 + 0x118);
    var_38 = *(a1 + 0x128) * eax_5[2] + *(a1 + 0x110) * *eax_5 + eax_5[1] * *(a1 + 0x11c);
    *(&var_38 + 4) =
        eax_5[4] * *(a1 + 0x114) + *(a1 + 0x120) * eax_5[5] + *(a1 + 0x108) * eax_5[3];
    var_30 = eax_5[4] * *(a1 + 0x118) + *(a1 + 0x124) * eax_5[5] + *(a1 + 0x10c) * eax_5[3];
    *(&var_30 + 4) =
        eax_5[4] * *(a1 + 0x11c) + *(a1 + 0x128) * eax_5[5] + *(a1 + 0x110) * eax_5[3];
    float var_28 =
        eax_5[7] * *(a1 + 0x114) + *(a1 + 0x120) * eax_5[8] + *(a1 + 0x108) * eax_5[6];
    float var_24 =
        eax_5[7] * *(a1 + 0x118) + *(a1 + 0x124) * eax_5[8] + *(a1 + 0x10c) * eax_5[6];
    void* result = a1 + 0x70;
    int32_t var_1c = eax_5[9] + *(a1 + 0x12c) + 1;
    float var_20 =
        eax_5[7] * *(a1 + 0x11c) + *(a1 + 0x128) * eax_5[8] + *(a1 + 0x110) * eax_5[6];
    memcpy(result, &var_40, 0x28);
    double* i = *(a1 + 8);
    void* result_1 = *i;

    if (result_1 && i)
    {
        *(&var_40 + 4) = result;
        result = result_1;
        var_40 = a1 + 0x20;

        if (result && i)
        {
            int32_t ecx_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_10;

                if (!edx_1)
                    eax_10 = nullptr;
                else
                {
                    int32_t eax_7 = *edx_1;
                    int32_t eax_8 = -(eax_7);
                    eax_10 = (eax_8 - eax_8) & edx_1;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_10;
                g_afa7e0 = ecx_1 + 1;
                uint32_t eax_12 = MagicObj_GetEventId();
                int32_t eax_13 = 0;
                eax_13 = *(i + 0x1c);
                result = *(((eax_12 * 0x180 + eax_13) << 2) + &g_a96ae0);

                if (result)
                {
                    double* var_54_2 = &var_40;
                    i_1 = i;
                    result = result(i_1, var_54_2);
                }

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
