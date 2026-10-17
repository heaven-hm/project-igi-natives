// Original IGI.EXE function: DiscardTerrain_LoadParameters (VA 0x0052C000; static CFG gate PASS, CFG score 0.917).
#include "DiscardTerrain_LoadParameters.h"
int32_t DiscardTerrain_LoadParameters(int32_t* context)

{
    memset(&context[0x3c], 0, 0x48);
    context[0x54] = 0xa;
    void* data_val = DynObj_Missing("johan");
    DynObj_LookupHashItem_6(g_a44344, context, data_val);
    return DynObj_LinkDynamicCube_8(context[0x1a], context, &context[0x3c], 4096.0f, 4);
}
