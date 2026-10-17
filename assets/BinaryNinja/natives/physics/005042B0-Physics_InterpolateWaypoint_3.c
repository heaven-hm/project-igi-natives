// Original IGI.EXE function: Physics_InterpolateWaypoint_3 (VA 0x005042B0; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_3.h"
double* Physics_InterpolateWaypoint_3(void* a1, double* a2)

{
    double* result = a2;
    long double x87_r7_1 = *result - *(a1 + 0x50);
    long double x87_r6_1 = result[1] - *(a1 + 0x58);
    long double x87_r5_1 = result[2] - *(a1 + 0x60);
    float v_c = x87_r5_1 * *(a1 + 0x80) + x87_r6_1 * *(a1 + 0x74) + x87_r7_1 * *(a1 + 0x68);
    float v_8 = x87_r5_1 * *(a1 + 0x84) + x87_r6_1 * *(a1 + 0x78) + x87_r7_1 * *(a1 + 0x6c);
    float v_4 = x87_r5_1 * *(a1 + 0x88) + x87_r6_1 * *(a1 + 0x7c) + x87_r7_1 * *(a1 + 0x70);
    long double x87_r7_4 = v_c;
    long double f1 = *(a1 + 0x90);
    x87_r7_4 - f1;
    result = (x87_r7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1) ? 1 : 0) << 0xa
        | (x87_r7_4 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_5 = v_8;
    long double f2 = *(a1 + 0x94);
    x87_r7_5 - f2;
    result = (x87_r7_5 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f2) ? 1 : 0) << 0xa
        | (x87_r7_5 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_6 = v_4;
    long double f3 = *(a1 + 0x98);
    x87_r7_6 - f3;
    result = (x87_r7_6 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f3) ? 1 : 0) << 0xa
        | (x87_r7_6 == f3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_8 = -(*(a1 + 0x90));
    long double f4 = v_c;
    x87_r7_8 - f4;
    result = (x87_r7_8 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f4) ? 1 : 0) << 0xa
        | (x87_r7_8 == f4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_10 = -(*(a1 + 0x94));
    long double f5 = v_8;
    x87_r7_10 - f5;
    result = (x87_r7_10 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f5) ? 1 : 0) << 0xa
        | (x87_r7_10 == f5 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_12 = -(*(a1 + 0x98));
    long double f6 = v_4;
    x87_r7_12 - f6;
    result = (x87_r7_12 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f6) ? 1 : 0) << 0xa
        | (x87_r7_12 == f6 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
    {
        result = 1;
        return result;
    }

    result = 0;
    return result;
}
