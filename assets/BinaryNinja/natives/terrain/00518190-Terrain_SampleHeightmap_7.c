// Original IGI.EXE function: Terrain_SampleHeightmap_7 (VA 0x00518190; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_7.h"
long double Terrain_SampleHeightmap_7(double* context, double param_2)

{
    long double fpu_val_7_3 = param_2;
    long double fpu_val_6_1 = fpu_val_7_3 * fpu_val_7_3;
    return fpu_val_6_1 * fpu_val_7_3 * context[2] + fpu_val_6_1 * context[3] + fpu_val_7_3 * *context + context[1];
}
