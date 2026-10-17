// IGI native provenance: DynObj_RemoveSymbol_2 - 0x004C0750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0750-DynObj_RemoveSymbol_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RemoveSymbol_2.h"
void* DynObj_RemoveSymbol_2(void* context)

{
    void* result = context;
    int32_t* i_1 = *(result + 8);

    for (int32_t* i = *i_1; i; i = *i)
    {
        Camera_ApplyHandiCam_33(i_1);
        result = Sys_ExecuteBytecode_2(i_1);
        i_1 = i;
    }

    return result;
}
