// Original IGI.EXE function: Render_TransformVertices_7 (VA 0x004D41C0; static CFG gate FAIL, CFG score 0.833).
#include "Render_TransformVertices_7.h"
float Render_TransformVertices_7(float a1, int32_t a2, float a3, float a4, float a5, float a6) __location("valA")

{
    if (a2 == 0xffffffff)
    {
        if (a4 == 0xffffffff)
            return 0xffffffff;

        memcpy(a1, a5, 0x14);
        return a4;
    }

    if (a4 == 0xffffffff)
    {
        memcpy(a1, a3, 0x14);
        return a2;
    }

    if (a2)
    {
        if (a4 == 1)
        {
            Render_ComputeNormals_7(a1, a3, a5, a6);
            return 1;
        }

        float valA10 = a3;
        float objC5 = a5;
        float* tmpD4 = a1;
        long double x87_r7_10 = (*(valA10 + 8) - *(valA10 + 4)) * (*(objC5 + 4) - *(objC5 + 8));
        long double x87_r6_24 = (*(valA10 + 0xc) - *valA10) * (*(objC5 + 4) + *(objC5 + 8));
        a4 = (*(objC5 + 0xc) - *objC5) * (*(valA10 + 8) + *(valA10 + 4));
        a6 = (*(objC5 + 4) + *objC5) * (*valA10 + *(valA10 + 8));
        a5 = (*(objC5 + 0xc) - *(objC5 + 8)) * (*(valA10 + 0xc) + *(valA10 + 4));
        long double x87_r5_44 = (*(objC5 + 0xc) + *(objC5 + 8)) * (*(valA10 + 0xc) - *(valA10 + 4));
        long double x87_r4_23 = x87_r5_44 + a5 + a6;
        a3 = ((*objC5 - *(objC5 + 4)) * (*(valA10 + 8) - *valA10) + x87_r4_23) * 0.5f;
        *tmpD4 = (*(objC5 + 0xc) + *objC5) * (*valA10 + *(valA10 + 0xc)) + a3 - x87_r4_23;
        long double x87_r5_46 = x87_r6_24 + a3 - x87_r5_44;
        a1 = x87_r5_46;
        tmpD4[1] = x87_r5_46;
        long double x87_r6_30 = a3 + a4 - a5;
        a5 = x87_r6_30;
        tmpD4[2] = x87_r6_30;
        long double x87_r7_12 = x87_r7_10 + a3 - a6;
        tmpD4[3] = x87_r7_12;
        int32_t valA12 = *(valA10 + 0x10) + *(objC5 + 0x10) + 1;
        tmpD4[4] = valA12;

        if (valA12 <= 0x3e8)
            return 1;

        long double x87_r6_31 = *tmpD4;
        tmpD4[4] = 0;
        long double x87_r5_55 =
            1.0 / sqrtl(x87_r7_12 * x87_r7_12 + a5 * a5 + a1 * a1 + x87_r6_31 * x87_r6_31);
        *tmpD4 = *tmpD4 * x87_r5_55;
        tmpD4[1] = a1 * x87_r5_55;
        tmpD4[2] = a5 * x87_r5_55;
        tmpD4[3] = x87_r7_12 * x87_r5_55;
        return 1;
    }

    if (!a4)
    {
        Render_ComputeNormals_7(a1, a3, a5, a6);
        return 0;
    }

    float* valA3 = a3;
    float* objC2 = a5;
    float* tmpD1 = a1;
    long double x87_r7_2 = (valA3[1] - valA3[2]) * (objC2[2] - objC2[1]);
    long double x87_r6_4 = (objC2[3] - *objC2) * (valA3[2] + valA3[1]);
    a4 = (valA3[3] - *valA3) * (objC2[1] + objC2[2]);
    a6 = (*valA3 + valA3[1]) * (*objC2 + objC2[2]);
    a5 = (valA3[3] - valA3[2]) * (objC2[3] + objC2[1]);
    long double x87_r5_13 = (valA3[3] + valA3[2]) * (objC2[3] - objC2[1]);
    long double x87_r4_10 = x87_r5_13 + a5 + a6;
    a3 = ((*valA3 - valA3[1]) * (objC2[2] - *objC2) + x87_r4_10) * 0.5f;
    *tmpD1 = (objC2[3] + *objC2) * (*valA3 + valA3[3]) + a3 - x87_r4_10;
    long double x87_r5_15 = x87_r6_4 + a3 - x87_r5_13;
    a1 = x87_r5_15;
    tmpD1[1] = x87_r5_15;
    long double x87_r6_10 = a3 + a4 - a5;
    a5 = x87_r6_10;
    tmpD1[2] = x87_r6_10;
    long double x87_r7_4 = x87_r7_2 + a3 - a6;
    tmpD1[3] = x87_r7_4;
    int32_t valA5 = valA3[4] + objC2[4] + 1;
    tmpD1[4] = valA5;

    if (valA5 <= 0x3e8)
        return 1;

    long double x87_r6_11 = *tmpD1;
    tmpD1[4] = 0;
    long double x87_r6_17 =
        1.0 / sqrtl(x87_r6_11 * x87_r6_11 + x87_r7_4 * x87_r7_4 + a5 * a5 + a1 * a1);
    *tmpD1 = *tmpD1 * x87_r6_17;
    tmpD1[1] = a1 * x87_r6_17;
    tmpD1[2] = a5 * x87_r6_17;
    tmpD1[3] = x87_r7_4 * x87_r6_17;
    return 1;
}
