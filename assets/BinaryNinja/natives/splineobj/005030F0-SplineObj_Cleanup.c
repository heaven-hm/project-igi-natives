// IGI native provenance: SplineObj_Cleanup - 0x005030F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005030F0-SplineObj_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplineObj_Cleanup.h"
void* SplineObj_Cleanup(void* context, int32_t param_2)

{
    void* result = *(context + 0x14);

    if (!*(result + 0x4d))
        return result;

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a9a0e0))(context, param_2);
}
