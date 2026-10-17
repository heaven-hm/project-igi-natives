// Original IGI.EXE function: DrawLineFilter (VA 0x004A2CD0; static CFG gate PASS, CFG score 1.000).
#include "DrawLineFilter.h"
int32_t DrawLineFilter(int32_t a1 @ flagP, void* a2)

{
    int32_t ctxB;
    int32_t v_8c = ctxB;
    int32_t result_1 = a1;
    int32_t srcS;
    int32_t v_94 = srcS;
    int32_t dstD;
    int32_t v_98 = dstD;
    long double fpu7 = *(a2 + 0x2c);
    long double f0 = g_bcadc0;
    fpu7 - f0;
    float v_78;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        v_78 = g_bcadc0;
    else
        v_78 = *(a2 + 0x2c);

    int32_t* valA2 = g_5ca114;
    void v_40;
    void* v_9c = &v_40;
    void* v_a0 = 3;
    (*(*valA2 + 0x30))(valA2, v_a0, v_9c);
    long double x87_r7_3 = g_bcabec * v_78;
    void* objC1 = g_bcade8;
    int32_t v_9c_1 = 0;
    v_a0 = 0x2f;
    float v_18;
    long double x87_r7_10 =
        (1f - g_bcada0 * 1f / x87_r7_3) * v_18 * (g_bcad8c - g_bcadb4) + g_bcadb4;
    *(objC1 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    float v_54 = x87_r7_10;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* valA3 = g_5ca114;
    (*(*valA3 + 0x50))(valA3, v_a0, v_9c_1);
    int32_t* valA4 = g_5ca114;
    int32_t v_9c_2 = 0;
    v_a0 = 0x1c;
    (*(*valA4 + 0x50))(valA4, v_a0, v_9c_2);
    int32_t* valA5 = g_5ca114;
    int32_t v_9c_3 = 0;
    v_a0 = 0x1d;
    (*(*valA5 + 0x50))(valA5, v_a0, v_9c_3);
    int32_t* valA6 = g_5ca114;
    int32_t v_9c_4 = 1;
    v_a0 = 0x16;
    (*(*valA6 + 0x50))(valA6, v_a0, v_9c_4);
    int32_t* valA7 = g_5ca114;
    int32_t v_9c_5 = 0;
    v_a0 = 0x89;
    (*(*valA7 + 0x50))(valA7, v_a0, v_9c_5);
    int32_t* valA8 = g_5ca114;
    int32_t v_9c_6 = 1;
    v_a0 = 0x1a;
    (*(*valA8 + 0x50))(valA8, v_a0, v_9c_6);
    int32_t* valA9 = g_5ca114;
    int32_t v_9c_7 = 0;
    v_a0 = 0xf;
    (*(*valA9 + 0x50))(valA9, v_a0, v_9c_7);
    int32_t* valA10 = g_5ca114;
    int32_t v_9c_8 = 4;
    v_a0 = 0x17;
    (*(*valA10 + 0x50))(valA10, v_a0, v_9c_8);
    int32_t* valA11 = g_5ca114;
    int32_t v_9c_9 = 1;
    v_a0 = 7;
    (*(*valA11 + 0x50))(valA11, v_a0, v_9c_9);
    int32_t* valA12 = g_5ca114;
    int32_t v_9c_10 = 0;
    v_a0 = 0xe;
    (*(*valA12 + 0x50))(valA12, v_a0, v_9c_10);
    int32_t* valA13 = g_5ca114;
    int32_t v_9c_11 = 3;
    v_a0 = 4;
    int32_t v_a4_11 = 0;
    (*(*valA13 + 0x94))(valA13, 0, v_a0, v_9c_11);
    int32_t* valA14 = g_5ca114;
    int32_t v_9c_12 = 2;
    v_a0 = 5;
    int32_t v_a4_12 = 0;
    (*(*valA14 + 0x94))(valA14, 0, v_a0, v_9c_12);
    int32_t* valA15 = g_5ca114;
    int32_t v_9c_13 = 0;
    v_a0 = 6;
    int32_t v_a4_13 = 0;
    (*(*valA15 + 0x94))(valA15, 0, v_a0, v_9c_13);
    int32_t* valA16 = g_5ca114;
    int32_t v_9c_14 = 3;
    v_a0 = 1;
    int32_t v_a4_14 = 0;
    (*(*valA16 + 0x94))(valA16, 0, v_a0, v_9c_14);
    int32_t* valA17 = g_5ca114;
    int32_t v_9c_15 = 2;
    v_a0 = 2;
    int32_t v_a4_15 = 0;
    (*(*valA17 + 0x94))(valA17, 0, v_a0, v_9c_15);
    int32_t* valA18 = g_5ca114;
    int32_t v_9c_16 = 0;
    v_a0 = 3;
    int32_t v_a4_16 = 0;
    (*(*valA18 + 0x94))(valA18, 0, v_a0, v_9c_16);
    int32_t* valA19 = g_5ca114;
    int32_t v_9c_17 = 1;
    v_a0 = 1;
    int32_t v_a4_17 = 1;
    (*(*valA19 + 0x94))(valA19, 1, v_a0, v_9c_17);
    int32_t* valA20 = g_5ca114;
    int32_t v_9c_18 = 0;
    v_a0 = nullptr;
    (*(*valA20 + 0x8c))(valA20, v_a0, v_9c_18);
    int32_t* valA21 = g_5ca114;
    int32_t v_9c_19 = 1;
    v_a0 = 0x1b;
    (*(*valA21 + 0x50))(valA21, v_a0, v_9c_19);
    int32_t* valA22 = g_5ca114;
    int32_t v_9c_20 = 5;
    v_a0 = 0x13;
    (*(*valA22 + 0x50))(valA22, v_a0, v_9c_20);
    int32_t* valA23 = g_5ca114;
    int32_t objC13 = *valA23;
    int32_t v_9c_21 = 6;
    v_a0 = 0x14;
    (*(objC13 + 0x50))(valA23, v_a0, v_9c_21);
    bool cond_1 = g_bcad08 + 0xc8 > g_bcad04;
    int32_t* valA26 = g_bcad00;
    int32_t v_68 = *(a2 + 0x30);
    int32_t objC15 = *valA26;
    int32_t v_9c_22 = 0;
    void v_88;
    v_a0 = &v_88;
    int32_t result;
    void** esp_1;
    int32_t ctxB1;

    if (cond_1)
    {
        int32_t v_a4_23 = 0x2020;
        result = (*(objC15 + 0xc))(valA26, 0x2020);
        esp_1 = &v_a0;
        ctxB1 = 0;
        g_bcad08 = 0xc8;

        if (!result)
        {
        label_4a2f6a:
            result = result_1;

            if (result)
            {
                int32_t dstD2 = 0;
                long double x87_r7_12 = g_bcabbc + 4f;
                long double x87_r6_3 = g_bcabc4 + g_bcabbc;
                x87_r6_3 - x87_r7_12;

                if (!(*(&((x87_r6_3 < x87_r7_12 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_12 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r6_19;
                    long double x87_r7_27;

                    do
                    {
                        if (dstD2 >= 0xc8)
                        {
                            int32_t* valA38 = g_bcad00;
                            *(esp_1 - 4) = valA38;
                            (*(*valA38 + 0x10))();
                            int32_t* valA39 = g_5ca114;
                            int32_t objC29 = g_bcad00;
                            *(esp_1 - 4) = 0;
                            *(esp_1 - 8) = dstD2;
                            int32_t tmpD26 = *valA39;
                            *(esp_1 - 0xc) = ctxB1;
                            *(esp_1 - 0x10) = objC29;
                            *(esp_1 - 0x14) = 2;
                            *(esp_1 - 0x18) = valA39;
                            (*(tmpD26 + 0x7c))();
                            int32_t valA40 = g_bcad04;
                            int32_t tmpD28 = g_bcad08 + 0xc8;
                            *(esp_1 - 4) = 0;
                            int32_t* valA41 = g_bcad00;
                            int32_t objC30 = *valA41;
                            *(esp_1 - 8) = &esp_1[4];

                            if (tmpD28 > valA40)
                            {
                                *(esp_1 - 0xc) = 0x2020;
                                *(esp_1 - 0x10) = valA41;
                                result = (*(objC30 + 0xc))();
                                esp_1 -= 8;
                                ctxB1 = 0;
                                g_bcad08 = 0xc8;

                                if (result)
                                    goto label_4a351e;
                            }
                            else
                            {
                                *(esp_1 - 0xc) = 0x1020;
                                *(esp_1 - 0x10) = valA41;
                                result = (*(objC30 + 0xc))();
                                esp_1 -= 8;
                                int32_t objC31 = g_bcad08;
                                ctxB1 = objC31;
                                int32_t tmpD32 = esp_1[4] + objC31 * 0x1c;
                                g_bcad08 = objC31 + 0xc8;
                                esp_1[4] = tmpD32;

                                if (result)
                                    goto label_4a351e;
                            }

                            result = esp_1[4];

                            if (!result)
                                goto label_4a351e;

                            dstD2 = 0;
                            esp_1[5] = esp_1[5] - 4f;
                        }
                        else
                        {
                            *(esp_1 + 0x18) = esp_1[5];
                            float* valA29 = esp_1[4];
                            esp_1[9] = esp_1[6];
                            long double x87_r7_14 = esp_1[9];
                            *(esp_1 + 0x18) = g_bcabb8;
                            esp_1[9] = esp_1[6];
                            *valA29 = esp_1[9];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0x11];
                            *(esp_1[4] + 0xc) = esp_1[0x12];
                            *(esp_1 + 0x18) = *(a2 + 0x20) * 255f;
                            int32_t objC20 = esp_1[6];
                            *(&objC20 + 1) |= 0x4c;
                            *(esp_1 + 0x18) = *(a2 + 0x24) * 255f;
                            void* tmpD19 = esp_1[4];
                            int32_t objC23 = (objC20 << 8 | esp_1[6]) << 8;
                            *(esp_1 + 0x18) = *(a2 + 0x28) * 255f;
                            *(tmpD19 + 0x10) = objC23 | esp_1[6];
                            float* valA33 = esp_1[4] + 0x1c;
                            esp_1[4] = valA33;
                            *(esp_1 + 0x18) = g_bcabc0 + g_bcabb8;
                            esp_1[9] = esp_1[6];
                            *valA33 = esp_1[9];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0x11];
                            *(esp_1[4] + 0xc) = esp_1[0x12];
                            *(esp_1 + 0x18) = *(a2 + 0x20) * 255f;
                            int32_t tmpD21 = esp_1[6];
                            *(&tmpD21 + 1) |= 0x4c;
                            *(esp_1 + 0x18) = *(a2 + 0x24) * 255f;
                            int32_t tmpD24 = (tmpD21 << 8 | esp_1[6]) << 8;
                            *(esp_1 + 0x18) = *(a2 + 0x28) * 255f;
                            dstD2 += 2;
                            *(esp_1[4] + 0x10) = tmpD24 | esp_1[6];
                            esp_1[4] += 0x1c;
                        }

❓️❓️                        long double x87_r7_26 = esp_1[5] + 4f;
                        esp_1[5] = x87_r7_26;
                        x87_r7_27 = x87_r7_26 + 4f;
                        x87_r6_19 = g_bcabc4 + g_bcabbc;
                        x87_r6_19 - x87_r7_27;
                    } while (!(*(&((x87_r6_19 < x87_r7_27 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_19, x87_r7_27) ? 1 : 0) << 0xa
                        | (x87_r6_19 == x87_r7_27 ? 1 : 0) << 0xe) + 1) & 1));
                }

                int32_t* valA43 = g_bcad00;
                *(esp_1 - 4) = valA43;
                result = (*(*valA43 + 0x10))();

                if (dstD2 > 0)
                {
                    int32_t* valA44 = g_5ca114;
                    int32_t objC34 = g_bcad00;
                    *(esp_1 - 4) = 0;
                    *(esp_1 - 8) = dstD2;
                    int32_t tmpD33 = *valA44;
                    *(esp_1 - 0xc) = ctxB1;
                    *(esp_1 - 0x10) = objC34;
                    *(esp_1 - 0x14) = 2;
                    *(esp_1 - 0x18) = valA44;
                    result = (*(tmpD33 + 0x7c))();
                }

❓️                long double x87_r7_28 = esp_1[0xc];
                long double f1_1 = 0f;
                x87_r7_28 - f1_1;
                result = (x87_r7_28 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_28, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_28 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double x87_r7_30 = esp_1[0xc] * 10f;
                    esp_1[8] = 0x3f800000;
                    long double f2_1 = 1f;
                    x87_r7_30 - f2_1;

                    if (*(&((x87_r7_30 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        esp_1[8] = 1f / x87_r7_30;
                        x87_r7_30 = 1f;
                    }

                    int32_t valA46 = g_bcad04;
                    int32_t tmpD35 = g_bcad08 + 0xc8;
                    *(esp_1 - 4) = 0;
                    *(esp_1 + 0x18) = x87_r7_30;
                    int32_t srcS2 = esp_1[6];
                    int32_t* valA47 = g_bcad00;
                    esp_1[6] = srcS2;
                    *(esp_1 - 8) = &esp_1[4];
                    int32_t objC35 = *valA47;
                    int32_t ctxB2;

                    if (tmpD35 > valA46)
                    {
                        *(esp_1 - 0xc) = 0x2020;
                        *(esp_1 - 0x10) = valA47;
                        result = (*(objC35 + 0xc))();
                        esp_1 -= 8;
                        ctxB2 = 0;
                        g_bcad08 = 0xc8;

                        if (!result)
                        {
                        label_4a32af:
                            result = esp_1[4];

                            if (result)
                            {
                                int32_t dstD5 = 0;
                                long double x87_r7_32 = esp_1[8];
                                esp_1[5] = g_bcabbc;
                                esp_1[0xb] = x87_r7_32 + esp_1[5];
                                long double x87_r7_35 = g_bcabc4 + g_bcabbc;
                                long double f3_1 = esp_1[0xb];
                                x87_r7_35 - f3_1;

                                if (!(*(&((x87_r7_35 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_35, f3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_35 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_60;
                                    long double f4_1;

                                    do
                                    {
                                        int32_t flagP = 0;

                                        if (srcS2 > 0)
                                        {
                                            do
                                            {
                                                if (dstD5 >= 0xc8)
                                                {
                                                    int32_t* valA58 = g_bcad00;
                                                    *(esp_1 - 4) = valA58;
                                                    (*(*valA58 + 0x10))();
                                                    int32_t* valA59 = g_5ca114;
                                                    int32_t tmpD44 = g_bcad00;
                                                    *(esp_1 - 4) = 0;
                                                    *(esp_1 - 8) = dstD5;
                                                    int32_t objC45 = *valA59;
                                                    *(esp_1 - 0xc) = ctxB2;
                                                    *(esp_1 - 0x10) = tmpD44;
                                                    *(esp_1 - 0x14) = 2;
                                                    *(esp_1 - 0x18) = valA59;
                                                    (*(objC45 + 0x7c))();
                                                    bool cond_6_1 =
                                                        g_bcad08 + 0xc8 > g_bcad04;
                                                    int32_t* valA62 = g_bcad00;
                                                    *(esp_1 - 4) = 0;
                                                    *(esp_1 - 8) = &esp_1[4];
                                                    int32_t objC47 = *valA62;

                                                    if (cond_6_1)
                                                    {
                                                        *(esp_1 - 0xc) = 0x2020;
                                                        *(esp_1 - 0x10) = valA62;
                                                        result = (*(objC47 + 0xc))();
                                                        esp_1 -= 8;
                                                        ctxB2 = 0;
                                                        g_bcad08 = 0xc8;

                                                        if (result)
                                                            goto label_4a351e;
                                                    }
                                                    else
                                                    {
                                                        *(esp_1 - 0xc) = 0x1020;
                                                        *(esp_1 - 0x10) = valA62;
                                                        result = (*(objC47 + 0xc))();
                                                        esp_1 -= 8;
                                                        int32_t objC48 = g_bcad08;
                                                        ctxB2 = objC48;
                                                        int32_t tmpD48 = esp_1[4] + objC48 * 0x1c;
                                                        g_bcad08 = objC48 + 0xc8;
                                                        esp_1[4] = tmpD48;

                                                        if (result)
                                                            goto label_4a351e;
                                                    }

                                                    result = esp_1[4];

                                                    if (!result)
                                                        goto label_4a351e;

                                                    dstD5 = 0;
                                                }
                                                else
                                                {
                                                    *(esp_1 + 0x24) = esp_1[5];
                                                    int32_t objC38 = esp_1[9];
                                                    *(esp_1 - 4) = 0x935bf0;
                                                    esp_1[9] = objC38;
                                                    esp_1[9] = esp_1[9];
                                                    long double x87_r7_39 =
                                                        Sys_AllocateMemory_14() * g_bcabc0;
                                                    float* tmpD40 = esp_1[4];
                                                    *(esp_1 - 8) = 0x935bf0;
                                                    *tmpD40 = x87_r7_39 + g_bcabb8;
                                                    *(esp_1[4] + 4) = esp_1[9];
                                                    *(esp_1[4] + 8) = esp_1[0x11];
                                                    *(esp_1[4] + 0xc) = esp_1[0x12];
                                                    long double x87_r7_45 = Sys_AllocateMemory_14() * 255f;
                                                    *(esp_1 - 0xc) = 0x935bf0;
                                                    *(esp_1 + 0x34) = x87_r7_45;
                                                    int32_t valA51 = esp_1[0xd];
                                                    *(esp_1 + 0x34) = esp_1[0xc] * 255f;
                                                    int32_t srcS9 = ((esp_1[0xd] << 8 | valA51) << 8
                                                        | valA51) << 8 | valA51;
                                                    *(esp_1[4] + 0x10) = srcS9;
                                                    esp_1[4] += 0x1c;
                                                    long double x87_r7_49 = Sys_AllocateMemory_14() * 50f;
                                                    float* valA55 = esp_1[4];
                                                    *valA55 = x87_r7_49 + valA55[-7];
                                                    long double x87_r7_52 =
                                                        g_bcabc0 + g_bcabb8;
                                                    float* objC40 = esp_1[4];
                                                    long double f5_1 = *objC40;
                                                    x87_r7_52 - f5_1;

                                                    if (!(*(&((x87_r7_52 < f5_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_52, f5_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_52 == f5_1 ? 1 : 0) << 0xe
                                                            | 0x3800) + 1) & 0x41))
                                                        x87_r7_52 = *objC40;

                                                    *objC40 = x87_r7_52;
                                                    *(esp_1[4] + 4) = esp_1[9];
                                                    *(esp_1[4] + 8) = esp_1[0x11];
                                                    *(esp_1[4] + 0xc) = esp_1[0x12];
                                                    *(esp_1[4] + 0x10) = srcS9;
                                                    srcS2 = esp_1[6];
                                                    esp_1[4] += 0x1c;
                                                    dstD5 += 2;
                                                }

❓️                                                flagP += 1;
                                            } while (flagP < srcS2);
                                        }

                                        long double x87_r7_57 = esp_1[8];
                                        esp_1[5] = esp_1[0xb];
                                        esp_1[0xb] = x87_r7_57 + esp_1[5];
                                        x87_r7_60 = g_bcabc4 + g_bcabbc;
                                        f4_1 = esp_1[0xb];
                                        x87_r7_60 - f4_1;
                                    } while (!(*(&((x87_r7_60 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_60, f4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_60 == f4_1 ? 1 : 0) << 0xe) + 1) & 1));
                                }

                                int32_t* valA65 = g_bcad00;
                                *(esp_1 - 4) = valA65;
                                result = (*(*valA65 + 0x10))();

                                if (dstD5 > 0)
                                {
                                    int32_t* valA66 = g_5ca114;
                                    int32_t objC51 = g_bcad00;
                                    *(esp_1 - 4) = 0;
                                    *(esp_1 - 8) = dstD5;
                                    int32_t tmpD49 = *valA66;
                                    *(esp_1 - 0xc) = ctxB2;
                                    *(esp_1 - 0x10) = objC51;
                                    *(esp_1 - 0x14) = 2;
                                    *(esp_1 - 0x18) = valA66;
                                    result = (*(tmpD49 + 0x7c))();
                                }
                            }
                        }
                    }
                    else
                    {
                        *(esp_1 - 0xc) = 0x1020;
                        *(esp_1 - 0x10) = valA47;
                        result = (*(objC35 + 0xc))();
                        esp_1 -= 8;
                        int32_t objC36 = g_bcad08;
                        ctxB2 = objC36;
                        int32_t tmpD39 = esp_1[4] + objC36 * 0x1c;
                        g_bcad08 = objC36 + 0xc8;
                        esp_1[4] = tmpD39;

                        if (!result)
                            goto label_4a32af;
                    }
                }
            }
        }
    }
    else
    {
        int32_t v_a4_22 = 0x1020;
        result = (*(objC15 + 0xc))(valA26, 0x1020);
        esp_1 = &v_a0;
        int32_t objC16 = g_bcad08;
        ctxB1 = objC16;
        g_bcad08 = objC16 + 0xc8;
        result_1 += objC16 * 0x1c;

        if (!result)
            goto label_4a2f6a;
    }
❓️label_4a351e:
    *esp_1;
    esp_1[1];
    esp_1[2];
    esp_1[3];
    return result;
}
