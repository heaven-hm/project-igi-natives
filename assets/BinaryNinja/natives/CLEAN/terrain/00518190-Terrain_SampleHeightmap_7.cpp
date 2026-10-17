// IGI native provenance: Terrain_SampleHeightmap_7 - 0x00518190 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518190-Terrain_SampleHeightmap_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SampleHeightmap_7.h"
long double Terrain_SampleHeightmap_7(double* context, double param_2)

{
    long double fpu_val_7_3 = param_2;
    long double fpu_val_6_1 = fpu_val_7_3 * fpu_val_7_3;
    return fpu_val_6_1 * fpu_val_7_3 * context[2] + fpu_val_6_1 * context[3] + fpu_val_7_3 * *context + context[1];
}
