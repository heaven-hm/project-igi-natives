#include "00503F20-PhysicsMagicObj_Setup.h"
/* 0x00503f20 PhysicsMagicObj_Setup full linked: callers=0 callees=5 */
void* sub_503f20(void* a1, float a2)

{
    int32_t* ebp = a2;
    float* eax = ebp[1];
    double var_40 = eax[2] * *(a1 + 0x730) + eax[1] * *(a1 + 0x728) + *eax * *(a1 + 0x720);
    double var_38 = eax[5] * *(a1 + 0x730) + eax[4] * *(a1 + 0x728) + eax[3] * *(a1 + 0x720);
    double* eax_1 = *ebp;
    double var_30 = eax[8] * *(a1 + 0x730) + eax[7] * *(a1 + 0x728) + eax[6] * *(a1 + 0x720);
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

    long double x87_r7_24 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_21;
    void* edx = *(a1 + 0x68);
    float var_54_1 = x87_r7_24;
    double* i_1 = &var_18;
    sub_4c6940(edx, a1, i_1, var_54_1);
    float* eax_4 = ebp[1];
    var_40 = *(a1 + 0x744) * eax_4[1] + *eax_4 * *(a1 + 0x738) + eax_4[2] * *(a1 + 0x750);
    *(&var_40 + 4) =
        *(a1 + 0x748) * eax_4[1] + *eax_4 * *(a1 + 0x73c) + eax_4[2] * *(a1 + 0x754);
    var_38 = *(a1 + 0x74c) * eax_4[1] + *eax_4 * *(a1 + 0x740) + eax_4[2] * *(a1 + 0x758);
    *(&var_38 + 4) =
        *(a1 + 0x744) * eax_4[4] + eax_4[5] * *(a1 + 0x750) + eax_4[3] * *(a1 + 0x738);
    var_30 = *(a1 + 0x748) * eax_4[4] + eax_4[5] * *(a1 + 0x754) + eax_4[3] * *(a1 + 0x73c);
    *(&var_30 + 4) =
        *(a1 + 0x74c) * eax_4[4] + eax_4[5] * *(a1 + 0x758) + eax_4[3] * *(a1 + 0x740);
    float var_28 =
        *(a1 + 0x744) * eax_4[7] + eax_4[8] * *(a1 + 0x750) + eax_4[6] * *(a1 + 0x738);
    float var_24 =
        *(a1 + 0x748) * eax_4[7] + eax_4[8] * *(a1 + 0x754) + eax_4[6] * *(a1 + 0x73c);
    void* result = a1 + 0x70;
    float var_20 =
        *(a1 + 0x74c) * eax_4[7] + eax_4[8] * *(a1 + 0x758) + eax_4[6] * *(a1 + 0x740);
    int32_t var_1c = eax_4[9] + *(a1 + 0x75c) + 1;
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
                int32_t* edx_2 = *i;
                void* eax_9;

                if (!edx_2)
                    eax_9 = nullptr;
                else
                {
                    int32_t eax_6 = *edx_2;
                    int32_t eax_7 = -(eax_6);
                    eax_9 = (eax_7 - eax_7) & edx_2;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_9;
                g_afa7e0 = ecx_1 + 1;
                uint32_t eax_11 = MagicObj_GetEventId();
                int32_t ecx_3 = 0;
                ecx_3 = *(i + 0x1c);
                result = *(((eax_11 * 0x180 + ecx_3) << 2) + &g_a96ae0);

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
