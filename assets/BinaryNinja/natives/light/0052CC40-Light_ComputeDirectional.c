// Original IGI.EXE function: Light_ComputeDirectional (VA 0x0052CC40; static CFG gate PASS, CFG score 1.000).
#include "Light_ComputeDirectional.h"
int32_t Light_ComputeDirectional(float* a1)

{
    float* dstD = a1;
    int32_t* valA = dstD[0x14];
    int32_t* v_24 = nullptr;
    (*(*valA + 0xc))(valA, 0x20, &v_24, 0);
    *v_24 = 0;
    v_24[1] = 0;
    v_24[2] = g_bcadbc * 0.800000012f;
    float v_20 = 1.57079637f;
    int32_t v_c = 0xf;
    v_24[3] = Light_ApplyLightmap_9(dstD, dstD, dstD, dstD, 0f, 0f);
    int32_t* objC4 = &v_24[4];
    v_24 = objC4;

    while (true)
    {
        long double x87_r7_3 = v_20 - 0.104719758f;
        float v_1c_1 = 0f;
        float v_18_1 = 0f;
        v_20 = x87_r7_3;
        long double f0_1 = dstD[0x12];
        x87_r7_3 - f0_1;
        float* srcS1;
        long double x87_r7_6;

        if (*(&((x87_r7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_8 = dstD[0x12] * 0.5f;
            long double x87_r6_3 = v_20;
            srcS1 = &dstD[6];
            x87_r6_3 - x87_r7_8;

            x87_r7_6 = *(&((x87_r6_3 < x87_r7_8 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, x87_r7_8) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 ? 0f
                : v_20 / x87_r7_8 - 1f;
        }
        else
        {
            srcS1 = dstD;
            x87_r7_6 = (v_20 - dstD[0x12]) / (1.57079637f - dstD[0x12]);
        }

        long double x87_r6_4 = v_20;
        long double fp0_1;
        bool c1_1;
        bool c2_3;
        fp0_1 = __fcos(x87_r6_4);
        int32_t i_3 = 0x14;
        float v_14_1 = fp0_1;
        long double fp0_2;
        bool c1_2;
        bool c2_4;
        fp0_2 = __fsin(x87_r6_4);
        float v_8_1 = fp0_2;
        float v_4_1 = 1f - x87_r7_6;
        int32_t i;

        do
        {
            long double fp0_3;
            bool c1_3;
            bool c2_5;
            fp0_3 = __fcos(v_18_1);
            *objC4 = fp0_3 * g_bcadbc * 0.800000012f * v_14_1;
            long double fp0_4;
            bool c1_4;
            bool c2_6;
            fp0_4 = __fsin(v_18_1);
            v_24[1] = fp0_4 * g_bcadbc * 0.800000012f * v_14_1;
            v_24[2] = g_bcadbc * 0.800000012f * v_8_1;
            long double x87_r7_23 = v_1c_1;
            long double f1_1 = 1f;
            x87_r7_23 - f1_1;
            long double x87_r7_25;

            x87_r7_25 = !(*(&((x87_r7_23 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? v_1c_1 - 1f : 1f - v_1c_1;

            v_24[3] = Light_ApplyLightmap_9(srcS1, &srcS1[3], &srcS1[6], &srcS1[9], x87_r7_25, v_4_1);
            v_1c_1 = v_1c_1 + 0.100000001f;
            objC4 = &v_24[4];
            i = i_3;
            i_3 -= 1;
            v_24 = objC4;
            v_18_1 = v_18_1 + 0.314159274f;
        } while (i != 1);
        bool cond_0_1 = v_c != 1;
        v_c -= 1;

        if (!cond_0_1)
            break;

        dstD = a1;
    }

    int32_t i_2 = 0x14;
    int32_t i_1;

    do
    {
        *objC4 = objC4[-0x50];
        int32_t* valA10 = v_24;
        valA10[1] = valA10[-0x4f];
        v_24[2] = g_bcadbc * 0.800000012f * -0.5f;
        int32_t* valA12 = v_24;
        valA12[3] = valA12[-0x4d];
        objC4 = &v_24[4];
        i_1 = i_2;
        i_2 -= 1;
        v_24 = objC4;
    } while (i_1 != 1);
    int32_t* valA13 = a1[0x14];
    return (*(*valA13 + 0x10))(valA13);
}
