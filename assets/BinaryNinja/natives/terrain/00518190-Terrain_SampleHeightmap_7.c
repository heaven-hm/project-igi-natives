// Original IGI.EXE function: Terrain_SampleHeightmap_7 (VA 0x00518190; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_7.h"
long double Terrain_SampleHeightmap_7(double* a1, double a2)

{
    long double x87_r7_3 = a2;
    long double x87_r6_1 = x87_r7_3 * x87_r7_3;
    return x87_r6_1 * x87_r7_3 * a1[2] + x87_r6_1 * a1[3] + x87_r7_3 * *a1 + a1[1];
}
