#include "gi_platform.h"
#include "0049A9B0-PolyListDynCubeObj_Process.h"
int32_t PolyListDynCubeObj_Process(int32_t a1 , void* a2)

{
    int32_t ctxB;
    int32_t v_e8 = ctxB;
    int32_t srcS;
    int32_t v_f0 = srcS;
    void* ctxB1 = (*(int32_t*)(uintptr_t)(a2 + 0xc));
    int32_t dstD;
    int32_t v_f4 = dstD;
    void* v_ac = ctxB1;
    int32_t v_d8 = 0x3f800000;
    int32_t v_d4 = 0x3f800000;
    int32_t v_d0 = 0x3f800000;
    int32_t v_cc = 0;
    int32_t v_c8 = 0;
    int32_t v_c4 = 0;

    if (*(ctxB1 + 0xa4))
    {
        long double x87_r7_1 = 0.0f;
        long double x87_r6_1 = 0.0f;
        int32_t i_3 = g_b041e8;
        float v_d4_1 = x87_r6_1;
        long double x87_r5_1 = 0.0f;
        float v_d0_1 = x87_r5_1;

        if (i_3 > 0)
        {
            int32_t* objC1 = g_b041e4;
            int32_t i_2 = i_3;
            int32_t i;

            do
            {
                void* valA4 = *objC1 * g_b041f0 + g_b041e0;

                if (*(valA4 + 0x25))
                {
                    x87_r7_1 = x87_r7_1 + *(valA4 + 0xc);
                    x87_r6_1 = x87_r6_1 + *(valA4 + 0x10);
                    x87_r5_1 = x87_r5_1 + *(valA4 + 0x14);
                }

                objC1 = &objC1[1];
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            v_d0_1 = x87_r5_1;
            v_d4_1 = x87_r6_1;
        }

        float objC2 = g_b818ac;
        float valA5 = g_b818b4;
        float tmpD2 = g_b818b0;
        long double x87_r7_9 = objC2 + x87_r7_1 * 0.5.0f;
        long double f1_1 = 1.0f;
        x87_r7_9 - f1_1;

        if (!(*(&((x87_r7_9 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float v_d8_2 = 1.0f - objC2;

        long double x87_r7_13 = tmpD2 + v_d4_1 * 0.5.0f;
        long double f2_1 = 1.0f;
        x87_r7_13 - f2_1;

        if (!(*(&((x87_r7_13 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float v_d4_3 = 1.0f - tmpD2;

        long double x87_r7_17 = valA5 + v_d0_1 * 0.5.0f;
        long double f4_1 = 1.0f;
        x87_r7_17 - f4_1;

        if (!(*(&((x87_r7_17 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float v_d0_3 = 1.0f - valA5;
    }

    void* valA7 = g_bcade8;
    int32_t objC3 = g_72057c;

    if (*(valA7 + 4) != objC3)
    {
        *(valA7 + 4) = objC3;
        ((int(*)())(uintptr_t)(*(g_bcade8 + (g_72057c << 2) + 0x14)))(0);
    }

    void* valA8 = g_bcad7c;
    int32_t objC5 = g_7205a4;

    if (*(valA8 + 4) != objC5)
    {
        *(valA8 + 4) = objC5;
        ((int(*)())(uintptr_t)(*(g_bcad7c + (g_7205a4 << 2) + 0x14)))(0);
    }

    void* valA10 = g_bcadac;
    int32_t objC7 = g_7205a8;

    if (*(valA10 + 4) != objC7)
    {
        *(valA10 + 4) = objC7;
        ((int(*)())(uintptr_t)(*(g_bcadac + (g_7205a8 << 2) + 0x14)))(0);
    }

    int32_t* valA12 = *(ctxB1 + 0x6c);
    double v_68;
    memcpy(&v_68, ctxB1 + 0x20, 0x18);
    v_68 = **valA12 + v_68;
    double v_60;
    double v_60_1 = *(*valA12 + 4) + v_60;
    int32_t* valA14 = *(ctxB1 + 0xb4);
    float v_50 = 4096.0f;
    double v_58;
    double v_58_1 = *(*valA12 + 8) + v_58;
    double* v_fc;

    if (valA14 && *valA14)
    {
        double* srcS3 = *valA14;
        uint32_t valA16 = QObj_OnEvent();
        int32_t valA17 = 0;
        valA17 = *(srcS3 + 0x1c);
        int32_t valA18 = *(((valA16 * 0x180 + valA17) << 2) + &g_a96ae0);

        if (valA18)
        {
            double* v_f8_4 = &v_68;
            v_fc = srcS3;
            valA18(v_fc, v_f8_4);
        }
    }

    v_fc = &v_68;
    Display_CreateSurface_18(v_fc, v_50);
    int32_t* valA19 = g_5ca114;
    int32_t objC10 = *valA19;
    int32_t v_f8_6 = 0;
    v_fc = 0x89;
    ((int(*)())(uintptr_t)(*(objC10 + 0x50)))(valA19, v_fc, v_f8_6);
    float v_a4 = *(ctxB1 + 0x20) - g_bcab08;
    float v_a0 = *(ctxB1 + 0x28) - g_bcab10;
    long double x87_r7_31 = *(ctxB1 + 0x30) - g_bcab18;
    float* v_f8_7 = &v_a4;
    v_a4 = g_bcabec * v_a4;
    long double x87_r6_6 = v_a0 * g_bcabec;
    float v_98;
    v_fc = &v_98;
    float v_a0_1 = x87_r6_6;
    float v_9c = x87_r7_31 * g_bcabec;
    memcpy(&v_98, ctxB1 + 0x70, 0x28);
    v_98 = v_98 * g_bcabec;
    float v_94;
    float v_94_1 = v_94 * g_bcabec;
    float v_90;
    float v_90_1 = v_90 * g_bcabec;
    float v_8c;
    float v_8c_1 = v_8c * g_bcabec;
    float v_88;
    float v_88_1 = v_88 * g_bcabec;
    float v_84;
    float v_84_1 = v_84 * g_bcabec;
    float v_80 = v_80 * g_bcabec;
    float v_7c;
    float v_7c_1 = v_7c * g_bcabec;
    float v_78;
    float v_78_1 = v_78 * g_bcabec;
    char v_40;
    Display_SetGammaRamp_7(&v_40, v_fc, v_f8_7);
    int32_t* valA20 = g_5ca114;
    int32_t tmpD10 = *valA20;
    void* v_f8_8 = &v_40;
    v_fc = 1;
    ((int(*)())(uintptr_t)(*(tmpD10 + 0x2c)))(valA20, v_fc, v_f8_8);
    char valA21 = *(ctxB1 + 0xa0);
    int32_t v_f8_11;
    int32_t* valA24;
    int32_t tmpD12;

    if (!(valA21 & 8))
    {
        int32_t* valA25 = g_5ca114;

        if (!(valA21 & 0x10))
        {
            int32_t tmpD14 = *valA25;
            int32_t v_f8_15 = 1;
            v_fc = 0x1b;
            ((int(*)())(uintptr_t)(*(tmpD14 + 0x50)))(valA25, v_fc, v_f8_15);
            int32_t* valA28 = g_5ca114;
            int32_t v_f8_16 = 5;
            v_fc = 0x13;
            ((int(*)())(uintptr_t)(*(*valA28 + 0x50)))(valA28, v_fc, v_f8_16);
            valA24 = g_5ca114;
            v_f8_11 = 6;
            tmpD12 = *valA24;
            v_fc = 0x14;
            ((int(*)())(uintptr_t)(*(tmpD12 + 0x50)))(valA24, v_fc, v_f8_11);
        }
        else
        {
            int32_t objC12 = *valA25;
            int32_t v_f8_12 = 1;
            v_fc = 0x1b;
            ((int(*)())(uintptr_t)(*(objC12 + 0x50)))(valA25, v_fc, v_f8_12);
            int32_t* valA26 = g_5ca114;
            int32_t v_f8_13 = 1;
            v_fc = 0x13;
            ((int(*)())(uintptr_t)(*(*valA26 + 0x50)))(valA26, v_fc, v_f8_13);
            int32_t* valA27 = g_5ca114;
            int32_t v_f8_14 = 4;
            v_fc = 0x14;
            ((int(*)())(uintptr_t)(*(*valA27 + 0x50)))(valA27, v_fc, v_f8_14);
        }
    }
    else
    {
        int32_t* valA22 = g_5ca114;
        int32_t v_f8_9 = 1;
        v_fc = 0x1b;
        ((int(*)())(uintptr_t)(*(*valA22 + 0x50)))(valA22, v_fc, v_f8_9);
        int32_t* valA23 = g_5ca114;
        int32_t v_f8_10 = 2;
        v_fc = 0x13;
        ((int(*)())(uintptr_t)(*(*valA23 + 0x50)))(valA23, v_fc, v_f8_10);
        valA24 = g_5ca114;
        v_f8_11 = 2;
        tmpD12 = *valA24;
        v_fc = 0x14;
        ((int(*)())(uintptr_t)(*(tmpD12 + 0x50)))(valA24, v_fc, v_f8_11);
    }
    int32_t v_44 = *(ctxB1 + 0x94) + g_bcab04 + 1;
    Sys_ResolveSymbol_13(&g_720570);
    float v_70 = g_bcadc0 * 1.00999999.0f;
    int32_t valA31 = Display_CreateSurface_15();
    v_fc = &v_70;
    ((int(*)())(uintptr_t)(*((valA31 << 2) + &g_a94e84)))(v_fc);
    bool cond_6 = g_bcad88 + 0xc0 > g_bcad84;
    int32_t* valA33 = g_bcad80;
    int32_t v_f8_18 = 0;
    int32_t objC16 = *valA33;
    int32_t v_e4;
    v_fc = &v_e4;
    int32_t result;
    double** esp_1;
    int32_t tmpD19;

    if (cond_6)
    {
        int32_t v_100_12 = 0x2020;
        result = ((int(*)())(uintptr_t)(*(objC16 + 0xc)))(valA33, 0x2020);
        esp_1 = &v_fc;
        v_e4 = 0;
        g_bcad88 = 0xc0;

        if (!result)
        {
            tmpD19 = a1;
    label_49aed6: ;
            int32_t flagP1 = 0;

            if (tmpD19)
            {
                int32_t dstD1 = 0;
                bool cond_7_1 = *(ctxB1 + 0x9c) <= 0;
                int32_t v_e8_1 = tmpD19;
                int32_t v_c0 = 0;

                if (!cond_7_1)
                {
                    int32_t v_b0_1 = 0;
                    bool cond_15_1;

                    do
                    {
                        int32_t objC19 = *(ctxB1 + 0x6c);
                        void* valA35 = esp_1[5];
                        esp_1[0x21] = objC19;
                        void* valA36 = valA35 + 0x10;
                        void* srcS6 = objC19 + flagP1 + 0x18;
                        void* objC20 = objC19 + flagP1 + 0xc;
                        esp_1[0x11] = 3;
                        int32_t i_1;

                        do
                        {
                            int32_t* ctxB2 = *(objC20 - 0xc);
                            int32_t* tmpD20 = valA36 - 0x10;
                            long double x87_r7_53 = esp_1[7];
                            srcS6 += 8;
                            *tmpD20 = *ctxB2;
                            objC20 += 4;
                            valA36 += 0x18;
                            tmpD20[1] = ctxB2[1];
                            tmpD20[2] = ctxB2[2];
                            float* tmpD21 = *(objC20 - 4);
                            *(esp_1 + 0x34) = (x87_r7_53 * *tmpD21 + esp_1[0xa]) * 255.0f;
                            int32_t ctxB4 = esp_1[0xd];
                            *(esp_1 + 0x34) = *(objC20 + 0x20) * 255.0f;
                            int32_t ctxB6 = (ctxB4 | esp_1[0xd] << 8) << 8;
                            *(esp_1 + 0x34) = (esp_1[8] * tmpD21[1] + esp_1[0xb]) * 255.0f;
                            int32_t ctxB8 = (ctxB6 | esp_1[0xd]) << 8;
                            *(esp_1 + 0x34) = (esp_1[9] * tmpD21[2] + esp_1[0xc]) * 255.0f;
                            *(valA36 - 0x1c) = ctxB8 | esp_1[0xd];
                            *(valA36 - 0x18) = *(srcS6 - 8);
                            *(valA36 - 0x14) = *(srcS6 - 4);
                            i_1 = esp_1[0x11];
                            esp_1[0x11] = i_1 - 1;
                        } while (i_1 != 1);
                        int32_t flagP7 = esp_1[0x13];
                        int32_t valA37 = esp_1[0x21];
                        ctxB1 = esp_1[0x12];
                        dstD1 += 1;
                        void* objC21 = *(valA37 + flagP7 + 0x48);
                        int32_t srcS7;
                        int32_t tmpD36;

                        if (!objC21)
                        {
                            srcS7 = esp_1[0xf];

                            if (srcS7 >= *(ctxB1 + 0x9c) - 1 || *(valA37 + flagP7 + 0x98)
                                || dstD1 >= 0x3f)
                            {
                                int32_t* valA46 = g_5ca114;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = 0;
                                *(esp_1 - 0xc) = valA46;
                                ((int(*)())(uintptr_t)(*(*valA46 + 0x8c)))();
                                int32_t* valA47 = g_5ca114;
                                *(esp_1 - 4) = 3;
                                *(esp_1 - 8) = 4;
                                *(esp_1 - 0xc) = 0;
                                int32_t objC32 = *valA47;
                                *(esp_1 - 0x10) = valA47;
                                ((int(*)())(uintptr_t)(*(objC32 + 0x94)))();
                                int32_t* valA48 = g_5ca114;
                                *(esp_1 - 4) = 3;
                                *(esp_1 - 8) = 1;
                                *(esp_1 - 0xc) = 0;
                                int32_t tmpD38 = *valA48;
                                *(esp_1 - 0x10) = valA48;
                                ((int(*)())(uintptr_t)(*(tmpD38 + 0x94)))();
                                int32_t* valA49 = g_bcad80;
                                *(esp_1 - 4) = valA49;
                                ((int(*)())(uintptr_t)(*(*valA49 + 0x10)))();
                                int32_t* valA50 = g_5ca114;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = dstD1 * 3;
                                int32_t tmpD39 = *valA50;
                                *(esp_1 - 0xc) = esp_1[6];
                                *(esp_1 - 0x10) = g_bcad80;
                                *(esp_1 - 0x14) = 4;
                                *(esp_1 - 0x18) = valA50;
                                ((int(*)())(uintptr_t)(*(tmpD39 + 0x7c)))();
                                int32_t valA51 = g_bcad84;
                                int32_t tmpD41 = g_bcad88 + 0xc0;
                                *(esp_1 - 4) = 0;
                                int32_t* valA52 = g_bcad80;
                                int32_t objC37 = *valA52;
                                *(esp_1 - 8) = &esp_1[4];

                                if (tmpD41 > valA51)
                                {
                                    *(esp_1 - 0xc) = 0x2020;
                                    *(esp_1 - 0x10) = valA52;
                                    result = ((int(*)())(uintptr_t)(*(objC37 + 0xc)))();
                                    esp_1 -= 8;
                                    esp_1[6] = 0;
                                    g_bcad88 = 0xc0;

                                    if (result)
                                        goto label_49b24e;

                                    tmpD36 = esp_1[4];
                                }
                                else
                                {
                                    *(esp_1 - 0xc) = 0x1020;
                                    *(esp_1 - 0x10) = valA52;
                                    result = ((int(*)())(uintptr_t)(*(objC37 + 0xc)))();
                                    esp_1 -= 8;
                                    int32_t objC38 = g_bcad88;
                                    int32_t dstD3 = esp_1[4];
                                    esp_1[6] = objC38;
                                    tmpD36 = dstD3 + objC38 * 0x18;
                                    g_bcad88 = objC38 + 0xc0;
                                    esp_1[4] = tmpD36;

                                    if (result)
                                        goto label_49b24e;
                                }

                                if (!tmpD36)
                                    goto label_49b24e;

                                esp_1[5] = tmpD36;
                                dstD1 = 0;
                            }
                            else
                                esp_1[5] = &esp_1[5][9];
                        }
                        else
                        {
                            srcS7 = esp_1[0xf];

                            if (srcS7 >= *(ctxB1 + 0x9c) - 1 || *(valA37 + flagP7 + 0x98) != objC21
                                || dstD1 >= 0x3f)
                            {
                                int32_t* valA38 = g_5ca114;
                                *(esp_1 - 4) = *(objC21 + 0x20);
                                *(esp_1 - 8) = 0;
                                int32_t tmpD28 = *valA38;
                                *(esp_1 - 0xc) = valA38;
                                ((int(*)())(uintptr_t)(*(tmpD28 + 0x8c)))();
                                int32_t* valA39 = g_5ca114;
                                *(esp_1 - 4) = 2;
                                *(esp_1 - 8) = 4;
                                *(esp_1 - 0xc) = 0;
                                int32_t tmpD29 = *valA39;
                                *(esp_1 - 0x10) = valA39;
                                ((int(*)())(uintptr_t)(*(tmpD29 + 0x94)))();
                                int32_t* valA40 = g_5ca114;
                                *(esp_1 - 4) = 4;
                                *(esp_1 - 8) = 1;
                                *(esp_1 - 0xc) = 0;
                                int32_t objC23 = *valA40;
                                *(esp_1 - 0x10) = valA40;
                                ((int(*)())(uintptr_t)(*(objC23 + 0x94)))();
                                int32_t* valA41 = g_bcad80;
                                *(esp_1 - 4) = valA41;
                                ((int(*)())(uintptr_t)(*(*valA41 + 0x10)))();
                                int32_t* valA42 = g_5ca114;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = dstD1 * 3;
                                int32_t objC24 = *valA42;
                                *(esp_1 - 0xc) = esp_1[6];
                                *(esp_1 - 0x10) = g_bcad80;
                                *(esp_1 - 0x14) = 4;
                                *(esp_1 - 0x18) = valA42;
                                ((int(*)())(uintptr_t)(*(objC24 + 0x7c)))();
                                bool cond_10_1 = g_bcad88 + 0xc0 > g_bcad84;
                                int32_t* valA45 = g_bcad80;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = &esp_1[4];
                                int32_t objC26 = *valA45;

                                if (cond_10_1)
                                {
                                    *(esp_1 - 0xc) = 0x2020;
                                    *(esp_1 - 0x10) = valA45;
                                    result = ((int(*)())(uintptr_t)(*(objC26 + 0xc)))();
                                    esp_1 -= 8;
                                    esp_1[6] = 0;
                                    g_bcad88 = 0xc0;

                                    if (result)
                                        goto label_49b24e;

                                    tmpD36 = esp_1[4];
                                }
                                else
                                {
                                    *(esp_1 - 0xc) = 0x1020;
                                    *(esp_1 - 0x10) = valA45;
                                    result = ((int(*)())(uintptr_t)(*(objC26 + 0xc)))();
                                    esp_1 -= 8;
                                    int32_t objC27 = g_bcad88;
                                    int32_t dstD2 = esp_1[4];
                                    esp_1[6] = objC27;
                                    tmpD36 = dstD2 + objC27 * 0x18;
                                    g_bcad88 = objC27 + 0xc0;
                                    esp_1[4] = tmpD36;

                                    if (result)
                                        goto label_49b24e;
                                }

                                if (!tmpD36)
                                    goto label_49b24e;

                                esp_1[5] = tmpD36;
                                dstD1 = 0;
                            }
                            else
                                esp_1[5] = &esp_1[5][9];
                        }
                        flagP1 = flagP7 + 0x50;
                        cond_15_1 = srcS7 + 1 < *(ctxB1 + 0x9c);
                        esp_1[0xf] = srcS7 + 1;
                        esp_1[0x13] = flagP1;
                    } while (cond_15_1);
                }

                int32_t* valA54 = g_bcad80;
                *(esp_1 - 4) = valA54;
                ((int(*)())(uintptr_t)(*(*valA54 + 0x10)))();
                esp_1[0xd] = esp_1[0x10];
                int32_t valA55 = Display_CreateSurface_15();
                *(esp_1 - 4) = &esp_1[0xd];
                result = ((int(*)())(uintptr_t)(*((valA55 << 2) + &g_a94e84)))();
            }
        }
    }
    else
    {
        int32_t v_100_11 = 0x1020;
        result = ((int(*)())(uintptr_t)(*(objC16 + 0xc)))(valA33, 0x1020);
        esp_1 = &v_fc;
        int32_t objC17 = g_bcad88;
        v_e4 = objC17;
        tmpD19 = a1 + objC17 * 0x18;
        g_bcad88 = objC17 + 0xc0;
        int32_t v_ec_1 = tmpD19;

        if (!result)
            goto label_49aed6;
    }
    label_49b24e: ;
    *esp_1;
    esp_1[1];
    esp_1[2];
    esp_1[3];
    return result;
}
