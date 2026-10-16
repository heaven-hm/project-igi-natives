#include "004CE090-DynObj_CreateMagicObject_11.h"
/* 0x004ce090 DynObj_CreateMagicObject_11 full linked: callers=8 callees=5 */
uint32_t sub_4ce090(int32_t a1, char a2, int32_t a3, double* a4, int32_t a5, int32_t a6)

{
    sub_4ce5c0(a1, a6);
    uint32_t result = a2;
    uint32_t result_1 = result;

    if (*(a1 + ((result + a6 * 0xfe) << 1) + 0x118))
    {
        sub_4ce620(a1, a6);
        double* eax_1 = a4;
        long double x87_r7_1 = *eax_1;
        double var_20;
        memcpy(&var_20, eax_1, 0x18);
        int32_t ecx_4 = x87_r7_1 + *(a1 + 0xde0);
        int32_t edx_2 = eax_1[1] + *(a1 + 0xde4);
        int64_t var_4c_3 = eax_1[2];
        int32_t esi_3 = var_4c_3 + *(a1 + 0xde8);
        int32_t* var_60_1 = *(a1 + (a6 << 2) + 0x28);
        int32_t edx_4 = *(a1 + (a6 << 2) + 0xd0);
        int32_t var_5c_1 = edx_4;
        double var_38;
        memcpy(&var_38, a1 + a6 * 0x18 + 0x40, 0x18);

        while (true)
        {
            void* ecx_8 = var_60_1[0xf];
            int64_t var_54;
            double var_30;

            if (ecx_8)
            {
                *(&var_4c_3 + 4) = 0;
                var_4c_3 = *var_60_1;
                long double x87_r7_4 = var_4c_3;
                long double x87_r6_3 = *(ecx_8 + 8) * 0.5f / x87_r7_4;
                var_54 = (*eax_1 - var_38 + x87_r7_4) * x87_r6_3;
                int32_t edx_6 = var_54;
                var_54 = (eax_1[1] - var_30 + x87_r7_4) * x87_r6_3;
                result = sub_4e5580(ecx_8, edx_6, var_54);

                if (!result)
                    break;

                edx_4 = var_5c_1;
            }

            for (void* i = var_60_1[0xb]; i; i = *(i + 0x58))
            {
                int32_t ecx_9 = 0;
                ecx_9 = *(i + 0x1c);
                int32_t edi_3 = *(((ecx_9 + result_1 * 0x180) << 2) + &g_a96ae0);

                if (edi_3)
                {
                    float eax_5 = *(i + 0x44);
                    long double x87_r7_9 = *(i + 0x20) - eax_5;
                    long double temp1_1 = var_20;
                    x87_r7_9 - temp1_1;

                    if (*(&((x87_r7_9 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_11 = eax_5 + *(i + 0x20);
                        long double temp2_1 = var_20;
                        x87_r7_11 - temp2_1;

                        if (!(*(&((x87_r7_11 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_11, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_11 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_13 = *(i + 0x28) - eax_5;
                            double var_18;
                            long double temp3_1 = var_18;
                            x87_r7_13 - temp3_1;

                            if (*(&((x87_r7_13 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_13, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double x87_r7_15 = eax_5 + *(i + 0x28);
                                long double temp4_1 = var_18;
                                x87_r7_15 - temp4_1;

                                if (!(*(&((x87_r7_15 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_15, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_15 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_17 = *(i + 0x30) - eax_5;
                                    double var_10;
                                    long double temp5_1 = var_10;
                                    x87_r7_17 - temp5_1;

                                    if (*(&((x87_r7_17 < temp5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_17, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_17 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_19 = eax_5 + *(i + 0x30);
                                        long double temp6_1 = var_10;
                                        x87_r7_19 - temp6_1;

                                        if (!(*(&((x87_r7_19 < temp6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_19, temp6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_19 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            && *(ecx_9 * 0x30 + 0xaf5f0c) & a5)
                                        {
                                            edi_3(i, a3);
                                            edx_4 = var_5c_1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            char ecx_13 = edx_4;
            result = ((esi_3 >> (ecx_13 & 0x1f) & 1) << 1 | (edx_2 >> (ecx_13 & 0x1f) & 1)) << 1
                | (ecx_4 >> (ecx_13 & 0x1f) & 1);
            int32_t* ecx_15 = var_60_1[result + 3];
            var_60_1 = ecx_15;

            if (!ecx_15)
                break;

            edx_4 -= 1;
            var_5c_1 = edx_4;
            double var_28;

            if (edx_4 == 0x1d)
            {
                uint32_t eax_18 = ~result;
                var_54 = ((eax_18 & 1) << 0x1e) - 0x20000000;
                long double x87_r7_27 = var_54 + var_38;
                var_54 = ((eax_18 & 2) << 0x1d) - 0x20000000;
                var_38 = x87_r7_27;
                long double x87_r7_28 = var_54;
                var_54 = ((eax_18 & 4) - 2) << 0x1c;
                eax_1 = a4;
                var_30 = x87_r7_28 + var_30;
                var_28 = var_54 + var_28;
            }
            else
            {
                char ecx_18 = edx_4;
                var_54 = ((result & 1) * 2 - 1) << (ecx_18 & 0x1f);
                var_38 = var_54 + var_38;
                var_54 = ((result & 2) - 1) << (ecx_18 & 0x1f);
                long double x87_r7_23 = var_54 + var_30;
                var_54 = ((result >> 1 & 2) - 1) << (ecx_18 & 0x1f);
                eax_1 = a4;
                var_30 = x87_r7_23;
                var_28 = var_54 + var_28;
            }
        }
    }

    return result;
}
