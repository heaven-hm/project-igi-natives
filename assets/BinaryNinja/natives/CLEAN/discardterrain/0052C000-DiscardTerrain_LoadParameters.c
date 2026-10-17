// IGI native provenance: DiscardTerrain_LoadParameters - 0x0052C000 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052C000-DiscardTerrain_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DiscardTerrain_LoadParameters.h"
int32_t DiscardTerrain_LoadParameters(int32_t* context)

{
    memset(&context[0x3c], 0, 0x48);
    context[0x54] = 0xa;
    void* data_val = DynObj_Missing("johan");
    DynObj_LookupHashItem_6(g_a44344, context, data_val);
    return DynObj_LinkDynamicCube_8(context[0x1a], context, &context[0x3c], 4096.0f, 4);
}
