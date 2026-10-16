#include "00510010-Terrain_RenderQuadtree.h"
/* 0x00510010 Terrain_RenderQuadtree full linked: callers=1 callees=6 */
int32_t sub_510010()

{
    int32_t ebp;
    int32_t var_4 = ebp;
    int32_t eax = g_54eba0;
    int32_t* var_c30 = &var_4;
    int32_t result = g_b16ca4;
    int32_t var_b84 = g_54eba4;
    void* ebp_1 = &g_b16ce0;
    int32_t var_a90 = 0;
    int32_t var_b48 = 0xffffffff;
    void* var_b98 = &g_b16ce0;
    int32_t result_2 = result;
    g_c31090 += result;
    int32_t result_1 = 0;

    if (result > 0)
    {
        do
        {
            int32_t edx_1 = *(ebp_1 + 0x18);
            int24_t ebx_1 = *(ebp_1 + 0x24);
            int32_t edx_2 = *(ebp_1 + 0x1c);
            double var_b24;
            memcpy(&var_b24, ebp_1, 0x18);
            void* eax_1 = *(ebp_1 + 0x2c);
            int32_t edx_3 = edx_2 & 1;
            int32_t ecx_1 = 0;
            ecx_1 = *(&ebx_1 + 2);
            uint32_t ebx_2 = ebx_1;
            int32_t edx_5 = g_b12b68;
            int32_t var_c20_1 = ecx_1;

            if (edx_5 <= g_b12b6c - 3)
            {
                int32_t ecx_16 = *(g_b12b64 + (edx_5 << 2)) * g_b12b70 + g_b12b60;
                *(g_b12b74 + ecx_16) = edx_5;
                g_b12b68 += 1;
                *(eax_1 + 0x18) = ecx_16;
                *(eax_1 + 0x14) = 0;
            label_5101bf:
                int32_t ecx_17 = g_b16c9c;
                int16_t* esi_9 = *(ebp_1 + 0x20);
                *((ecx_17 << 2) + &g_b12c60) = *(eax_1 + 0x18);
                g_b16c9c = ecx_17 + 1;
                void* edx_17 = *(eax_1 + 0x18);
                int32_t* eax_3 = esi_9[1] + &esi_9[4];
                int32_t* var_bc8_1 = eax_3;
                int32_t var_bd8_2 = 0;
                float var_b5c;
                float var_b44;
                int32_t var_afc;
                float var_af8;
                float var_af4;

                if (ebx_2 != 0xffff)
                {
                    var_bd8_2 = 1;
                    uint32_t eax_5 = ebx_2 * 0x30;
                    var_b44 = *(eax_5 + 0xba80b0) * 0.00390625f;
                    var_af4 = *(eax_5 + 0xba80b8);
                    var_af8 = *(eax_5 + 0xba80c0);
                    var_afc = *(eax_5 + 0xba80c8);
                    var_b5c = *(eax_5 + 0xba80b4) * 0.00390625f;
                }

                void* var_bbc;
                char var_ba8;
                float var_ba0;
                float var_b50;
                float var_b4c;

                if (edx_1 < 0xe)
                    var_c20_1 = 0;
                else if (ecx_1)
                {
                    int32_t ecx_21 = ecx_1 * 0x30;
                    var_b50 = *(ecx_21 + 0xba2048);
                    var_bbc = (&g_ba2058)[ecx_1 * 0xc];
                    var_b4c = *(ecx_21 + 0xba2050);
                    var_ba0 = (&g_ba2040)[ecx_1 * 6];
                    var_ba8 = *(ecx_21 + 0xba203c) + 3;
                }

                int32_t ebx_3 = *(ebp_1 + 0x28);

                if (var_b48 != ebx_3)
                {
                    var_b48 = ebx_3;
                    void var_ad8;
                    void* eax_9 = &var_ad8;
                    int32_t var_bc0_1 = 4;
                    bool cond:6_1;

                    do
                    {
                        uint32_t ecx_27 = ebx_3;
                        ebx_3 s>>= 8;
                        int32_t* eax_15;

                        if (!ecx_27)
                        {
                            eax_15 = eax_9 - 0x18;
                            *eax_15 = 0;
                        }
                        else
                        {
                            uint32_t ecx_29 = ecx_27 * 0x30;
                            *(eax_9 - 4) = *(ecx_29 + 0xba5050);
                            long double x87_r7_9 = *(ecx_29 + 0xba5070);
                            *(eax_9 - 8) = *(ecx_29 + 0xba5078);
                            int32_t edi_4 = *(ecx_29 + 0xba5060);
                            *(eax_9 - 0xc) = x87_r7_9;
                            *(eax_9 - 0x10) = *(ecx_29 + 0xba5068);
                            int32_t ecx_31 = *(ecx_29 + 0xba505c);
                            *(eax_9 - 0x14) = edi_4;
                            eax_15 = eax_9 - 0x18;
                            *eax_15 = ecx_31;
                        }

                        eax_9 = &eax_15[0xc];
                        cond:6_1 = var_bc0_1 != 1;
                        var_bc0_1 -= 1;
                    } while (cond:6_1);
                }

                int32_t ecx_34 = esi_9[2];
                int32_t ebx_5 = esi_9[3] + ecx_34;
                int32_t eax_18 = ebx_5 * 0x14 - (ecx_34 << 3);
                memcpy(edx_17, ebp_1, 0x18);
                *(edx_17 + 0x18) = ecx_34 << 0x10 | ebx_5;
                *(edx_17 + 0x1c) = edx_1;
                void* edi_6 = var_bbc;
                void* eax_23 = edx_17 + 0x30;
                int32_t ebp_3 = edx_2 & 4;
                int32_t var_be0_1 = 0;
                int32_t var_c04_1 = ebp_3;
                double var_be8_1 = 1 << ((0x1b - edx_1) & 0x1f);
                double var_b1c;
                double var_b14;

                while (true)
                {
                    int32_t ecx_38 = *var_bc8_1;
                    int32_t var_c14_2 = (ecx_38 >> 0xe & 0x3f) - 0x18;
                    int32_t edx_28 = (ecx_38 >> 0x1a & 0x3f) - 0x18;
                    int32_t var_c1c_1 = edx_28;
                    int32_t var_c24_1 = (ecx_38 >> 0x14 & 0x3f) - 0x18;

                    if (ebp_3)
                    {
                        edx_28 = -(edx_28);
                        var_c1c_1 = edx_28;
                    }

                    char ecx_43 = edx_2;

                    if (!edx_3)
                    {
                        if (ecx_43 & 2)
                        {
                            var_c1c_1 = -(edx_28);
                            var_c24_1 = -(((ecx_38 >> 0x14 & 0x3f) - 0x18));
                        }

                        edi_6 = var_bbc;
                    }
                    else if (!(ecx_43 & 2))
                    {
                        var_c1c_1 = -(((ecx_38 >> 0x14 & 0x3f) - 0x18));
                        var_c24_1 = edx_28;
                    }
                    else
                    {
                        var_c1c_1 = (ecx_38 >> 0x14 & 0x3f) - 0x18;
                        var_c24_1 = -(edx_28);
                    }

                    long double x87_r7_15 = var_c1c_1 * var_be8_1 / eax + var_b24;
                    long double x87_r6_4 = var_c24_1 * var_be8_1 / eax + var_b1c;
                    long double x87_r5_4 = var_c14_2 * var_be8_1 / eax + var_b14;
                    long double x87_r4_1 = 0f;

                    if (var_c20_1)
                    {
                        long double x87_r3_3 = (x87_r7_15 - var_b50) * var_ba0;
                        float var_c24_2 = (x87_r6_4 - var_b4c) * var_ba0;
                        var_c14_2 = x87_r3_3;
                        var_c1c_1 = var_c24_2;
                        long double x87_r3_4 = x87_r3_3 - var_c14_2;
                        int32_t ecx_46 = var_c1c_1 + (var_c1c_1 << (var_ba8 & 0x1f));
                        long double x87_r1_1 = *(edi_6 + ecx_46 + var_c14_2);
                        int32_t ebp_11 =
                            ((var_c1c_1 + 1) << (var_ba8 & 0x1f)) + var_c1c_1 + 1 + var_c14_2 + 1;
                        float var_c24_3 = *(edi_6 + ebp_11 - 1);
                        float var_c1c_4 =
                            (*(ecx_46 + var_c14_2 + 1 + edi_6) - x87_r1_1) * x87_r3_4 + x87_r1_1;
                        float var_c24_4 = ((x87_r3_4 * (*(edi_6 + ebp_11) - var_c24_3) + var_c24_3
                            - var_c1c_4) * (var_c24_2 - var_c1c_1) + var_c1c_4 - 64.0) * 256f;

                        if (edx_1 <= 0xe)
                            x87_r4_1 = var_c24_4;
                        else
                            x87_r5_4 = x87_r5_4 + var_c24_4;
                    }

                    *(eax_23 - 4) = x87_r4_1;
                    *(eax_23 - 8) = x87_r5_4;
                    var_bc8_1 = &var_bc8_1[1];
                    *(eax_23 - 0xc) = x87_r6_4;
                    int32_t ecx_54 = var_be0_1 + 1;
                    var_be0_1 = ecx_54;
                    *(eax_23 - 0x10) = x87_r7_15;
                    eax_23 += 0x10;

                    if (ecx_54 >= ecx_34)
                        break;

                    ebp_3 = var_c04_1;
                }

                if (ebx_5 != ecx_34)
                {
                    int32_t ecx_71;

                    do
                    {
                        int32_t ecx_55 = *var_bc8_1;
                        *(eax_23 - 4) = ecx_55 & 0x3f;
                        int32_t var_c14_8 = (ecx_55 >> 0xe & 0x3f) - 0x18;
                        int32_t edx_47 = (ecx_55 >> 0x1a & 0x3f) - 0x18;
                        int32_t var_c24_5 = (ecx_55 >> 0x14 & 0x3f) - 0x18;
                        int32_t var_c1c_5 = edx_47;

                        if (var_c04_1)
                        {
                            edx_47 = -(edx_47);
                            var_c1c_5 = edx_47;
                        }

                        char ecx_61 = edx_2;

                        if (!edx_3)
                        {
                            if (ecx_61 & 2)
                            {
                                var_c1c_5 = -(edx_47);
                                var_c24_5 = -(((ecx_55 >> 0x14 & 0x3f) - 0x18));
                            }

                            edi_6 = var_bbc;
                        }
                        else if (!(ecx_61 & 2))
                        {
                            var_c1c_5 = -(((ecx_55 >> 0x14 & 0x3f) - 0x18));
                            var_c24_5 = edx_47;
                        }
                        else
                        {
                            var_c1c_5 = (ecx_55 >> 0x14 & 0x3f) - 0x18;
                            var_c24_5 = -(edx_47);
                        }

                        long double x87_r7_19 = var_c1c_5 * var_be8_1 / eax + var_b24;
                        long double x87_r6_8 = var_c24_5 * var_be8_1 / eax + var_b1c;
                        long double x87_r5_8 = var_c14_8 * var_be8_1 / eax + var_b14;

                        if (var_c20_1)
                        {
                            long double x87_r4_5 = (x87_r7_19 - var_b50) * var_ba0;
                            float var_c24_6 = (x87_r6_8 - var_b4c) * var_ba0;
                            var_c14_8 = x87_r4_5;
                            var_c1c_5 = var_c24_6;
                            long double x87_r4_6 = x87_r4_5 - var_c14_8;
                            int32_t ecx_64 = var_c1c_5 + (var_c1c_5 << (var_ba8 & 0x1f));
                            long double x87_r2_16 = *(edi_6 + ecx_64 + var_c14_8);
                            int32_t ebp_19 = ((var_c1c_5 + 1) << (var_ba8 & 0x1f)) + var_c1c_5 + 1
                                + var_c14_8 + 1;
                            float var_c24_7 = *(edi_6 + ebp_19 - 1);
                            float var_c1c_7 =
                                (*(ecx_64 + var_c14_8 + 1 + edi_6) - x87_r2_16) * x87_r4_6
                                + x87_r2_16;
                            x87_r5_8 = x87_r5_8 + ((x87_r4_6 * (*(edi_6 + ebp_19) - var_c24_7)
                                + var_c24_7 - var_c1c_7) * (var_c24_6 - var_c1c_5) + var_c1c_7 - 64.0)
                                * 256f;
                        }

                        *(eax_23 - 8) = x87_r5_8;
                        *(eax_23 - 0xc) = x87_r6_8;
                        ecx_71 = var_be0_1 + 1;
                        var_be0_1 = ecx_71;
                        var_bc8_1 = &var_bc8_1[1];
                        *(eax_23 - 0x10) = x87_r7_19;
                        eax_23 += 0x10;
                    } while (ecx_71 < ebx_5);
                }

                float* ebp_22 = edx_17 + 0x20;
                int32_t* eax_32 = eax_23 - 0x10;
                int32_t ecx_72 = 0;
                int32_t* var_c1c_8 = eax_32;
                int32_t var_be0_2 = 0;
                int32_t i_1 = 0;
                void var_908;
                int32_t* esi_22 = &var_908;
                int32_t i;

                do
                {
                    long double x87_r7_20 = *ebp_22;
                    float edx_53 = ebp_22[1];
                    float edx_54 = ebp_22[2];
                    int32_t edx_55 = 0;
                    int32_t edi_7 = 0xff;
                    esi_22[7] = (x87_r7_20 - var_af4) * var_b44 + var_b5c;
                    esi_22[8] = (edx_53 - var_af8) * var_b44 + var_b5c;
                    int32_t var_af0;

                    if (var_af0)
                    {
                        void var_adc;
                        int32_t* eax_33 = &var_adc;
                        float var_aec;
                        float var_ae8;
                        int32_t var_be8_2 = var_aec * (x87_r7_20 - var_ae8);
                        float var_ae4;
                        int32_t var_ae0;

                        if (*((var_be8_2 >> 3) + var_ae0
                            + ((var_aec * (edx_53 - var_ae4)) << (var_af0 & 0x1f))) >> (var_be8_2 & 7)
                            & 1)
                        {
                        label_510930:
                            edx_55 = *eax_33;
                        }
                        else
                        {
                            while (true)
                            {
                                int32_t ecx_75 = eax_33[1];

                                if (!ecx_75)
                                    break;

                                long double x87_r6_22 = eax_33[2];
                                long double x87_r5_14 = x87_r7_20 - eax_33[3];
                                float var_c20_3 = edx_53 - eax_33[4];
                                int32_t edi_12 = eax_33[5];
                                eax_33 = &eax_33[6];
                                int32_t var_be8_4 = x87_r5_14 * x87_r6_22;

                                if (*((var_be8_4 >> 3) + edi_12
                                        + ((var_c20_3 * x87_r6_22) << (ecx_75 & 0x1f))) >> (var_be8_4 & 7)
                                        & 1)
                                    goto label_510930;
                            }
                        }

                        if (var_be0_2 < ecx_34)
                        {
                            eax_32 = var_c1c_8;
                            edi_7 = 0xff;
                        }
                        else
                        {
                            int32_t eax_40 = ebp_22[3];
                            *esi_22 = eax_40;
                            int32_t var_8f4[0x23b];
                            edi_7 = var_8f4[eax_40 * 9] >> 0x10;

                            if (edi_7 == edx_55)
                                edi_7 = 0xff;

                            eax_32 = var_c1c_8;
                        }
                    }
                    else if (ecx_72 >= ecx_34)
                        *esi_22 = ebp_22[3];

                    esi_22[1] = x87_r7_20 - var_b24;
                    esi_22[2] = edx_53 - var_b1c;
                    i = i_1 | 1 << (edx_55 & 0x1f);
                    ebp_22 = &ebp_22[4];
                    esi_22[3] = edx_54 - var_b14;
                    esi_22[5] = edx_55 << 0x10 | edi_7;
                    ecx_72 = var_be0_2 + 1;
                    esi_22 = &esi_22[9];
                    i_1 = i;
                    var_be0_2 = ecx_72;
                } while (ecx_72 < ebx_5);

                long double x87_r7_27 = var_b24 + g_b12ba0;
                int32_t edx_58 = 0;
                int32_t esi_23 = 0;
                int32_t var_c24_10 = 0;
                int32_t var_a78 = 0;
                double var_be8_6 = x87_r7_27;
                int32_t* ecx_83 = &var_a78;
                var_bc8_1 = var_b1c + g_b12ba8;
                var_be0_2 = var_b14 + g_b12bb0;

                if (i)
                {
                    do
                    {
                        if (i & 1)
                        {
                            *ecx_83 = edx_58;
                            ecx_83 = &ecx_83[1];
                            esi_23 += 1;
                        }

                        edx_58 += 1;
                        i s>>= 1;
                    } while (i);

                    var_c24_10 = esi_23;
                }

                if (eax_18 + (((eax_18 + 4) * esi_23 + (ebx_5 << 3)) << 1) + 0x3c < 0x640)
                    goto label_510d13;

                int32_t i_2 = *(eax_1 + 0x14);
                i_1 = i_2;

                if (i_2 != 1)
                {
                    if (i_2 == 2 && eax_18 + (((eax_18 + 4) * esi_23 + (ebx_5 << 3)) << 1) + 0x3c
                            < 0x1f40)
                        goto label_510d13;
                }
                else if (eax_18 + (((eax_18 + 4) * esi_23 + (ebx_5 << 3)) << 1) + 0x3c < 0xc80)
                    goto label_510d13;

                int32_t esi_24 = g_b12c48;
                int32_t var_c20_4 = 0;
                int32_t ebp_26 = *(eax_1 + 0x18);

                if (i_2 < 1 && eax_18 + (((eax_18 + 4) * esi_23 + (ebx_5 << 3)) << 1) + 0x3c < 0xc80
                    && esi_24 < g_b12c4c - 2)
                {
                    void* eax_41 = eax_32 - ebp_26;
                    int32_t* edi_18 = *(g_b12c44 + (esi_24 << 2)) * g_b12c50 + g_b12c40;
                    *(edi_18 + g_b12c54) = esi_24;
                    g_b12c48 += 1;
                    *(eax_1 + 0x18) = edi_18;
                    int32_t esi_28;
                    int32_t edi_19;
                    edi_19 = memcpy(edi_18, ebp_26, eax_41 & 0xfffffffc);
                    memcpy(edi_19, esi_28, eax_41 & 3);
                    int32_t ecx_95 = *(eax_1 + 0x18);
                    *(eax_1 + 0x14) = 1;
                    eax_32 = eax_41 + ecx_95;
                    var_c20_4 = 1;
                    *((g_b16c9c << 2) + &g_b12c5c) = ecx_95;
                    goto label_510bba;
                }

                int32_t ecx_97;

                if (i_2 >= 2
                        || eax_18 + (((eax_18 + 4) * esi_23 + (ebx_5 << 3)) << 1) + 0x3c >= 0x1f40)
                    ecx_97 = g_b16cc8;
                else
                {
                    ecx_97 = g_b16cc8;

                    if (ecx_97 < g_b16ccc - 2)
                    {
                        void* eax_42 = eax_32 - ebp_26;
                        var_c20_4 = 1;
                        int32_t* edi_23 =
                            *(g_b16cc4 + (ecx_97 << 2)) * g_b16cd0 + g_b16cc0;
                        *(edi_23 + g_b16cd4) = ecx_97;
                        g_b16cc8 += 1;
                        *(eax_1 + 0x18) = edi_23;
                        int32_t esi_34;
                        int32_t edi_24;
                        edi_24 = memcpy(edi_23, ebp_26, eax_42 & 0xfffffffc);
                        memcpy(edi_24, esi_34, eax_42 & 3);
                        int32_t ecx_102 = *(eax_1 + 0x18);
                        *(eax_1 + 0x14) = 2;
                        eax_32 = eax_42 + ecx_102;
                        *((g_b16c9c << 2) + &g_b12c5c) = ecx_102;
                    label_510bba:
                        esi_24 = g_b12c48;
                        ecx_97 = g_b16cc8;
                        i_2 = i_1;
                    }
                }

                int32_t* ecx_107;
                int32_t ebp_27;

                if (!i_2)
                {
                    int32_t* edi_25 = g_b12b74;
                    int32_t ecx_104 = g_b12b68 - 1;
                    ebp_27 = *(edi_25 + ebp_26);
                    g_b12b68 = ecx_104;

                    if (ebp_27 != ecx_104)
                    {
                        int32_t esi_36 = g_b12b64;
                        ecx_107 = *(esi_36 + (ecx_104 << 2)) * g_b12b70 + g_b12b60;
                        int32_t ebx_27 = *(esi_36 + (ebp_27 << 2));
                        int32_t edi_26 = *(ecx_107 + edi_25);
                        *(esi_36 + (ebp_27 << 2)) = *(esi_36 + (edi_26 << 2));
                        *(g_b12b64 + (edi_26 << 2)) = ebx_27;
                        *(ecx_107 + g_b12b74) = ebp_27;
                    }
                }
                else if (i_2 == 1)
                {
                    int32_t* ebx_30 = g_b12c54;
                    ebp_27 = *(ebx_30 + ebp_26);
                    g_b12c48 = esi_24 - 1;

                    if (ebp_27 != esi_24 - 1)
                    {
                        int32_t edi_27 = g_b12c44;
                        ecx_107 = *(edi_27 + ((esi_24 - 1) << 2)) * g_b12c50 + g_b12c40;
                        int32_t esi_41 = *(ecx_107 + ebx_30);
                        int32_t ebx_31 = *(edi_27 + (ebp_27 << 2));
                        *(edi_27 + (ebp_27 << 2)) = *(edi_27 + (esi_41 << 2));
                        *(g_b12c44 + (esi_41 << 2)) = ebx_31;
                        *(ecx_107 + g_b12c54) = ebp_27;
                    }
                }
                else if (i_2 == 2)
                {
                    int32_t* edi_29 = g_b16cd4;
                    ebp_27 = *(edi_29 + ebp_26);
                    g_b16cc8 = ecx_97 - 1;

                    if (ebp_27 != ecx_97 - 1)
                    {
                        int32_t esi_42 = g_b16cc4;
                        ecx_107 = *(esi_42 + ((ecx_97 - 1) << 2)) * g_b16cd0 + g_b16cc0;
                        int32_t ebx_35 = *(esi_42 + (ebp_27 << 2));
                        int32_t edi_30 = *(ecx_107 + edi_29);
                        *(esi_42 + (ebp_27 << 2)) = *(esi_42 + (edi_30 << 2));
                        *(g_b16cc4 + (edi_30 << 2)) = ebx_35;
                        *(ecx_107 + g_b16cd4) = ebp_27;
                    }
                }

                if (var_c20_4)
                {
                    esi_23 = var_c24_10;
                label_510d13:
                    *eax_32 = edx_2;
                    int32_t var_c0c_2 = 0;
                    eax_32[1] = &esi_9[4];
                    eax_32[2] = esi_23;
                    eax_32[3] = *esi_9;
                    int32_t ebp_28 = 0x17 - edx_1;
                    int32_t ebx_40 = edx_1 * 0x1c;
                    int32_t* var_c1c_9 = &eax_32[4];
                    int32_t* edx_63 = &var_a78;
                    void var_9d0;
                    void* eax_47 = &var_9d0;
                    int32_t var_c08_5 = ebx_40;
                    int32_t var_bf0_3 = ebp_28;
                    long double x87_r7_32 = 0x40000000 >> (edx_1 & 0x1f);

                    while (true)
                    {
                        int32_t edx_65 = *edx_63 * 0xe1;
                        float ecx_120 = *(ebx_40 + (edx_65 << 2) + 0xc28ff8);
                        char ecx_121 = ebp_28;
                        long double x87_r6_26 = *(ebx_40 + (edx_65 << 2) + 0xc28ff0);
                        i_1 = x87_r6_26 * var_be8_6;
                        int32_t edx_68 = i_1 >> (ecx_121 & 0x1f) & 0x7ff;
                        i_1 = x87_r6_26 * var_bc8_1;
                        int32_t esi_48 = i_1 >> (ecx_121 & 0x1f) & 0x7ff;
                        i_1 = ecx_120 * var_be8_6;
                        int32_t edi_33 = i_1 >> ((0x16 - edx_1) & 0x1f) & 0x7ff;
                        i_1 = ecx_120 * var_bc8_1;
                        i_1 = i_1 >> ((0x16 - edx_1) & 0x1f) & 0x7ff;
                        int32_t ecx_124 = 0;
                        ecx_124 = *((edx_68 >> 8)
                            + (((esi_48 >> 8) + (*(ebx_40 + (edx_65 << 2) + 0xc28ff4) << 3)) << 3)
                            + 0xc30080);
                        *(eax_47 - 4) = ecx_124;
                        int32_t ecx_127 = 0;
                        ecx_127 = *((edi_33 >> 8)
                            + (((i_1 >> 8) + (*(ebx_40 + (edx_65 << 2) + 0xc28ffc) << 3)) << 3)
                            + 0xc30080);
                        *(eax_47 - 8) = ecx_127;
                        *(eax_47 - 0xc) = x87_r6_26 * 0.5f / x87_r7_32;
                        int32_t var_bfc_4 = esi_48 & 0xff;
                        *(eax_47 - 0x10) = ((edx_68 & 0xff) + 1f) * 0.00390625f;
                        *(eax_47 - 0x14) = (var_bfc_4 + 1f) * 0.00390625f;
                        ebp_28 = var_bf0_3;
                        var_bfc_4 = x87_r6_26 * var_be0_2;
                        eax_47 += 0x28;
                        *(eax_47 - 0x40) = ((var_bfc_4 >> (ebp_28 & 0x1f)) + 1f) * 0.00390625f;
                        *(eax_47 - 0x44) = ecx_120 / x87_r7_32;
                        int32_t var_bfc_7 = i_1;
                        *(eax_47 - 0x48) = ((edi_33 & 0xff) + 1f) * 0.00390625f;
                        *(eax_47 - 0x4c) = (var_bfc_7 + 1f) * 0.00390625f;
                        var_bfc_7 = ecx_120 * var_be0_2;
                        bool cond:16_1 = var_c0c_2 + 1 < var_c24_10;
                        var_c0c_2 += 1;
                        *(eax_47 - 0x50) =
                            ((var_bfc_7 >> ((0x16 - edx_1) & 0x1f)) + 1f) * 0.00390625f;

                        if (!cond:16_1)
                            break;

                        ebx_40 = var_c08_5;
                        edx_63 = &edx_63[1];
                    }

                    void var_9f8;
                    float* eax_58 = &var_9f8;
                    int32_t ebp_38;

                    if (var_c24_10 <= 0)
                        ebp_38 = ecx_34;
                    else
                    {
                        void* ebx_50 = eax_18 + 4;
                        int32_t* edi_35 = var_c1c_9;
                        int32_t var_c0c_3 = var_c24_10;
                        int32_t* var_c20_6 = &var_a78;

                        while (true)
                        {
                            long double x87_r7_34 = *eax_58;
                            long double x87_r6_44 = eax_58[1];
                            int32_t var_be0_3 = 0;
                            long double x87_r5_35 = eax_58[2];
                            long double x87_r4_13 = eax_58[3];
                            long double x87_r3_25 = eax_58[4];
                            float edx_77 = eax_58[5];
                            float ecx_134 = eax_58[6];
                            float edx_78 = eax_58[7];
                            int32_t var_c24_11 = ebx_5;
                            int32_t ecx_136 = *var_c20_6;
                            int32_t edx_80 = g_c30060;
                            int32_t ecx_137 = eax_58[8];
                            eax_58 = &eax_58[0xa];
                            int32_t ecx_139 = eax_58[-1];
                            *edi_35 = edx_80 + ecx_137 * 0x24 + 0xc;
                            int32_t* var_bc8_2 = eax_3;
                            int32_t* ecx_142 = ebx_50 + edi_35;
                            int32_t* edi_36 = &edi_35[1];
                            var_c1c_9 = ebx_50 + ecx_142;
                            void var_904;
                            int32_t* ebx_52 = &var_904;
                            *ecx_142 = edx_80 + ecx_139 * 0x24 + 0xc;
                            void* ecx_143 = &ecx_142[1];
                            int32_t* var_bf4_2 = &var_904;
                            bool cond:23_1;

                            do
                            {
                                int32_t esi_51 = ebx_52[4];
                                int32_t edx_83 = *var_bc8_2;
                                int32_t edx_85 = edx_83 >> 8 & 3;
                                float edx_88 = *ebx_52;
                                int32_t esi_52 = esi_51 & 0xff;
                                float edx_89 = ebx_52[1];
                                float edx_90 = ebx_52[2];
                                int32_t ebp_36 = edx_83 >> 6 & 3;
                                int32_t var_c04_2;
                                int32_t* edx_95;

                                if (var_be0_3 < ecx_34)
                                {
                                    var_c04_2 = var_be0_3;
                                    edx_95 = var_bf4_2;
                                }
                                else
                                {
                                    int32_t edx_93 = var_bf4_2[-1];
                                    var_c04_2 = edx_93;
                                    int32_t __saved_edi;
                                    edx_95 = &(&__saved_edi)[edx_93 * 9 + 0xcd];
                                }

                                float ebx_54 = *edx_95;
                                float ebx_55 = edx_95[1];
                                float edx_96 = edx_95[2];
                                float var_b70_1;
                                float var_b40_1;
                                long double x87_r1_18;
                                long double x87_r2_23;

                                if (!edx_85)
                                {
                                    x87_r2_23 = edx_89 * x87_r4_13 + x87_r6_44;
                                    var_b40_1 = edx_88 * x87_r4_13 + x87_r5_35;
                                    var_b70_1 = ebx_55 * x87_r4_13 + x87_r6_44 - x87_r2_23;
                                    x87_r1_18 = ebx_54 * x87_r4_13 + x87_r5_35;
                                }
                                else
                                {
                                    float var_bb8_1;
                                    float var_b54_1;
                                    long double x87_r2_20;

                                    if (!((edx_85 ^ edx_3) & 1))
                                    {
                                        var_b54_1 = edx_88;
                                        var_bb8_1 = ebx_54;
                                        x87_r2_20 = x87_r5_35;
                                    }
                                    else
                                    {
                                        var_b54_1 = edx_89;
                                        var_bb8_1 = ebx_55;
                                        x87_r2_20 = x87_r6_44;
                                    }

                                    float var_bd0_1 = x87_r2_20;
                                    x87_r2_23 = edx_90 * x87_r4_13 + x87_r7_34;
                                    var_b40_1 = var_b54_1 * x87_r4_13 + var_bd0_1;
                                    var_b70_1 = edx_96 * x87_r4_13 + x87_r7_34 - x87_r2_23;
                                    x87_r1_18 = var_bb8_1 * x87_r4_13 + var_bd0_1;
                                }

                                float var_b6c_1;
                                float var_b34_1;
                                long double x87_r0_17;
                                long double x87_r1_31;

                                if (!ebp_36)
                                {
                                    x87_r1_31 = edx_88 * edx_78 + ecx_134;
                                    var_b34_1 = edx_89 * edx_78 + edx_77;
                                    var_b6c_1 = ebx_54 * edx_78 + ecx_134 - x87_r1_31;
                                    x87_r0_17 = ebx_55 * edx_78 + edx_77;
                                }
                                else
                                {
                                    float var_bb8_2;
                                    float edx_106;
                                    long double x87_r1_29;

                                    if (!((ebp_36 ^ edx_3) & 1))
                                    {
                                        x87_r1_29 = edx_88;
                                        var_bb8_2 = ebx_54;
                                        edx_106 = ecx_134;
                                    }
                                    else
                                    {
                                        x87_r1_29 = edx_89;
                                        var_bb8_2 = ebx_55;
                                        edx_106 = edx_77;
                                    }

                                    x87_r1_31 = x87_r1_29 * edx_78 + edx_106;
                                    var_b34_1 = edx_90 * edx_78 + x87_r3_25;
                                    var_b6c_1 = var_bb8_2 * edx_78 + edx_106 - x87_r1_31;
                                    x87_r0_17 = edx_96 * edx_78 + x87_r3_25;
                                }

                                int32_t ebx_56 = 0;

                                if (ecx_136 == esi_52)
                                    ebx_56 = 8;
                                else if (ecx_136 == esi_51 >> 0x10)
                                {
                                    int32_t esi_54 = -((esi_52 - 0xff));
                                    ebx_56 = ((esi_54 - esi_54) & 0xfffffff8) + 0x18;
                                }

                                int32_t edx_112 = ((var_c04_2 << 5) + ebx_56) | var_c04_2 << 0x10;
                                *edi_36 = edx_112;
                                edi_36[1] = var_b40_1;
                                edi_36[2] = x87_r2_23;
                                ebp_38 = ecx_34;
                                *ecx_143 = edx_112 + 4;
                                *(ecx_143 + 4) = x87_r1_31;
                                edi_36 = &edi_36[3];
                                *(ecx_143 + 8) = var_b34_1;
                                ecx_143 += 0xc;

                                if (var_be0_3 >= ebp_38)
                                {
                                    *edi_36 = x87_r1_18 - var_b40_1;
                                    edi_36[1] = var_b70_1;
                                    *ecx_143 = var_b6c_1;
                                    edi_36 = &edi_36[2];
                                    *(ecx_143 + 4) = x87_r0_17 - var_b34_1;
                                    ecx_143 += 8;
                                }

                                ebx_52 = &var_bf4_2[9];
                                var_bf4_2 = ebx_52;
                                var_bc8_2 = &var_bc8_2[1];
                                var_be0_3 += 1;
                                cond:23_1 = var_c24_11 != 1;
                                var_c24_11 -= 1;
                            } while (cond:23_1);
                            bool cond:24_1 = var_c0c_3 != 1;
                            var_c20_6 = &var_c20_6[1];
                            var_c0c_3 -= 1;

                            if (!cond:24_1)
                                break;

                            edi_35 = var_c1c_9;
                            ebx_50 = eax_18 + 4;
                        }
                    }

                    if (!var_bd8_2)
                        *var_c1c_9 = 0;
                    else
                    {
                        *var_c1c_9 = var_afc;
                        float* eax_69 = &var_c1c_9[1];
                        int32_t var_bd8_3 = ebx_5;
                        int32_t* esi_69 = &var_908;
                        int32_t edx_121 = 0;
                        bool cond:20_1;

                        do
                        {
                            float ecx_151 = esi_69[7];
                            float ecx_152 = esi_69[8];
                            int32_t ecx_153;

                            if (edx_121 < ebp_38)
                                ecx_153 = edx_121;
                            else
                                ecx_153 = *esi_69;

                            int32_t edi_40 = ecx_153 * 9;
                            var_8ec;
                            float ebx_58 = *(&var_8ec + (edi_40 << 2));
                            eax_69 = &eax_69[3];
                            var_8e8;
                            long double x87_r7_37 = *(&var_8e8 + (edi_40 << 2)) - ecx_152;
                            eax_69[-3] = ecx_153 << 5 | ecx_153 << 0x10;
                            eax_69[-2] = ecx_151;
                            eax_69[-1] = ecx_152;

                            if (edx_121 >= ebp_38)
                            {
                                *eax_69 = ebx_58 - ecx_151;
                                eax_69[1] = x87_r7_37;
                                eax_69 = &eax_69[2];
                            }

                            esi_69 = &esi_69[9];
                            edx_121 += 1;
                            cond:20_1 = var_bd8_3 != 1;
                            var_bd8_3 -= 1;
                        } while (cond:20_1);
                    }
                }
                else
                {
                    *(eax_1 + 0x18) = 0;
                    *(eax_1 + 0x10) = 0xffffffff;
                    g_b16c9c -= 1;
                }

                ebp_1 = var_b98;
            }
            else
            {
                int32_t edx_7 = g_b12c48;

                if (edx_7 <= g_b12c4c - 3)
                {
                    int32_t ecx_12 = *(g_b12c44 + (edx_7 << 2)) * g_b12c50 + g_b12c40;
                    *(g_b12c54 + ecx_12) = edx_7;
                    g_b12c48 += 1;
                    *(eax_1 + 0x18) = ecx_12;
                    *(eax_1 + 0x14) = 1;
                    goto label_5101bf;
                }

                int32_t edx_9 = g_b16cc8;

                if (edx_9 <= g_b16ccc - 3)
                {
                    int32_t ecx_8 = *(g_b16cc4 + (edx_9 << 2)) * g_b16cd0 + g_b16cc0;
                    *(g_b16cd4 + ecx_8) = edx_9;
                    g_b16cc8 += 1;
                    *(eax_1 + 0x18) = ecx_8;
                    *(eax_1 + 0x14) = 2;
                    goto label_5101bf;
                }

                *(eax_1 + 0x10) = 0xffffffff;
            }

            result = result_1 + 1;
            ebp_1 += 0x30;
            result_1 = result;
            var_b98 = ebp_1;
        } while (result < result_2);
    }

    return result;
}
