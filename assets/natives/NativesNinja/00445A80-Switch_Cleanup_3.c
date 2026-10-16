#include "00445A80-Switch_Cleanup_3.h"
/* 0x00445a80 Switch_Cleanup_3 full linked: callers=0 callees=6 */
void* sub_445a80(void* a1, int32_t* a2)

{
    float* eax = a2[1];
    double var_30 = eax[2] * *(a1 + 0x140) + eax[1] * *(a1 + 0x138) + *eax * *(a1 + 0x130);
    double var_28 = eax[5] * *(a1 + 0x140) + eax[4] * *(a1 + 0x138) + eax[3] * *(a1 + 0x130);
    double var_20 = eax[8] * *(a1 + 0x140) + eax[7] * *(a1 + 0x138) + eax[6] * *(a1 + 0x130);
    memcpy(a1 + 0xf0, &var_30, 0x18);
    *(a1 + 0xf0) = **a2 + *(a1 + 0xf0);
    *(a1 + 0xf8) = *(*a2 + 8) + *(a1 + 0xf8);
    *(a1 + 0x100) = *(*a2 + 0x10) + *(a1 + 0x100);
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

    float var_4c_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_21;
    void* var_58 = *(a1 + 0x68);
    sub_4c6940(var_58, a1, a1 + 0xf0, var_4c_1);
    float* eax_6 = a2[1];
    var_30 = *eax_6 * *(a1 + 0x148) + eax_6[1] * *(a1 + 0x154) + *(a1 + 0x160) * eax_6[2];
    *(&var_30 + 4) =
        *eax_6 * *(a1 + 0x14c) + eax_6[1] * *(a1 + 0x158) + *(a1 + 0x164) * eax_6[2];
    var_28 = *eax_6 * *(a1 + 0x150) + eax_6[1] * *(a1 + 0x15c) + *(a1 + 0x168) * eax_6[2];
    *(&var_28 + 4) =
        eax_6[5] * *(a1 + 0x160) + eax_6[3] * *(a1 + 0x148) + eax_6[4] * *(a1 + 0x154);
    var_20 = eax_6[5] * *(a1 + 0x164) + eax_6[3] * *(a1 + 0x14c) + eax_6[4] * *(a1 + 0x158);
    *(&var_20 + 4) =
        eax_6[5] * *(a1 + 0x168) + eax_6[3] * *(a1 + 0x150) + eax_6[4] * *(a1 + 0x15c);
    float var_18 =
        eax_6[8] * *(a1 + 0x160) + eax_6[6] * *(a1 + 0x148) + eax_6[7] * *(a1 + 0x154);
    float var_14 =
        eax_6[8] * *(a1 + 0x164) + eax_6[6] * *(a1 + 0x14c) + eax_6[7] * *(a1 + 0x158);
    void* result = a1 + 0x108;
    int32_t var_c = eax_6[9] + *(a1 + 0x16c) + 1;
    float var_10 =
        eax_6[8] * *(a1 + 0x168) + eax_6[6] * *(a1 + 0x150) + eax_6[7] * *(a1 + 0x15c);
    void* result_1 = result;
    memcpy(result, &var_30, 0x28);
    memcpy(a1 + 0x70, &var_30, 0x28);
    int32_t* i_1 = *(a1 + 8);
    void* var_38 = a1 + 0xf0;

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t ecx_5 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i;
                void* eax_11;

                if (!edx_3)
                    eax_11 = nullptr;
                else
                {
                    int32_t eax_8 = *edx_3;
                    int32_t eax_9 = -(eax_8);
                    eax_11 = (eax_9 - eax_9) & edx_3;
                }

                *((ecx_5 << 2) + &g_afa6e0) = eax_11;
                g_afa7e0 = ecx_5 + 1;
                uint32_t eax_13 = sub_4c5800();
                int32_t eax_14 = 0;
                eax_14 = i[7];
                result = *(((eax_13 * 0x180 + eax_14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &var_38);

                ecx_5 = g_afa7e0 - 1;
                g_afa7e0 = ecx_5;
                i = *((ecx_5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
