// IGI native provenance: Physics_CalculateSplineLength_15 - 0x0050FE40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050FE40-Physics_CalculateSplineLength_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CalculateSplineLength_15.h"
int32_t Physics_CalculateSplineLength_15(int32_t* context)

{
    g_a7da20 = *context;
    g_a7da24 = context[1];
    int32_t result = context[2];
    g_a7da28 = result;
    return result;
}
