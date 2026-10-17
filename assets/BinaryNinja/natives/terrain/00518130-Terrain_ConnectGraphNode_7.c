// Original IGI.EXE function: Terrain_ConnectGraphNode_7 (VA 0x00518130; static CFG gate PASS, CFG score 1.000).
#include "Terrain_ConnectGraphNode_7.h"
double* Terrain_ConnectGraphNode_7(double* a1, int32_t a2, int32_t a3, double a4, double a5, double a6)

{
    *a1 = a5;
    long double x87_r7_1 = a2;
    long double fpu6 = a4;
    a1[1] = a2;
    *(a1 + 0xc) = a3;
    a1[2] = x87_r7_1 + x87_r7_1 - (fpu6 + fpu6) + a5 + a6;
    long double x87_r6_4 = a5;
    a1[3] = a4 * 3.0 - a2 * 3.0 - (x87_r6_4 + x87_r6_4) - a6;
    return a1;
}
