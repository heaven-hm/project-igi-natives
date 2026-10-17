// Original IGI.EXE function: Sys_DispatchOpcode_13 (VA 0x004B45A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_13.h"
float* Sys_DispatchOpcode_13(float* a1, float a2, float a3, float a4)

{
    long double x87_r7_1 = a2 * 0.5f;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(x87_r7_1);
    a1[4] = 0;
    float v_8 = fp0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(x87_r7_1);
    long double x87_r6_3 = a3 * 0.5f;
    long double fp0_2;
    bool c1_2;
    bool c2_2;
    fp0_2 = __fsin(x87_r6_3);
    float v_c = fp0_2;
    long double fp0_3;
    bool c1_3;
    bool c2_3;
    fp0_3 = __fcos(x87_r6_3);
    long double x87_r5_3 = a4 * 0.5f;
    long double fp0_4;
    bool c1_4;
    bool c2_4;
    fp0_4 = __fsin(x87_r5_3);
    a3 = fp0_4;
    long double fp0_5;
    bool c1_5;
    bool c2_5;
    fp0_5 = __fcos(x87_r5_3);
    a2 = fp0_5;
    float v_4 = fp0_3 * v_8;
    a4 = v_c * fp0_1;
    long double x87_r7_3 = fp0_1 * fp0_3;
    long double x87_r6_6 = v_c * v_8;
    *a1 = v_4 * a2 - a4 * a3;
    a1[1] = a4 * a2 + v_4 * a3;
    a1[2] = x87_r7_3 * a3 - x87_r6_6 * a2;
    a1[3] = x87_r7_3 * a2 + x87_r6_6 * a3;
    return a1;
}
