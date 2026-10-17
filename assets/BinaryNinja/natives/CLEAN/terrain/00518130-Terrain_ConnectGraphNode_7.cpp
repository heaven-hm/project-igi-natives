// IGI native provenance: Terrain_ConnectGraphNode_7 - 0x00518130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518130-Terrain_ConnectGraphNode_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_ConnectGraphNode_7.h"
double* Terrain_ConnectGraphNode_7(double* context, int32_t param_2, int32_t param_3, double param_4, double param_5, double param_6)

{
    *context = param_5;
    long double fpu_val_7_1 = param_2;
    long double fpu6 = param_4;
    context[1] = param_2;
    *(context + 0xc) = param_3;
    context[2] = fpu_val_7_1 + fpu_val_7_1 - (fpu6 + fpu6) + param_5 + param_6;
    long double fpu_val_6_4 = param_5;
    context[3] = param_4 * 3.0 - param_2 * 3.0 - (fpu_val_6_4 + fpu_val_6_4) - param_6;
    return context;
}
