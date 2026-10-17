// IGI native provenance: DynObj_FindSymbol_15 - 0x004CFB30 - CFG score 95.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CFB30-DynObj_FindSymbol_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_FindSymbol_15.h"
int32_t DynObj_FindSymbol_15(int32_t* context)

{
    if (context[4])
    {
        Sys_ExecuteBytecode_2(context[5]);
        context[5] = 0;
    }

    int32_t temp_val = context[2];
    int32_t item_8 = context[3];
    int32_t item_4 = temp_val;

    if (*((DynObj_LookupHashItem_13() << 2) + &g_a94e84))
        (*((DynObj_LookupHashItem_13() << 2) + &g_a94e84))(&item_8);

    Resource_Flush(context[2]);
    Camera_ApplyHandiCam_33(context);
    return Sys_ExecuteBytecode_2(context);
}
