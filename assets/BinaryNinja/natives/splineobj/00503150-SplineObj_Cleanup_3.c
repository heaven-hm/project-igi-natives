// IGI native provenance: SplineObj_Cleanup_3 - 0x00503150 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00503150-SplineObj_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplineObj_Cleanup_3.h"
void* SplineObj_Cleanup_3(void* context, int32_t param_2)

{
    void* result = *(context + 0x14);

    if (!*(result + 0x4d))
        return result;

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a9a6e0))(context, param_2);
}
