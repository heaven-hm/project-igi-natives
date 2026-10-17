// Original IGI.EXE function: Light_RenderLensflare_6 (VA 0x00527520; static CFG gate PASS, CFG score 0.971).
#include "Light_RenderLensflare_6.h"
int32_t* Light_RenderLensflare_6(void* a1)

{
    int32_t objC;
    int32_t v_4 = objC;
    void* srcS = a1;
    DynObj_UpdateDynTree_11(*(srcS + 0x20));
    objC = g_a84374;

    if (!QTask_DeleteTask_2(srcS, objC))
    {
        void* valA22 = srcS + 0x50;
        int32_t i_8 = 5;
        void* dstD41 = nullptr;
        int32_t i;

        do
        {
            *(valA22 - 4) = 0;
            __builtin_memset(valA22, 0, 0x18);
            valA22 += 0x40;
            i = i_8;
            i_8 -= 1;
        } while (i != 1);
        __builtin_memset(srcS + 0x24, 0, 0x24);
        Physics_CalculateSplineLength_15(srcS + 0x4c);
        Physics_SolveConstraints_14(srcS + 0x58, *(srcS + 0x64) * 0.000500000024f);
        void* i_1 = &g_b46d00;
        int32_t* valA23 = srcS + 0x58;

        do
        {
            i_1 += 4;
            *(dstD41 + &g_b818a0) = valA23[-3];
            *(dstD41 + &g_b818a4) = valA23[-2];
            *(dstD41 + &g_b818a8) = valA23[-1];
            int32_t* ctxB23 = valA23;
            int32_t* tmpD42 = dstD41 + 0xb818e0;
            dstD41 += 0xc;
            valA23 = &valA23[0x10];
            *tmpD42 = *ctxB23;
            tmpD42[1] = ctxB23[1];
            tmpD42[2] = ctxB23[2];
            *(i_1 - 4) = valA23[-0xd] * 0.000500000024f;
        } while (i_1 < &g_b46d14);
    }
    else
    {
        long double fpu7 = *(srcS + 0x190);
        long double f0_1 = *(srcS + 0x18c);
        fpu7 - f0_1;

        if (*(&((fpu7 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0_1) ? 1 : 0) << 0xa
            | (fpu7 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t* valA18 = QTask_DeleteTask_2(srcS, g_a84374);
            int32_t* tmpD34 = srcS + 0x58;
            int32_t* objC22 = &valA18[0x16];
            a1 = 5;
            bool cond_1_1;

            do
            {
                tmpD34[-3] = objC22[-3];
                tmpD34[-2] = objC22[-2];
                tmpD34[-1] = objC22[-1];
                int32_t* dstD28 = objC22;
                int32_t* ctxB17 = tmpD34;
                objC22 = &objC22[0x11];
                tmpD34 = &tmpD34[0x10];
                *ctxB17 = *dstD28;
                ctxB17[1] = dstD28[1];
                ctxB17[2] = dstD28[2];
                tmpD34[-0xd] = objC22[-0xe];
                cond_1_1 = a1 != 1;
                a1 -= 1;
            } while (cond_1_1);
            *(srcS + 0x24) = valA18[8];
            *(srcS + 0x28) = valA18[9];
            *(srcS + 0x2c) = valA18[0xa];
            *(srcS + 0x30) = valA18[0xb];
            *(srcS + 0x34) = valA18[0xc];
            *(srcS + 0x38) = valA18[0xd];
            *(srcS + 0x3c) = valA18[0xe];
            *(srcS + 0x40) = valA18[0xf];
            *(srcS + 0x44) = valA18[0x10];
            Physics_CalculateSplineLength_15(srcS + 0x4c);
            Physics_SolveConstraints_14(srcS + 0x58, *(srcS + 0x64) * 0.000500000024f);
            void* i_2 = &g_b46d00;
            int32_t* valA21 = srcS + 0x58;
            void* objC29 = nullptr;

            do
            {
                i_2 += 4;
                *(objC29 + &g_b818a0) = valA21[-3];
                *(objC29 + &g_b818a4) = valA21[-2];
                *(objC29 + &g_b818a8) = valA21[-1];
                int32_t* ctxB19 = valA21;
                int32_t* dstD40 = objC29 + 0xb818e0;
                objC29 += 0xc;
                valA21 = &valA21[0x10];
                *dstD40 = *ctxB19;
                dstD40[1] = ctxB19[1];
                dstD40[2] = ctxB19[2];
                *(i_2 - 4) = valA21[-0xd] * 0.000500000024f;
            } while (i_2 < &g_b46d14);
        }
        else
        {
            int32_t* i_10 = nullptr;
            int32_t* i_9 = nullptr;
            int32_t* i_7 = QTask_DeleteTask_2(srcS, g_a84374);
            int32_t* i_4 = i_7;

            if (!i_4)
            {
            label_5275f7:
                int32_t* objC2 = srcS + 0x58;
                int32_t* valA3 = &i_9[0x16];
                a1 = 5;
                bool cond_3_1;

                do
                {
                    objC2[-3] = valA3[-3];
                    objC2[-2] = valA3[-2];
                    objC2[-1] = valA3[-1];
                    *objC2 = *valA3;
                    objC2[1] = valA3[1];
                    objC2[2] = valA3[2];
                    objC2[4] = valA3[4];
                    objC2[5] = valA3[5];
                    objC2[6] = valA3[6];
                    objC2[7] = valA3[7];
                    objC2[8] = valA3[8];
                    objC2[9] = valA3[9];
                    int32_t* tmpD9 = &valA3[0xa];
                    int32_t* dstD5 = &objC2[0xa];
                    valA3 = &valA3[0x11];
                    objC2 = &objC2[0x10];
                    *dstD5 = *tmpD9;
                    dstD5[1] = tmpD9[1];
                    dstD5[2] = tmpD9[2];
                    objC2[-0xd] = valA3[-0xe];
                    cond_3_1 = a1 != 1;
                    a1 -= 1;
                } while (cond_3_1);
                *(srcS + 0x24) = i_9[8];
                *(srcS + 0x28) = i_9[9];
                *(srcS + 0x2c) = i_9[0xa];
                *(srcS + 0x30) = i_9[0xb];
                *(srcS + 0x34) = i_9[0xc];
                *(srcS + 0x38) = i_9[0xd];
                *(srcS + 0x3c) = i_9[0xe];
                *(srcS + 0x40) = i_9[0xf];
                *(srcS + 0x44) = i_9[0x10];
                Physics_CalculateSplineLength_15(srcS + 0x4c);
                Physics_SolveConstraints_14(srcS + 0x58, *(srcS + 0x64) * 0.000500000024f);
                void* i_3 = &g_b46d00;
                int32_t* valA7 = srcS + 0x58;
                void* objC9 = nullptr;

                do
                {
                    i_3 += 4;
                    *(objC9 + &g_b818a0) = valA7[-3];
                    *(objC9 + &g_b818a4) = valA7[-2];
                    *(objC9 + &g_b818a8) = valA7[-1];
                    *(objC9 + 0xb818e0) = *valA7;
                    *(objC9 + 0xb818e4) = valA7[1];
                    *(objC9 + 0xb818e8) = valA7[2];
                    *(i_3 - 4) = valA7[3] * 0.000500000024f;
                    *(objC9 + 0xb816c0) = valA7[4];
                    *(objC9 + 0xb816c4) = valA7[5];
                    *(objC9 + 0xb816c8) = valA7[6];
                    *(objC9 + 0xb81720) = valA7[7];
                    *(objC9 + 0xb81724) = valA7[8];
                    *(objC9 + 0xb81728) = valA7[9];
                    int32_t* dstD14 = &valA7[0xa];
                    int32_t* ctxB7 = objC9 + 0xb81760;
                    valA7 = &valA7[0x10];
                    objC9 += 0xc;
                    *ctxB7 = *dstD14;
                    ctxB7[1] = dstD14[1];
                    ctxB7[2] = dstD14[2];
                } while (i_3 < &g_b46d14);

            label_527a6c:
                Light_ApplyLightmap_10(srcS + 0x24);
                Terrain_ConnectGraphNode_9(srcS + 0x24);
                return DynObj_RemoveSymbol_12(*(srcS + 0x20));
            }

            do
            {
                long double x87_r7_1 = i_4[0x12];
                long double f3_1 = *(srcS + 0x194);
                x87_r7_1 - f3_1;
                i_7 = (x87_r7_1 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe;

                if (*(&i_7 + 1) & 0x40)
                {
                    i_10 = i_4;
                    i_9 = i_4;
                    break;
                }

                long double x87_r7_2 = i_4[0x12];
                long double f5_1 = *(srcS + 0x194);
                x87_r7_2 - f5_1;
                i_7 = (x87_r7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f5_1 ? 1 : 0) << 0xe;

                if (*(&i_7 + 1) & 1)
                {
                    if (i_10)
                    {
                        long double x87_r7_3 = i_4[0x12];
                        long double f7_1 = i_10[0x12];
                        x87_r7_3 - f7_1;
                        i_7 = (x87_r7_3 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == f7_1 ? 1 : 0) << 0xe;
                    }

                    if (!i_10 || !(*(&i_7 + 1) & 0x41))
                        i_10 = i_4;
                }

                long double x87_r7_4 = i_4[0x12];
                long double f6_1 = *(srcS + 0x194);
                x87_r7_4 - f6_1;
                i_7 = (x87_r7_4 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f6_1 ? 1 : 0) << 0xe;

                if (!(*(&i_7 + 1) & 0x41))
                {
                    if (i_9)
                    {
                        long double x87_r7_5 = i_4[0x12];
                        long double f8_1 = i_9[0x12];
                        x87_r7_5 - f8_1;
                        i_7 = (x87_r7_5 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_5, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_5 == f8_1 ? 1 : 0) << 0xe;
                    }

                    if (!i_9 || *(&i_7 + 1) & 1)
                        i_9 = i_4;
                }

                i_7 = g_a84374;
                i_7 = QTask_TriggerEvent_2(i_4, i_7);
                i_4 = i_7;
            } while (i_4);

            if (!i_10)
                goto label_5275f7;

            long double x87_r7_10;
            long double f10_1;

            if (i_9 && i_10 != i_9)
            {
                x87_r7_10 = i_10[0x12];
                f10_1 = i_9[0x12];
                x87_r7_10 - f10_1;
            }

            if (!i_9 || i_10 == i_9 || *(&((x87_r7_10 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                int32_t* objC13 = srcS + 0x58;
                int32_t* valA11 = &i_10[0x16];
                a1 = 5;
                bool cond_5_1;

                do
                {
                    objC13[-3] = valA11[-3];
                    objC13[-2] = valA11[-2];
                    objC13[-1] = valA11[-1];
                    int32_t* tmpD23 = valA11;
                    int32_t* ctxB12 = objC13;
                    valA11 = &valA11[0x11];
                    objC13 = &objC13[0x10];
                    *ctxB12 = *tmpD23;
                    ctxB12[1] = tmpD23[1];
                    ctxB12[2] = tmpD23[2];
                    objC13[-0xd] = valA11[-0xe];
                    cond_5_1 = a1 != 1;
                    a1 -= 1;
                } while (cond_5_1);
                *(srcS + 0x24) = i_10[8];
                *(srcS + 0x28) = i_10[9];
                *(srcS + 0x2c) = i_10[0xa];
                *(srcS + 0x30) = i_10[0xb];
                *(srcS + 0x34) = i_10[0xc];
                *(srcS + 0x38) = i_10[0xd];
                *(srcS + 0x3c) = i_10[0xe];
                *(srcS + 0x40) = i_10[0xf];
                *(srcS + 0x44) = i_10[0x10];
                Physics_CalculateSplineLength_15(srcS + 0x4c);
                Physics_SolveConstraints_14(srcS + 0x58, *(srcS + 0x64) * 0.000500000024f);
                void* i_5 = &g_b46d00;
                int32_t* valA15 = srcS + 0x58;
                void* objC20 = nullptr;

                do
                {
                    i_5 += 4;
                    *(objC20 + &g_b818a0) = valA15[-3];
                    *(objC20 + &g_b818a4) = valA15[-2];
                    *(objC20 + &g_b818a8) = valA15[-1];
                    int32_t* ctxB14 = valA15;
                    int32_t* dstD24 = objC20 + 0xb818e0;
                    objC20 += 0xc;
                    valA15 = &valA15[0x10];
                    *dstD24 = *ctxB14;
                    dstD24[1] = ctxB14[1];
                    dstD24[2] = ctxB14[2];
                    *(i_5 - 4) = valA15[-0xd] * 0.000500000024f;
                } while (i_5 < &g_b46d14);

                goto label_527a6c;
            }

            void* tmpD20 = &i_9[0x15];
            void* objC10 = srcS + 0x50;
            long double x87_r7_13 = (*(srcS + 0x194) - i_10[0x12]) / (i_9[0x12] - i_10[0x12]);
            float* valA9 = &i_10[0x13];
            a1 = 5;
            bool cond_7_1;

            do
            {
                tmpD20 += 0x44;
                objC10 += 0x40;
                long double x87_r6_4 = *(valA9 + i_9 - i_10) - *valA9;
                valA9 = &valA9[0x11];
                cond_7_1 = a1 != 1;
                a1 -= 1;
                *(objC10 - 0x44) = x87_r6_4 * x87_r7_13 + valA9[-0x11];
                *(objC10 - 0x40) = (*(tmpD20 - 0x48) - valA9[-0x10]) * x87_r7_13 + valA9[-0x10];
                *(objC10 - 0x3c) = (*(tmpD20 - 0x44) - valA9[-0xf]) * x87_r7_13 + valA9[-0xf];
                *(objC10 - 0x38) = (*(tmpD20 - 0x40) - valA9[-0xe]) * x87_r7_13 + valA9[-0xe];
                *(objC10 - 0x34) = (*(tmpD20 - 0x3c) - valA9[-0xd]) * x87_r7_13 + valA9[-0xd];
                *(objC10 - 0x30) = (*(tmpD20 - 0x38) - valA9[-0xc]) * x87_r7_13 + valA9[-0xc];
                *(objC10 - 0x2c) = (*(tmpD20 - 0x34) - valA9[-0xb]) * x87_r7_13 + valA9[-0xb];
            } while (cond_7_1);
            *(srcS + 0x24) = (i_9[8] - i_10[8]) * x87_r7_13 + i_10[8];
            *(srcS + 0x28) = (i_9[9] - i_10[9]) * x87_r7_13 + i_10[9];
            *(srcS + 0x2c) = (i_9[0xa] - i_10[0xa]) * x87_r7_13 + i_10[0xa];
            *(srcS + 0x30) = (i_9[0xb] - i_10[0xb]) * x87_r7_13 + i_10[0xb];
            *(srcS + 0x34) = (i_9[0xc] - i_10[0xc]) * x87_r7_13 + i_10[0xc];
            *(srcS + 0x38) = (i_9[0xd] - i_10[0xd]) * x87_r7_13 + i_10[0xd];
            *(srcS + 0x3c) = (i_9[0xe] - i_10[0xe]) * x87_r7_13 + i_10[0xe];
            *(srcS + 0x40) = (i_9[0xf] - i_10[0xf]) * x87_r7_13 + i_10[0xf];
            *(srcS + 0x44) = (i_9[0x10] - i_10[0x10]) * x87_r7_13 + i_10[0x10];
            Physics_CalculateSplineLength_15(srcS + 0x4c);
            Physics_SolveConstraints_14(srcS + 0x58, *(srcS + 0x64) * 0.000500000024f);
            void* i_6 = &g_b46d00;
            int32_t* valA10 = srcS + 0x58;
            void* objC12 = nullptr;

            do
            {
                i_6 += 4;
                *(objC12 + &g_b818a0) = valA10[-3];
                *(objC12 + &g_b818a4) = valA10[-2];
                *(objC12 + &g_b818a8) = valA10[-1];
                int32_t* ctxB9 = valA10;
                int32_t* dstD19 = objC12 + 0xb818e0;
                objC12 += 0xc;
                valA10 = &valA10[0x10];
                *dstD19 = *ctxB9;
                dstD19[1] = ctxB9[1];
                dstD19[2] = ctxB9[2];
                *(i_6 - 4) = valA10[-0xd] * 0.000500000024f;
            } while (i_6 < &g_b46d14);
        }
    }

    Light_ApplyLightmap_10(srcS + 0x24);
    Terrain_ConnectGraphNode_9(srcS + 0x24);
    return DynObj_RemoveSymbol_12(*(srcS + 0x20));
}
