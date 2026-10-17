// IGI native provenance: Terrain_CalculateNormals_7 - 0x005181C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005181C0-Terrain_CalculateNormals_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_CalculateNormals_7.h"
long double Terrain_CalculateNormals_7(double* context, double param_2)

{
    long double fpu_val_6_1 = param_2 * context[3];
    return param_2 * context[2] * param_2 * 3.0 + fpu_val_6_1 + fpu_val_6_1 + *context;
}
