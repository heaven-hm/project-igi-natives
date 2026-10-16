#include "Physics_EvaluateAreaCriteria_14.h"
void Physics_EvaluateAreaCriteria_14(float a1)

{
    int32_t objC11 = g_bcaaa8;

    if (!objC11)
        return;

    float flagP1 = a1;
    int32_t v_10_1 = *(flagP1 + 0x50);
    int32_t v_10_2 = *(flagP1 + 0x4c);
    int32_t v_10_3 = g_bcaac0;
    int32_t* v_50_1 = objC11 + ((g_bcaaa0 * v_10_1 + v_10_2) << 2);
    int32_t ctxB1 = g_bcaac4;
    int32_t v_24_1 = ctxB1;
    int32_t tmpD5 = g_bcaac8 + v_10_3;
    int32_t v_28_1 = tmpD5;
    int32_t objC3 = g_bcaacc + ctxB1;

    if (v_10_2 >= tmpD5 || v_10_1 >= objC3 || *(flagP1 + 0x6c) + v_10_2 < v_10_3)
        return;

    int32_t v_10_8 = *(flagP1 + 0x70);

    if (v_10_8 + v_10_1 < ctxB1)
        return;

    long double x87_r7_9 = *(flagP1 + 0x54);
    int32_t v_44_1 = 0;
    a1 = 1f - x87_r7_9;
    int32_t v_10_9 = x87_r7_9 * *(flagP1 + 0x58) * 255f;
    int32_t v_10_10 = x87_r7_9 * *(flagP1 + 0x5c) * 255f;
    int64_t v_10_11 = x87_r7_9 * *(flagP1 + 0x60) * 255f;
    int32_t dstD6 = v_10_11;

    if (v_10_8 <= 0)
        return;

    int32_t objC7 = v_10_1;
    int32_t v_40_1 = objC7;
    bool cond_3_1;

    do
    {
        if (objC7 >= ctxB1 && objC7 < objC3)
        {
            long double x87_r7_12 = 0f;
            long double f0_1 = *(flagP1 + 0x6c);
            x87_r7_12 - f0_1;
            int32_t v_54_1 = 0;

            if (*(&((x87_r7_12 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_12, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                int32_t objC8 = v_10_2;
                int32_t* dstD7 = v_50_1;
                int32_t v_48_1 = objC8;
                long double x87_r7_19;
                long double f1_1;

                do
                {
                    if (objC8 >= v_10_3 && objC8 < tmpD5)
                    {
                        int32_t valA2 = *dstD7;
                        int32_t v_1c_1 = 0;
                        int32_t v_14_1 = 0;
                        *(&v_10_11 + 4) = 0;
                        v_10_11 = valA2 & 0xff;
                        int32_t valA5 = v_10_9 + (valA2 >> 0x10) * a1;
                        char objC10 = -1;

                        if (valA5 <= 0xff)
                            objC10 = valA5;

                        int32_t srcS1 = (valA2 >> 8) * a1 + v_10_10;

                        if (srcS1 > 0xff)
                            srcS1 = 0xff;

                        int32_t valA7 = v_10_11 * a1 + dstD6;

                        if (valA7 > 0xff)
                            valA7 = 0xff;

                        int32_t tmpD14 = 0;
                        *(&tmpD14 + 1) = objC10;
                        objC8 = v_48_1;
                        *dstD7 = (tmpD14 | (srcS1 & 0xffff)) << 8 | (valA7 & 0xffffff);
                        tmpD5 = v_28_1;
                    }

                    dstD7 = &dstD7[1];
                    objC8 += 1;
                    v_54_1 += 1;
                    v_48_1 = objC8;
                    x87_r7_19 = v_54_1;
                    f1_1 = *(flagP1 + 0x6c);
                    x87_r7_19 - f1_1;
                } while (*(&((x87_r7_19 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == f1_1 ? 1 : 0) << 0xe) + 1) & 1);
                objC7 = v_40_1;
                ctxB1 = v_24_1;
            }
        }

        v_50_1 = &v_50_1[g_bcaaa0];
        objC7 += 1;
        cond_3_1 = v_44_1 + 1 < *(flagP1 + 0x70);
        v_44_1 += 1;
        v_40_1 = objC7;
    } while (cond_3_1);
}
