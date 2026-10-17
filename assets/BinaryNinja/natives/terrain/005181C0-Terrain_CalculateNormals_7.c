// Original IGI.EXE function: Terrain_CalculateNormals_7 (VA 0x005181C0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_CalculateNormals_7.h"
long double Terrain_CalculateNormals_7(double* context, double param_2)

{
    long double fpu_val_6_1 = param_2 * context[3];
    return param_2 * context[2] * param_2 * 3.0 + fpu_val_6_1 + fpu_val_6_1 + *context;
}
