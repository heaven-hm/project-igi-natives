#include "gi_platform.h"
#include "004DD7F0-Render_DrawSplineMesh_15.h"
int32_t Render_DrawSplineMesh_15(void* a1, int32_t a2, int32_t a3, float* a4, float* a5, float* a6, float* a7)

{
    float v_b24 = 3.40282347e+38.0f;
    float v_b20 = 3.40282347e+38.0f;
    float v_b1c = -3.40282347e+38.0f;
    float v_b18 = -3.40282347e+38.0f;
    int32_t v_b10 = 0;
    void* flagP = (*(int32_t*)(uintptr_t)(*(*(*(a1 + 0x6c) + (a2 << 2)) + 0xc) + 0xc));
    int32_t tmpD1 = *(flagP + 0x98);
    int32_t objC1 = a3 * 5;
    int32_t* ctxB = tmpD1 + (objC1 << 2);
    int32_t* v_b14 = ctxB;

    if (*(*(tmpD1 + (objC1 << 2) + 0x10) + g_a5e354 + 0x14c))
    {
        int32_t tmpD3 = ctxB[2] * 3;
        int32_t valA5 = *(flagP + 0x90);
        int32_t tmpD4 = *(flagP + 0x94);
        int32_t dstD2 = *(valA5 + (tmpD3 << 2) + 4) * 3;
        int32_t objC4 = *(valA5 + (tmpD3 << 2)) * 3;
        long double x87_r7_2 = *(tmpD4 + (dstD2 << 2)) - *(tmpD4 + (objC4 << 2));
        float* objC5 = tmpD4 + (objC4 << 2);
        int32_t valA8 = *(valA5 + (tmpD3 << 2) + 8) * 3;
        long double x87_r6_2 = *(tmpD4 + (dstD2 << 2) + 4) - objC5[1];
        long double x87_r5_2 = *(tmpD4 + (dstD2 << 2) + 8) - objC5[2];
        void* valA9 = tmpD4 + (valA8 << 2);
        float v_b60 = *(tmpD4 + (valA8 << 2)) - *objC5;
        float v_b5c_1 = *(valA9 + 4) - objC5[1];
        long double x87_r4_6 = *(valA9 + 8) - objC5[2];
        float v_b70 = x87_r4_6 * x87_r6_2 - v_b5c_1 * x87_r5_2;
        float v_b6c_1 = -((x87_r4_6 * x87_r7_2 - v_b60 * x87_r5_2));
        long double x87_r7_4 = x87_r7_2 * v_b5c_1 - v_b60 * x87_r6_2;
        float v_b4c =
            v_b70 * (*(int32_t*)(uintptr_t)(a1 + 0x70)) + x87_r7_4 * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + v_b6c_1 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
        long double x87_r6_9 = v_b70 * (*(int32_t*)(uintptr_t)(a1 + 0x7c));
        long double x87_r5_12 = x87_r7_4 * (*(int32_t*)(uintptr_t)(a1 + 0x84));
        float v_b40 = v_b4c;
        float v_b48_1 = x87_r6_9 + x87_r5_12 + v_b6c_1 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
        float v_b3c_1 = v_b48_1;
        float v_b44_1 =
            v_b70 * (*(int32_t*)(uintptr_t)(a1 + 0x88)) + x87_r7_4 * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_b6c_1 * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
        long double x87_r7_8 = v_b4c;
        long double f1_1 = 0.0f;
        x87_r7_8 - f1_1;
        float v_b38_1 = v_b44_1;

        if (!(*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
    label_4dd9aa: ;
            long double x87_r7_11 = v_b44_1;
            long double x87_r6_18 = v_b48_1;
            long double x87_r5_15 = v_b4c;
            long double x87_r7_13 =
                1.0 / sqrtl(x87_r5_15 * x87_r5_15 + x87_r6_18 * x87_r6_18 + x87_r7_11 * x87_r7_11);
            v_b40 = v_b4c * x87_r7_13;
            v_b3c_1 = v_b3c_1 * x87_r7_13;
            v_b38_1 = v_b38_1 * x87_r7_13;
        }
        else
        {
            long double x87_r7_9 = v_b48_1;
            long double f2_1 = 0.0f;
            x87_r7_9 - f2_1;

            if (!(*(&((x87_r7_9 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4dd9aa;

            long double x87_r7_10 = v_b44_1;
            long double f4_1 = 0.0f;
            x87_r7_10 - f4_1;

            if (!(*(&((x87_r7_10 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4dd9aa;
        }

        float v_b30_1 =
            objC5[1] * (*(int32_t*)(uintptr_t)(a1 + 0x80)) + objC5[2] * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + *objC5 * (*(int32_t*)(uintptr_t)(a1 + 0x7c));
        float v_b2c_1 =
            (*(int32_t*)(uintptr_t)(a1 + 0x88)) * *objC5 + (*(int32_t*)(uintptr_t)(a1 + 0x90)) * objC5[2] + (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * objC5[1];
        double v_b00_1 = v_b30_1 + (*(int32_t*)(uintptr_t)(a1 + 0x28));
        long double x87_r7_20 = (*(int32_t*)(uintptr_t)(a1 + 0x70)) * *objC5 + (*(int32_t*)(uintptr_t)(a1 + 0x78)) * objC5[2]
            + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * objC5[1] + (*(int32_t*)(uintptr_t)(a1 + 0x20)) - g_bcab08;
        float v_b64_1 = x87_r7_20;
        long double x87_r6_43 = v_b00_1 - g_bcab10;
        float v_b50_1 = x87_r6_43;
        long double x87_r5_26 = v_b2c_1 + (*(int32_t*)(uintptr_t)(a1 + 0x30)) - g_bcab18;
        float v_b54_1 = x87_r5_26;
        long double f3_1 = 0.0f;
        x87_r7_20 - f3_1;

        if (!(*(&((x87_r7_20 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
        {
    label_4ddae6: ;
            long double x87_r4_20 =
                1.0 / sqrtl(x87_r7_20 * x87_r7_20 + x87_r6_43 * x87_r6_43 + x87_r5_26 * x87_r5_26);
            x87_r7_20 = x87_r7_20 * x87_r4_20;
            x87_r6_43 = x87_r6_43 * x87_r4_20;
            x87_r5_26 = x87_r5_26 * x87_r4_20;
        }
        else
        {
            long double f5_1 = 0.0f;
            x87_r6_43 - f5_1;

            if (!(*(&((x87_r6_43 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_43, f5_1) ? 1 : 0) << 0xa
                    | (x87_r6_43 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                goto label_4ddae6;

            long double f7_1 = 0.0f;
            x87_r5_26 - f7_1;

            if (!(*(&((x87_r5_26 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_26, f7_1) ? 1 : 0) << 0xa
                    | (x87_r5_26 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                goto label_4ddae6;
        }

        long double x87_r7_23 = x87_r5_26 * v_b38_1 + x87_r6_43 * v_b3c_1 + x87_r7_20 * v_b40;
        long double f6_1 = 0.0f;
        x87_r7_23 - f6_1;
        float v_b34;
        long double x87_r4_34;
        long double f8_1;

        if (*(&((x87_r7_23 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_24 = v_b40;
            v_b70 = v_b40;
            v_b60 = v_b64_1;
            v_b70 = -(x87_r7_24);
            float v_b6c_3 = -(v_b3c_1);
            float v_b68_2 = -(v_b38_1);
            Sys_PopStack_10(&v_b34, &v_b60, &v_b70, &v_b40);
            long double x87_r7_31 = v_b54_1 - v_b2c_1;
            long double x87_r6_50 = v_b50_1 - v_b30_1;
            long double x87_r5_32 = v_b60 - v_b34;
            x87_r4_34 = x87_r5_32 * x87_r5_32 + x87_r6_50 * x87_r6_50 + x87_r7_31 * x87_r7_31;
            f8_1 = 167772.172.0f;
            x87_r4_34 - f8_1;
        }

        if (!(*(&((x87_r7_23 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 1) || *(&(
            (x87_r4_34 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_34, f8_1) ? 1 : 0) << 0xa
            | (x87_r4_34 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            float v_b08_1 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - g_bcab08;
            float v_b04_1 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - g_bcab10;
            int32_t dstD4 = ctxB[1];
            v_b00_1 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - g_bcab18;

            if (dstD4 > 0)
            {
                char v_ae0;
                float* tmpD9 = &v_ae0;
                int32_t v_b50_2 = dstD4;
                float* objC9 = *(flagP + 0x94) + *ctxB * 0xc;
                bool cond_0_1;

                do
                {
                    v_b60 = objC9[1] * (*(int32_t*)(uintptr_t)(a1 + 0x74)) + (*(int32_t*)(uintptr_t)(a1 + 0x78)) * objC9[2]
                        + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * *objC9;
                    long double x87_r7_44 = objC9[1] * (*(int32_t*)(uintptr_t)(a1 + 0x80));
                    long double x87_r6_57 = (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * *objC9;
                    v_b34 = v_b60;
                    long double x87_r7_52 = v_b60 + v_b08_1;
                    long double x87_r6_65 =
                        x87_r7_44 + x87_r6_57 + objC9[2] * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + v_b04_1;
                    long double x87_r5_35 = objC9[1] * (*(int32_t*)(uintptr_t)(a1 + 0x8c)) + (*(int32_t*)(uintptr_t)(a1 + 0x90)) * objC9[2]
                        + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * *objC9 + v_b00_1;
                    v_b70 =
                        x87_r5_35 * g_bcaae8 + x87_r6_65 * g_bcaae4 + x87_r7_52 * g_bcaae0;
                    long double x87_r4_40 = x87_r5_35 * g_bcaaf4;
                    long double x87_r3_21 = x87_r6_65 * g_bcaaf0;
                    tmpD9[-4] = v_b70;
                    float v_b6c_4 = x87_r4_40 + x87_r3_21 + x87_r7_52 * g_bcaaec;
                    long double x87_r5_36 = x87_r5_35 * g_bcab00;
                    long double x87_r5_38 = x87_r6_65 * g_bcaafc;
                    tmpD9[-3] = v_b6c_4;
                    float v_b68_3 = x87_r5_36 + x87_r5_38 + x87_r7_52 * g_bcaaf8;
                    long double x87_r7_55 = v_b68_3;
                    long double f9_1 = 0.040959999.0f;
                    x87_r7_55 - f9_1;
                    tmpD9[-2] = v_b68_3;

                    if (*(&((x87_r7_55 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_55, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_55 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                        tmpD9[2] = 0x10;
                    else
                    {
                        int32_t flagP1 = 1;
                        v_b10 = 1;
                        int32_t v_b54_2 = 1;
                        float v_b64_2 = 1.0f / v_b68_3;
                        long double x87_r7_59 = v_b64_2 * v_b70;
                        tmpD9[1] = v_b64_2;
                        long double x87_r7_61 = x87_r7_59 * g_bcab28 + g_bcab30;
                        tmpD9[-1] = x87_r7_61;
                        long double x87_r6_73 = v_b64_2 * v_b6c_4 * g_bcab2c + g_bcab34;
                        float v_b28_2 = x87_r6_73;
                        *tmpD9 = x87_r6_73;
                        long double f10_1 = g_bcabd0;
                        x87_r7_61 - f10_1;

                        if (!(*(&((x87_r7_61 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_61, f10_1) ? 1 : 0) << 0xa
                                | (x87_r7_61 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            v_b54_2 = 0;

                        long double f12_1 = g_bcabd4;
                        x87_r6_73 - f12_1;
                        int32_t dstD8;

                        dstD8 = !(*(&((x87_r6_73 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_73, f12_1) ? 1 : 0) << 0xa
                            | (x87_r6_73 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                        long double f13_1 = g_bcabd8;
                        x87_r7_61 - f13_1;

                        if (*(&((x87_r7_61 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_61, f13_1) ? 1 : 0) << 0xa
                                | (x87_r7_61 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            flagP1 = 0;

                        long double x87_r7_62 = v_b28_2;
                        long double f15_1 = g_bcabdc;
                        x87_r7_62 - f15_1;
                        int32_t valA25;

                        valA25 = *(&((x87_r7_62 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_62, f15_1) ? 1 : 0) << 0xa
                            | (x87_r7_62 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        tmpD9[2] = (((valA25 * 2) | flagP1) << 1 | dstD8) << 1 | v_b54_2;
                    }

                    objC9 = &objC9[3];
                    tmpD9 = &tmpD9[7];
                    cond_0_1 = v_b50_2 != 1;
                    v_b50_2 -= 1;
                } while (cond_0_1);

                if (v_b10)
                {
                    v_b4c = &v_b24;
                    int32_t* v_b48_2 = &v_b1c;
                    int32_t flagP2 = 0;

                    if (ctxB[3] > 0)
                    {
                        while (true)
                        {
                            int32_t ctxB1 = *ctxB;
                            int32_t v_b84_2 = 0x3d27c5ac;
                            int32_t* tmpD11 = *(flagP + 0x90) + (ctxB[2] + flagP2) * 0xc;
                            float* v_b88_2 = &v_b4c;
                            int32_t valA42 = tmpD11[1] - ctxB1;
                            char v_bc0;
                            char v_ba4;
                            memcpy(&v_ba4,
                                &v_bc0 + (tmpD11[2] - ctxB1) * 0x1c + 0xd0, 0x1c);
                            int32_t valA44 = *tmpD11 - ctxB1;
                            char v_bdc;
                            memcpy(&v_bc0, &v_bdc + valA42 * 0x1c + 0xec, 0x1c);
                            memcpy(&v_bdc, &v_bdc + valA44 * 0x1c + 0xec, 0x1c);
                            Render_SetupLighting_13();
                            flagP2 += 1;

                            if (flagP2 >= v_b14[3])
                                break;

                            ctxB = v_b14;
                        }
                    }

                    long double x87_r7_63 = v_b24;
                    long double f14_1 = *a5;
                    x87_r7_63 - f14_1;

                    if (*(&((x87_r7_63 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_63, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_63 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_64 = v_b20;
                        long double f16_1 = a5[1];
                        x87_r7_64 - f16_1;

                        if (*(&((x87_r7_64 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_64, f16_1) ? 1 : 0) << 0xa
                            | (x87_r7_64 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double x87_r7_65 = v_b1c;
                            long double f17_1 = *a4;
                            x87_r7_65 - f17_1;

                            if (!(*(&((x87_r7_65 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_65, f17_1) ? 1 : 0) << 0xa
                                | (x87_r7_65 == f17_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double x87_r7_66 = v_b18;
                                long double f18_1 = a4[1];
                                x87_r7_66 - f18_1;

                                if (!(*(&((x87_r7_66 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_66, f18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_66 == f18_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    *a6 = v_b24;
                                    float objC18 = v_b1c;
                                    a6[1] = v_b20;
                                    *a7 = objC18;
                                    a7[1] = v_b18;
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
