#include "00518130-Terrain_ConnectGraphNode_7.h"
/* 0x00518130 Terrain_ConnectGraphNode_7 full linked: callers=4 callees=0 */
double* sub_518130(double* a1, int32_t a2, int32_t a3, double a4, double a5, double a6)

{
    *a1 = a5;
    long double x87_r7_1 = a2;
    long double x87_r6 = a4;
    a1[1] = a2;
    *(a1 + 0xc) = a3;
    a1[2] = x87_r7_1 + x87_r7_1 - (x87_r6 + x87_r6) + a5 + a6;
    long double x87_r6_4 = a5;
    a1[3] = a4 * 3.0 - a2 * 3.0 - (x87_r6_4 + x87_r6_4) - a6;
    return a1;
}
