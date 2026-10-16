#include "004CA010-DynObj_InsertHashItem_10.h"
/* 0x004ca010 DynObj_InsertHashItem_10 full linked: callers=1 callees=0 */
int32_t sub_4ca010(int16_t* a1, double* a2, double* a3, double* a4, char a5, int32_t* a6, int32_t a7, int32_t a8, float* a9)

{
    int32_t eax_101 = g_ba2058;
    int32_t var_3b4;
    int32_t var_39c;
    float var_380;
    float var_37c;
    float var_374;
    int32_t ebx_1;
    int32_t ebp;
    double* esi;

    if (!eax_101)
    {
        ebx_1 = var_3b4;
        ebp = var_39c;
        esi = a2;
    }
    else
    {
        esi = a2;
        int32_t eax_1 = eax_101 * 0x30;
        var_380 = *(eax_1 + 0xba2048) - *esi;
        ebp = (&g_ba2058)[eax_101 * 0xc];
        ebx_1 = *(eax_1 + 0xba203c) + 3;
        var_37c = *(eax_1 + 0xba2050) - esi[1];
        var_374 = (&g_ba2040)[eax_101 * 6];
        var_3b4 = ebx_1;
        var_39c = ebp;
    }

    float var_354 = 1f;
    g_a44398 += 1;
    int32_t edx_1 = a1[3] + a1[2];
    int32_t* edi_3 = a1[1] + &a1[4];
    uint32_t eax_6 = a7 & 4;
    int32_t* var_310 = &a1[4];
    int32_t var_3ac = edx_1;
    uint32_t var_34c = eax_6;

    if (eax_6)
        var_354 = -1f;

    float var_378 = (0x40000000 >> (a5 & 0x1f)) * 0.041666666666666664;
    float var_360 = *a3 - *esi;
    float var_35c = a3[1] - esi[1];
    long double x87_r7_12 = a3[2] - esi[2];
    float var_358;
    long double x87_r7_14;

    if (a8)
    {
        var_358 = x87_r7_12 - 0.100000001f;
        x87_r7_14 = 268435456f;
    }
    else
    {
        var_358 = x87_r7_12 + 0.100000001f;
        x87_r7_14 = -268435456f;
    }

    void var_300;
    float* esi_1 = &var_300;
    int32_t var_3b0 = 0;
    int32_t var_350 = a7 & 1;
    int32_t var_3a4_3;
    bool cond:2_1;

    do
    {
        int32_t eax_12 = *edi_3;
        var_3a4_3 = (eax_12 >> 0xe & 0x3f) - 0x18;
        long double x87_r6_2 = ((eax_12 >> 0x1a & 0x3f) - 0x18) * var_378;
        float var_394_2 = ((eax_12 >> 0x14 & 0x3f) - 0x18) * var_378;
        float var_390_2 = var_3a4_3 * var_378;

        if (var_34c)
            x87_r6_2 = -(x87_r6_2);

        if (var_350)
        {
            float var_370_1 = var_394_2;

            if (!(a7 & 2))
            {
                var_394_2 = x87_r6_2;
                x87_r6_2 = -(var_370_1);
            }
            else
            {
                var_394_2 = -(x87_r6_2);
                x87_r6_2 = var_370_1;
            }
        }
        else if (a7 & 2)
        {
            x87_r6_2 = -(x87_r6_2);
            var_394_2 = -(var_394_2);
        }

        if (g_ba2058)
        {
            long double x87_r5_11 = (x87_r6_2 - var_380) * var_374;
            float var_3a8_1 = (var_394_2 - var_37c) * var_374;
            var_3a4_3 = x87_r5_11;
            int32_t eax_21 = var_3a8_1;
            long double x87_r5_12 = x87_r5_11 - var_3a4_3;
            int32_t var_3a4_5 = eax_21;
            int32_t ecx_14 = (eax_21 << (ebx_1 & 0x1f)) + eax_21;
            ebx_1 = var_3b4;
            long double x87_r3_1 = *(ecx_14 + var_3a4_3 + ebp);
            long double x87_r2_1 = *(ecx_14 + var_3a4_3 + 1 + ebp);
            void* ebp_4 = ((eax_21 + 1) << (ebx_1 & 0x1f)) + eax_21 + 1 + var_3a4_3 + 1;
            ebp = var_39c;
            float var_3a8_2 = *(ebp_4 + ebp - 1);
            var_3a4_3 = *(ebp_4 + ebp);
            edx_1 = var_3ac;
            long double x87_r3_2 = x87_r3_1 + (x87_r2_1 - x87_r3_1) * x87_r5_12;
            var_390_2 = (
                ((var_3a4_3 - var_3a8_2) * x87_r5_12 + var_3a8_2 - x87_r3_2) * (var_3a8_1 - eax_21)
                + x87_r3_2 - 64f) * 256f + var_390_2;
        }

        *esi_1 = x87_r6_2;
        edi_3 = &edi_3[1];
        esi_1[1] = var_394_2;
        esi_1[2] = var_390_2;
        esi_1 = &esi_1[3];
        cond:2_1 = var_3b0 + 1 < edx_1;
        var_3b0 += 1;
    } while (cond:2_1);
    int32_t var_370_2 = 0;
    int32_t eax_27 = *a1;

    if (eax_27 > 0)
    {
        int32_t var_318 = eax_27;
        int32_t __saved_edi;
        float var_348;
        float var_344;
        float var_340;
        bool cond:4_1;

        do
        {
            int32_t ebx_6 = 0;
            int24_t eax_28 = *var_310;
            ebx_6 = *(&eax_28 + 1);
            int32_t eax_29 = 0;
            eax_29 = *(&eax_28 + 2);
            uint32_t edi_5 = eax_28;
            var_310 = &var_310[1];
            uint32_t ecx_22 = edi_5 * 3;
            long double x87_r6_5 = *(&var_300 + (ecx_22 << 2));
            float var_3b4_1 = x87_r6_5;
            float eax_31 = (&__saved_edi)[ebx_6 * 3 + 0x31];
            long double x87_r5_14 = eax_31;
            x87_r5_14 - x87_r6_5;

            if (!(*(&((x87_r5_14 < x87_r6_5 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r5_14 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double x87_r5_15 = eax_31;
                x87_r5_15 - x87_r6_5;

                if (!(*(&((x87_r5_15 < x87_r6_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_15, x87_r6_5) ? 1 : 0) << 0xa
                        | (x87_r5_15 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    var_3b4_1 = eax_31;
            }
            else
                x87_r6_5 = eax_31;

            float eax_34 = (&__saved_edi)[eax_29 * 3 + 0x31];
            long double x87_r5_16 = eax_34;
            x87_r5_16 - x87_r6_5;

            if (!(*(&((x87_r5_16 < x87_r6_5 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_16, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r5_16 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double x87_r5_17 = eax_34;
                long double temp0_1 = var_3b4_1;
                x87_r5_17 - temp0_1;

                if (!(*(&((x87_r5_17 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_17, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r5_17 == temp0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    var_3b4_1 = eax_34;
            }
            else
                x87_r6_5 = eax_34;

            long double x87_r6_8 = x87_r6_5 - 0.00999999978f;
            long double temp1_1 = var_360;
            x87_r6_8 - temp1_1;

            if (*(&((x87_r6_8 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, temp1_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_10 = var_3b4_1 + 0.00999999978f;
                long double temp3_1 = var_360;
                x87_r6_10 - temp3_1;

                if (!(*(&((x87_r6_10 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    float eax_37 = (&__saved_edi)[ecx_22 + 0x32];
                    float eax_38 = (&__saved_edi)[ebx_6 * 3 + 0x32];
                    long double x87_r6_11 = eax_37;
                    float eax_39 = (&__saved_edi)[eax_29 * 3 + 0x32];
                    long double x87_r5_18 = eax_38;
                    long double temp4_1 = eax_37;
                    x87_r5_18 - temp4_1;
                    float var_3b4_2 = eax_37;

                    if (!(*(&((x87_r5_18 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_18, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r5_18 == temp4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    {
                        long double x87_r5_19 = eax_38;
                        long double temp6_1 = eax_37;
                        x87_r5_19 - temp6_1;

                        if (!(*(&((x87_r5_19 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_19, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r5_19 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            var_3b4_2 = eax_38;
                    }
                    else
                        x87_r6_11 = eax_38;

                    long double x87_r5_20 = eax_39;
                    x87_r5_20 - x87_r6_11;

                    if (!(*(&((x87_r5_20 < x87_r6_11 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_20, x87_r6_11) ? 1 : 0) << 0xa
                        | (x87_r5_20 == x87_r6_11 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    {
                        long double x87_r5_21 = eax_39;
                        long double temp7_1 = var_3b4_2;
                        x87_r5_21 - temp7_1;

                        if (!(*(&((x87_r5_21 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_21, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r5_21 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            var_3b4_2 = eax_39;
                    }
                    else
                        x87_r6_11 = eax_39;

                    long double x87_r6_14 = x87_r6_11 - 0.00999999978f;
                    long double temp8_1 = var_35c;
                    x87_r6_14 - temp8_1;

                    if (*(&((x87_r6_14 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r6_16 = var_3b4_2 + 0.00999999978f;
                        long double temp9_1 = var_35c;
                        x87_r6_16 - temp9_1;

                        if (!(*(&((x87_r6_16 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_16, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r6_16 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            long double x87_r6_17 = eax_38;
                            long double temp10_1 = eax_37;
                            x87_r6_17 - temp10_1;
                            long double x87_r6_18 = eax_39;
                            float var_398_1;
                            float var_394_3;
                            float var_390_3;
                            float var_38c_1;
                            float var_388_1;
                            float var_384_1;
                            float var_304_1;
                            long double x87_r5_22;
                            long double x87_r6_20;
                            float eax_54;

                            if (!(*(&((x87_r6_17 < temp10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_17, temp10_1) ? 1 : 0) << 0xa
                                | (x87_r6_17 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                                long double temp11_1 = eax_38;
                                x87_r6_18 - temp11_1;

                                if (!(*(&((x87_r6_18 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_18, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r6_18 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    x87_r6_20 = (&__saved_edi)[ebx_6 * 3 + 0x31];
                                    var_38c_1 = (&__saved_edi)[ecx_22 + 0x31];
                                    x87_r5_22 = eax_38;
                                    var_384_1 = (&__saved_edi)[ecx_22 + 0x33];
                                    var_388_1 = eax_37;
                                    var_304_1 = (&__saved_edi)[ebx_6 * 3 + 0x33];
                                label_4ca623:
                                    var_398_1 = (&__saved_edi)[eax_29 * 3 + 0x31];
                                    var_390_3 = (&__saved_edi)[eax_29 * 3 + 0x33];
                                    var_394_3 = eax_39;
                                }
                                else
                                {
                                    long double x87_r6_21 = eax_39;
                                    long double temp13_1 = eax_37;
                                    x87_r6_21 - temp13_1;
                                    var_398_1 = (&__saved_edi)[ebx_6 * 3 + 0x31];
                                    var_390_3 = (&__saved_edi)[ebx_6 * 3 + 0x33];
                                    var_394_3 = eax_38;

                                    if (!(*(&((x87_r6_21 < temp13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_21, temp13_1) ? 1 : 0) << 0xa
                                        | (x87_r6_21 == temp13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        var_38c_1 = (&__saved_edi)[ecx_22 + 0x31];
                                        var_384_1 = (&__saved_edi)[ecx_22 + 0x33];
                                        eax_54 = eax_37;
                                    label_4ca54d:
                                        x87_r6_20 = (&__saved_edi)[eax_29 * 3 + 0x31];
                                        x87_r5_22 = eax_39;
                                        var_388_1 = eax_54;
                                        var_304_1 = (&__saved_edi)[eax_29 * 3 + 0x33];
                                    }
                                    else
                                    {
                                        x87_r6_20 = (&__saved_edi)[ecx_22 + 0x31];
                                        var_38c_1 = (&__saved_edi)[eax_29 * 3 + 0x31];
                                        x87_r5_22 = eax_37;
                                        var_384_1 = (&__saved_edi)[eax_29 * 3 + 0x33];
                                        var_388_1 = eax_39;
                                        var_304_1 = (&__saved_edi)[ecx_22 + 0x33];
                                    }
                                }
                            }
                            else
                            {
                                long double temp12_1 = eax_37;
                                x87_r6_18 - temp12_1;

                                if (!(*(&((x87_r6_18 < temp12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_18, temp12_1) ? 1 : 0) << 0xa
                                    | (x87_r6_18 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    x87_r6_20 = (&__saved_edi)[ecx_22 + 0x31];
                                    var_38c_1 = (&__saved_edi)[ebx_6 * 3 + 0x31];
                                    x87_r5_22 = eax_37;
                                    var_384_1 = (&__saved_edi)[ebx_6 * 3 + 0x33];
                                    var_388_1 = eax_38;
                                    var_304_1 = (&__saved_edi)[ecx_22 + 0x33];
                                    goto label_4ca623;
                                }

                                long double x87_r6_19 = eax_39;
                                long double temp14_1 = eax_38;
                                x87_r6_19 - temp14_1;
                                var_398_1 = (&__saved_edi)[ecx_22 + 0x31];
                                var_390_3 = (&__saved_edi)[ecx_22 + 0x33];
                                var_394_3 = eax_37;

                                if (!(*(&((x87_r6_19 < temp14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_19, temp14_1) ? 1 : 0) << 0xa
                                    | (x87_r6_19 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    var_38c_1 = (&__saved_edi)[ebx_6 * 3 + 0x31];
                                    var_384_1 = (&__saved_edi)[ebx_6 * 3 + 0x33];
                                    eax_54 = eax_38;
                                    goto label_4ca54d;
                                }

                                x87_r6_20 = (&__saved_edi)[ebx_6 * 3 + 0x31];
                                var_38c_1 = (&__saved_edi)[eax_29 * 3 + 0x31];
                                x87_r5_22 = eax_38;
                                var_384_1 = (&__saved_edi)[eax_29 * 3 + 0x33];
                                var_388_1 = eax_39;
                                var_304_1 = (&__saved_edi)[ebx_6 * 3 + 0x33];
                            }
                            float var_3b4_3 = var_35c - var_388_1;
                            long double x87_r4_13 = var_3b4_3 / (var_394_3 - var_388_1);
                            float var_378_1 = (var_398_1 - var_38c_1) * x87_r4_13 + var_38c_1;
                            float var_374_2 = (var_390_3 - var_384_1) * x87_r4_13 + var_384_1;
                            long double x87_r4_15 = var_35c;
                            x87_r4_15 - x87_r5_22;
                            long double x87_r4_16;

                            if (*(&((x87_r4_15 < x87_r5_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_15, x87_r5_22) ? 1 : 0) << 0xa
                                | (x87_r4_15 == x87_r5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                            {
                                x87_r4_16 = var_388_1;
                                x87_r4_16 - x87_r5_22;
                            }

                            long double x87_r5_28;
                            long double x87_r6_24;

                            if (!(*(&((x87_r4_15 < x87_r5_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_15, x87_r5_22) ? 1 : 0) << 0xa
                                | (x87_r4_15 == x87_r5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41) || *(
                                &((x87_r4_16 < x87_r5_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_16, x87_r5_22) ? 1 : 0) << 0xa
                                | (x87_r4_16 == x87_r5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40)
                            {
                                float var_3b4_5 = (var_35c - x87_r5_22) / (var_394_3 - x87_r5_22);
                                x87_r6_24 = x87_r6_20 + (var_398_1 - x87_r6_20) * var_3b4_5;
                                x87_r5_28 = (var_390_3 - var_304_1) * var_3b4_5 + var_304_1;
                            }
                            else
                            {
                                float var_3b4_4 = var_3b4_3 / (x87_r5_22 - var_388_1);
                                x87_r6_24 = (x87_r6_20 - var_38c_1) * var_3b4_4 + var_38c_1;
                                x87_r5_28 = (var_304_1 - var_384_1) * var_3b4_4 + var_384_1;
                            }

                            long double x87_r5_37 = var_378_1 - 0.00999999978f;
                            long double temp15_1 = var_360;
                            x87_r5_37 - temp15_1;
                            long double x87_r5_39;
                            long double temp17_1;

                            if (*(&((x87_r5_37 < temp15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_37, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r5_37 == temp15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                            {
                                x87_r5_39 = x87_r6_24 + 0.00999999978f;
                                temp17_1 = var_360;
                                x87_r5_39 - temp17_1;
                            }

                            if (*(&((x87_r5_37 < temp15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_37, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r5_37 == temp15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 && !(*(
                                &((x87_r5_39 < temp17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_39, temp17_1) ? 1 : 0) << 0xa
                                | (x87_r5_39 == temp17_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                            label_4ca74d:
                                long double x87_r6_25 = x87_r6_24 - var_378_1;
                                long double temp19_1 = 0f;
                                x87_r6_25 - temp19_1;
                                g_a4439c += 1;
                                float var_3a8_3 = var_374_2;

                                if (!(*(&((x87_r6_25 < temp19_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_25, temp19_1) ? 1 : 0) << 0xa
                                        | (x87_r6_25 == temp19_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    var_3a8_3 =
                                        (var_360 - var_378_1) / x87_r6_25 * (x87_r5_28 - var_374_2)
                                        + var_374_2;

                                long double x87_r6_27 = var_3a8_3;
                                x87_r6_27 - x87_r7_14;
                                int16_t eax_80 = (x87_r6_27 < x87_r7_14 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_27, x87_r7_14) ? 1 : 0) << 0xa
                                    | (x87_r6_27 == x87_r7_14 ? 1 : 0) << 0xe | 0x3800;

                                if (!a8)
                                {
                                    if (!(*(&eax_80 + 1) & 1))
                                    {
                                        long double x87_r6_40 = var_3a8_3;
                                        long double temp20_1 = var_358;
                                        x87_r6_40 - temp20_1;

                                        if (*(&((x87_r6_40 < temp20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_40, temp20_1) ? 1 : 0) << 0xa
                                            | (x87_r6_40 == temp20_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41)
                                        {
                                            long double x87_r7_29 = (&__saved_edi)[ebx_6 * 3 + 0x31]
                                                - (&__saved_edi)[ecx_22 + 0x31];
                                            long double x87_r6_42 = (&__saved_edi)[ebx_6 * 3 + 0x32]
                                                - (&__saved_edi)[ecx_22 + 0x32];
                                            long double x87_r5_58 = (&__saved_edi)[ebx_6 * 3 + 0x33]
                                                - (&__saved_edi)[ecx_22 + 0x33];
                                            float var_324_2 = (&__saved_edi)[eax_29 * 3 + 0x31]
                                                - (&__saved_edi)[ecx_22 + 0x31];
                                            float var_320_2 = (&__saved_edi)[eax_29 * 3 + 0x32]
                                                - (&__saved_edi)[ecx_22 + 0x32];
                                            long double x87_r4_43 =
                                                (&__saved_edi)[eax_29 * 3 + 0x33]
                                                - (&__saved_edi)[ecx_22 + 0x33];
                                            float var_330_1 =
                                                x87_r4_43 * x87_r6_42 - var_320_2 * x87_r5_58;
                                            float ecx_26 = var_330_1;
                                            float var_32c_1 =
                                                -((x87_r4_43 * x87_r7_29 - var_324_2 * x87_r5_58));
                                            float var_368_2 = var_32c_1;
                                            float var_328_1 =
                                                var_320_2 * x87_r7_29 - var_324_2 * x87_r6_42;
                                            long double x87_r7_31 = var_330_1;
                                            long double temp22_1 = 0f;
                                            x87_r7_31 - temp22_1;
                                            float var_364_2 = var_328_1;

                                            if (!(*(&((x87_r7_31 < temp22_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_31, temp22_1) ? 1 : 0) << 0xa
                                                | (x87_r7_31 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            {
                                            label_4caa1b:
                                                long double x87_r7_34 = var_328_1;
                                                long double x87_r6_44 = var_32c_1;
                                                long double x87_r5_63 = var_330_1;
                                                long double x87_r7_36 = 1.0 / sqrtl(
                                                    x87_r5_63 * x87_r5_63 + x87_r6_44 * x87_r6_44
                                                    + x87_r7_34 * x87_r7_34);
                                                var_368_2 = var_368_2 * x87_r7_36;
                                                ecx_26 = var_330_1 * x87_r7_36;
                                                var_364_2 = var_364_2 * x87_r7_36;
                                            }
                                            else
                                            {
                                                long double x87_r7_32 = var_32c_1;
                                                long double temp24_1 = 0f;
                                                x87_r7_32 - temp24_1;

                                                if (!(*(&((x87_r7_32 < temp24_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_32, temp24_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_32 == temp24_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x40))
                                                    goto label_4caa1b;

                                                long double x87_r7_33 = var_328_1;
                                                long double temp26_1 = 0f;
                                                x87_r7_33 - temp26_1;

                                                if (!(*(&((x87_r7_33 < temp26_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_33, temp26_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_33 == temp26_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x40))
                                                    goto label_4caa1b;
                                            }

                                            var_348 = ecx_26;
                                            var_370_2 = 1;
                                            x87_r7_14 = var_3a8_3;
                                            var_34c = edi_5;
                                            var_3a4_3 = ebx_6;
                                            var_350 = eax_29;
                                            var_344 = var_368_2;
                                            var_340 = var_364_2;
                                        }
                                    }
                                }
                                else if (*(&eax_80 + 1) & 0x41)
                                {
                                    long double x87_r6_28 = var_3a8_3;
                                    long double temp21_1 = var_358;
                                    x87_r6_28 - temp21_1;

                                    if (!(*(&((x87_r6_28 < temp21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_28, temp21_1) ? 1 : 0) << 0xa
                                        | (x87_r6_28 == temp21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        long double x87_r7_18 = (&__saved_edi)[ebx_6 * 3 + 0x31]
                                            - (&__saved_edi)[ecx_22 + 0x31];
                                        long double x87_r6_30 = (&__saved_edi)[ebx_6 * 3 + 0x32]
                                            - (&__saved_edi)[ecx_22 + 0x32];
                                        long double x87_r5_50 = (&__saved_edi)[ebx_6 * 3 + 0x33]
                                            - (&__saved_edi)[ecx_22 + 0x33];
                                        float var_324_1 = (&__saved_edi)[eax_29 * 3 + 0x31]
                                            - (&__saved_edi)[ecx_22 + 0x31];
                                        float var_320_1 = (&__saved_edi)[eax_29 * 3 + 0x32]
                                            - (&__saved_edi)[ecx_22 + 0x32];
                                        long double x87_r4_27 = (&__saved_edi)[eax_29 * 3 + 0x33]
                                            - (&__saved_edi)[ecx_22 + 0x33];
                                        float var_33c_1 =
                                            x87_r4_27 * x87_r6_30 - var_320_1 * x87_r5_50;
                                        float ecx_24 = var_33c_1;
                                        float var_338_1 =
                                            -((x87_r4_27 * x87_r7_18 - var_324_1 * x87_r5_50));
                                        float var_368_1 = var_338_1;
                                        float var_334_1 =
                                            var_320_1 * x87_r7_18 - var_324_1 * x87_r6_30;
                                        long double x87_r7_20 = var_33c_1;
                                        long double temp23_1 = 0f;
                                        x87_r7_20 - temp23_1;
                                        float var_364_1 = var_334_1;

                                        if (!(*(&((x87_r7_20 < temp23_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_20, temp23_1) ? 1 : 0) << 0xa
                                            | (x87_r7_20 == temp23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        {
                                        label_4ca898:
                                            long double x87_r7_23 = var_334_1;
                                            long double x87_r6_32 = var_338_1;
                                            long double x87_r5_55 = var_33c_1;
                                            long double x87_r7_25 = 1.0 / sqrtl(
                                                x87_r5_55 * x87_r5_55 + x87_r6_32 * x87_r6_32
                                                + x87_r7_23 * x87_r7_23);
                                            var_368_1 = var_368_1 * x87_r7_25;
                                            ecx_24 = var_33c_1 * x87_r7_25;
                                            var_364_1 = var_364_1 * x87_r7_25;
                                        }
                                        else
                                        {
                                            long double x87_r7_21 = var_338_1;
                                            long double temp25_1 = 0f;
                                            x87_r7_21 - temp25_1;

                                            if (!(*(&((x87_r7_21 < temp25_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_21, temp25_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_21 == temp25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                                goto label_4ca898;

                                            long double x87_r7_22 = var_334_1;
                                            long double temp27_1 = 0f;
                                            x87_r7_22 - temp27_1;

                                            if (!(*(&((x87_r7_22 < temp27_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_22, temp27_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_22 == temp27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                                goto label_4ca898;
                                        }

                                        var_348 = ecx_24;
                                        var_370_2 = 1;
                                        x87_r7_14 = var_3a8_3;
                                        var_34c = edi_5;
                                        var_3a4_3 = ebx_6;
                                        var_350 = eax_29;
                                        var_344 = var_368_1;
                                        var_340 = var_364_1;
                                    }
                                }
                            }
                            else
                            {
                                long double x87_r5_41 = var_378_1 + 0.00999999978f;
                                long double temp16_1 = var_360;
                                x87_r5_41 - temp16_1;

                                if (!(*(&((x87_r5_41 < temp16_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_41, temp16_1) ? 1 : 0) << 0xa
                                    | (x87_r5_41 == temp16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                {
                                    long double x87_r5_43 = x87_r6_24 - 0.00999999978f;
                                    long double temp18_1 = var_360;
                                    x87_r5_43 - temp18_1;

                                    if (*(&((x87_r5_43 < temp18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_43, temp18_1) ? 1 : 0) << 0xa
                                            | (x87_r5_43 == temp18_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                                        goto label_4ca74d;
                                }
                            }
                        }
                    }
                }
            }

            cond:4_1 = var_318 != 1;
            var_318 -= 1;
        } while (cond:4_1);

        if (var_370_2)
        {
            int32_t var_2fc[0xbf];
            long double x87_r6_56 = (*(&var_300 + var_3a4_3 * 0xc) - *(&var_300 + var_34c * 0xc))
                * (var_2fc[var_350 * 3] - (&__saved_edi)[var_34c * 3 + 0x32])
                - (*(&var_300 + var_350 * 0xc) - (&__saved_edi)[var_34c * 3 + 0x31])
                * (var_2fc[var_3a4_3 * 3] - (&__saved_edi)[var_34c * 3 + 0x32]);
            long double x87_r6_57 = x87_r6_56 * var_354;
            long double temp5 = 0.0;
            x87_r6_57 - temp5;

            if (!(*(&((x87_r6_57 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_57, temp5) ? 1 : 0) << 0xa
                    | (x87_r6_57 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                *a6 = a8 ^ 1;
            else
                *a6 = a8;

            *a9 = var_348 * var_354;
            a9[1] = var_344 * var_354;
            a9[2] = var_340 * var_354;
            *a4 = var_360 + *a2;
            a4[1] = var_35c + a2[1];
            a4[2] = x87_r7_14 + a2[2];
            return 1;
        }
    }

    return 0;
}
