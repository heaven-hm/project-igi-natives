#include "Terrain_CalculateNormals_7.h"
long double Terrain_CalculateNormals_7(double* a1, double a2)

{
    long double x87_r6_1 = a2 * a1[3];
    return a2 * a1[2] * a2 * 3.0 + x87_r6_1 + x87_r6_1 + *a1;
}
