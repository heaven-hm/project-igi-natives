#include "Terrain_RenderQuadtree.h"
int32_t Terrain_RenderQuadtree()

{
    int32_t flagP;
    int32_t v_4 = flagP;
    int32_t valA = g_54eba0;
    int32_t* v_c30 = &v_4;
    int32_t result = g_b16ca4;
    int32_t v_b84 = g_54eba4;
    void* flagP1 = &g_b16ce0;
    int32_t v_a90 = 0;
    int32_t v_b48 = 0xffffffff;
    void* v_b98 = &g_b16ce0;
    int32_t result_2 = result;
    g_c31090 += result;
    int32_t result_1 = 0;

    if (result > 0)
    {
        do
        {
            int32_t tmpD1 = *(flagP1 + 0x18);
            int24_t ctxB1 = *(flagP1 + 0x24);
            int32_t tmpD2 = *(flagP1 + 0x1c);
            double v_b24;
            memcpy(&v_b24, flagP1, 0x18);
            void* valA1 = *(flagP1 + 0x2c);
            int32_t tmpD3 = tmpD2 & 1;
            int32_t objC1 = 0;
            objC1 = *(&ctxB1 + 2);
            uint32_t ctxB2 = ctxB1;
            int32_t tmpD5 = g_b12b68;
            int32_t v_c20_1 = objC1;

            if (tmpD5 <= g_b12b6c - 3)
            {
                int32_t objC16 = *(g_b12b64 + (tmpD5 << 2)) * g_b12b70 + g_b12b60;
                *(g_b12b74 + objC16) = tmpD5;
                g_b12b68 += 1;
                *(valA1 + 0x18) = objC16;
                *(valA1 + 0x14) = 0;
            label_5101bf:
                int32_t objC17 = g_b16c9c;
                int16_t* srcS9 = *(flagP1 + 0x20);
                *((objC17 << 2) + &g_b12c60) = *(valA1 + 0x18);
                g_b16c9c = objC17 + 1;
                void* tmpD17 = *(valA1 + 0x18);
                int32_t* valA3 = srcS9[1] + &srcS9[4];
                int32_t* v_bc8_1 = valA3;
                int32_t v_bd8_2 = 0;
                float v_b5c;
                float v_b44;
                int32_t v_afc;
                float v_af8;
                float v_af4;

                if (ctxB2 != 0xffff)
                {
                    v_bd8_2 = 1;
                    uint32_t valA5 = ctxB2 * 0x30;
                    v_b44 = *(valA5 + 0xba80b0) * 0.00390625f;
                    v_af4 = *(valA5 + 0xba80b8);
                    v_af8 = *(valA5 + 0xba80c0);
                    v_afc = *(valA5 + 0xba80c8);
                    v_b5c = *(valA5 + 0xba80b4) * 0.00390625f;
                }

                void* v_bbc;
                char v_ba8;
                float v_ba0;
                float v_b50;
                float v_b4c;

                if (tmpD1 < 0xe)
                    v_c20_1 = 0;
                else if (objC1)
                {
                    int32_t objC21 = objC1 * 0x30;
                    v_b50 = *(objC21 + 0xba2048);
                    v_bbc = (&g_ba2058)[objC1 * 0xc];
                    v_b4c = *(objC21 + 0xba2050);
                    v_ba0 = (&g_ba2040)[objC1 * 6];
                    v_ba8 = *(objC21 + 0xba203c) + 3;
                }

                int32_t ctxB3 = *(flagP1 + 0x28);

                if (v_b48 != ctxB3)
                {
                    v_b48 = ctxB3;
                    void v_ad8;
                    void* valA9 = &v_ad8;
                    int32_t v_bc0_1 = 4;
                    bool cond_6_1;

                    do
                    {
                        uint32_t objC27 = ctxB3;
                        ctxB3 s>>= 8;
                        int32_t* valA15;

                        if (!objC27)
                        {
                            valA15 = valA9 - 0x18;
                            *valA15 = 0;
                        }
                        else
                        {
                            uint32_t objC29 = objC27 * 0x30;
                            *(valA9 - 4) = *(objC29 + 0xba5050);
                            long double x87_r7_9 = *(objC29 + 0xba5070);
                            *(valA9 - 8) = *(objC29 + 0xba5078);
                            int32_t dstD4 = *(objC29 + 0xba5060);
                            *(valA9 - 0xc) = x87_r7_9;
                            *(valA9 - 0x10) = *(objC29 + 0xba5068);
                            int32_t objC31 = *(objC29 + 0xba505c);
                            *(valA9 - 0x14) = dstD4;
                            valA15 = valA9 - 0x18;
                            *valA15 = objC31;
                        }

                        valA9 = &valA15[0xc];
                        cond_6_1 = v_bc0_1 != 1;
                        v_bc0_1 -= 1;
                    } while (cond_6_1);
                }

                int32_t objC34 = srcS9[2];
                int32_t ctxB5 = srcS9[3] + objC34;
                int32_t valA18 = ctxB5 * 0x14 - (objC34 << 3);
                memcpy(tmpD17, flagP1, 0x18);
                *(tmpD17 + 0x18) = objC34 << 0x10 | ctxB5;
                *(tmpD17 + 0x1c) = tmpD1;
                void* dstD6 = v_bbc;
                void* valA23 = tmpD17 + 0x30;
                int32_t flagP3 = tmpD2 & 4;
                int32_t v_be0_1 = 0;
                int32_t v_c04_1 = flagP3;
                double v_be8_1 = 1 << ((0x1b - tmpD1) & 0x1f);
                double v_b1c;
                double v_b14;

                while (true)
                {
                    int32_t objC38 = *v_bc8_1;
                    int32_t v_c14_2 = (objC38 >> 0xe & 0x3f) - 0x18;
                    int32_t tmpD28 = (objC38 >> 0x1a & 0x3f) - 0x18;
                    int32_t v_c1c_1 = tmpD28;
                    int32_t v_c24_1 = (objC38 >> 0x14 & 0x3f) - 0x18;

                    if (flagP3)
                    {
                        tmpD28 = -(tmpD28);
                        v_c1c_1 = tmpD28;
                    }

                    char objC43 = tmpD2;

                    if (!tmpD3)
                    {
                        if (objC43 & 2)
                        {
                            v_c1c_1 = -(tmpD28);
                            v_c24_1 = -(((objC38 >> 0x14 & 0x3f) - 0x18));
                        }

                        dstD6 = v_bbc;
                    }
                    else if (!(objC43 & 2))
                    {
                        v_c1c_1 = -(((objC38 >> 0x14 & 0x3f) - 0x18));
                        v_c24_1 = tmpD28;
                    }
                    else
                    {
                        v_c1c_1 = (objC38 >> 0x14 & 0x3f) - 0x18;
                        v_c24_1 = -(tmpD28);
                    }

                    long double x87_r7_15 = v_c1c_1 * v_be8_1 / valA + v_b24;
                    long double x87_r6_4 = v_c24_1 * v_be8_1 / valA + v_b1c;
                    long double x87_r5_4 = v_c14_2 * v_be8_1 / valA + v_b14;
                    long double x87_r4_1 = 0f;

                    if (v_c20_1)
                    {
                        long double x87_r3_3 = (x87_r7_15 - v_b50) * v_ba0;
                        float v_c24_2 = (x87_r6_4 - v_b4c) * v_ba0;
                        v_c14_2 = x87_r3_3;
                        v_c1c_1 = v_c24_2;
                        long double x87_r3_4 = x87_r3_3 - v_c14_2;
                        int32_t objC46 = v_c1c_1 + (v_c1c_1 << (v_ba8 & 0x1f));
                        long double x87_r1_1 = *(dstD6 + objC46 + v_c14_2);
                        int32_t flagP11 =
                            ((v_c1c_1 + 1) << (v_ba8 & 0x1f)) + v_c1c_1 + 1 + v_c14_2 + 1;
                        float v_c24_3 = *(dstD6 + flagP11 - 1);
                        float v_c1c_4 =
                            (*(objC46 + v_c14_2 + 1 + dstD6) - x87_r1_1) * x87_r3_4 + x87_r1_1;
                        float v_c24_4 = ((x87_r3_4 * (*(dstD6 + flagP11) - v_c24_3) + v_c24_3
                            - v_c1c_4) * (v_c24_2 - v_c1c_1) + v_c1c_4 - 64.0) * 256f;

                        if (tmpD1 <= 0xe)
                            x87_r4_1 = v_c24_4;
                        else
                            x87_r5_4 = x87_r5_4 + v_c24_4;
                    }

                    *(valA23 - 4) = x87_r4_1;
                    *(valA23 - 8) = x87_r5_4;
                    v_bc8_1 = &v_bc8_1[1];
                    *(valA23 - 0xc) = x87_r6_4;
                    int32_t objC54 = v_be0_1 + 1;
                    v_be0_1 = objC54;
                    *(valA23 - 0x10) = x87_r7_15;
                    valA23 += 0x10;

                    if (objC54 >= objC34)
                        break;

                    flagP3 = v_c04_1;
                }

                if (ctxB5 != objC34)
                {
                    int32_t objC71;

                    do
                    {
                        int32_t objC55 = *v_bc8_1;
                        *(valA23 - 4) = objC55 & 0x3f;
                        int32_t v_c14_8 = (objC55 >> 0xe & 0x3f) - 0x18;
                        int32_t tmpD47 = (objC55 >> 0x1a & 0x3f) - 0x18;
                        int32_t v_c24_5 = (objC55 >> 0x14 & 0x3f) - 0x18;
                        int32_t v_c1c_5 = tmpD47;

                        if (v_c04_1)
                        {
                            tmpD47 = -(tmpD47);
                            v_c1c_5 = tmpD47;
                        }

                        char objC61 = tmpD2;

                        if (!tmpD3)
                        {
                            if (objC61 & 2)
                            {
                                v_c1c_5 = -(tmpD47);
                                v_c24_5 = -(((objC55 >> 0x14 & 0x3f) - 0x18));
                            }

                            dstD6 = v_bbc;
                        }
                        else if (!(objC61 & 2))
                        {
                            v_c1c_5 = -(((objC55 >> 0x14 & 0x3f) - 0x18));
                            v_c24_5 = tmpD47;
                        }
                        else
                        {
                            v_c1c_5 = (objC55 >> 0x14 & 0x3f) - 0x18;
                            v_c24_5 = -(tmpD47);
                        }

                        long double x87_r7_19 = v_c1c_5 * v_be8_1 / valA + v_b24;
                        long double x87_r6_8 = v_c24_5 * v_be8_1 / valA + v_b1c;
                        long double x87_r5_8 = v_c14_8 * v_be8_1 / valA + v_b14;

                        if (v_c20_1)
                        {
                            long double x87_r4_5 = (x87_r7_19 - v_b50) * v_ba0;
                            float v_c24_6 = (x87_r6_8 - v_b4c) * v_ba0;
                            v_c14_8 = x87_r4_5;
                            v_c1c_5 = v_c24_6;
                            long double x87_r4_6 = x87_r4_5 - v_c14_8;
                            int32_t objC64 = v_c1c_5 + (v_c1c_5 << (v_ba8 & 0x1f));
                            long double x87_r2_16 = *(dstD6 + objC64 + v_c14_8);
                            int32_t flagP19 = ((v_c1c_5 + 1) << (v_ba8 & 0x1f)) + v_c1c_5 + 1
                                + v_c14_8 + 1;
                            float v_c24_7 = *(dstD6 + flagP19 - 1);
                            float v_c1c_7 =
                                (*(objC64 + v_c14_8 + 1 + dstD6) - x87_r2_16) * x87_r4_6
                                + x87_r2_16;
                            x87_r5_8 = x87_r5_8 + ((x87_r4_6 * (*(dstD6 + flagP19) - v_c24_7)
                                + v_c24_7 - v_c1c_7) * (v_c24_6 - v_c1c_5) + v_c1c_7 - 64.0)
                                * 256f;
                        }

                        *(valA23 - 8) = x87_r5_8;
                        *(valA23 - 0xc) = x87_r6_8;
                        objC71 = v_be0_1 + 1;
                        v_be0_1 = objC71;
                        v_bc8_1 = &v_bc8_1[1];
                        *(valA23 - 0x10) = x87_r7_19;
                        valA23 += 0x10;
                    } while (objC71 < ctxB5);
                }

                float* flagP22 = tmpD17 + 0x20;
                int32_t* valA32 = valA23 - 0x10;
                int32_t objC72 = 0;
                int32_t* v_c1c_8 = valA32;
                int32_t v_be0_2 = 0;
                int32_t i_1 = 0;
                void v_908;
                int32_t* srcS22 = &v_908;
                int32_t i;

                do
                {
                    long double x87_r7_20 = *flagP22;
                    float tmpD53 = flagP22[1];
                    float tmpD54 = flagP22[2];
                    int32_t tmpD55 = 0;
                    int32_t dstD7 = 0xff;
                    srcS22[7] = (x87_r7_20 - v_af4) * v_b44 + v_b5c;
                    srcS22[8] = (tmpD53 - v_af8) * v_b44 + v_b5c;
                    int32_t v_af0;

                    if (v_af0)
                    {
                        void v_adc;
                        int32_t* valA33 = &v_adc;
                        float v_aec;
                        float v_ae8;
                        int32_t v_be8_2 = v_aec * (x87_r7_20 - v_ae8);
                        float v_ae4;
                        int32_t v_ae0;

                        if (*((v_be8_2 >> 3) + v_ae0
                            + ((v_aec * (tmpD53 - v_ae4)) << (v_af0 & 0x1f))) >> (v_be8_2 & 7)
                            & 1)
                        {
                        label_510930:
                            tmpD55 = *valA33;
                        }
                        else
                        {
                            while (true)
                            {
                                int32_t objC75 = valA33[1];

                                if (!objC75)
                                    break;

                                long double x87_r6_22 = valA33[2];
                                long double x87_r5_14 = x87_r7_20 - valA33[3];
                                float v_c20_3 = tmpD53 - valA33[4];
                                int32_t dstD12 = valA33[5];
                                valA33 = &valA33[6];
                                int32_t v_be8_4 = x87_r5_14 * x87_r6_22;

                                if (*((v_be8_4 >> 3) + dstD12
                                        + ((v_c20_3 * x87_r6_22) << (objC75 & 0x1f))) >> (v_be8_4 & 7)
                                        & 1)
                                    goto label_510930;
                            }
                        }

                        if (v_be0_2 < objC34)
                        {
                            valA32 = v_c1c_8;
                            dstD7 = 0xff;
                        }
                        else
                        {
                            int32_t valA40 = flagP22[3];
                            *srcS22 = valA40;
                            int32_t v_8f4[0x23b];
                            dstD7 = v_8f4[valA40 * 9] >> 0x10;

                            if (dstD7 == tmpD55)
                                dstD7 = 0xff;

                            valA32 = v_c1c_8;
                        }
                    }
                    else if (objC72 >= objC34)
                        *srcS22 = flagP22[3];

                    srcS22[1] = x87_r7_20 - v_b24;
                    srcS22[2] = tmpD53 - v_b1c;
                    i = i_1 | 1 << (tmpD55 & 0x1f);
                    flagP22 = &flagP22[4];
                    srcS22[3] = tmpD54 - v_b14;
                    srcS22[5] = tmpD55 << 0x10 | dstD7;
                    objC72 = v_be0_2 + 1;
                    srcS22 = &srcS22[9];
                    i_1 = i;
                    v_be0_2 = objC72;
                } while (objC72 < ctxB5);

                long double x87_r7_27 = v_b24 + g_b12ba0;
                int32_t tmpD58 = 0;
                int32_t srcS23 = 0;
                int32_t v_c24_10 = 0;
                int32_t v_a78 = 0;
                double v_be8_6 = x87_r7_27;
                int32_t* objC83 = &v_a78;
                v_bc8_1 = v_b1c + g_b12ba8;
                v_be0_2 = v_b14 + g_b12bb0;

                if (i)
                {
                    do
                    {
                        if (i & 1)
                        {
                            *objC83 = tmpD58;
                            objC83 = &objC83[1];
                            srcS23 += 1;
                        }

                        tmpD58 += 1;
                        i s>>= 1;
                    } while (i);

                    v_c24_10 = srcS23;
                }

                if (valA18 + (((valA18 + 4) * srcS23 + (ctxB5 << 3)) << 1) + 0x3c < 0x640)
                    goto label_510d13;

                int32_t i_2 = *(valA1 + 0x14);
                i_1 = i_2;

                if (i_2 != 1)
                {
                    if (i_2 == 2 && valA18 + (((valA18 + 4) * srcS23 + (ctxB5 << 3)) << 1) + 0x3c
                            < 0x1f40)
                        goto label_510d13;
                }
                else if (valA18 + (((valA18 + 4) * srcS23 + (ctxB5 << 3)) << 1) + 0x3c < 0xc80)
                    goto label_510d13;

                int32_t srcS24 = g_b12c48;
                int32_t v_c20_4 = 0;
                int32_t flagP26 = *(valA1 + 0x18);

                if (i_2 < 1 && valA18 + (((valA18 + 4) * srcS23 + (ctxB5 << 3)) << 1) + 0x3c < 0xc80
                    && srcS24 < g_b12c4c - 2)
                {
                    void* valA41 = valA32 - flagP26;
                    int32_t* dstD18 = *(g_b12c44 + (srcS24 << 2)) * g_b12c50 + g_b12c40;
                    *(dstD18 + g_b12c54) = srcS24;
                    g_b12c48 += 1;
                    *(valA1 + 0x18) = dstD18;
                    int32_t srcS28;
                    int32_t dstD19;
                    dstD19 = memcpy(dstD18, flagP26, valA41 & 0xfffffffc);
                    memcpy(dstD19, srcS28, valA41 & 3);
                    int32_t objC95 = *(valA1 + 0x18);
                    *(valA1 + 0x14) = 1;
                    valA32 = valA41 + objC95;
                    v_c20_4 = 1;
                    *((g_b16c9c << 2) + &g_b12c5c) = objC95;
                    goto label_510bba;
                }

                int32_t objC97;

                if (i_2 >= 2
                        || valA18 + (((valA18 + 4) * srcS23 + (ctxB5 << 3)) << 1) + 0x3c >= 0x1f40)
                    objC97 = g_b16cc8;
                else
                {
                    objC97 = g_b16cc8;

                    if (objC97 < g_b16ccc - 2)
                    {
                        void* valA42 = valA32 - flagP26;
                        v_c20_4 = 1;
                        int32_t* dstD23 =
                            *(g_b16cc4 + (objC97 << 2)) * g_b16cd0 + g_b16cc0;
                        *(dstD23 + g_b16cd4) = objC97;
                        g_b16cc8 += 1;
                        *(valA1 + 0x18) = dstD23;
                        int32_t srcS34;
                        int32_t dstD24;
                        dstD24 = memcpy(dstD23, flagP26, valA42 & 0xfffffffc);
                        memcpy(dstD24, srcS34, valA42 & 3);
                        int32_t objC102 = *(valA1 + 0x18);
                        *(valA1 + 0x14) = 2;
                        valA32 = valA42 + objC102;
                        *((g_b16c9c << 2) + &g_b12c5c) = objC102;
                    label_510bba:
                        srcS24 = g_b12c48;
                        objC97 = g_b16cc8;
                        i_2 = i_1;
                    }
                }

                int32_t* objC107;
                int32_t flagP27;

                if (!i_2)
                {
                    int32_t* dstD25 = g_b12b74;
                    int32_t objC104 = g_b12b68 - 1;
                    flagP27 = *(dstD25 + flagP26);
                    g_b12b68 = objC104;

                    if (flagP27 != objC104)
                    {
                        int32_t srcS36 = g_b12b64;
                        objC107 = *(srcS36 + (objC104 << 2)) * g_b12b70 + g_b12b60;
                        int32_t ctxB27 = *(srcS36 + (flagP27 << 2));
                        int32_t dstD26 = *(objC107 + dstD25);
                        *(srcS36 + (flagP27 << 2)) = *(srcS36 + (dstD26 << 2));
                        *(g_b12b64 + (dstD26 << 2)) = ctxB27;
                        *(objC107 + g_b12b74) = flagP27;
                    }
                }
                else if (i_2 == 1)
                {
                    int32_t* ctxB30 = g_b12c54;
                    flagP27 = *(ctxB30 + flagP26);
                    g_b12c48 = srcS24 - 1;

                    if (flagP27 != srcS24 - 1)
                    {
                        int32_t dstD27 = g_b12c44;
                        objC107 = *(dstD27 + ((srcS24 - 1) << 2)) * g_b12c50 + g_b12c40;
                        int32_t srcS41 = *(objC107 + ctxB30);
                        int32_t ctxB31 = *(dstD27 + (flagP27 << 2));
                        *(dstD27 + (flagP27 << 2)) = *(dstD27 + (srcS41 << 2));
                        *(g_b12c44 + (srcS41 << 2)) = ctxB31;
                        *(objC107 + g_b12c54) = flagP27;
                    }
                }
                else if (i_2 == 2)
                {
                    int32_t* dstD29 = g_b16cd4;
                    flagP27 = *(dstD29 + flagP26);
                    g_b16cc8 = objC97 - 1;

                    if (flagP27 != objC97 - 1)
                    {
                        int32_t srcS42 = g_b16cc4;
                        objC107 = *(srcS42 + ((objC97 - 1) << 2)) * g_b16cd0 + g_b16cc0;
                        int32_t ctxB35 = *(srcS42 + (flagP27 << 2));
                        int32_t dstD30 = *(objC107 + dstD29);
                        *(srcS42 + (flagP27 << 2)) = *(srcS42 + (dstD30 << 2));
                        *(g_b16cc4 + (dstD30 << 2)) = ctxB35;
                        *(objC107 + g_b16cd4) = flagP27;
                    }
                }

                if (v_c20_4)
                {
                    srcS23 = v_c24_10;
                label_510d13:
                    *valA32 = tmpD2;
                    int32_t v_c0c_2 = 0;
                    valA32[1] = &srcS9[4];
                    valA32[2] = srcS23;
                    valA32[3] = *srcS9;
                    int32_t flagP28 = 0x17 - tmpD1;
                    int32_t ctxB40 = tmpD1 * 0x1c;
                    int32_t* v_c1c_9 = &valA32[4];
                    int32_t* tmpD63 = &v_a78;
                    void v_9d0;
                    void* valA47 = &v_9d0;
                    int32_t v_c08_5 = ctxB40;
                    int32_t v_bf0_3 = flagP28;
                    long double x87_r7_32 = 0x40000000 >> (tmpD1 & 0x1f);

                    while (true)
                    {
                        int32_t tmpD65 = *tmpD63 * 0xe1;
                        float objC120 = *(ctxB40 + (tmpD65 << 2) + 0xc28ff8);
                        char objC121 = flagP28;
                        long double x87_r6_26 = *(ctxB40 + (tmpD65 << 2) + 0xc28ff0);
                        i_1 = x87_r6_26 * v_be8_6;
                        int32_t tmpD68 = i_1 >> (objC121 & 0x1f) & 0x7ff;
                        i_1 = x87_r6_26 * v_bc8_1;
                        int32_t srcS48 = i_1 >> (objC121 & 0x1f) & 0x7ff;
                        i_1 = objC120 * v_be8_6;
                        int32_t dstD33 = i_1 >> ((0x16 - tmpD1) & 0x1f) & 0x7ff;
                        i_1 = objC120 * v_bc8_1;
                        i_1 = i_1 >> ((0x16 - tmpD1) & 0x1f) & 0x7ff;
                        int32_t objC124 = 0;
                        objC124 = *((tmpD68 >> 8)
                            + (((srcS48 >> 8) + (*(ctxB40 + (tmpD65 << 2) + 0xc28ff4) << 3)) << 3)
                            + 0xc30080);
                        *(valA47 - 4) = objC124;
                        int32_t objC127 = 0;
                        objC127 = *((dstD33 >> 8)
                            + (((i_1 >> 8) + (*(ctxB40 + (tmpD65 << 2) + 0xc28ffc) << 3)) << 3)
                            + 0xc30080);
                        *(valA47 - 8) = objC127;
                        *(valA47 - 0xc) = x87_r6_26 * 0.5f / x87_r7_32;
                        int32_t v_bfc_4 = srcS48 & 0xff;
                        *(valA47 - 0x10) = ((tmpD68 & 0xff) + 1f) * 0.00390625f;
                        *(valA47 - 0x14) = (v_bfc_4 + 1f) * 0.00390625f;
                        flagP28 = v_bf0_3;
                        v_bfc_4 = x87_r6_26 * v_be0_2;
                        valA47 += 0x28;
                        *(valA47 - 0x40) = ((v_bfc_4 >> (flagP28 & 0x1f)) + 1f) * 0.00390625f;
                        *(valA47 - 0x44) = objC120 / x87_r7_32;
                        int32_t v_bfc_7 = i_1;
                        *(valA47 - 0x48) = ((dstD33 & 0xff) + 1f) * 0.00390625f;
                        *(valA47 - 0x4c) = (v_bfc_7 + 1f) * 0.00390625f;
                        v_bfc_7 = objC120 * v_be0_2;
                        bool cond_16_1 = v_c0c_2 + 1 < v_c24_10;
                        v_c0c_2 += 1;
                        *(valA47 - 0x50) =
                            ((v_bfc_7 >> ((0x16 - tmpD1) & 0x1f)) + 1f) * 0.00390625f;

                        if (!cond_16_1)
                            break;

                        ctxB40 = v_c08_5;
                        tmpD63 = &tmpD63[1];
                    }

                    void v_9f8;
                    float* valA58 = &v_9f8;
                    int32_t flagP38;

                    if (v_c24_10 <= 0)
                        flagP38 = objC34;
                    else
                    {
                        void* ctxB50 = valA18 + 4;
                        int32_t* dstD35 = v_c1c_9;
                        int32_t v_c0c_3 = v_c24_10;
                        int32_t* v_c20_6 = &v_a78;

                        while (true)
                        {
                            long double x87_r7_34 = *valA58;
                            long double x87_r6_44 = valA58[1];
                            int32_t v_be0_3 = 0;
                            long double x87_r5_35 = valA58[2];
                            long double x87_r4_13 = valA58[3];
                            long double x87_r3_25 = valA58[4];
                            float tmpD77 = valA58[5];
                            float objC134 = valA58[6];
                            float tmpD78 = valA58[7];
                            int32_t v_c24_11 = ctxB5;
                            int32_t objC136 = *v_c20_6;
                            int32_t tmpD80 = g_c30060;
                            int32_t objC137 = valA58[8];
                            valA58 = &valA58[0xa];
                            int32_t objC139 = valA58[-1];
                            *dstD35 = tmpD80 + objC137 * 0x24 + 0xc;
                            int32_t* v_bc8_2 = valA3;
                            int32_t* objC142 = ctxB50 + dstD35;
                            int32_t* dstD36 = &dstD35[1];
                            v_c1c_9 = ctxB50 + objC142;
                            void v_904;
                            int32_t* ctxB52 = &v_904;
                            *objC142 = tmpD80 + objC139 * 0x24 + 0xc;
                            void* objC143 = &objC142[1];
                            int32_t* v_bf4_2 = &v_904;
                            bool cond_23_1;

                            do
                            {
                                int32_t srcS51 = ctxB52[4];
                                int32_t tmpD83 = *v_bc8_2;
                                int32_t tmpD85 = tmpD83 >> 8 & 3;
                                float tmpD88 = *ctxB52;
                                int32_t srcS52 = srcS51 & 0xff;
                                float tmpD89 = ctxB52[1];
                                float tmpD90 = ctxB52[2];
                                int32_t flagP36 = tmpD83 >> 6 & 3;
                                int32_t v_c04_2;
                                int32_t* tmpD95;

                                if (v_be0_3 < objC34)
                                {
                                    v_c04_2 = v_be0_3;
                                    tmpD95 = v_bf4_2;
                                }
                                else
                                {
                                    int32_t tmpD93 = v_bf4_2[-1];
                                    v_c04_2 = tmpD93;
                                    int32_t saved_dst;
                                    tmpD95 = &(&saved_dst)[tmpD93 * 9 + 0xcd];
                                }

                                float ctxB54 = *tmpD95;
                                float ctxB55 = tmpD95[1];
                                float tmpD96 = tmpD95[2];
                                float v_b70_1;
                                float v_b40_1;
                                long double x87_r1_18;
                                long double x87_r2_23;

                                if (!tmpD85)
                                {
                                    x87_r2_23 = tmpD89 * x87_r4_13 + x87_r6_44;
                                    v_b40_1 = tmpD88 * x87_r4_13 + x87_r5_35;
                                    v_b70_1 = ctxB55 * x87_r4_13 + x87_r6_44 - x87_r2_23;
                                    x87_r1_18 = ctxB54 * x87_r4_13 + x87_r5_35;
                                }
                                else
                                {
                                    float v_bb8_1;
                                    float v_b54_1;
                                    long double x87_r2_20;

                                    if (!((tmpD85 ^ tmpD3) & 1))
                                    {
                                        v_b54_1 = tmpD88;
                                        v_bb8_1 = ctxB54;
                                        x87_r2_20 = x87_r5_35;
                                    }
                                    else
                                    {
                                        v_b54_1 = tmpD89;
                                        v_bb8_1 = ctxB55;
                                        x87_r2_20 = x87_r6_44;
                                    }

                                    float v_bd0_1 = x87_r2_20;
                                    x87_r2_23 = tmpD90 * x87_r4_13 + x87_r7_34;
                                    v_b40_1 = v_b54_1 * x87_r4_13 + v_bd0_1;
                                    v_b70_1 = tmpD96 * x87_r4_13 + x87_r7_34 - x87_r2_23;
                                    x87_r1_18 = v_bb8_1 * x87_r4_13 + v_bd0_1;
                                }

                                float v_b6c_1;
                                float v_b34_1;
                                long double x87_r0_17;
                                long double x87_r1_31;

                                if (!flagP36)
                                {
                                    x87_r1_31 = tmpD88 * tmpD78 + objC134;
                                    v_b34_1 = tmpD89 * tmpD78 + tmpD77;
                                    v_b6c_1 = ctxB54 * tmpD78 + objC134 - x87_r1_31;
                                    x87_r0_17 = ctxB55 * tmpD78 + tmpD77;
                                }
                                else
                                {
                                    float v_bb8_2;
                                    float tmpD106;
                                    long double x87_r1_29;

                                    if (!((flagP36 ^ tmpD3) & 1))
                                    {
                                        x87_r1_29 = tmpD88;
                                        v_bb8_2 = ctxB54;
                                        tmpD106 = objC134;
                                    }
                                    else
                                    {
                                        x87_r1_29 = tmpD89;
                                        v_bb8_2 = ctxB55;
                                        tmpD106 = tmpD77;
                                    }

                                    x87_r1_31 = x87_r1_29 * tmpD78 + tmpD106;
                                    v_b34_1 = tmpD90 * tmpD78 + x87_r3_25;
                                    v_b6c_1 = v_bb8_2 * tmpD78 + tmpD106 - x87_r1_31;
                                    x87_r0_17 = tmpD96 * tmpD78 + x87_r3_25;
                                }

                                int32_t ctxB56 = 0;

                                if (objC136 == srcS52)
                                    ctxB56 = 8;
                                else if (objC136 == srcS51 >> 0x10)
                                {
                                    int32_t srcS54 = -((srcS52 - 0xff));
                                    ctxB56 = ((srcS54 - srcS54) & 0xfffffff8) + 0x18;
                                }

                                int32_t tmpD112 = ((v_c04_2 << 5) + ctxB56) | v_c04_2 << 0x10;
                                *dstD36 = tmpD112;
                                dstD36[1] = v_b40_1;
                                dstD36[2] = x87_r2_23;
                                flagP38 = objC34;
                                *objC143 = tmpD112 + 4;
                                *(objC143 + 4) = x87_r1_31;
                                dstD36 = &dstD36[3];
                                *(objC143 + 8) = v_b34_1;
                                objC143 += 0xc;

                                if (v_be0_3 >= flagP38)
                                {
                                    *dstD36 = x87_r1_18 - v_b40_1;
                                    dstD36[1] = v_b70_1;
                                    *objC143 = v_b6c_1;
                                    dstD36 = &dstD36[2];
                                    *(objC143 + 4) = x87_r0_17 - v_b34_1;
                                    objC143 += 8;
                                }

                                ctxB52 = &v_bf4_2[9];
                                v_bf4_2 = ctxB52;
                                v_bc8_2 = &v_bc8_2[1];
                                v_be0_3 += 1;
                                cond_23_1 = v_c24_11 != 1;
                                v_c24_11 -= 1;
                            } while (cond_23_1);
                            bool cond_24_1 = v_c0c_3 != 1;
                            v_c20_6 = &v_c20_6[1];
                            v_c0c_3 -= 1;

                            if (!cond_24_1)
                                break;

                            dstD35 = v_c1c_9;
                            ctxB50 = valA18 + 4;
                        }
                    }

                    if (!v_bd8_2)
                        *v_c1c_9 = 0;
                    else
                    {
                        *v_c1c_9 = v_afc;
                        float* valA69 = &v_c1c_9[1];
                        int32_t v_bd8_3 = ctxB5;
                        int32_t* srcS69 = &v_908;
                        int32_t tmpD121 = 0;
                        bool cond_20_1;

                        do
                        {
                            float objC151 = srcS69[7];
                            float objC152 = srcS69[8];
                            int32_t objC153;

                            if (tmpD121 < flagP38)
                                objC153 = tmpD121;
                            else
                                objC153 = *srcS69;

                            int32_t dstD40 = objC153 * 9;
                            v_8ec;
                            float ctxB58 = *(&v_8ec + (dstD40 << 2));
                            valA69 = &valA69[3];
                            v_8e8;
                            long double x87_r7_37 = *(&v_8e8 + (dstD40 << 2)) - objC152;
                            valA69[-3] = objC153 << 5 | objC153 << 0x10;
                            valA69[-2] = objC151;
                            valA69[-1] = objC152;

                            if (tmpD121 >= flagP38)
                            {
                                *valA69 = ctxB58 - objC151;
                                valA69[1] = x87_r7_37;
                                valA69 = &valA69[2];
                            }

                            srcS69 = &srcS69[9];
                            tmpD121 += 1;
                            cond_20_1 = v_bd8_3 != 1;
                            v_bd8_3 -= 1;
                        } while (cond_20_1);
                    }
                }
                else
                {
                    *(valA1 + 0x18) = 0;
                    *(valA1 + 0x10) = 0xffffffff;
                    g_b16c9c -= 1;
                }

                flagP1 = v_b98;
            }
            else
            {
                int32_t tmpD7 = g_b12c48;

                if (tmpD7 <= g_b12c4c - 3)
                {
                    int32_t objC12 = *(g_b12c44 + (tmpD7 << 2)) * g_b12c50 + g_b12c40;
                    *(g_b12c54 + objC12) = tmpD7;
                    g_b12c48 += 1;
                    *(valA1 + 0x18) = objC12;
                    *(valA1 + 0x14) = 1;
                    goto label_5101bf;
                }

                int32_t tmpD9 = g_b16cc8;

                if (tmpD9 <= g_b16ccc - 3)
                {
                    int32_t objC8 = *(g_b16cc4 + (tmpD9 << 2)) * g_b16cd0 + g_b16cc0;
                    *(g_b16cd4 + objC8) = tmpD9;
                    g_b16cc8 += 1;
                    *(valA1 + 0x18) = objC8;
                    *(valA1 + 0x14) = 2;
                    goto label_5101bf;
                }

                *(valA1 + 0x10) = 0xffffffff;
            }

            result = result_1 + 1;
            flagP1 += 0x30;
            result_1 = result;
            v_b98 = flagP1;
        } while (result < result_2);
    }

    return result;
}
