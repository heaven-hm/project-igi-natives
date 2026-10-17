// Original IGI.EXE function: Sys_DispatchOpcode_15 (VA 0x004B5860; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_15.h"
float Sys_DispatchOpcode_15(float* a1, float a2, float a3, float a4, int32_t a5, float a6, float a7, float a8, int32_t a9, float a10, float a11, float a12, int32_t a13, int32_t a14) __location("valA")

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fcos(a10);
    float result = a2;
    float v_8 = fp0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fsin(a10);
    float v_c = fp0_1;

    if (result - 1 > 0)
    {
        float srcS1 = a8;
        float* valA = &a1[2];
        float dstD1 = a7;
        a1 = valA;
        float result_1 = result - 1;

        while (true)
        {
            long double x87_r7_5 = a11 * valA[-2];
            long double x87_r6_2 = a12 * valA[-1];
            a2 = a11 * *valA;
            long double x87_r5_4 = a12 * valA[1];
            a8 = x87_r5_4;
            long double x87_r4_1 = a10;
            long double f1_1 = 0.0;
            x87_r4_1 - f1_1;

            if (!(*(&((x87_r4_1 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            {
                a7 = x87_r7_5 * v_c + x87_r6_2 * v_8;
                x87_r7_5 = -((x87_r6_2 * v_c - x87_r7_5 * v_8));
                x87_r6_2 = a7;
                x87_r5_4 = a2 * v_c + a8 * v_8;
                a2 = -((a8 * v_c - a2 * v_8));
            }

            int32_t v_48_1 = a13;
            int32_t v_4c_1 = a13;
            int32_t v_54_1 = a13;
            int32_t v_58_1 = a13;
            Sys_ExecuteBytecode_15(x87_r7_5 + a3, x87_r6_2 + a4, a5, a2 + a3, x87_r5_4 + a4, a5,
                a6, dstD1, srcS1, a6, dstD1, srcS1, a9, a13, a14);
            result = result_1 - 1;
            bool cond_1_1 = result_1 != 1;
            a1 = &a1[2];
            result_1 = result;

            if (!cond_1_1)
                break;

            valA = a1;
        }
    }

    return result;
}
