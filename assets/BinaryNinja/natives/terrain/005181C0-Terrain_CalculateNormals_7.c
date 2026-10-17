// Original IGI.EXE function: Terrain_CalculateNormals_7 (VA 0x005181C0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_CalculateNormals_7.h"
long double Terrain_CalculateNormals_7(double* a1, double a2)

{
    long double x87_r6_1 = a2 * a1[3];
    return a2 * a1[2] * a2 * 3.0 + x87_r6_1 + x87_r6_1 + *a1;
}
