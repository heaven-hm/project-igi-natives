#include "0050F770-Physics_SimulateRigidBody_14.h"
/* 0x0050f770 Physics_SimulateRigidBody_14 full linked: callers=1 callees=5 */
int32_t sub_50f770(void* a1)

{
    float eax = g_bcadc0;
    int32_t result = g_b16c9c;
    int32_t* var_74c = &g_b12c60;

    if (result > 0)
    {
        int32_t result_1 = result;
        bool cond:1_1;

        do
        {
            void* edx_1 = *var_74c;
            double var_724;
            memcpy(&var_724, edx_1, 0x18);
            uint32_t i_3 = *(edx_1 + 0x18);
            float* edx_4 = edx_1 + 0x20;

            if (*(edx_1 + 0x1c) == 0x10)
            {
                var_724 = var_724 - g_bcab08;
                double var_71c = var_71c - g_bcab10;
                double var_714 = var_714 - g_bcab18;
                long double x87_r7_11 = g_bcab00 * var_714 + g_bcaafc * var_71c
                    + g_bcaaf8 * var_724 - 28377.919921875;
                long double x87_r6_5 = *(a1 + 8);
                x87_r6_5 - x87_r7_11;

                if (!(*(&((x87_r6_5 < x87_r7_11 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, x87_r7_11) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_11 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    if (i_3 > 0)
                    {
                        long double x87_r7_12 = g_bcab08;
                        long double x87_r6_6 = g_bcab10;
                        long double x87_r5_1 = g_bcab18;
                        void var_6e8;
                        int32_t* ecx_2 = &var_6e8;
                        uint32_t i;

                        do
                        {
                            long double x87_r4_2 = *edx_4 - x87_r7_12;
                            long double x87_r3_1 = edx_4[1];
                            float eax_6 = edx_4[2];
                            edx_4 = &edx_4[4];
                            long double x87_r3_2 = x87_r3_1 - x87_r6_6;
                            long double x87_r2_2 = eax_6 - x87_r5_1;
                            float var_748_1 = g_bcaae8 * x87_r2_2 + g_bcaae4 * x87_r3_2
                                + g_bcaae0 * x87_r4_2;
                            float var_744_1 = g_bcaaf4 * x87_r2_2 + g_bcaaf0 * x87_r3_2
                                + g_bcaaec * x87_r4_2;
                            float var_740_1 = g_bcab00 * x87_r2_2 + g_bcaafc * x87_r3_2
                                + g_bcaaf8 * x87_r4_2;
                            long double x87_r4_4 = var_740_1;
                            long double temp1_1 = eax;
                            x87_r4_4 - temp1_1;
                            float var_73c;
                            float var_738;
                            float var_734;
                            int32_t eax_12;

                            if (*(&((x87_r4_4 < temp1_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_4, temp1_1) ? 1 : 0) << 0xa
                                    | (x87_r4_4 == temp1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                eax_12 = 0x10;
                            else
                            {
                                long double x87_r4_6 = 1f / var_740_1;
                                var_734 = x87_r4_6;
                                long double x87_r4_9 =
                                    x87_r4_6 * var_748_1 * g_bcab28 + g_bcab30;
                                var_73c = x87_r4_9;
                                long double x87_r3_7 =
                                    g_bcab2c * var_734 * var_744_1 + g_bcab34;
                                var_738 = x87_r3_7;
                                long double temp2_1 = g_bcabd0;
                                x87_r4_9 - temp2_1;
                                int32_t ebp_1;

                                ebp_1 = !(*(&((x87_r4_9 < temp2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_9, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r4_9 == temp2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1) ? 0 : 1;

                                long double temp4_1 = g_bcabd4;
                                x87_r3_7 - temp4_1;
                                int32_t ebx_1;

                                ebx_1 = !(*(&((x87_r3_7 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r3_7, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r3_7 == temp4_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1) ? 0 : 1;

                                long double temp5_1 = g_bcabd8;
                                x87_r4_9 - temp5_1;
                                int32_t edi_1;

                                edi_1 = *(&((x87_r4_9 < temp5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_9, temp5_1) ? 1 : 0) << 0xa
                                    | (x87_r4_9 == temp5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41 ? 0
                                    : 1;

                                long double x87_r4_10 = var_738;
                                long double temp7_1 = g_bcabdc;
                                x87_r4_10 - temp7_1;

                                eax_12 = *(&((x87_r4_10 < temp7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_10, temp7_1) ? 1 : 0) << 0xa
                                    | (x87_r4_10 == temp7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41
                                    ? (edi_1 << 1 | ebx_1) << 1 | ebp_1
                                    : ((2 | edi_1) << 1 | ebx_1) << 1 | ebp_1;
                            }

                            *ecx_2 = eax_12;
                            ecx_2[-6] = var_748_1;
                            ecx_2[-5] = var_744_1;
                            ecx_2[-4] = var_740_1;
                            int32_t* edi_3 = &ecx_2[-3];
                            ecx_2 = &ecx_2[7];
                            i = i_3;
                            i_3 -= 1;
                            *edi_3 = var_73c;
                            edi_3[1] = var_738;
                            edi_3[2] = var_734;
                        } while (i != 1);
                    }

                    int32_t* ebp_2 = edx_4[1];
                    int32_t i_4 = edx_4[3];

                    if (i_4 > 0)
                    {
                        int32_t i_2 = i_4;
                        int32_t i_1;

                        do
                        {
                            int24_t ecx_3 = *ebp_2;
                            int32_t edx_8 = 0;
                            edx_8 = *(&ecx_3 + 1);
                            float var_760_1 = eax;
                            int32_t ecx_4 = 0;
                            ecx_4 = *(&ecx_3 + 2);
                            void* var_764_1 = a1 + 8;
                            void var_79c;
                            void var_780;
                            memcpy(&var_780, &var_79c + ecx_4 * 0x1c + 0x9c, 0x1c);
                            void var_7b8;
                            memcpy(&var_79c, &var_7b8 + edx_8 * 0x1c + 0xb8, 0x1c);
                            memcpy(&var_7b8, &var_7b8 + ecx_3 * 0x1c + 0xb8, 0x1c);
                            sub_4a0340();
                            ebp_2 = &ebp_2[1];
                            i_1 = i_2;
                            i_2 -= 1;
                        } while (i_1 != 1);
                    }
                }
            }

            result = result_1 - 1;
            cond:1_1 = result_1 != 1;
            var_74c = &var_74c[1];
            result_1 = result;
        } while (cond:1_1);
    }

    return result;
}
