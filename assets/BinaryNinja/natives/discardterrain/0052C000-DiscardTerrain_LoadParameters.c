#include "DiscardTerrain_LoadParameters.h"
int32_t DiscardTerrain_LoadParameters(int32_t* a1)

{
    __builtin_memset(&a1[0x3c], 0, 0x48);
    a1[0x54] = 0xa;
    void* valA = DynObj_Missing("johan");
    DynObj_LookupHashItem_6(g_a44344, a1, valA);
    return DynObj_LinkDynamicCube_8(a1[0x1a], a1, &a1[0x3c], 4096f, 4);
}
