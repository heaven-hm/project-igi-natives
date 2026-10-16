#include "00518190-Terrain_SampleHeightmap_7.h"
/* 0x00518190 Terrain_SampleHeightmap_7 full linked: callers=4 callees=0 */
long double sub_518190(double* a1, double a2)

{
    long double x87_r7_3 = a2;
    long double x87_r6_1 = x87_r7_3 * x87_r7_3;
    return x87_r6_1 * x87_r7_3 * a1[2] + x87_r6_1 * a1[3] + x87_r7_3 * *a1 + a1[1];
}
