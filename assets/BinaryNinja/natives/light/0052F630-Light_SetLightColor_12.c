// Original IGI.EXE function: Light_SetLightColor_12 (VA 0x0052F630; static CFG gate FAIL, CFG score 0.815).
#include "Light_SetLightColor_12.h"
void* Light_SetLightColor_12(float* a1, void* a2, double* a3, void* a4, void* a5, int32_t a6)

{
    void* result = a2;
    int32_t tmpD = *(result + 0x18);
    int32_t* v_614;
    double* v_610;
    int32_t* v_60c;
    int32_t* v_608;
    int32_t* v_604;
    int32_t* v_600;
    void v_2e8;
    double* ctxB1;

    if (tmpD & 0xa)
    {
        ctxB1 = a3;

        if (!(tmpD & 2))
            result = a5;
        else
        {
            void* srcS1 = 1;
            v_60c = &ctxB1[9];
            v_614 = ctxB1 + 0x54;
            v_600 = ctxB1 + 0x6c;
            v_604 = ctxB1 + 0x74;
            result = a5;
            v_608 = ctxB1;
            v_610 = &ctxB1[3];

            if (result > 1)
            {
                long double x87_r7_2 = ctxB1[3] - *ctxB1;
                void* objC3 = &v_2e8;

                do
                {
                    void* tmpD1 = srcS1 + a4;
                    srcS1 += 1;
                    int32_t tmpD2 = ctxB1[1];
                    objC3 += 0x18;
                    *(objC3 - 0x20) = tmpD1 * x87_r7_2 / (a4 + result) + *ctxB1;
                    *(objC3 - 0x18) = tmpD2;
                    *(objC3 - 0x14) = *(ctxB1 + 0xc);
                    *(objC3 - 0x10) = a1[0x12a4];
                } while (srcS1 < result);
            }
        }

        if (tmpD & 8)
        {
            v_610 = &ctxB1[6];
            v_614 = &ctxB1[0xc];
            v_608 = &ctxB1[3];
            v_604 = ctxB1 + 0x7c;
            v_60c = ctxB1 + 0x54;
            int32_t tmpD8 = 1;
            v_600 = ctxB1 + 0x74;

            if (result > 1)
            {
                long double x87_r7_5 = v_610[1] - *(v_608 + 8);
                void* objC8 = &v_2e8;

                do
                {
                    *(objC8 - 8) = *v_608;
                    *(objC8 - 4) = v_608[1];
                    int32_t dstD6 = a4 + tmpD8;
                    tmpD8 += 1;
                    objC8 += 0x18;
                    *(objC8 - 0x18) = dstD6 * x87_r7_5 / (a4 + result) + *(v_608 + 8);
                    *(objC8 - 0x10) = a1[0x12a4];
                } while (tmpD8 < result);
            }
        }

    label_52f8ce:
        void v_308;
        memcpy(&v_308, v_608, 0x18);
        int32_t v_488 = *v_60c;
        int32_t v_484_1 = v_60c[1];
        int32_t v_480_1 = v_60c[2];
        int32_t objC20 = v_600[1];
        int32_t v_588[0x2];
        v_588[0] = *v_600;
        v_588[1] = objC20;
        int32_t saved_dst;
        memcpy(&(&saved_dst)[result * 6 + 0xca], v_610, 0x18);
        (&saved_dst)[result * 3 + 0x6a] = *v_614;
        (&saved_dst)[result * 3 + 0x6b] = v_614[1];
        (&saved_dst)[result * 3 + 0x6c] = v_614[2];
        int32_t objC25 = v_604[1];
        (&v_588)[result][0] = *v_604;
        v_584;
        *(&v_584 + (result << 3)) = objC25;
        void v_580;

        if (a6 && result > 1)
        {
            float* v_618_1 = &v_580;
            void v_47c;
            float* dstD14 = &v_47c;
            void v_2e0;
            int32_t* srcS8 = &v_2e0;
            void* v_620_5 = result - 1;
            bool cond_11_1;

            do
            {
                void v_5f8;
                Light_SetLightColor_11(a1, &v_5f8, &srcS8[-4]);
                int32_t v_5e0;
                *srcS8 = v_5e0;
                int32_t v_5dc;
                srcS8[1] = v_5dc;
                void v_5c0;
                Light_RenderLensflare_12(a1, dstD14, &v_5c0);
                double v_5f0[0x2];

                if (ctxB1[0x11] == 1)
                    Light_CalculateAttenuation_12(a1, v_618_1, &v_5f0, &v_5c0);
                srcS8 = &srcS8[6];
                dstD14 = &dstD14[3];
                cond_11_1 = v_620_5 != 1;
                v_618_1 = &v_618_1[2];
                v_620_5 -= 1;
            } while (cond_11_1);
            result = a5;
        }

        void* result_1 = 1;

        if (result >= 1)
        {
            int32_t* v_620_6 = &v_580;
            void v_2f0;
            void* valA19 = &v_2f0;
            void* v_61c_5 = &v_2f0;
            int32_t* v_618_2 = &v_488;

            while (true)
            {
                memcpy(v_608, valA19 - 0x18, 0x18);
                memcpy(v_610, valA19, 0x18);
                int32_t* objC31;

                if (!a6)
                    objC31 = v_60c;
                else
                {
                    objC31 = v_60c;
                    *objC31 = *v_618_2;
                    objC31[1] = v_618_2[1];
                    objC31[2] = v_618_2[2];
                    *v_614 = v_618_2[3];
                    v_614[1] = v_618_2[4];
                    v_614[2] = v_618_2[5];
                    *v_600 = v_620_6[-2];
                    v_600[1] = v_620_6[-1];
                    int32_t valA27 = v_620_6[1];
                    *v_604 = *v_620_6;
                    v_604[1] = valA27;
                }

                if (a1[0x12b2])
                {
                    void* valA30 = result_1 & 0x80000001;
                    bool cond_13_1 = !valA30;

                    if (valA30 < 0)
                        cond_13_1 = ((valA30 - 1) | 0xfffffffe) == 0xffffffff;

                    if (cond_13_1)
                    {
                        *objC31 = *v_618_2;
                        objC31[1] = v_618_2[1];
                        objC31[2] = v_618_2[2];
                        *v_614 = *v_618_2;
                        v_614[1] = v_618_2[1];
                        v_614[2] = v_618_2[2];
                        __builtin_memset(&ctxB1[9], 0, 0x24);
                    }
                    else
                    {
                        *objC31 = 0;
                        objC31[1] = 0;
                        objC31[2] = 0;
                        *v_614 = 0;
                        v_614[1] = 0;
                        v_614[2] = 0;
                        ctxB1[9] = 0;
                        *(ctxB1 + 0x4c) = 0;
                        ctxB1[0xa] = 0x3f800000;
                        *(ctxB1 + 0x54) = 0;
                        ctxB1[0xb] = 0;
                        *(ctxB1 + 0x5c) = 0x3f800000;
                        ctxB1[0xc] = 0;
                        *(ctxB1 + 0x64) = 0;
                        ctxB1[0xd] = 0x3f800000;
                    }
                }

                Terrain_ConnectGraphNode(ctxB1);
                result = result_1 + 1;
                result_1 = result;
                v_61c_5 += 0x18;
                v_620_6 = &v_620_6[2];
                v_618_2 = &v_618_2[3];

                if (result > a5)
                    break;

                valA19 = v_61c_5;
            }
        }
    }
    else if (tmpD & 0x14)
    {
        ctxB1 = a3;

        if (tmpD & 4)
        {
            v_60c = &ctxB1[9];
            v_614 = ctxB1 + 0x54;
            v_600 = ctxB1 + 0x6c;
            v_604 = ctxB1 + 0x74;
            void* objC13 = 1;
            v_608 = ctxB1;
            v_610 = &ctxB1[3];

            if (a5 > 1)
            {
                long double x87_r7_8 = ctxB1[3] - *ctxB1;
                void* valA5 = &v_2e8;

                do
                {
                    void* tmpD10 = objC13 + a4;
                    objC13 += 1;
                    int32_t tmpD11 = ctxB1[1];
                    valA5 += 0x18;
                    *(valA5 - 0x20) = tmpD10 * x87_r7_8 / (a4 + a5) + *ctxB1;
                    *(valA5 - 0x18) = tmpD11;
                    *(valA5 - 0x14) = *(ctxB1 + 0xc);
                    *(valA5 - 0x10) = a1[0x12a4];
                } while (objC13 < a5);
            }
        }

        if (tmpD & 0x10)
        {
            v_610 = &ctxB1[6];
            v_60c = &ctxB1[9];
            v_600 = ctxB1 + 0x6c;
            v_604 = ctxB1 + 0x7c;
            int32_t objC16 = 1;
            v_608 = ctxB1;
            v_614 = &ctxB1[0xc];

            if (a5 > 1)
            {
                long double x87_r7_11 = v_610[1] - ctxB1[1];
                void* valA10 = &v_2e8;

                do
                {
                    *(valA10 - 8) = *ctxB1;
                    *(valA10 - 4) = *(ctxB1 + 4);
                    long double x87_r5_16 = objC16 + a4;
                    objC16 += 1;
                    valA10 += 0x18;
                    *(valA10 - 0x18) = x87_r5_16 * x87_r7_11 / (a4 + a5) + ctxB1[1];
                    *(valA10 - 0x10) = a1[0x12a4];
                } while (objC16 < a5);
            }
        }

        result = a5;
        goto label_52f8ce;
    }
    return result;
}
