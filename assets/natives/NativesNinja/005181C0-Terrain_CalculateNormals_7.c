#include "005181C0-Terrain_CalculateNormals_7.h"
/* 0x005181c0 Terrain_CalculateNormals_7 full linked: callers=3 callees=0 */
long double sub_5181c0(double* a1, double a2)

{
    long double x87_r6_1 = a2 * a1[3];
    return a2 * a1[2] * a2 * 3.0 + x87_r6_1 + x87_r6_1 + *a1;
}
