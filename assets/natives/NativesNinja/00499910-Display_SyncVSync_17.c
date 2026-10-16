#include "00499910-Display_SyncVSync_17.h"
/* 0x00499910 Display_SyncVSync_17 full linked: callers=1 callees=4 */
int32_t sub_499910(void* a1, double a2)

{
    double* edi_2 = ((*(a1 + 0x5644) + *(a1 + 0x5640) * 0x18 + 0x8b) << 5) + a1;
    float var_64 = g_c28b44;
    int32_t result_1 = 0xa;
    float var_60 = g_c28b48;
    int32_t result;
    bool cond:0_1;

    do
    {
        int32_t i_1 = 0xa;
        int32_t i;

        do
        {
            int32_t esi_1 = 0x1f;

            if (*(edi_2 + 0x1c) & 0x20)
            {
                long double x87_r7_3 = *edi_2 - g_bcab08;
                int32_t var_14_1 = *(edi_2 + 0xc);
                long double x87_r6_2 = edi_2[1] - g_bcab10;
                long double x87_r5_2 = a2 - g_bcab18;
                float var_50_1 =
                    g_bcaae8 * x87_r5_2 + g_bcaae4 * x87_r6_2 + g_bcaae0 * x87_r7_3;
                long double x87_r4_6 = g_bcaaf4 * x87_r5_2;
                long double x87_r3_6 = g_bcaaf0 * x87_r6_2;
                float var_2c = var_50_1;
                float var_4c_1 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_3;
                float var_28_1 = var_4c_1;
                long double x87_r4_12 =
                    g_bcab00 * x87_r5_2 + g_bcaafc * x87_r6_2 + g_bcaaf8 * x87_r7_3;
                float var_48_1 = x87_r4_12;
                long double temp2_1 = 0f;
                x87_r4_12 - temp2_1;
                float var_58;
                float var_54;
                int32_t eax_15;
                int32_t esi_4;

                if (*(&((x87_r4_12 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_12, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r4_12 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_9 = var_50_1;
                    long double temp4_1 = 0f;
                    x87_r7_9 - temp4_1;
                    int32_t esi_5 = 0xfffffffe;

                    if (*(&((x87_r7_9 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        esi_5 = 0xfffffffb;

                    long double x87_r7_10 = var_4c_1;
                    long double temp6_1 = 0f;
                    x87_r7_10 - temp6_1;
                    esi_4 = esi_5 & 0x3f;
                    eax_15 = 0xfffffffd;

                    if (*(&((x87_r7_10 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        eax_15 = 0xfffffff7;
                }
                else
                {
                    sub_498000(&var_58, &var_2c);
                    long double x87_r7_5 = var_58;
                    long double temp5_1 = 0f;
                    x87_r7_5 - temp5_1;
                    int32_t eax_7;

                    eax_7 = *(&((x87_r7_5 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_6 = var_54;
                    long double temp8_1 = 0f;
                    x87_r7_6 - temp8_1;
                    int32_t eax_11;

                    eax_11 = *(&((x87_r7_6 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_6, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_7 = var_58;
                    long double temp12_1 = var_64;
                    x87_r7_7 - temp12_1;
                    int32_t eax_13;

                    eax_13 = !(*(&((x87_r7_7 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_8 = var_54;
                    long double temp14_1 = var_60;
                    x87_r7_8 - temp14_1;
                    esi_4 = ~eax_7 & 0x3f & ~(eax_11 * 2) & ~(eax_13 << 2);

                    if (!(*(&((x87_r7_8 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == temp14_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        eax_15 = 0xffffffff;
                        eax_15 = 0xef;
                    }
                    else
                    {
                        eax_15 = 0xfffffff7;
                        eax_15 = 0xe7;
                    }
                }

                int32_t var_14_2 = *(edi_2 + 0xc);
                int32_t esi_6 = esi_4 & eax_15;
                long double x87_r7_12 = *edi_2 - g_bcab08;
                long double x87_r6_7 = edi_2[1] - g_bcab10;
                long double x87_r5_5 = a2 + 73728.0 - g_bcab18;
                float var_44_1 =
                    x87_r5_5 * g_bcaae8 + x87_r6_7 * g_bcaae4 + x87_r7_12 * g_bcaae0;
                long double x87_r4_18 = x87_r5_5 * g_bcaaf4;
                long double x87_r3_18 = x87_r6_7 * g_bcaaf0;
                float var_38 = var_44_1;
                float var_40_1 = x87_r4_18 + x87_r3_18 + x87_r7_12 * g_bcaaec;
                float var_34_1 = var_40_1;
                long double x87_r7_14 =
                    x87_r5_5 * g_bcab00 + x87_r6_7 * g_bcaafc + x87_r7_12 * g_bcaaf8;
                float var_3c_1 = x87_r7_14;
                long double temp7_1 = 0f;
                x87_r7_14 - temp7_1;

                if (*(&((x87_r7_14 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_19 = var_44_1;
                    long double temp9_1 = 0f;
                    x87_r7_19 - temp9_1;
                    int32_t eax_30 = 0xfffffffe;

                    if (*(&((x87_r7_19 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_19, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_19 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        eax_30 = 0xfffffffb;

                    long double x87_r7_20 = var_40_1;
                    long double temp11_1 = 0f;
                    x87_r7_20 - temp11_1;
                    int32_t eax_29 = 0xfffffffd;

                    if (*(&((x87_r7_20 < temp11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_20, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_20 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        eax_29 = 0xfffffff7;

                    esi_1 = esi_6 & eax_30 & eax_29;
                }
                else
                {
                    sub_498000(&var_58, &var_38);
                    long double x87_r7_15 = var_58;
                    long double temp10_1 = 0f;
                    x87_r7_15 - temp10_1;
                    int32_t eax_20;

                    eax_20 = *(&((x87_r7_15 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_16 = var_54;
                    long double temp13_1 = 0f;
                    x87_r7_16 - temp13_1;
                    int32_t eax_23;

                    eax_23 = *(&((x87_r7_16 < temp13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r7_16 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_17 = var_58;
                    long double temp15_1 = var_64;
                    x87_r7_17 - temp15_1;
                    int32_t eax_25;

                    eax_25 = !(*(&((x87_r7_17 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp15_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_18 = var_54;
                    long double temp16_1 = var_60;
                    x87_r7_18 - temp16_1;
                    int32_t esi_9 = esi_6 & ~eax_20 & ~(eax_23 * 2) & ~(eax_25 << 2);

                    esi_1 = !(*(&((x87_r7_18 < temp16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_18, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r7_18 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1) ? esi_9 & 0xffffffef
                        : esi_9 & 0xffffffe7;
                }

                edi_2[3] = (var_3c_1 + var_48_1) * 0.5f;
            }

            *(edi_2 + 0x1c) = esi_1;
            edi_2 = &edi_2[4];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        edi_2 = &edi_2[0x38];
        result = result_1 - 1;
        cond:0_1 = result_1 != 1;
        result_1 = result;
    } while (cond:0_1);
    return result;
}
