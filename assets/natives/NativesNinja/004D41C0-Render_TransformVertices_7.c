#include "004D41C0-Render_TransformVertices_7.h"
/* 0x004d41c0 Render_TransformVertices_7 full linked: callers=1 callees=4 */
float sub_4d41c0(float a1, int32_t a2, float a3, float a4, float a5, float a6) __location("eax")

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
            sub_4d4500(a1, a3, a5, a6);
            return 1;
        }

        float eax_10 = a3;
        float ecx_5 = a5;
        float* edx_4 = a1;
        long double x87_r7_10 = (*(eax_10 + 8) - *(eax_10 + 4)) * (*(ecx_5 + 4) - *(ecx_5 + 8));
        long double x87_r6_24 = (*(eax_10 + 0xc) - *eax_10) * (*(ecx_5 + 4) + *(ecx_5 + 8));
        a4 = (*(ecx_5 + 0xc) - *ecx_5) * (*(eax_10 + 8) + *(eax_10 + 4));
        a6 = (*(ecx_5 + 4) + *ecx_5) * (*eax_10 + *(eax_10 + 8));
        a5 = (*(ecx_5 + 0xc) - *(ecx_5 + 8)) * (*(eax_10 + 0xc) + *(eax_10 + 4));
        long double x87_r5_44 = (*(ecx_5 + 0xc) + *(ecx_5 + 8)) * (*(eax_10 + 0xc) - *(eax_10 + 4));
        long double x87_r4_23 = x87_r5_44 + a5 + a6;
        a3 = ((*ecx_5 - *(ecx_5 + 4)) * (*(eax_10 + 8) - *eax_10) + x87_r4_23) * 0.5f;
        *edx_4 = (*(ecx_5 + 0xc) + *ecx_5) * (*eax_10 + *(eax_10 + 0xc)) + a3 - x87_r4_23;
        long double x87_r5_46 = x87_r6_24 + a3 - x87_r5_44;
        a1 = x87_r5_46;
        edx_4[1] = x87_r5_46;
        long double x87_r6_30 = a3 + a4 - a5;
        a5 = x87_r6_30;
        edx_4[2] = x87_r6_30;
        long double x87_r7_12 = x87_r7_10 + a3 - a6;
        edx_4[3] = x87_r7_12;
        int32_t eax_12 = *(eax_10 + 0x10) + *(ecx_5 + 0x10) + 1;
        edx_4[4] = eax_12;

        if (eax_12 <= 0x3e8)
            return 1;

        long double x87_r6_31 = *edx_4;
        edx_4[4] = 0;
        long double x87_r5_55 =
            1.0 / sqrtl(x87_r7_12 * x87_r7_12 + a5 * a5 + a1 * a1 + x87_r6_31 * x87_r6_31);
        *edx_4 = *edx_4 * x87_r5_55;
        edx_4[1] = a1 * x87_r5_55;
        edx_4[2] = a5 * x87_r5_55;
        edx_4[3] = x87_r7_12 * x87_r5_55;
        return 1;
    }

    if (!a4)
    {
        sub_4d4500(a1, a3, a5, a6);
        return 0;
    }

    float* eax_3 = a3;
    float* ecx_2 = a5;
    float* edx_1 = a1;
    long double x87_r7_2 = (eax_3[1] - eax_3[2]) * (ecx_2[2] - ecx_2[1]);
    long double x87_r6_4 = (ecx_2[3] - *ecx_2) * (eax_3[2] + eax_3[1]);
    a4 = (eax_3[3] - *eax_3) * (ecx_2[1] + ecx_2[2]);
    a6 = (*eax_3 + eax_3[1]) * (*ecx_2 + ecx_2[2]);
    a5 = (eax_3[3] - eax_3[2]) * (ecx_2[3] + ecx_2[1]);
    long double x87_r5_13 = (eax_3[3] + eax_3[2]) * (ecx_2[3] - ecx_2[1]);
    long double x87_r4_10 = x87_r5_13 + a5 + a6;
    a3 = ((*eax_3 - eax_3[1]) * (ecx_2[2] - *ecx_2) + x87_r4_10) * 0.5f;
    *edx_1 = (ecx_2[3] + *ecx_2) * (*eax_3 + eax_3[3]) + a3 - x87_r4_10;
    long double x87_r5_15 = x87_r6_4 + a3 - x87_r5_13;
    a1 = x87_r5_15;
    edx_1[1] = x87_r5_15;
    long double x87_r6_10 = a3 + a4 - a5;
    a5 = x87_r6_10;
    edx_1[2] = x87_r6_10;
    long double x87_r7_4 = x87_r7_2 + a3 - a6;
    edx_1[3] = x87_r7_4;
    int32_t eax_5 = eax_3[4] + ecx_2[4] + 1;
    edx_1[4] = eax_5;

    if (eax_5 <= 0x3e8)
        return 1;

    long double x87_r6_11 = *edx_1;
    edx_1[4] = 0;
    long double x87_r6_17 =
        1.0 / sqrtl(x87_r6_11 * x87_r6_11 + x87_r7_4 * x87_r7_4 + a5 * a5 + a1 * a1);
    *edx_1 = *edx_1 * x87_r6_17;
    edx_1[1] = a1 * x87_r6_17;
    edx_1[2] = a5 * x87_r6_17;
    edx_1[3] = x87_r7_4 * x87_r6_17;
    return 1;
}
