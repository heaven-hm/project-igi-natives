#include "0049CC80-Display_CheckCapabilities_19.h"
/* 0x0049cc80 Display_CheckCapabilities_19 full linked: callers=2 callees=0 */
❓  int32_t sub_49cc80(int32_t* a1, float a2)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t* ebp = a1;
    int32_t esi;
    int32_t var_3c = esi;
    int32_t edi;
    int32_t var_40 = edi;
    int32_t* eax_1 = g_bcad90;
    int32_t* var_48 = &a1;
    int32_t ecx_1 = *eax_1;
    int32_t result;
    int32_t result_1;

    if (g_bcad98 + ebp[3] > g_bcad94)
    {
        int32_t eax_3 = (*(ecx_1 + 0xc))(eax_1, 0x2020, var_48, 0);
        result = 0;
        result_1 = 0;
        g_bcad98 = ebp[3];

        if (!eax_3)
        {
        label_49cd09:

            if (a1)
            {
                float edx_4 = a2;
                float* ecx_4 = ebp[4];
                int32_t ebx;
                int32_t var_44 = ebx;
                long double x87_r7 = *(edx_4 + 0x100);

                if (!*(edx_4 + 0x5b4))
                {
                    char eax_5 = *(edx_4 + 0x5b5);
                    long double x87_r7_9;

                    if (!eax_5)
                        x87_r7_9 = *(edx_4 + 0xfc);
                    else
                        x87_r7_9 = *(edx_4 + 0x100);

                    long double x87_r6_7 = *(edx_4 + 0x59c) * 1f / (x87_r7 - *(edx_4 + 0xfc));

                    if (eax_5)
                        x87_r6_7 = -(x87_r6_7);

                    int32_t var_30_1 = 0;

                    if (ebp[3] > 0)
                    {
                        bool cond:8_1;

                        do
                        {
                            long double x87_r5_7 = (-(x87_r7_9) + *ecx_4) * x87_r6_7;
                            int32_t esi_7 = x87_r5_7;
                            a2 = esi_7;

                            if (esi_7 == *(edx_4 + 0x59c))
                            {
                                esi_7 -= 1;
                                a2 = esi_7;
                            }

                            long double x87_r5_8 = x87_r5_7 - a2;
                            long double x87_r4_10 = 0f;
                            x87_r4_10 - x87_r5_8;

                            if (*(&((x87_r4_10 < x87_r5_8 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_10, x87_r5_8) ? 1 : 0) << 0xa
                                | (x87_r4_10 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                            {
                                long double x87_r4_11 = 1f;
                                x87_r4_11 - x87_r5_8;

                                if (*(&((x87_r4_11 < x87_r5_8 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r4_11, x87_r5_8) ? 1 : 0) << 0xa
                                        | (x87_r4_11 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                    x87_r5_8 = 1f;
                            }
                            else
                                x87_r5_8 = 0f;

                            int32_t eax_10 = esi_7 * 5;
                            void* eax_11 = edx_4 + (eax_10 << 3);
                            void* edi_14 = edx_4 + esi_7 * 0xc;
                            long double x87_r4_15 = *(edx_4 + (eax_10 << 3) + 0x208) * ecx_4[2]
                                + *(edx_4 + (eax_10 << 3) + 0x204) * ecx_4[1] + *(edi_14 + 0x104);
                            long double x87_r3_18 = *(eax_11 + 0x214) * ecx_4[2]
                                + *(eax_11 + 0x210) * ecx_4[1]
                                + *(edx_4 + ((esi_7 * 3 + 0x42) << 2));
                            float var_20_2 = x87_r3_18;
                            float var_1c_2 = *(eax_11 + 0x220) * ecx_4[2]
                                + *(eax_11 + 0x21c) * ecx_4[1] + *(edi_14 + 0x10c);
                            long double x87_r2_14 = *(eax_11 + 0x23c) * ecx_4[2]
                                + *(eax_11 + 0x238) * ecx_4[1]
                                + *(edx_4 + ((esi_7 * 3 + 0x45) << 2));
                            float var_10_3 = *(eax_11 + 0x248) * ecx_4[2]
                                + *(eax_11 + 0x244) * ecx_4[1] + *(edi_14 + 0x118);
                            *a1 = (*(eax_11 + 0x230) * ecx_4[2] + *(eax_11 + 0x22c) * ecx_4[1]
                                + *(edi_14 + 0x110) - x87_r4_15) * x87_r5_8 + x87_r4_15;
                            a1[1] = (x87_r2_14 - var_20_2) * x87_r5_8 + var_20_2;
                            a1[2] = (var_10_3 - var_1c_2) * x87_r5_8 + var_1c_2;
                            long double x87_r5_14 = *(edx_4 + ((esi_7 * 5 + 0x41) << 3)) * ecx_4[5]
                                + *(eax_11 + 0x204) * ecx_4[4];
                            long double x87_r4_28 = ecx_4[3] * *(eax_11 + 0x200);
                            ecx_4 = &ecx_4[8];
                            long double x87_r5_19 = *(eax_11 + 0x210) * ecx_4[-4]
                                + *(eax_11 + 0x20c) * ecx_4[-5] + *(eax_11 + 0x214) * ecx_4[-3];
                            int32_t* eax_13 = &a1[3];
                            long double x87_r5_23 = *(eax_11 + 0x21c) * ecx_4[-4]
                                + *(eax_11 + 0x218) * ecx_4[-5] + *(eax_11 + 0x220) * ecx_4[-3];
                            *eax_13 = x87_r5_14 + x87_r4_28;
                            eax_13[1] = x87_r5_19;
                            eax_13[2] = x87_r5_23;
                            a1[6] = ecx_4[-2];
                            a1[7] = ecx_4[-1];
                            cond:8_1 = var_30_1 + 1 < ebp[3];
                            var_30_1 += 1;
                            a1 = &a1[8];
                        } while (cond:8_1);
                        result = result_1;
                    }
                }
                else
                {
                    int32_t eax_6 = 0;
                    float var_c_1 = (x87_r7 + *(edx_4 + 0xfc)) * 0.5f;

                    if (ebp[3] > 0)
                    {
                        bool cond:5_1;

                        do
                        {
                            long double x87_r7_4 = *ecx_4 - var_c_1;
                            long double x87_r6_1 = ecx_4[1];
                            long double x87_r5_1 = ecx_4[2];
                            int32_t* esi_1 = a1;
                            float var_14_1 = x87_r7_4 * *(edx_4 + 0x7c) + x87_r5_1 * *(edx_4 + 0x84)
                                + x87_r6_1 * *(edx_4 + 0x80);
                            long double x87_r6_3 =
                                x87_r5_1 * *(edx_4 + 0x90) + x87_r6_1 * *(edx_4 + 0x8c);
                            long double x87_r6_5 = x87_r7_4 * *(edx_4 + 0x88);
                            *esi_1 = x87_r5_1 * *(edx_4 + 0x78) + x87_r6_1 * *(edx_4 + 0x74)
                                + x87_r7_4 * *(edx_4 + 0x70);
                            esi_1[1] = var_14_1;
                            esi_1[2] = x87_r6_3 + x87_r6_5;
                            int32_t* esi_2 = &ecx_4[3];
                            int32_t* edi_8 = &a1[3];
                            eax_6 += 1;
                            ecx_4 = &ecx_4[8];
                            *edi_8 = *esi_2;
                            edi_8[1] = esi_2[1];
                            edi_8[2] = esi_2[2];
                            a1[6] = ecx_4[-2];
                            a1[7] = ecx_4[-1];
                            cond:5_1 = eax_6 < ebp[3];
                            a1 = &a1[8];
                        } while (cond:5_1);
                        result = result_1;
                    }
                }

                int32_t* eax_18 = g_bcad90;
                (*(*eax_18 + 0x10))(eax_18);
            }
        }
    }
    else
    {
        int32_t eax_2 = (*(ecx_1 + 0xc))(eax_1, 0x1020, var_48, 0);
        int32_t result_2 = g_bcad98;
        result = result_2;
        int32_t ecx_2 = result_2 + ebp[3];
        result_1 = result;
        a1 = &a1[result_2 * 8];
        g_bcad98 = ecx_2;

        if (!eax_2)
            goto label_49cd09;
    }
    return result;
}
