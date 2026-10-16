#include "0050D4C0-Physics_InterpolateWaypoint_13.h"
/* 0x0050d4c0 Physics_InterpolateWaypoint_13 full linked: callers=6 callees=4 */
int32_t** sub_50d4c0(int32_t* a1)

{
    int32_t* edi = a1;
    int32_t eax = edi[1];
    int32_t** result;
    int32_t* esi;

    if (!(eax & 0x60000) || !g_a84a4c || eax & 0x40000000)
    {
        result = nullptr;

        if (edi[2] >= 0)
            esi = sub_497800(edi[3] * 0x1c + 0x28);
        else
            esi = &g_a7cedc;
    }
    else
    {
        result = 1;
        esi = sub_4b72e0(sub_50d7e0, edi[3] * 0x1c + 0x28, *(edi[4] + 8));
    }

    if (esi)
    {
        esi[1] = g_54e890;
        esi[3] = g_a84a50;
        esi[4] = g_a84a58;
        esi[5] = edi[1];
        esi[7] = edi[3];
        esi[8] = *edi;
        long double x87_r7_2 = *(edi[4] + 0x14) * 255f;
        esi[9] = &esi[0xa];
        int32_t var_14_1 = 0;
        esi[6] = x87_r7_2;

        if (esi[7] > 0)
        {
            int32_t var_18_1 = 0;
            void* ebx_1 = nullptr;
            bool cond:0_1;

            do
            {
                float* ecx_9 = ebx_1 + edi[4];
                float* edx_9 = esi[9] + var_18_1;
                *edx_9 = *ecx_9 - 0.5f;
                edx_9[1] = ecx_9[1] - 0.5f;
                long double x87_r7_7 = ecx_9[2];
                long double temp0_1 = 0f;
                x87_r7_7 - temp0_1;

                if (*(&((x87_r7_7 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41 || !g_6e5bb0)
                {
                    edx_9[2] = 0x3f000000;
                    edx_9[3] = 1f / ((g_bcadc8 - g_bcada0) * 0.5f);
                }
                else
                {
                    long double x87_r7_9 = g_bcada0 * 1.00999999f;
                    a1 = g_bcabec * ecx_9[2];
                    long double temp1_1 = a1;
                    x87_r7_9 - temp1_1;

                    if (*(&((x87_r7_9 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r7_11 = g_bcadc8;
                        long double temp2_1 = a1;
                        x87_r7_11 - temp2_1;

                        if (!(*(&((x87_r7_11 < temp2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_11, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_11 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_9 = a1;
                        else
                            x87_r7_9 = g_bcadc8;
                    }

                    long double x87_r7_12 = 1f / x87_r7_9;
                    edx_9[3] = x87_r7_12;
                    long double x87_r7_15 = (1f - x87_r7_12 * g_bcada0) * g_bcab6c;
                    edx_9[2] = x87_r7_15;
                    edx_9[2] = (g_bcad8c - g_bcadb4) * x87_r7_15 + g_bcadb4;
                }

                int32_t eax_15 = esi[5];
                long double x87_r7_21 = ecx_9[5];

                if (eax_15 & 4)
                    x87_r7_21 = 0.5f;
                else if (eax_15 & 0x20)
                    x87_r7_21 = 0.25f;

                int32_t eax_21;
                int32_t ebp_3;

                if (!(eax_15 & 0x10880024))
                {
                    ebp_3 = (((0xff00 - ecx_9[6] * -255f) << 8) - ecx_9[7] * -255f) << 8;
                    eax_21 = ecx_9[8] * -255f;
                }
                else
                {
                    eax_21 = (((((x87_r7_21 * -255f) << 8) + ecx_9[6] * -255f) << 8)
                        + ecx_9[7] * -255f) << 8;
                    ebp_3 = ecx_9[8] * 255f;
                }

                edx_9[4] = ebp_3 - eax_21;
                void* eax_24 = esi[3];

                if (eax_24)
                {
                    edx_9[5] = *(eax_24 + 0x10) * ecx_9[3] + 0.0009765625f;
                    edx_9[6] = *(esi[3] + 0x14) * ecx_9[4] + 0.0009765625f;
                }

                ebx_1 += 0x24;
                cond:0_1 = var_14_1 + 1 < esi[7];
                var_14_1 += 1;
                var_18_1 += 0x1c;
            } while (cond:0_1);
        }
    }

    if (result)
        return result;

    int32_t eax_28 = edi[2];

    if (eax_28 >= 0)
        return sub_4978b0(eax_28, esi);

    return sub_497860(esi);
}
