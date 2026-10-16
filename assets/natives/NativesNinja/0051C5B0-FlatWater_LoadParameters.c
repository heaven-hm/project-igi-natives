#include "0051C5B0-FlatWater_LoadParameters.h"
/* 0x0051c5b0 FlatWater_LoadParameters full linked: callers=0 callees=9 */
void* sub_51c5b0(float a1, float a2 @ 0xc, float a3 @ 0x14, float a4 @ 0x2c, float a5, float a6 @ 0x68, float a7, float a8, float a9, int32_t a10 @ 0x8c, float a11 @ 0x128, float a12)

{
    float j_8;
    float j_5 = j_8;
    void* i = sub_4a54a0(0x10af0);
    float arg_24 = *(a1 + 0x78) * 4096f;
    long double x87_r7_3 = *(a1 + 0x70) - g_bcab18;
    long double temp1 = 0f;
    x87_r7_3 - temp1;
    float arg_40 = x87_r7_3;
    bool c1 = /* bool c1 = unknown  {fst dword [esp+0x54], st0} */;
    i = (x87_r7_3 < temp1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa | (x87_r7_3 == temp1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&i + 1) & 1)
        x87_r7_3 = -(x87_r7_3);

    long double temp2 = 409.600006f;
    x87_r7_3 - temp2;
    i = (x87_r7_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&i + 1) & 1))
    {
        void arg_110;
        memcpy(&arg_110, &g_bcaae0, 0x28);
        long double x87_r7_4 = a11;
        long double temp3_1 = 0f;
        x87_r7_4 - temp3_1;
        i = (x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe;

        if (*(&i + 1) & 0x40)
        {
            long double x87_r7_5 = a12;
            long double temp4_1 = 0f;
            x87_r7_5 - temp4_1;
            i = (x87_r7_5 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe;

            if (*(&i + 1) & 0x40)
                a11 = 1f;
        }

        long double x87_r7_6 = a12;
        long double x87_r6_1 = a11;
        i = g_ba2018;
        float arg_130 = 0f;
        float arg_98 = 0f;
        long double x87_r7_8 = 1.0 / sqrtl(x87_r6_1 * x87_r6_1 + x87_r7_6 * x87_r7_6);
        a11 = a11 * x87_r7_8;
        a12 = a12 * x87_r7_8;
        long double x87_r7_10 = 0f;
        float arg_90 = x87_r7_10 - a12;
        float arg_94 = -((x87_r7_10 - a11));
        i = QTask_DeleteTask_2(a1, i);
        void* i_1 = i;

        if (i)
        {
            float arg_f4 = -(arg_24);

            do
            {
                void arg_2088;
                int32_t* ebx_1 = &arg_2088;
                float* j_10 = nullptr;
                int32_t arg_18 = 0;
                int32_t arg_148[0x7d0];
                int32_t (* esi_1)[0x7d0] = &arg_148;
                arg_14c;
                int32_t* edi_1 = &arg_14c;
                float arg_b4 = g_bcabc8 + g_bcabb8;
                float arg_b8 = g_bcabcc + g_bcabbc;
                long double x87_r7_20 = a11 * arg_24;
                float arg_58 = arg_90 * arg_24 + x87_r7_20;
                long double x87_r7_23 = a12 * arg_24;
                float __return_addr_2 = x87_r7_23;
                float arg_5c = arg_94 * arg_24 + x87_r7_23;
                long double x87_r7_26 = arg_130 * arg_24;
                float arg_28 = x87_r7_26;
                float arg_60 = arg_98 * arg_24 + x87_r7_26 + arg_40;
                bool cond:0_1;

                do
                {
                    long double x87_r7_28 = arg_f4;
                    float arg_a8 = x87_r7_28 * arg_90 + x87_r7_20;
                    float arg_ac = x87_r7_28 * arg_94 + __return_addr_2;
                    long double x87_r7_31 = x87_r7_28 * arg_98 + arg_28 + arg_40;
                    float arg_e8 =
                        x87_r7_31 * g_bcaae8 + arg_ac * g_bcaae4 + arg_a8 * g_bcaae0;
                    long double x87_r6_30 = x87_r7_31 * g_bcaaf4;
                    long double x87_r5_10 = arg_ac * g_bcaaf0;
                    float arg_f8 = arg_e8;
                    float arg_fc = x87_r6_30 + x87_r5_10 + arg_a8 * g_bcaaec;
                    long double x87_r7_34 =
                        x87_r7_31 * g_bcab00 + arg_ac * g_bcaafc + arg_a8 * g_bcaaf8;
                    float arg_f0 = x87_r7_34;
                    long double x87_r6_42 = arg_60 * g_bcaaf4;
                    long double x87_r5_18 = arg_5c * g_bcaaf0;
                    float arg_104 =
                        arg_60 * g_bcaae8 + arg_5c * g_bcaae4 + arg_58 * g_bcaae0;
                    float arg_108 = x87_r6_42 + x87_r5_18 + arg_58 * g_bcaaec;
                    float arg_e4 =
                        arg_60 * g_bcab00 + arg_5c * g_bcaafc + arg_58 * g_bcaaf8;
                    long double temp5_1 = 0f;
                    x87_r7_34 - temp5_1;

                    if (!(*(&((x87_r7_34 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_34, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_34 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double x87_r7_35 = arg_e4;
                        long double temp6_1 = 0f;
                        x87_r7_35 - temp6_1;

                        if (!(*(&((x87_r7_35 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_35, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_35 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            float arg_10;
                            sub_498000(&arg_10, &arg_f8);
                            float arg_8;
                            sub_498000(&arg_8, &arg_104);
                            long double x87_r7_36 = arg_10;
                            long double temp7_1 = arg_8;
                            x87_r7_36 - temp7_1;
                            int32_t ecx_3;

                            ecx_3 = !(*(&((x87_r7_36 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_36, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_36 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                            long double x87_r7_37 = arg_40;
                            long double temp12_1 = 0f;
                            x87_r7_37 - temp12_1;
                            int32_t eax_5;

                            eax_5 = !(*(&((x87_r7_37 < temp12_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, temp12_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                            long double x87_r7_39 = arg_8 - arg_10;
                            a10 = ecx_3 ^ eax_5;
                            a1 = x87_r7_39;
                            long double x87_r6_50 = arg_18 * 0.100000001f;
                            long double x87_r6_55 = (arg_b8 - x87_r7_39 * 0.5f
                                - (a3 + a2) * 0.5f) * x87_r6_50 * x87_r6_50;
                            a3 = x87_r6_55 + a3;
                            a2 = x87_r6_55 + a2;
                            long double x87_r7_43 = arg_f0;
                            long double temp13_1 = 0f;
                            x87_r7_43 - temp13_1;

                            if (!(*(&((x87_r7_43 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_43, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_43 == temp13_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double x87_r7_44 = arg_e4;
                                long double temp14_1 = 0f;
                                x87_r7_44 - temp14_1;

                                if (!(*(&((x87_r7_44 < temp14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_44, temp14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_44 == temp14_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_45 = arg_10;
                                    long double temp15_1 = arg_8;
                                    x87_r7_45 - temp15_1;

                                    if (*(&((x87_r7_45 < temp15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_45, temp15_1) ? 1 : 0) << 0xa
                                        | (x87_r7_45 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_54 = g_bcabc0 + g_bcabb8;
                                        __return_addr = a2 - a3;
                                        *edi_1 = (x87_r7_54 - arg_10) * __return_addr / a1 + a3;
                                        *esi_1 = x87_r7_54;
                                    }
                                    else
                                    {
                                        int32_t edx_3 = g_bcabb8;
                                        __return_addr = a2 - a3;
                                        *edi_1 =
                                            (g_bcabb8 - arg_10) * __return_addr / a1 + a3;
                                        *esi_1 = edx_3;
                                    }

                                    long double x87_r7_55 = *edi_1;
                                    long double temp16_1 = g_bcabbc;
                                    x87_r7_55 - temp16_1;
                                    long double x87_r7_57;
                                    long double temp18_1;

                                    if (!(*(&((x87_r7_55 < temp16_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_55, temp16_1) ? 1 : 0) << 0xa
                                        | (x87_r7_55 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    {
                                        x87_r7_57 = g_bcabc4 + g_bcabbc;
                                        temp18_1 = *edi_1;
                                        x87_r7_57 - temp18_1;
                                    }

                                    if (*(&((x87_r7_55 < temp16_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_55, temp16_1) ? 1 : 0) << 0xa
                                        | (x87_r7_55 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1 || *(&(
                                        (x87_r7_57 < temp18_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_57, temp18_1) ? 1 : 0) << 0xa
                                        | (x87_r7_57 == temp18_1 ? 1 : 0) << 0xe) + 1) & 1)
                                    {
                                        long double x87_r7_58 = a3;
                                        long double temp17_1 = a2;
                                        x87_r7_58 - temp17_1;

                                        if (*(&((x87_r7_58 < temp17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_58, temp17_1) ? 1 : 0) << 0xa
                                            | (x87_r7_58 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        {
                                            long double x87_r7_65 = g_bcabc4 + g_bcabbc;
                                            *esi_1 =
                                                (x87_r7_65 - a3) * a1 / __return_addr + arg_10;
                                            *edi_1 = x87_r7_65;
                                        }
                                        else
                                        {
                                            int32_t eax_7 = g_bcabbc;
                                            *esi_1 = (g_bcabbc - a3) * a1 / __return_addr
                                                + arg_10;
                                            *edi_1 = eax_7;
                                        }
                                    }

                                    if (!arg_18)
                                    {
                                    label_51cb4b:
                                        long double x87_r7_69 = *esi_1;
                                        long double temp20_1 = g_bcabb8;
                                        x87_r7_69 - temp20_1;

                                        if (!(*(&((x87_r7_69 < temp20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_69, temp20_1) ? 1 : 0) << 0xa
                                            | (x87_r7_69 == temp20_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_71 = g_bcabc0 + g_bcabb8;
                                            long double temp25_1 = *esi_1;
                                            x87_r7_71 - temp25_1;

                                            if (!(*(&((x87_r7_71 < temp25_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_71, temp25_1) ? 1 : 0) << 0xa
                                                | (x87_r7_71 == temp25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            {
                                                int32_t edx_4 = 0;
                                                edx_4 = !arg_18;
                                                *ebx_1 = edx_4;
                                                edi_1 = &edi_1[2];
                                                esi_1 = &(*esi_1)[2];
                                                j_10 += 1;
                                                ebx_1 = &ebx_1[1];
                                            }
                                        }
                                    }
                                    else
                                    {
                                        long double x87_r7_66 = *esi_1;
                                        long double temp21_1 = g_bcabb8;
                                        x87_r7_66 - temp21_1;

                                        if (*(&((x87_r7_66 < temp21_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_66, temp21_1) ? 1 : 0) << 0xa
                                                | (x87_r7_66 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51cb4b;

                                        long double x87_r7_68 = g_bcabc0 + g_bcabb8;
                                        long double temp26_1 = *esi_1;
                                        x87_r7_68 - temp26_1;

                                        if (*(&((x87_r7_68 < temp26_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_68, temp26_1) ? 1 : 0) << 0xa
                                                | (x87_r7_68 == temp26_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51cb4b;
                                    }

                                    long double x87_r7_72 = arg_8;
                                    long double temp24_1 = arg_10;
                                    x87_r7_72 - temp24_1;

                                    if (*(&((x87_r7_72 < temp24_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_72, temp24_1) ? 1 : 0) << 0xa
                                        | (x87_r7_72 == temp24_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_83 = g_bcabc0 + g_bcabb8;
                                        a1 = a3 - a2;
                                        __return_addr = arg_10 - arg_8;
                                        *edi_1 = (x87_r7_83 - arg_8) * a1 / __return_addr + a2;
                                        *esi_1 = x87_r7_83;
                                    }
                                    else
                                    {
                                        int32_t eax_8 = g_bcabb8;
                                        a1 = a3 - a2;
                                        __return_addr = arg_10 - arg_8;
                                        *edi_1 =
                                            (g_bcabb8 - arg_8) * a1 / __return_addr + a2;
                                        *esi_1 = eax_8;
                                    }

                                    long double x87_r7_84 = *edi_1;
                                    long double temp39_1 = g_bcabbc;
                                    x87_r7_84 - temp39_1;
                                    long double x87_r7_86;
                                    long double temp44_1;

                                    if (!(*(&((x87_r7_84 < temp39_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_84, temp39_1) ? 1 : 0) << 0xa
                                        | (x87_r7_84 == temp39_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    {
                                        x87_r7_86 = g_bcabc4 + g_bcabbc;
                                        temp44_1 = *edi_1;
                                        x87_r7_86 - temp44_1;
                                    }

                                    if (*(&((x87_r7_84 < temp39_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_84, temp39_1) ? 1 : 0) << 0xa
                                        | (x87_r7_84 == temp39_1 ? 1 : 0) << 0xe) + 1) & 1 || *(&(
                                        (x87_r7_86 < temp44_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_86, temp44_1) ? 1 : 0) << 0xa
                                        | (x87_r7_86 == temp44_1 ? 1 : 0) << 0xe) + 1) & 1)
                                    {
                                        long double x87_r7_87 = a2;
                                        long double temp43_1 = a3;
                                        x87_r7_87 - temp43_1;

                                        if (*(&((x87_r7_87 < temp43_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_87, temp43_1) ? 1 : 0) << 0xa
                                            | (x87_r7_87 == temp43_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        {
                                            long double x87_r7_94 = g_bcabc4 + g_bcabbc;
                                            *esi_1 =
                                                (x87_r7_94 - a2) * __return_addr / a1 + arg_8;
                                            *edi_1 = x87_r7_94;
                                        }
                                        else
                                        {
                                            int32_t edx_7 = g_bcabbc;
                                            *esi_1 =
                                                (g_bcabbc - a2) * __return_addr / a1 + arg_8;
                                            *edi_1 = edx_7;
                                        }
                                    }

                                    if (!arg_18)
                                    {
                                    label_51ccab:
                                        long double x87_r7_98 = *esi_1;
                                        long double temp50_1 = g_bcabb8;
                                        x87_r7_98 - temp50_1;

                                        if (!(*(&((x87_r7_98 < temp50_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_98, temp50_1) ? 1 : 0) << 0xa
                                            | (x87_r7_98 == temp50_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_100 = g_bcabc0 + g_bcabb8;
                                            long double temp52_1 = *esi_1;
                                            x87_r7_100 - temp52_1;

                                            if (!(*(&((x87_r7_100 < temp52_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_100, temp52_1) ? 1 : 0) << 0xa
                                                | (x87_r7_100 == temp52_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            {
                                                int32_t eax_9 = 0;
                                                eax_9 = !arg_18;
                                                *ebx_1 = eax_9;
                                                edi_1 = &edi_1[2];
                                                esi_1 = &(*esi_1)[2];
                                                j_10 += 1;
                                                ebx_1 = &ebx_1[1];
                                            }
                                        }
                                    }
                                    else
                                    {
                                        long double x87_r7_95 = *esi_1;
                                        long double temp51_1 = g_bcabb8;
                                        x87_r7_95 - temp51_1;

                                        if (*(&((x87_r7_95 < temp51_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_95, temp51_1) ? 1 : 0) << 0xa
                                                | (x87_r7_95 == temp51_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51ccab;

                                        long double x87_r7_97 = g_bcabc0 + g_bcabb8;
                                        long double temp53_1 = *esi_1;
                                        x87_r7_97 - temp53_1;

                                        if (*(&((x87_r7_97 < temp53_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_97, temp53_1) ? 1 : 0) << 0xa
                                                | (x87_r7_97 == temp53_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51ccab;
                                    }

                                    if (!arg_18)
                                    {
                                        a4 = arg_10;
                                        a5 = a3;
                                        a8 = arg_8;
                                        a9 = a2;
                                    }
                                }
                            }
                        }
                    }

                    cond:0_1 = arg_18 + 1 < 0xa;
                    arg_18 += 1;
                } while (cond:0_1);
                int32_t j = 0;
                float* j_7 = j_10;
                int32_t __saved_edi;
                int32_t* edx_11 = &(&__saved_edi)[j_10 + 0x827];
                float* __return_addr_1 = &(&__saved_edi)[j_10 * 2 + 0x58];
                float arg_38 = a8 - a4;

                do
                {
                    long double x87_r7_105 = (j & 1) * g_bcabc0 + g_bcabb8;
                    long double x87_r6_88 = (j >> 1 & 1) * g_bcabc4 + g_bcabbc;
                    long double x87_r5_30 = arg_38;
                    long double temp8_1 = 0f;
                    x87_r5_30 - temp8_1;
                    bool c1_1 = /* bool c1_1 = unknown  {fsub st0, dword [esp+0x40]} */;
                    long double x87_r5_33 = (a9 - a5) * (x87_r7_105 - a4);
                    long double x87_r5_35;

                    if (*(&((x87_r5_30 < temp8_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(x87_r5_30, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r5_30 == temp8_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
                    {
                        long double temp11_1 = 0f;
                        x87_r5_33 - temp11_1;

                        x87_r5_35 = *(&((x87_r5_33 < temp11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_33, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r5_33 == temp11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41
                            ? -3.40282347e+38f : 3.40282347e+38f;
                    }
                    else
                        x87_r5_35 = x87_r5_33 / arg_38 + a5;

                    x87_r6_88 - x87_r5_35;
                    int32_t eax_20;

                    eax_20 = !(*(&((x87_r6_88 < x87_r5_35 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_88, x87_r5_35) ? 1 : 0) << 0xa
                        | (x87_r6_88 == x87_r5_35 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                    if (eax_20 != a10)
                    {
                        __return_addr_1[-1] = x87_r7_105;
                        *__return_addr_1 = x87_r6_88;
                        int32_t eax_22 = 0;
                        eax_22 = !arg_18;
                        *edx_11 = eax_22;
                        j_7 += 1;
                        __return_addr_1 = &__return_addr_1[2];
                        edx_11 = &edx_11[1];
                    }

                    j += 1;
                } while (j < 4);

                float* j_4 = j_7;
                int32_t ebx_2 = 0;
                float* j_9 = j_4;
                int32_t arg_34 = 0;

                if (j_9 > 0)
                {
                    __return_addr_2 = &(&__saved_edi)[j_9 + 0x827];
                    a1 = &(&__saved_edi)[j_9 * 2 + 0x58];
                    __return_addr = &(&__saved_edi)[j_9 * 2 + 0x57];

                    do
                    {
                        int32_t esi_2 = 0;
                        __return_addr_1 = nullptr;

                        if (j_9 > 0)
                        {
                            float* edx_13 = &arg_14c;

                            do
                            {
                                if (__return_addr_1 != ebx_2)
                                {
                                    long double x87_r7_107 = *(&arg_14c + (ebx_2 << 3));
                                    long double temp33_1 = *edx_13;
                                    x87_r7_107 - temp33_1;

                                    if (*(&((x87_r7_107 < temp33_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_107, temp33_1) ? 1 : 0) << 0xa
                                            | (x87_r7_107 == temp33_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                        esi_2 = 1;
                                }

                                __return_addr_1 += 1;
                                edx_13 = &edx_13[2];
                            } while (__return_addr_1 < j_9);
                        }

                        long double x87_r7_108 = arg_148[ebx_2 * 2];
                        long double temp19_1 = g_bcabb8;
                        x87_r7_108 - temp19_1;
                        long double x87_r7_110;

                        if (!(*(&((x87_r7_108 < temp19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_108, temp19_1) ? 1 : 0) << 0xa
                                | (x87_r7_108 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            x87_r7_110 = g_bcabb8;
                        else
                            x87_r7_110 = g_bcabc0 + g_bcabb8;

                        long double x87_r6_91 = arg_38;
                        long double temp30_1 = 0f;
                        x87_r6_91 - temp30_1;
                        bool c1_2 = /* bool c1_2 = unknown  {fsub st0, dword [esp+0x40]} */;
                        long double x87_r6_94 = (a9 - a5) * (x87_r7_110 - a4);
                        long double x87_r6_96;

                        if (*(&((x87_r6_91 < temp30_1 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                            | (FCMP_UO(x87_r6_91, temp30_1) ? 1 : 0) << 0xa
                            | (x87_r6_91 == temp30_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40)
                        {
                            long double temp38_1 = 0f;
                            x87_r6_94 - temp38_1;

                            x87_r6_96 = *(&((x87_r6_94 < temp38_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_94, temp38_1) ? 1 : 0) << 0xa
                                | (x87_r6_94 == temp38_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                ? -3.40282347e+38f : 3.40282347e+38f;
                        }
                        else
                            x87_r6_96 = x87_r6_94 / arg_38 + a5;

                        if (!esi_2)
                        {
                            long double temp47_1 = *(&arg_14c + (ebx_2 << 3));
                            x87_r6_96 - temp47_1;
                            int32_t eax_26;

                            eax_26 = *(&((x87_r6_96 < temp47_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_96, temp47_1) ? 1 : 0) << 0xa
                                | (x87_r6_96 == temp47_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 ? 0 : 1;

                            int32_t eax_28;

                            if (eax_26 == a10)
                            {
                                long double temp54_1 = (&__saved_edi)[ebx_2 * 2 + 0x58];
                                x87_r6_96 - temp54_1;

                                eax_28 = !(*(&((x87_r6_96 < temp54_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_96, temp54_1) ? 1 : 0) << 0xa
                                    | (x87_r6_96 == temp54_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41) ? 0
                                    : 1;
                            }

                            if (eax_26 == a10 && eax_28 != a10)
                            {
                                long double x87_r7_112 = arg_148[ebx_2 * 2];
                                long double temp55_1 = g_bcabb8;
                                x87_r7_112 - temp55_1;
                                float* __return_addr_6 = 0xffffffff;
                                float* __return_addr_5 = 0xffffffff;
                                j_5 = 1.40129846e-45f;

                                if (*(&((x87_r7_112 < temp55_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_112, temp55_1) ? 1 : 0) << 0xa
                                        | (x87_r7_112 == temp55_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                    j_5 = 0f;

                                __return_addr_1 = nullptr;

                                if (j_4 > 0)
                                {
                                    int32_t edx_18 = 0;
                                    arg_18 = 0;
                                    arg_28 = &arg_2088;

                                    do
                                    {
                                        if (__return_addr_1 != ebx_2)
                                        {
                                            long double x87_r7_113 = *(&arg_14c + edx_18);
                                            long double temp56_1 = *(&arg_14c + (ebx_2 << 3));
                                            x87_r7_113 - temp56_1;

                                            if (*(&((x87_r7_113 < temp56_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_113, temp56_1) ? 1 : 0) << 0xa
                                                | (x87_r7_113 == temp56_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            {
                                                if (__return_addr_6 == 0xffffffff)
                                                {
                                                label_51d044:

                                                    if (*arg_28)
                                                        __return_addr_6 = __return_addr_1;
                                                }
                                                else
                                                {
                                                    long double x87_r7_114 = *(&arg_14c + edx_18);
                                                    long double temp58_1 =
                                                        *(&arg_14c + (__return_addr_6 << 3));
                                                    x87_r7_114 - temp58_1;

                                                    if (!(*(&((x87_r7_114 < temp58_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_114, temp58_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_114 == temp58_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double x87_r7_115 =
                                                            *(&arg_14c + edx_18);
                                                        long double temp61_1 =
                                                            *(&arg_14c + (__return_addr_6 << 3));
                                                        x87_r7_115 - temp61_1;

                                                        if (!(*(&(
                                                                (x87_r7_115 < temp61_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_115, temp61_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_115 == temp61_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x40))
                                                            goto label_51d044;

                                                        long double x87_r7_116 =
                                                            *(&arg_148 + edx_18);
                                                        long double temp64_1 =
                                                            arg_148[__return_addr_6 * 2];
                                                        x87_r7_116 - temp64_1;
                                                        int32_t eax_35;

                                                        eax_35 = *(&(
                                                            (x87_r7_116 < temp64_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_116, temp64_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_116 == temp64_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41 ? 0 : 1;

                                                        int32_t edx_19 = 0;
                                                        ebx_2 = arg_34;
                                                        edx_19 = eax_35 != j_5;
                                                        edx_18 = arg_18;

                                                        if (edx_19)
                                                            goto label_51d044;
                                                    }
                                                }
                                            }

                                            long double x87_r7_117 = *(&arg_14c + edx_18);
                                            long double temp57_1 = *(&arg_14c + (ebx_2 << 3));
                                            x87_r7_117 - temp57_1;

                                            if (!(*(&((x87_r7_117 < temp57_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_117, temp57_1) ? 1 : 0) << 0xa
                                                | (x87_r7_117 == temp57_1 ? 1 : 0) << 0xe) + 1)
                                                & 0x41))
                                            {
                                                if (__return_addr_5 == 0xffffffff)
                                                {
                                                label_51d0ca:

                                                    if (*arg_28)
                                                        __return_addr_5 = __return_addr_1;
                                                }
                                                else
                                                {
                                                    long double x87_r7_118 = *(&arg_14c + edx_18);
                                                    long double temp60_1 =
                                                        *(&arg_14c + (__return_addr_5 << 3));
                                                    x87_r7_118 - temp60_1;

                                                    if (*(&((x87_r7_118 < temp60_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_118, temp60_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_118 == temp60_1 ? 1 : 0) << 0xe) + 1)
                                                        & 0x41)
                                                    {
                                                        long double x87_r7_119 =
                                                            *(&arg_14c + edx_18);
                                                        long double temp63_1 =
                                                            *(&arg_14c + (__return_addr_5 << 3));
                                                        x87_r7_119 - temp63_1;

                                                        if (!(*(&(
                                                                (x87_r7_119 < temp63_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_119, temp63_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_119 == temp63_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x40))
                                                            goto label_51d0ca;

                                                        long double x87_r7_120 =
                                                            *(&arg_148 + edx_18);
                                                        long double temp65_1 =
                                                            arg_148[__return_addr_5 * 2];
                                                        x87_r7_120 - temp65_1;
                                                        int32_t eax_38;

                                                        eax_38 = *(&(
                                                            (x87_r7_120 < temp65_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_120, temp65_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_120 == temp65_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41 ? 0 : 1;

                                                        int32_t edx_20 = 0;
                                                        ebx_2 = arg_34;
                                                        edx_20 = eax_38 != j_5;
                                                        edx_18 = arg_18;

                                                        if (edx_20)
                                                            goto label_51d0ca;
                                                    }
                                                }
                                            }
                                        }

                                        __return_addr_1 += 1;
                                        edx_18 += 8;
                                        arg_28 += 4;
                                        arg_18 = edx_18;
                                    } while (__return_addr_1 < j_4);

                                    if (__return_addr_6 != 0xffffffff
                                        && __return_addr_5 != 0xffffffff)
                                    {
                                        long double x87_r7_121 = arg_148[__return_addr_6 * 2];
                                        long double temp59_1 = arg_148[__return_addr_5 * 2];
                                        x87_r7_121 - temp59_1;
                                        __return_addr_1 =
                                            &(&__saved_edi)[__return_addr_6 * 2 + 0x57];

                                        if (!(*(&((x87_r7_121 < temp59_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_121, temp59_1) ? 1 : 0) << 0xa
                                            | (x87_r7_121 == temp59_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        {
                                            long double x87_r7_125 = (arg_148[__return_addr_5 * 2]
                                                - *__return_addr_1) * (*(&arg_14c + (ebx_2 << 3))
                                                - *(&arg_14c + (__return_addr_6 << 3))) / (
                                                *(&arg_14c + (__return_addr_5 << 3))
                                                - (&__saved_edi)[__return_addr_6 * 2 + 0x58]);
                                            long double x87_r7_126 = x87_r7_125 + *__return_addr_1;
                                            __return_addr_1 = __return_addr;
                                            *__return_addr_1 = x87_r7_126;
                                            x87_r7_110 = *(&arg_14c + (ebx_2 << 3));
                                            *a1 = x87_r7_110;
                                            long double temp62_1 = g_bcabbc;
                                            x87_r7_110 - temp62_1;

                                            if (!(*(&((x87_r7_110 < temp62_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_110, temp62_1) ? 1 : 0) << 0xa
                                                | (x87_r7_110 == temp62_1 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 1))
                                            {
                                                long double x87_r6_104 = g_bcabc4 + g_bcabbc;
                                                x87_r7_110 - x87_r6_104;

                                                if (*(&((x87_r7_110 < x87_r6_104 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_110, x87_r6_104) ? 1 : 0)
                                                    << 0xa | (x87_r7_110 == x87_r6_104 ? 1 : 0) << 0xe)
                                                    + 1) & 0x41)
                                                {
                                                    __return_addr_1 = 8;
                                                    *__return_addr_2 = 0;
                                                    j_4 += 1;
                                                    __return_addr = &__return_addr[2];
                                                    a1 += 8;
                                                    __return_addr_2 += 4;
                                                    ebx_2 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                j_4 = j_9 + 1;
                                *__return_addr = x87_r7_110;
                                *a1 = (&__saved_edi)[ebx_2 * 2 + 0x58];
                                __return_addr_1 = a1 + 8;
                                __return_addr = &__return_addr[2];
                                *__return_addr_2 = 0;
                                a1 = __return_addr_1;
                                __return_addr_2 += 4;
                                ebx_2 = 0;
                            }
                        }

                        ebx_2 += 1;
                        arg_34 = ebx_2;
                        j_9 = j_4;
                    } while (ebx_2 < j_4);
                }

                float __return_addr_4 = -3.40282347e+38f;
                float arg_7c = -3.40282347e+38f;
                void arg_3fc8;

                if (j_9 > 0)
                {
                    int32_t* ebx_5 = &arg_3fc8;
                    j_5 = j_4;
                    bool cond:6_1;

                    do
                    {
                        int32_t esi_5 = 0xffffffff;
                        float __return_addr_3 = 3.40282347e+38f;
                        float arg_48 = 3.40282347e+38f;
                        int32_t edx_23 = 0;
                        float* ecx_11 = &arg_14c;

                        do
                        {
                            long double x87_r7_129 = arg_7c;
                            long double temp23_1 = *ecx_11;
                            x87_r7_129 - temp23_1;

                            if (*(&((x87_r7_129 < temp23_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_129, temp23_1) ? 1 : 0) << 0xa
                                | (x87_r7_129 == temp23_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                            label_51d250:
                                long double x87_r7_132 = *ecx_11;
                                long double temp28_1 = arg_48;
                                x87_r7_132 - temp28_1;

                                if (*(&((x87_r7_132 < temp28_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_132, temp28_1) ? 1 : 0) << 0xa
                                    | (x87_r7_132 == temp28_1 ? 1 : 0) << 0xe) + 1) & 1)
                                {
                                label_51d27b:
                                    esi_5 = edx_23;
                                    __return_addr_3 = ecx_11[-1];
                                    arg_48 = *ecx_11;
                                }
                                else
                                {
                                    long double x87_r7_133 = ecx_11[-1];
                                    long double temp36_1 = __return_addr_3;
                                    x87_r7_133 - temp36_1;

                                    if (*(&((x87_r7_133 < temp36_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_133, temp36_1) ? 1 : 0) << 0xa
                                        | (x87_r7_133 == temp36_1 ? 1 : 0) << 0xe) + 1) & 1)
                                    {
                                        long double x87_r7_134 = *ecx_11;
                                        long double temp41_1 = arg_48;
                                        x87_r7_134 - temp41_1;

                                        if (*(&((x87_r7_134 < temp41_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_134, temp41_1) ? 1 : 0) << 0xa
                                                | (x87_r7_134 == temp41_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51d27b;
                                    }
                                }
                            }
                            else
                            {
                                long double x87_r7_130 = __return_addr_4;
                                long double temp29_1 = ecx_11[-1];
                                x87_r7_130 - temp29_1;

                                if (*(&((x87_r7_130 < temp29_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_130, temp29_1) ? 1 : 0) << 0xa
                                    | (x87_r7_130 == temp29_1 ? 1 : 0) << 0xe) + 1) & 1)
                                {
                                    long double x87_r7_131 = arg_7c;
                                    long double temp37_1 = *ecx_11;
                                    x87_r7_131 - temp37_1;

                                    if (*(&((x87_r7_131 < temp37_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_131, temp37_1) ? 1 : 0) << 0xa
                                            | (x87_r7_131 == temp37_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                        goto label_51d250;
                                }
                            }

                            edx_23 += 1;
                            ecx_11 = &ecx_11[2];
                        } while (edx_23 < j_4);

                        __return_addr_1 = __return_addr_3;
                        *ebx_5 = esi_5;
                        ebx_5 = &ebx_5[1];
                        cond:6_1 = j_5 != 1;
                        __return_addr_4 = __return_addr_1;
                        arg_7c = arg_48;
                        j_5 -= 1;
                    } while (cond:6_1);
                }

                int32_t esi_6 = 0;
                int32_t arg_3028[0x3e8];
                int32_t arg_4f68[0x7d0];
                arg_4f6c;
                int32_t arg_6ea8[0x3e8];

                if (j_4 > 0)
                {
                    j_5 = -(arg_40);

                    do
                    {
                        long double x87_r7_139 = (arg_148[esi_6 * 2] - arg_b4) / g_bcab28;
                        long double x87_r6_109 =
                            (*(&arg_14c + (esi_6 << 3)) - arg_b8) / g_bcab2c;
                        float arg_4c =
                            x87_r6_109 * g_bcaaec + x87_r7_139 * g_bcaae0 + g_bcaaf8;
                        long double x87_r5_44 = x87_r6_109 * g_bcaaf0;
                        long double x87_r4_8 = x87_r7_139 * g_bcaae4;
                        float arg_9c = arg_4c;
                        float arg_50 = x87_r5_44 + x87_r4_8 + g_bcaafc;
                        float arg_54 =
                            x87_r6_109 * g_bcaaf4 + x87_r7_139 * g_bcaae8 + g_bcab00;
                        long double x87_r7_143 = arg_4c;
                        long double temp22_1 = 0f;
                        x87_r7_143 - temp22_1;

                        if (!(*(&((x87_r7_143 < temp22_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_143, temp22_1) ? 1 : 0) << 0xa
                            | (x87_r7_143 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_51d39f:
                            long double x87_r7_146 = arg_54;
                            long double x87_r6_113 = arg_50;
                            long double x87_r5_47 = arg_4c;
                            long double x87_r7_148 = 1.0 / sqrtl(x87_r5_47 * x87_r5_47
                                + x87_r6_113 * x87_r6_113 + x87_r7_146 * x87_r7_146);
                            arg_9c = arg_4c * x87_r7_148;
                            float arg_a0 = arg_50 * x87_r7_148;
                            float arg_a4 = arg_54 * x87_r7_148;
                        }
                        else
                        {
                            long double x87_r7_144 = arg_50;
                            long double temp27_1 = 0f;
                            x87_r7_144 - temp27_1;

                            if (!(*(&((x87_r7_144 < temp27_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_144, temp27_1) ? 1 : 0) << 0xa
                                    | (x87_r7_144 == temp27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_51d39f;

                            long double x87_r7_145 = arg_54;
                            long double temp35_1 = 0f;
                            x87_r7_145 - temp35_1;

                            if (!(*(&((x87_r7_145 < temp35_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_145, temp35_1) ? 1 : 0) << 0xa
                                    | (x87_r7_145 == temp35_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_51d39f;
                        }

                        float arg_d0 = 0f;
                        float arg_d4 = 0f;
                        long double x87_r7_150 = j_5;
                        long double temp34_1 = 0f;
                        x87_r7_150 - temp34_1;
                        float arg_80 = 0f;
                        float arg_84 = 0f;

                        if (!(*(&((x87_r7_150 < temp34_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_150, temp34_1) ? 1 : 0) << 0xa
                            | (x87_r7_150 == temp34_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            long double x87_r7_151 = j_5;
                            long double x87_r6_122 = 0f;
                            arg_80 = x87_r6_122;
                            arg_84 = x87_r6_122;
                            float arg_88 = j_5 * 1.0 / sqrtl(x87_r7_151 * x87_r7_151);
                        }

                        float arg_64;
                        sub_4b2c70(&arg_64, &arg_d0, &arg_9c, &arg_80);
                        arg_64 = arg_64 - arg_d0;
                        a6 = a6 - arg_d4;
                        a7 = a7 - j_5;
                        long double x87_r7_164 = (g_bcab08 + 1073741824.0) * *(i_1 + 0x248);
                        double arg_140 = (g_bcab10 + 1073741824.0) * *(i_1 + 0x248);
                        __return_addr_2 = x87_r7_164;
                        __return_addr_1 = __return_addr_2;
                        __return_addr_2 = __return_addr_1;
                        long double x87_r7_165 = x87_r7_164 - __return_addr_2;
                        __return_addr_2 = arg_140;
