#include "0049B700-Bone_PaletteSkinner.h"
/* 0x0049b700 Bone_PaletteSkinner full linked: callers=1 callees=1 */
int32_t sub_49b700(void* a1, int32_t a2, float a3, int32_t a4)

{
    void* esi = a1;
    int32_t __saved_ebp_1 = *(esi + 0x10);

    if (__saved_ebp_1 <= 0xfa0)
    {
        int32_t* eax_3 = g_bcad90;
        int32_t result;

        if (__saved_ebp_1 + g_bcad98 > g_bcad94)
        {
            int32_t eax_5 = (*(*eax_3 + 0xc))(eax_3, 0x2020, &a1, 0);
            result = 0;
            a2 = 0;
            g_bcad98 = *(esi + 0x10);

            if (!eax_5)
            {
            label_49b7ae:
                void* edx_5 = a1;

                if (edx_5)
                {
                    int32_t i_6 = *(esi + 0x10);
                    float* eax_7 = *(esi + 0x18);

                    if (!a4)
                    {
                        if (i_6 > 0)
                        {
                            float* edx_6 = edx_5 + 8;
                            int32_t i_4 = i_6;
                            int32_t i;

                            do
                            {
                                int32_t ecx_5 = 0;
                                ecx_5 = *(eax_7 + 0x26);
                                long double x87_r7_1 = eax_7[8];
                                int32_t ebp_3 = ecx_5 * 0x21;
                                int32_t ecx_6 = *(a3 + 8);
                                void* ecx_7 = ecx_6 + (ebp_3 << 2);
                                long double x87_r6_4 = *eax_7 * *(ecx_6 + (ebp_3 << 2) + 0x24)
                                    + eax_7[2] * *(ecx_6 + (ebp_3 << 2) + 0x2c)
                                    + eax_7[1] * *(ecx_7 + 0x28);
                                float var_18_1 = x87_r6_4;
                                float var_24_1 = var_18_1;
                                float var_20_2 = *eax_7 * *(ecx_7 + 0x30)
                                    + eax_7[2] * *(ecx_7 + 0x38) + eax_7[1] * *(ecx_7 + 0x34)
                                    + *(ecx_7 + 0x1c);
                                float var_1c_2 = eax_7[2] * *(ecx_7 + 0x44)
                                    + *(ecx_7 + 0x40) * eax_7[1] + *(ecx_7 + 0x3c) * *eax_7
                                    + *(ecx_7 + 0x20);
                                edx_6[-2] = (var_18_1 + *(ecx_7 + 0x18)) * x87_r7_1;
                                edx_6[-1] = var_20_2 * x87_r7_1;
                                *edx_6 = var_1c_2 * x87_r7_1;
                                edx_6[4] = eax_7[6];
                                edx_6[5] = eax_7[7];
                                long double x87_r7_6 = *(ecx_7 + 0x28) * eax_7[4]
                                    + *(ecx_7 + 0x2c) * eax_7[5] + eax_7[3] * *(ecx_7 + 0x24);
                                long double x87_r7_10 = eax_7[5] * *(ecx_7 + 0x38)
                                    + eax_7[4] * *(ecx_7 + 0x34) + eax_7[3] * *(ecx_7 + 0x30);
                                long double x87_r7_12 = *(ecx_7 + 0x3c) * eax_7[3];
                                long double x87_r6_29 = *(ecx_7 + 0x44) * eax_7[5];
                                eax_7 = &eax_7[0xa];
                                int32_t* ecx_8 = &edx_6[1];
                                edx_6 = &edx_6[8];
                                i = i_4;
                                i_4 -= 1;
                                long double x87_r7_14 =
                                    x87_r7_12 + x87_r6_29 + *(ecx_7 + 0x40) * eax_7[-6];
                                *ecx_8 = x87_r7_6;
                                ecx_8[1] = x87_r7_10;
                                ecx_8[2] = x87_r7_14;
                            } while (i != 1);
                            result = a2;
                        }

                        int32_t i_3 = *(esi + 0xc);
                        void* eax_10 = *(esi + 0x18) + *(esi + 0x10) * 0x28;

                        if (i_3 > 0)
                        {
                            int32_t i_1;

                            do
                            {
                                int32_t ecx_10 = 0;
                                ecx_10 = *(eax_10 + 0x26);
                                eax_10 += 0x28;
                                int32_t esi_3 = ecx_10 * 0x21;
                                int32_t ecx_11 = *(a3 + 8);
                                void* ecx_12 = ecx_11 + (esi_3 << 2);
                                long double x87_r7_18 =
                                    *(ecx_11 + (esi_3 << 2) + 0x2c) * *(eax_10 - 0x20)
                                    + *(ecx_11 + (esi_3 << 2) + 0x28) * *(eax_10 - 0x24)
                                    + *(ecx_12 + 0x24) * *(eax_10 - 0x28);
                                float var_18_2 = x87_r7_18;
                                float var_24_2 = var_18_2;
                                long double x87_r7_22 = *(ecx_12 + 0x38) * *(eax_10 - 0x20)
                                    + *(ecx_12 + 0x34) * *(eax_10 - 0x24)
                                    + *(ecx_12 + 0x30) * *(eax_10 - 0x28);
                                long double x87_r7_26 = *(ecx_12 + 0x44) * *(eax_10 - 0x20)
                                    + *(ecx_12 + 0x40) * *(eax_10 - 0x24)
                                    + *(ecx_12 + 0x3c) * *(eax_10 - 0x28);
                                float var_20_4 = x87_r7_22 + *(ecx_12 + 0x1c);
                                float ecx_13 = *(eax_10 - 8);
                                int32_t ecx_14 = 0;
                                ecx_14 = *(eax_10 - 4);
                                float var_1c_4 = x87_r7_26 + *(ecx_12 + 0x20);
                                float* ecx_16 = (ecx_14 << 5) + a1;
                                i_1 = i_3;
                                i_3 -= 1;
                                *ecx_16 = ecx_13 * (var_18_2 + *(ecx_12 + 0x18)) + *ecx_16;
                                ecx_16[1] = ecx_13 * var_20_4 + ecx_16[1];
                                ecx_16[2] = ecx_13 * var_1c_4 + ecx_16[2];
                            } while (i_1 != 1);
                            int32_t* eax_11 = g_bcad90;
                            (*(*eax_11 + 0x10))(eax_11);
                            return result;
                        }
                    }
                    else if (i_6 > 0)
                    {
                        float* edx_8 = edx_5 + 8;
                        int32_t i_5 = i_6;
                        int32_t i_2;

                        do
                        {
                            int32_t ecx_17 = 0;
                            ecx_17 = *(eax_7 + 0x26);
                            int32_t ebp_15 = ecx_17 * 0x21;
                            int32_t ecx_18 = *(a3 + 8);
                            void* ecx_19 = ecx_18 + (ebp_15 << 2);
                            long double x87_r7_39 = *eax_7 * *(ecx_18 + (ebp_15 << 2) + 0x24)
                                + eax_7[2] * *(ecx_18 + (ebp_15 << 2) + 0x2c)
                                + eax_7[1] * *(ecx_19 + 0x28);
                            long double x87_r6_58 = *eax_7 * *(ecx_19 + 0x30)
                                + eax_7[2] * *(ecx_19 + 0x38) + eax_7[1] * *(ecx_19 + 0x34);
                            long double x87_r6_62 = eax_7[2] * *(ecx_19 + 0x44)
                                + *(ecx_19 + 0x40) * eax_7[1] + *(ecx_19 + 0x3c) * *eax_7;
                            edx_8[-2] = x87_r7_39 + *(ecx_19 + 0x18);
                            edx_8[-1] = x87_r6_58 + *(ecx_19 + 0x1c);
                            *edx_8 = x87_r6_62 + *(ecx_19 + 0x20);
                            long double x87_r7_48 = *(ecx_19 + 0x28) * eax_7[4]
                                + *(ecx_19 + 0x2c) * eax_7[5] + eax_7[3] * *(ecx_19 + 0x24);
                            long double x87_r7_52 = eax_7[5] * *(ecx_19 + 0x38)
                                + eax_7[4] * *(ecx_19 + 0x34) + eax_7[3] * *(ecx_19 + 0x30);
                            long double x87_r7_55 =
                                *(ecx_19 + 0x3c) * eax_7[3] + *(ecx_19 + 0x44) * eax_7[5];
                            long double x87_r6_74 = *(ecx_19 + 0x40) * eax_7[4];
                            int32_t* ecx_20 = &edx_8[1];
                            edx_8 = &edx_8[8];
                            eax_7 = &eax_7[0xa];
                            *ecx_20 = x87_r7_48;
                            ecx_20[1] = x87_r7_52;
                            ecx_20[2] = x87_r7_55 + x87_r6_74;
                            edx_8[-4] = eax_7[-4];
                            edx_8[-3] = eax_7[-3];
                            i_2 = i_5;
                            i_5 -= 1;
                        } while (i_2 != 1);
                    }

                    int32_t* eax_13 = g_bcad90;
                    (*(*eax_13 + 0x10))(eax_13);
                }
            }
        }
        else
        {
            int32_t eax_4 = (*(*eax_3 + 0xc))(eax_3, 0x1020, &a1, 0);
            int32_t result_1 = g_bcad98;
            result = result_1;
            int32_t ecx_2 = result_1 + *(esi + 0x10);
            a2 = result;
            a1 += result_1 << 5;
            g_bcad98 = ecx_2;

            if (!eax_4)
                goto label_49b7ae;
        }

        return result;
    }

    int32_t __saved_ebp = __saved_ebp_1;
    int32_t var_38 = a2 + 0x14;
    Error_Show("Bone model too large. Model %s has %d vertices.");

    while (true)
        /* nop */
}
