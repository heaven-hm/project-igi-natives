// Original IGI.EXE function: Sys_PopStack_12 (VA 0x004B3EF0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_12.h"
float* Sys_PopStack_12(float* a1, float a2, float a3)

{
    long double x87_r7_1 = a3 * 0.5f;
    float* valA = a2;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(x87_r7_1);
    float v_14 = fp0 * *valA;
    float v_10 = fp0 * valA[1];
    float v_c = fp0 * valA[2];
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(x87_r7_1);
    long double x87_r6_4 = v_14 * v_14;
    long double x87_r6_7 = v_10 * v_14;
    a3 = x87_r6_7 + x87_r6_7;
    long double x87_r6_10 = v_c * v_14;
    float v_2c = x87_r6_10 + x87_r6_10;
    long double x87_r6_13 = fp0_1 * v_14;
    float v_20 = x87_r6_13 + x87_r6_13;
    long double x87_r6_16 = v_10 * v_10;
    float v_1c = x87_r6_16 + x87_r6_16;
    long double x87_r6_19 = v_c * v_10;
    float v_24 = x87_r6_19 + x87_r6_19;
    long double x87_r6_22 = fp0_1 * v_10;
    float v_28 = x87_r6_22 + x87_r6_22;
    long double x87_r6_25 = v_c * v_c;
    a2 = x87_r6_25 + x87_r6_25;
    long double x87_r7_3 = fp0_1 * v_c;
    long double x87_r7_4 = x87_r7_3 + x87_r7_3;
    *a1 = 1f - v_1c - a2;
    a1[1] = a3 - x87_r7_4;
    a1[2] = v_28 + v_2c;
    a1[3] = x87_r7_4 + a3;
    long double x87_r7_7 = 1f - (x87_r6_4 + x87_r6_4);
    a1[4] = x87_r7_7 - a2;
    a1[5] = v_24 - v_20;
    a1[9] = 0;
    a1[6] = v_2c - v_28;
    a1[7] = v_24 + v_20;
    a1[8] = x87_r7_7 - v_1c;
    return a1;
}
