// Original IGI.EXE function: Light_ComputeDirectionalLight_12 (VA 0x0052DD90; static CFG gate PASS, CFG score 0.933).
#include "Light_ComputeDirectionalLight_12.h"
int32_t Light_ComputeDirectionalLight_12(void* a1)

{
    float ctxB = *(a1 + 0xc);
    __builtin_memset(&g_a84584, 0, 0x50);
    int32_t v_c = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0x3f800000;
    g_a8457c = 0;
    g_a84580 = 0;
    Light_RenderLensflare_12(ctxB, ctxB + 0x4a6c, &v_c);
    long double fpu7 = *(ctxB + 0x4a94);
    memcpy(ctxB + 0x4870, &g_bcab08, 0x18);
    long double x87_r7_1 = *(ctxB + 0x4880) - fpu7;
    long double f3 = 0.0;
    x87_r7_1 - f3;
    *(ctxB + 0x4a48) = g_bcaaf8;
    *(ctxB + 0x4a4c) = g_bcaafc;
    *(ctxB + 0x4a50) = g_bcab00;

    if (*(&((x87_r7_1 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r7_1 = 0.0;

    int32_t objC2 = *(ctxB + 0x4aac);
    int32_t valA3 = *(ctxB + 0x4aa8);
    *(ctxB + 0x4a78) = x87_r7_1;
    int32_t v_10 = 0;
    int32_t v_10_1 = 0;
    *(ctxB + 0x4a8c) = (COMBINE(0, valA3) % objC2) * *(ctxB + 0x4a84) / objC2;
    Light_CalculateAttenuation_11(ctxB);
    Render_ComputeNormals_12(ctxB + 0x4acc, ctxB + 0x4ad0);
    void* srcS = *(ctxB + 0x4ab4);
    int32_t v_10_2 = 0;
    long double x87_r7_6 = *(ctxB + 0x4a9c);
    void* v_14_3 = srcS;
    int32_t v_10_3 = 0;
    long double fpu6 = v_14_3;
    long double x87_r5_1 = *(ctxB + 0x4870) - *(ctxB + 0x4840);
    *(ctxB + 0x4abc) = 0;
    v_14_3 = x87_r5_1 / x87_r7_6 * fpu6;
    void* dstD1 = v_14_3;
    void* v_1c = dstD1;
    v_14_3 = (*(ctxB + 0x4878) - *(ctxB + 0x4848)) / x87_r7_6 * fpu6;
    void* objC4 = v_14_3;
    a1 = objC4;

    if (srcS - 1 < dstD1)
    {
        v_1c = srcS - 1;
        dstD1 = srcS - 1;
    }

    if (srcS - 1 < objC4)
    {
        a1 = srcS - 1;
        objC4 = srcS - 1;
    }

    int32_t v_10_4 = 0;
    int32_t tmpD6 = (objC4 + (dstD1 << 3)) * 0x30;
    int32_t v_14_4 = *(tmpD6 + ctxB + 0x60);
    long double x87_r7_8 = v_14_4;
    v_14_4 = (*(ctxB + 0x4870) - *(tmpD6 + ctxB + 0x40)) / x87_r7_8 * -2.0;
    int32_t tmpD10 = 0xffffffff - (v_14_4 << 1);
    v_14_4 = (*(ctxB + 0x4878) - *(tmpD6 + ctxB + 0x48)) / x87_r7_8 * -2.0;
    int32_t valA11 = 0;
    valA11 = tmpD10 >= 0;
    int32_t tmpD11 = 0;
    void* valA14 = ((valA11 - 1) & tmpD10) + dstD1;
    tmpD11 = 0xffffffff - (v_14_4 << 1) >= 0;
    void* tmpD14 = ((tmpD11 - 1) & (0xffffffff - (v_14_4 << 1))) + objC4;
    int32_t tmpD15 = 0;
    tmpD15 = valA14 <= 0;
    int32_t valA15 = 0;
    valA15 = tmpD14 <= 0;
    void* valA18 = ((valA15 - 1) & tmpD14) + (((tmpD15 - 1) & valA14) << 3);
    *(ctxB + 0x10) = *(valA18 * 0x30 + ctxB + 0x40);
    *(ctxB + 0x14) = *(valA18 * 0x30 + ctxB + 0x44);
    *(ctxB + 0x18) = *(valA18 * 0x30 + ctxB + 0x48);
    int32_t dstD6 = 0;
    int32_t v_20 = 0;
    *(ctxB + 0x1c) = *(valA18 * 0x30 + ctxB + 0x4c);

    if (srcS > 0)
    {
        int32_t* v_14_5 = ctxB + 0x54;

        do
        {
            int32_t v_24_1 = 0;

            if (srcS > 0)
            {
                int32_t* srcS1 = v_14_5;
                bool cond_9_1;

                do
                {
                    srcS1[5] = 1;

                    if (dstD6 != v_1c || v_24_1 != objC4)
                    {
                        void* valA26 = v_1c + tmpD10;
                        double* v_38_3;

                        if (dstD6 == valA26)
                        {
                            if (v_24_1 == objC4)
                            {
                                int32_t valA27 = *srcS1;

                                if (tmpD10 <= 0)
                                    valA27 |= 0x10;
                                else
                                    valA27 |= 8;

                                *srcS1 = valA27;

                                if (0xffffffff - (v_14_4 << 1) <= 0)
                                    valA27 |= 4;
                                else
                                    valA27 |= 2;

                                *srcS1 = valA27;
                                srcS1[6] = ctxB + 0x10;
                                v_38_3 = &srcS1[-5];
                                goto label_52e077;
                            }

                            dstD6 = v_20;
                        }

                        if (dstD6 != v_1c)
                            goto label_52e0db;

                        if (v_24_1 != objC4 + 0xffffffff - (v_14_4 << 1))
                        {
                            dstD6 = v_20;
                        label_52e0db:

                            if (dstD6 != valA26 || v_24_1 != objC4 + 0xffffffff - (v_14_4 << 1))
                                srcS1[5] = 0;
                            else
                            {
                                int32_t valA37 = *srcS1;

                                if (tmpD10 <= 0)
                                    valA37 |= 0x10;
                                else
                                    valA37 |= 8;

                                *srcS1 = valA37;

                                if (0xffffffff - (v_14_4 << 1) <= 0)
                                    valA37 |= 2;
                                else
                                    valA37 |= 4;

                                *srcS1 = valA37;
                                srcS1[6] = ctxB + 0x10;
                                Light_ApplyLightmap_13(ctxB, &srcS1[-5]);
                                objC4 = a1;
                            }
                        }
                        else
                        {
                            int32_t valA30 = *srcS1;

                            if (tmpD10 <= 0)
                                valA30 |= 8;
                            else
                                valA30 |= 0x10;

                            *srcS1 = valA30;

                            if (0xffffffff - (v_14_4 << 1) <= 0)
                            {
                                valA30 |= 2;
                                *srcS1 = valA30;
                                srcS1[6] = ctxB + 0x10;
                                v_38_3 = &srcS1[-5];
                            }
                            else
                            {
                                valA30 |= 4;
                                *srcS1 = valA30;
                                srcS1[6] = ctxB + 0x10;
                                v_38_3 = &srcS1[-5];
                            }

                        label_52e077:
                            Light_ApplyLightmap_13(ctxB, v_38_3);
                            objC4 = a1;
                            dstD6 = v_20;
                        }
                    }
                    else
                    {
                        int32_t valA24 = *srcS1;

                        if (tmpD10 <= 0)
                            valA24 |= 8;
                        else
                            valA24 |= 0x10;

                        *srcS1 = valA24;

                        if (0xffffffff - (v_14_4 << 1) <= 0)
                            valA24 |= 4;
                        else
                            valA24 |= 2;

                        *srcS1 = valA24;
                        srcS1[6] = ctxB + 0x10;
                        Light_ApplyLightmap_13(ctxB, &srcS1[-5]);
                        objC4 = a1;
                    }

                    srcS1 = &srcS1[0xc];
                    cond_9_1 = v_24_1 + 1 < *(ctxB + 0x4ab4);
                    v_24_1 += 1;
                } while (cond_9_1);
            }

            srcS = *(ctxB + 0x4ab4);
            dstD6 += 1;
            v_20 = dstD6;
            v_14_5 = &v_14_5[0x60];
        } while (dstD6 < srcS);
    }

    return Light_ApplyLightmap_12(0xffffffff - (v_14_4 << 1), ctxB);
}
