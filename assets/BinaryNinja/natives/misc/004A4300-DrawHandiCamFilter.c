#include "DrawHandiCamFilter.h"
int32_t DrawHandiCamFilter(int32_t a1 @ flagP, void* a2)

{
    int32_t ctxB;
    int32_t v_b0 = ctxB;
    int32_t result_1 = a1;
    int32_t srcS;
    int32_t v_b8 = srcS;
    int32_t dstD;
    int32_t v_bc = dstD;
    long double fpu7 = *(a2 + 0x2c);
    long double f0 = g_bcadc0;
    fpu7 - f0;
    float v_a0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        v_a0 = g_bcadc0;
    else
        v_a0 = *(a2 + 0x2c);

    int32_t* valA2 = g_5ca114;
    void v_40;
    void* v_c0 = &v_40;
    void* v_c4 = 3;
    (*(*valA2 + 0x30))(valA2, v_c4, v_c0);
    long double x87_r7_3 = g_bcabec * v_a0;
    void* valA3 = g_bcade8;
    int32_t v_c0_1 = 0;
    v_c4 = 0x2f;
    float v_18;
    long double x87_r7_10 =
        (1f - g_bcada0 * 1f / x87_r7_3) * v_18 * (g_bcad8c - g_bcadb4) + g_bcadb4;
    *(valA3 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    float v_94 = x87_r7_10;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* valA5 = g_5ca114;
    (*(*valA5 + 0x50))(valA5, v_c4, v_c0_1);
    int32_t* valA6 = g_5ca114;
    int32_t v_c0_2 = 0;
    v_c4 = 0x1c;
    (*(*valA6 + 0x50))(valA6, v_c4, v_c0_2);
    int32_t* valA7 = g_5ca114;
    int32_t v_c0_3 = 0;
    v_c4 = 0x1d;
    (*(*valA7 + 0x50))(valA7, v_c4, v_c0_3);
    int32_t* valA8 = g_5ca114;
    int32_t v_c0_4 = 1;
    v_c4 = 0x16;
    (*(*valA8 + 0x50))(valA8, v_c4, v_c0_4);
    int32_t* valA9 = g_5ca114;
    int32_t v_c0_5 = 0;
    v_c4 = 0x89;
    (*(*valA9 + 0x50))(valA9, v_c4, v_c0_5);
    int32_t* valA10 = g_5ca114;
    int32_t v_c0_6 = 1;
    v_c4 = 0x1a;
    (*(*valA10 + 0x50))(valA10, v_c4, v_c0_6);
    int32_t* valA11 = g_5ca114;
    int32_t v_c0_7 = 0;
    v_c4 = 0xf;
    (*(*valA11 + 0x50))(valA11, v_c4, v_c0_7);
    int32_t* valA12 = g_5ca114;
    int32_t v_c0_8 = 4;
    v_c4 = 0x17;
    (*(*valA12 + 0x50))(valA12, v_c4, v_c0_8);
    int32_t* valA13 = g_5ca114;
    int32_t v_c0_9 = 0;
    v_c4 = 7;
    (*(*valA13 + 0x50))(valA13, v_c4, v_c0_9);
    int32_t* valA14 = g_5ca114;
    int32_t v_c0_10 = 0;
    v_c4 = 0xe;
    (*(*valA14 + 0x50))(valA14, v_c4, v_c0_10);
    int32_t* valA15 = g_5ca114;
    int32_t v_c0_11 = 3;
    v_c4 = 4;
    int32_t v_c8_11 = 0;
    (*(*valA15 + 0x94))(valA15, 0, v_c4, v_c0_11);
    int32_t* valA16 = g_5ca114;
    int32_t v_c0_12 = 2;
    v_c4 = 5;
    int32_t v_c8_12 = 0;
    (*(*valA16 + 0x94))(valA16, 0, v_c4, v_c0_12);
    int32_t* valA17 = g_5ca114;
    int32_t v_c0_13 = 0;
    v_c4 = 6;
    int32_t v_c8_13 = 0;
    (*(*valA17 + 0x94))(valA17, 0, v_c4, v_c0_13);
    int32_t* valA18 = g_5ca114;
    int32_t v_c0_14 = 3;
    v_c4 = 1;
    int32_t v_c8_14 = 0;
    (*(*valA18 + 0x94))(valA18, 0, v_c4, v_c0_14);
    int32_t* valA19 = g_5ca114;
    int32_t v_c0_15 = 2;
    v_c4 = 2;
    int32_t v_c8_15 = 0;
    (*(*valA19 + 0x94))(valA19, 0, v_c4, v_c0_15);
    int32_t* valA20 = g_5ca114;
    int32_t v_c0_16 = 0;
    v_c4 = 3;
    int32_t v_c8_16 = 0;
    (*(*valA20 + 0x94))(valA20, 0, v_c4, v_c0_16);
    int32_t* valA21 = g_5ca114;
    int32_t v_c0_17 = 1;
    v_c4 = 1;
    int32_t v_c8_17 = 1;
    (*(*valA21 + 0x94))(valA21, 1, v_c4, v_c0_17);
    int32_t* valA22 = g_5ca114;
    int32_t v_c0_18 = 0;
    v_c4 = nullptr;
    (*(*valA22 + 0x8c))(valA22, v_c4, v_c0_18);
    int32_t* valA23 = g_5ca114;
    int32_t v_c0_19 = 1;
    v_c4 = 0x1b;
    (*(*valA23 + 0x50))(valA23, v_c4, v_c0_19);
    int32_t* valA24 = g_5ca114;
    int32_t v_c0_20 = 5;
    v_c4 = 0x13;
    (*(*valA24 + 0x50))(valA24, v_c4, v_c0_20);
    int32_t* valA25 = g_5ca114;
    int32_t objC12 = *valA25;
    int32_t v_c0_21 = 6;
    v_c4 = 0x14;
    (*(objC12 + 0x50))(valA25, v_c4, v_c0_21);
    int32_t v_c0_22 = 0;
    bool cond_1 = g_bcad08 + 0xc8 > g_bcad04;
    int32_t* valA27 = g_bcad00;
    int32_t objC13 = *valA27;
    void v_ac;
    v_c4 = &v_ac;
    int32_t result;
    void** esp_1;
    int32_t flagP;

    if (cond_1)
    {
        int32_t v_c8_23 = 0x2020;
        result = (*(objC13 + 0xc))(valA27, 0x2020);
        esp_1 = &v_c4;
        flagP = 0;
        g_bcad08 = 0xc8;

        if (!result)
        {
        label_4a458c:
            result = result_1;

            if (result)
            {
                int32_t ctxB2 = 0;
                long double x87_r7_12 = g_bcabbc + 4f;
                long double x87_r6_3 = g_bcabc4 + g_bcabbc;
                x87_r6_3 - x87_r7_12;

                if (!(*(&((x87_r6_3 < x87_r7_12 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_12 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r6_42;
                    long double x87_r7_28;

                    do
                    {
                        if (ctxB2 >= 0xc4)
                        {
                            int32_t* valA49 = g_bcad00;
                            *(esp_1 - 4) = valA49;
                            (*(*valA49 + 0x10))();
                            int32_t* valA50 = g_5ca114;
                            int32_t objC33 = g_bcad00;
                            *(esp_1 - 4) = 0;
                            *(esp_1 - 8) = ctxB2;
                            int32_t tmpD38 = *valA50;
                            *(esp_1 - 0xc) = flagP;
                            *(esp_1 - 0x10) = objC33;
                            *(esp_1 - 0x14) = 2;
                            *(esp_1 - 0x18) = valA50;
                            (*(tmpD38 + 0x7c))();
                            int32_t valA51 = g_bcad04;
                            int32_t tmpD40 = g_bcad08 + 0xc8;
                            *(esp_1 - 4) = 0;
                            int32_t* valA52 = g_bcad00;
                            int32_t objC34 = *valA52;
                            *(esp_1 - 8) = &esp_1[4];

                            if (tmpD40 > valA51)
                            {
                                *(esp_1 - 0xc) = 0x2020;
                                *(esp_1 - 0x10) = valA52;
                                result = (*(objC34 + 0xc))();
                                esp_1 -= 8;
                                flagP = 0;
                                g_bcad08 = 0xc8;

                                if (result)
                                    goto label_4a4c7f;
                            }
                            else
                            {
                                *(esp_1 - 0xc) = 0x1020;
                                *(esp_1 - 0x10) = valA52;
                                result = (*(objC34 + 0xc))();
                                esp_1 -= 8;
                                int32_t objC35 = g_bcad08;
                                flagP = objC35;
                                int32_t tmpD44 = esp_1[4] + objC35 * 0x1c;
                                g_bcad08 = objC35 + 0xc8;
                                esp_1[4] = tmpD44;

                                if (result)
                                    goto label_4a4c7f;
                            }

                            result = esp_1[4];

                            if (!result)
                                goto label_4a4c7f;

                            ctxB2 = 0;
                            esp_1[7] = esp_1[7] - 4f;
                        }
                        else
                        {
                            *(esp_1 + 0x14) = esp_1[7];
                            float* valA30 = esp_1[4];
                            esp_1[5] = esp_1[5];
                            long double x87_r7_14 = esp_1[5];
                            *(esp_1 + 0x14) = g_bcabb8;
                            esp_1[5] = esp_1[5];
                            *valA30 = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t objC18 = esp_1[5];
                            *(&objC18 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            void* tmpD19 = esp_1[4];
                            int32_t objC21 = (objC18 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            *(tmpD19 + 0x10) = objC21 | esp_1[5];
                            float* valA34 = esp_1[4] + 0x1c;
                            esp_1[4] = valA34;
                            *(esp_1 + 0x14) = g_bcabc0 + g_bcabb8;
                            esp_1[5] = esp_1[5];
                            *valA34 = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t tmpD21 = esp_1[5];
                            *(&tmpD21 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            int32_t tmpD24 = (tmpD21 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            long double x87_r7_15 = x87_r7_14 + 1f;
                            *(esp_1[4] + 0x10) = tmpD24 | esp_1[5];
                            void* valA38 = esp_1[4];
                            *(esp_1 + 0x14) = g_bcabb8;
                            esp_1[5] = esp_1[5];
                            esp_1[4] = valA38 + 0x1c;
                            *(valA38 + 0x1c) = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_15;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t tmpD27 = esp_1[5];
                            *(&tmpD27 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            void* valA42 = esp_1[4];
                            int32_t tmpD30 = (tmpD27 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            *(valA42 + 0x10) = tmpD30 | esp_1[5];
                            float* valA44 = esp_1[4] + 0x1c;
                            esp_1[4] = valA44;
                            *(esp_1 + 0x14) = g_bcabc0 + g_bcabb8;
                            esp_1[5] = esp_1[5];
                            *valA44 = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_15;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t tmpD33 = esp_1[5];
                            *(&tmpD33 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            int32_t tmpD36 = (tmpD33 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            ctxB2 += 4;
                            *(esp_1[4] + 0x10) = tmpD36 | esp_1[5];
                            esp_1[4] += 0x1c;
                        }

❓️❓️                        long double x87_r7_27 = esp_1[7] + 4f;
                        esp_1[7] = x87_r7_27;
                        x87_r7_28 = x87_r7_27 + 4f;
                        x87_r6_42 = g_bcabc4 + g_bcabbc;
                        x87_r6_42 - x87_r7_28;
                    } while (!(*(&((x87_r6_42 < x87_r7_28 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_42, x87_r7_28) ? 1 : 0) << 0xa
                        | (x87_r6_42 == x87_r7_28 ? 1 : 0) << 0xe) + 1) & 1));
                }

                int32_t* valA54 = g_bcad00;
                *(esp_1 - 4) = valA54;
                (*(*valA54 + 0x10))();
                void* esp_18 = esp_1;

                if (ctxB2 > 0)
                {
                    int32_t* valA55 = g_5ca114;
                    int32_t objC38 = g_bcad00;
                    *(esp_18 - 4) = 0;
                    *(esp_18 - 8) = ctxB2;
                    int32_t tmpD45 = *valA55;
                    *(esp_18 - 0xc) = flagP;
                    *(esp_18 - 0x10) = objC38;
                    *(esp_18 - 0x14) = 2;
                    *(esp_18 - 0x18) = valA55;
                    (*(tmpD45 + 0x7c))();
                }

                int32_t valA56 = g_bcad04;
❓️                int32_t tmpD47 = g_bcad08 + 0xc8;
                *(esp_18 - 4) = 0;
                int32_t* valA57 = g_bcad00;
                int32_t objC39 = *valA57;
                *(esp_18 - 8) = esp_18 + 0x10;
                int32_t srcS2;

                if (tmpD47 > valA56)
                {
                    *(esp_18 - 0xc) = 0x2020;
                    *(esp_18 - 0x10) = valA57;
                    result = (*(objC39 + 0xc))();
                    esp_1 = esp_18 - 8;
                    srcS2 = 0;
                    g_bcad08 = 0xc8;

                    if (!result)
                    {
                    label_4a49af:
                        result = esp_1[4];

                        if (result)
                        {
                            __builtin_strncpy(&esp_1[0x14], "fff?", 4);
                            esp_1[0x15] = 0x3dcccccd;
                            __builtin_strncpy(&esp_1[0x16], "fff?", 4);
                            memcpy(&esp_1[0xf],
                                "\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3f\xcd\xcc\x4c\x3f\xcd\x"
                            "cc\xcc\x3d",
                                0x14);
                            memcpy(&esp_1[0x17],
                                "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x"
                            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf",
                                0x20);

                            for (int32_t i = 0; i < 0x10; i += 4)
                            {
                                long double x87_r7_30 = *(esp_1 + i + 0x5c) * 50f;
                                long double x87_r6_44 = *(esp_1 + i + 0x6c) * 50f;
                                int32_t j = 0;
                                esp_1[7] = 0;

                                do
                                {
                                    *(esp_1 + 0x14) =
                                        g_bcabc0 * *(esp_1 + i + 0x4c) + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *esp_1[4] = esp_1[5];
                                    long double x87_r5_5 = esp_1[7];
                                    long double x87_r4_2 = x87_r5_5 * *(esp_1 + i + 0x6c);
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5] + x87_r4_2;
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    long double x87_r3_9 = g_bcabc0 * *(esp_1 + i + 0x4c);
                                    float* objC50 = esp_1[4] + 0x1c;
                                    esp_1[4] = objC50;
                                    *(esp_1 + 0x14) = x87_r3_9 + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *objC50 = esp_1[5] + x87_r7_30;
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5] + x87_r4_2;
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    long double x87_r5_6 = x87_r5_5 * *(esp_1 + i + 0x5c);
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    long double x87_r4_7 = g_bcabc0 * *(esp_1 + i + 0x4c);
                                    float* objC57 = esp_1[4] + 0x1c;
                                    esp_1[4] = objC57;
                                    *(esp_1 + 0x14) = x87_r4_7 + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *objC57 = esp_1[5] + x87_r5_6;
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5];
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    long double x87_r4_18 = g_bcabc0 * *(esp_1 + i + 0x4c);
                                    float* objC64 = esp_1[4] + 0x1c;
                                    esp_1[4] = objC64;
                                    *(esp_1 + 0x14) = x87_r4_18 + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *objC64 = esp_1[5] + x87_r5_6;
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5] + x87_r6_44;
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    j += 1;
                                    esp_1[4] += 0x1c;
                                    esp_1[7] = j;
                                } while (j < 2);
                            }

                            int32_t* valA58 = g_bcad00;
                            *(esp_1 - 4) = valA58;
                            (*(*valA58 + 0x10))();
                            int32_t* valA59 = g_5ca114;
                            int32_t tmpD53 = g_bcad00;
                            *(esp_1 - 4) = 0;
                            *(esp_1 - 8) = 0x20;
                            int32_t objC70 = *valA59;
                            *(esp_1 - 0xc) = srcS2;
                            *(esp_1 - 0x10) = tmpD53;
                            *(esp_1 - 0x14) = 2;
                            *(esp_1 - 0x18) = valA59;
                            result = (*(objC70 + 0x7c))();
                        }
                    }
                }
                else
                {
                    *(esp_18 - 0xc) = 0x1020;
                    *(esp_18 - 0x10) = valA57;
                    result = (*(objC39 + 0xc))();
                    esp_1 = esp_18 - 8;
                    int32_t objC40 = g_bcad08;
                    srcS2 = objC40;
                    int32_t tmpD51 = esp_1[4] + objC40 * 0x1c;
                    g_bcad08 = objC40 + 0xc8;
                    esp_1[4] = tmpD51;

                    if (!result)
                        goto label_4a49af;
                }
            }
        }
    }
    else
    {
        int32_t v_c8_22 = 0x1020;
        result = (*(objC13 + 0xc))(valA27, 0x1020);
        esp_1 = &v_c4;
        int32_t objC14 = g_bcad08;
        flagP = objC14;
        g_bcad08 = objC14 + 0xc8;
        result_1 += objC14 * 0x1c;

        if (!result)
            goto label_4a458c;
    }
❓️label_4a4c7f:
    *esp_1;
    esp_1[1];
    esp_1[2];
    esp_1[3];
    return result;
}
