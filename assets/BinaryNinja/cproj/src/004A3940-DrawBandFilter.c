#include "gi_platform.h"
#include "004A3940-DrawBandFilter.h"
float DrawBandFilter(int32_t* a1) __location("valA")

{
    int32_t ctxB;
    int32_t v_210 = ctxB;
    float* flagP;
    float* v_214 = flagP;
    int32_t srcS;
    int32_t v_218 = srcS;
    float* dstD;
    float* v_21c = dstD;
    int32_t* esp = &v_21c;
    long double fpu7 = a1[8];
    long double f0 = g_bcadc0;
    fpu7 - f0;
    float result;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;
    float result_1;

    if (*(&result + 1) & 0x41)
    {
        result = g_bcadc0;
        result_1 = result;
    }
    else
        result_1 = a1[8];

    long double x87_r7_2 = a1[0xa];
    long double f1 = 0.0f;
    x87_r7_2 - f1;
    result = (x87_r7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1) ? 1 : 0) << 0xa
        | (x87_r7_2 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        int32_t* valA = g_5ca114;
        char v_1d0;
        void* v_220_1 = &v_1d0;
        int32_t* v_224 = 3;
        ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 0x30))))(valA, v_224, v_220_1);
        void* objC2 = g_bcade8;
        long double x87_r7_5 = 1.0f / (g_bcabec * result_1);
        int32_t v_220_2 = 0;
        v_224 = 0x2f;
        float v_1a8;
        long double x87_r7_11 =
            (1.0f - g_bcada0 * x87_r7_5) * v_1a8 * (g_bcad8c - g_bcadb4) + g_bcadb4;
        *(objC2 + 4) = 0xffffffff;
        *(g_bcad7c + 4) = 0xffffffff;
        float v_1e4_1 = x87_r7_11;
        *(g_bcadac + 4) = 0xffffffff;
        *(g_bcadc4 + 4) = 0xffffffff;
        int32_t* valA1 = g_5ca114;
        ((int(*)())(uintptr_t)(*(*valA1 + 0x50)))(valA1, v_224, v_220_2);
        int32_t* valA2 = g_5ca114;
        int32_t v_220_3 = 0;
        v_224 = 0x1c;
        ((int(*)())(uintptr_t)(*(*valA2 + 0x50)))(valA2, v_224, v_220_3);
        int32_t* valA3 = g_5ca114;
        int32_t v_220_4 = 0;
        v_224 = 0x1d;
        ((int(*)())(uintptr_t)(*(*valA3 + 0x50)))(valA3, v_224, v_220_4);
        int32_t* valA4 = g_5ca114;
        int32_t v_220_5 = 1;
        v_224 = 0x16;
        ((int(*)())(uintptr_t)(*(*valA4 + 0x50)))(valA4, v_224, v_220_5);
        int32_t* valA5 = g_5ca114;
        int32_t v_220_6 = 0;
        v_224 = 0x89;
        ((int(*)())(uintptr_t)(*(*valA5 + 0x50)))(valA5, v_224, v_220_6);
        int32_t* valA6 = g_5ca114;
        int32_t v_220_7 = 1;
        v_224 = 0x1a;
        ((int(*)())(uintptr_t)(*(*valA6 + 0x50)))(valA6, v_224, v_220_7);
        int32_t* valA7 = g_5ca114;
        int32_t v_220_8 = 0;
        v_224 = 0xf;
        ((int(*)())(uintptr_t)(*(*valA7 + 0x50)))(valA7, v_224, v_220_8);
        int32_t* valA8 = g_5ca114;
        int32_t v_220_9 = 4;
        v_224 = 0x17;
        ((int(*)())(uintptr_t)(*(*valA8 + 0x50)))(valA8, v_224, v_220_9);
        int32_t* valA9 = g_5ca114;
        int32_t v_220_10 = 0;
        v_224 = 7;
        ((int(*)())(uintptr_t)(*(*valA9 + 0x50)))(valA9, v_224, v_220_10);
        int32_t* valA10 = g_5ca114;
        int32_t v_220_11 = 0;
        v_224 = 0xe;
        ((int(*)())(uintptr_t)(*(*valA10 + 0x50)))(valA10, v_224, v_220_11);
        int32_t* valA11 = g_5ca114;
        int32_t v_220_12 = 1;
        v_224 = 0xc;
        int32_t v_228_12 = 0;
        int32_t objC9 = *valA11;
        int32_t* v_22c = valA11;
        ((int(*)())(uintptr_t)(*(objC9 + 0x94)))(v_22c, v_228_12, v_224, v_220_12);
        int32_t* valA12 = g_5ca114;
        int32_t v_220_13 = 1;
        v_224 = 0x12;
        int32_t v_228_13 = 0;
        int32_t tmpD8 = *valA12;
        v_22c = valA12;
        ((int(*)())(uintptr_t)(*(tmpD8 + 0x94)))(v_22c, v_228_13, v_224, v_220_13);
        int32_t* valA13 = g_5ca114;
        int32_t v_220_14 = 0;
        v_224 = 0xb;
        int32_t v_228_14 = 0;
        int32_t objC10 = *valA13;
        v_22c = valA13;
        ((int(*)())(uintptr_t)(*(objC10 + 0x94)))(v_22c, v_228_14, v_224, v_220_14);
        int32_t* valA14 = g_5ca114;
        int32_t v_220_15 = 2;
        v_224 = 4;
        int32_t v_228_15 = 0;
        int32_t tmpD9 = *valA14;
        v_22c = valA14;
        ((int(*)())(uintptr_t)(*(tmpD9 + 0x94)))(v_22c, v_228_15, v_224, v_220_15);
        int32_t* valA15 = g_5ca114;
        int32_t v_220_16 = 2;
        v_224 = 5;
        int32_t v_228_16 = 0;
        int32_t objC11 = *valA15;
        v_22c = valA15;
        ((int(*)())(uintptr_t)(*(objC11 + 0x94)))(v_22c, v_228_16, v_224, v_220_16);
        int32_t* valA16 = g_5ca114;
        int32_t v_220_17 = 0;
        v_224 = 6;
        int32_t v_228_17 = 0;
        int32_t tmpD10 = *valA16;
        v_22c = valA16;
        ((int(*)())(uintptr_t)(*(tmpD10 + 0x94)))(v_22c, v_228_17, v_224, v_220_17);
        int32_t* valA17 = g_5ca114;
        int32_t v_220_18 = 2;
        v_224 = 1;
        int32_t v_228_18 = 0;
        int32_t objC12 = *valA17;
        v_22c = valA17;
        ((int(*)())(uintptr_t)(*(objC12 + 0x94)))(v_22c, v_228_18, v_224, v_220_18);
        int32_t* valA18 = g_5ca114;
        int32_t v_220_19 = 2;
        v_224 = 2;
        int32_t v_228_19 = 0;
        int32_t tmpD11 = *valA18;
        v_22c = valA18;
        ((int(*)())(uintptr_t)(*(tmpD11 + 0x94)))(v_22c, v_228_19, v_224, v_220_19);
        int32_t* valA19 = g_5ca114;
        int32_t v_220_20 = 0;
        v_224 = 3;
        int32_t v_228_20 = 0;
        int32_t objC13 = *valA19;
        v_22c = valA19;
        ((int(*)())(uintptr_t)(*(objC13 + 0x94)))(v_22c, v_228_20, v_224, v_220_20);
        int32_t* valA20 = g_5ca114;
        int32_t v_220_21 = 1;
        v_224 = 1;
        int32_t tmpD12 = *valA20;
        int32_t v_228_21 = 1;
        v_22c = valA20;
        ((int(*)())(uintptr_t)(*(tmpD12 + 0x94)))(v_22c, v_228_21, v_224, v_220_21);
        int32_t* valA21 = g_5ca114;
        int32_t v_220_22 = 1;
        v_224 = 0x1b;
        ((int(*)())(uintptr_t)(*(*valA21 + 0x50)))(valA21, v_224, v_220_22);
        int32_t* valA22 = g_5ca114;
        int32_t v_220_23 = 9;
        v_224 = 0x13;
        ((int(*)())(uintptr_t)(*(*valA22 + 0x50)))(valA22, v_224, v_220_23);
        int32_t* valA23 = g_5ca114;
        int32_t v_220_24 = 1;
        v_224 = 0x14;
        ((int(*)())(uintptr_t)(*(*valA23 + 0x50)))(valA23, v_224, v_220_24);
        float v_1f4_1 = g_bcabc4 * 0.0500000007.0f;
        int64_t v_208_1 = g_bcabbc;
        long double x87_r7_15 = v_208_1;
        v_208_1 = x87_r7_15;
        float v_190 = x87_r7_15;
        long double x87_r6_3 = a1[0x14];
        long double f2_1 = 45.0;
        x87_r6_3 - f2_1;

        if (!(*(&((x87_r6_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f2_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_15 = x87_r7_15 + v_1f4_1 * 0.5.0f;

        float v_18c_1 = x87_r7_15;
        long double x87_r7_16 = x87_r7_15 + v_1f4_1;
        result_1 = g_bcabc4;
        float flagP1 = 2.80259693e-45.0f;
        float v_1f0_2 = 2.80259693e-45.0f;
        float v_1fc_1 = result_1 + v_208_1;
        long double f3_1 = v_1fc_1;
        x87_r7_16 - f3_1;

        if (*(&((x87_r7_16 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_16 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        {
            char v_188;
            float* objC16 = &v_188;
            long double f4_1;

            do
            {
                *objC16 = x87_r7_16;
                x87_r7_16 = x87_r7_16 + v_1f4_1;
                flagP1 += 1;
                objC16 = &objC16[1];
                f4_1 = v_1fc_1;
                x87_r7_16 - f4_1;
            } while (*(&((x87_r7_16 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
            v_1f0_2 = flagP1;
        }

        (&v_190)[flagP1] = v_1fc_1;
        char valA28 = QHash_ValueGet();
        Camera_ResetMatrix(a1);
        v_224 = a1;
        Camera_SetFieldOfView_2(v_224);

        if (!valA28)
            QHash_ValueSet();

        int32_t v_220_26 = 0x935c10;
        v_224 = 3;
        int32_t v_228_25 = 0x10;
        v_22c = 0x10;
        Sys_OpenFileStream_8(&a1[0xb], 0, 0x40, v_22c, v_228_25, v_224, v_220_26);

        if (!valA28)
            Sys_DispatchOpcode_2();

        int32_t* valA34 = g_5ca114;
        int32_t tmpD15 = a1[0x13];
        v_224 = nullptr;
        ((int(*)())(uintptr_t)(*(*valA34 + 0x8c)))(valA34, v_224, tmpD15);
        bool cond_0_1 = g_bcad08 + 0x64 > g_bcad04;
        int32_t* valA37 = g_bcad00;
        int32_t v_20c = 0;
        int32_t v_220_28 = 0;
        int32_t objC19 = *valA37;
        v_224 = &v_20c;

        if (cond_0_1)
        {
            int32_t v_228_28 = 0x2020;
            v_22c = valA37;
            result = ((int(*)())(uintptr_t)(*(objC19 + 0xc)))(v_22c, v_228_28);
            esp = &v_224;
            *(&v_208_1 + 4) = 0;
            g_bcad08 = 0x64;

            if (!result)
            {
    label_4a3d0f: ;
                if (v_214)
                {
                    uint32_t dstD2 = 0;

                    if (flagP1 > 1)
                    {
                        long double x87_r7_20 = v_1fc_1 * 0.0625.0f;
                        char v_194;
                        int32_t* valA38 = &v_194;
                        uint32_t i_2 = flagP1 >> 1;
                        dstD2 = i_2 * 6;
                        uint32_t i;

                        do
                        {
                            v_210 = g_bcabb8;
                            int32_t v_210_1 = v_210;
                            *v_214 = v_210_1;
                            v_214[1] = *valA38;
                            float v_1ec;
                            v_214[2] = v_1ec;
                            float v_1e8;
                            v_214[3] = v_1e8;
                            v_214[5] = 0;
                            v_214[6] = 0;
                            v_210_1 = g_bcabb8;
                            float* objC30 = &v_214[7];
                            int32_t v_210_2 = v_210_1;
                            v_214 = objC30;
                            *objC30 = v_210_2 + g_bcabc0;
                            v_214[1] = *valA38;
                            v_214[2] = v_1ec;
                            v_214[3] = v_1e8;
                            v_214[5] = g_bcabc0 * 0.0625.0f;
                            v_214[6] = 0;
                            v_210_2 = g_bcabb8;
                            float* objC37 = &v_214[7];
                            int32_t v_210_3 = v_210_2;
                            v_214 = objC37;
                            *objC37 = v_210_3 + g_bcabc0;
                            v_214[1] = valA38[1];
                            v_214[2] = v_1ec;
                            v_214[3] = v_1e8;
                            v_214[5] = g_bcabc0 * 0.0625.0f;
                            v_214[6] = x87_r7_20;
                            v_210_3 = g_bcabb8;
                            float* objC44 = &v_214[7];
                            int32_t v_210_4 = v_210_3;
                            v_214 = objC44;
                            *objC44 = v_210_4;
                            v_214[1] = valA38[1];
                            valA38 = &valA38[2];
                            v_214[2] = v_1ec;
                            v_214[3] = v_1e8;
                            v_214[5] = 0;
                            v_214[6] = x87_r7_20;
                            v_210_4 = g_bcabb8;
                            int32_t v_210_5 = v_210_4;
                            float* objC51 = &v_214[7];
                            v_214 = objC51;
                            *objC51 = v_210_5 + g_bcabc0;
                            v_214[1] = valA38[-1];
                            v_214[2] = v_1ec;
                            v_214[3] = v_1e8;
                            v_214[5] = g_bcabc0 * 0.0625.0f;
                            v_214[6] = x87_r7_20;
                            v_210_5 = g_bcabb8;
                            float* objC58 = &v_214[7];
                            v_210 = v_210_5;
                            v_214 = objC58;
                            *objC58 = v_210;
                            v_214[1] = valA38[-2];
                            v_214[2] = v_1ec;
                            v_214[3] = v_1e8;
                            v_214[5] = 0;
                            v_214[6] = 0;
                            i = i_2;
                            i_2 -= 1;
                            v_214 = &v_214[7];
                        } while (i != 1);
                        float v_1f8;
                        flagP1 = v_1f8;
                    }

                    int32_t* valA39 = g_bcad00;
                    ((int(*)())(uintptr_t)(*(*valA39 + 0x10)))(valA39);
                    int32_t* valA40 = g_5ca114;
                    int32_t v_228_30 = 0;
                    v_22c = dstD2;
                    ((int(*)())(uintptr_t)(*(*valA40 + 0x7c)))(valA40, 4, g_bcad00, *(&v_208_1 + 4), v_22c,
                        v_228_30);
                    *(&v_208_1 + 3) = QHash_ValueGet();
                    Camera_UpdateTransform_2(a1);
                    v_22c = a1;
                    Camera_SetFieldOfView_2(v_22c);

                    if (!*(&v_208_1 + 3))
                        QHash_ValueSet();

                    int32_t v_228_32 = 0x935c10;
                    v_22c = 3;
                    Sys_OpenFileStream_8(&a1[0xb], 0, 0x40, 0x10, 0x10, v_22c, v_228_32);

                    if (!*(&v_208_1 + 3))
                        Sys_DispatchOpcode_2();

                    int32_t* valA47 = g_5ca114;
                    int32_t tmpD23 = a1[0x13];
                    v_22c = nullptr;
                    ((int(*)())(uintptr_t)(*(*valA47 + 0x8c)))(valA47, v_22c, tmpD23);
                    bool cond_4_1 = g_bcad08 + 0x64 > g_bcad04;
                    int32_t* valA50 = g_bcad00;
                    v_214 = nullptr;
                    int32_t v_228_34 = 0;
                    int32_t objC69 = *valA50;
                    v_22c = &v_214;
                    int32_t dstD4;

                    if (cond_4_1)
                    {
                        result = ((int(*)())(uintptr_t)(*(objC69 + 0xc)))(valA50, 0x2020);
                        esp = &v_22c;
                        dstD4 = 0;
                        g_bcad08 = 0x64;

                        if (!result)
                        {
    label_4a406f: ;
                            if (v_21c)
                            {
                                uint32_t srcS3 = 0;

                                if (flagP1 > 0)
                                {
                                    long double x87_r7_23 = *(&v_208_1 + 4) * 0.0625.0f;
                                    char v_1a0;
                                    int32_t* valA51 = &v_1a0;
                                    uint32_t i_3 = (flagP1 + 1) >> 1;
                                    srcS3 = i_3 * 6;
                                    uint32_t i_1;

                                    do
                                    {
                                        v_218 = g_bcabb8;
                                        int32_t v_218_1 = v_218;
                                        *v_21c = v_218_1;
                                        v_21c[1] = *valA51;
                                        v_21c[2] = v_1f4_1;
                                        v_21c[3] = v_1f0_2;
                                        v_21c[5] = 0;
                                        v_21c[6] = 0;
                                        v_218_1 = g_bcabb8;
                                        float* objC80 = &v_21c[7];
                                        int32_t v_218_2 = v_218_1;
                                        v_21c = objC80;
                                        *objC80 = v_218_2 + g_bcabc0;
                                        v_21c[1] = *valA51;
                                        v_21c[2] = v_1f4_1;
                                        v_21c[3] = v_1f0_2;
                                        v_21c[5] = g_bcabc0 * 0.0625.0f;
                                        v_21c[6] = 0;
                                        v_218_2 = g_bcabb8;
                                        float* objC87 = &v_21c[7];
                                        int32_t v_218_3 = v_218_2;
                                        v_21c = objC87;
                                        *objC87 = v_218_3 + g_bcabc0;
                                        v_21c[1] = valA51[1];
                                        v_21c[2] = v_1f4_1;
                                        v_21c[3] = v_1f0_2;
                                        v_21c[5] = g_bcabc0 * 0.0625.0f;
                                        v_21c[6] = x87_r7_23;
                                        v_218_3 = g_bcabb8;
                                        float* objC94 = &v_21c[7];
                                        int32_t v_218_4 = v_218_3;
                                        v_21c = objC94;
                                        *objC94 = v_218_4;
                                        v_21c[1] = valA51[1];
                                        valA51 = &valA51[2];
                                        v_21c[2] = v_1f4_1;
                                        v_21c[3] = v_1f0_2;
                                        v_21c[5] = 0;
                                        v_21c[6] = x87_r7_23;
                                        v_218_4 = g_bcabb8;
                                        int32_t v_218_5 = v_218_4;
                                        float* objC101 = &v_21c[7];
                                        v_21c = objC101;
                                        *objC101 = v_218_5 + g_bcabc0;
                                        v_21c[1] = valA51[-1];
                                        v_21c[2] = v_1f4_1;
                                        v_21c[3] = v_1f0_2;
                                        v_21c[5] = g_bcabc0 * 0.0625.0f;
                                        v_21c[6] = x87_r7_23;
                                        v_218_5 = g_bcabb8;
                                        float* objC108 = &v_21c[7];
                                        v_218 = v_218_5;
                                        v_21c = objC108;
                                        *objC108 = v_218;
                                        v_21c[1] = valA51[-2];
                                        v_21c[2] = v_1f4_1;
                                        v_21c[3] = v_1f0_2;
                                        v_21c[5] = 0;
                                        v_21c[6] = 0;
                                        i_1 = i_3;
                                        i_3 -= 1;
                                        v_21c = &v_21c[7];
                                    } while (i_1 != 1);
                                }

                                int32_t* valA52 = g_bcad00;
                                ((int(*)())(uintptr_t)(*(*valA52 + 0x10)))(valA52);
                                int32_t* valA53 = g_5ca114;
                                result =
                                    ((int(*)())(uintptr_t)(*(*valA53 + 0x7c)))(valA53, 4, g_bcad00, dstD4, srcS3, 0);
                                esp = &v_22c;
                            }
                        }
                    }
                    else
                    {
                        result = ((int(*)())(uintptr_t)(*(objC69 + 0xc)))(valA50, 0x1020);
                        esp = &v_22c;
                        int32_t objC70 = g_bcad08;
                        float* srcS2 = v_21c;
                        dstD4 = objC70;
                        g_bcad08 = objC70 + 0x64;
                        v_21c = &srcS2[objC70 * 7];

                        if (!result)
                            goto label_4a406f;
                    }
                }
            }
        }
        else
        {
            int32_t v_228_27 = 0x1020;
            v_22c = valA37;
            result = ((int(*)())(uintptr_t)(*(objC19 + 0xc)))(v_22c, v_228_27);
            esp = &v_224;
            int32_t objC20 = g_bcad08;
            float* dstD1 = v_214;
            *(&v_208_1 + 4) = objC20;
            g_bcad08 = objC20 + 0x64;
            v_214 = &dstD1[objC20 * 7];

            if (!result)
                goto label_4a3d0f;
        }
    }

    *esp;
    esp[1];
    esp[2];
    esp[3];
    return result;
}
