// IGI native provenance: DynObj_RegisterSymbol_2 - 0x004C03C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C03C0-DynObj_RegisterSymbol_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RegisterSymbol_2.h"
int32_t DynObj_RegisterSymbol_2(int32_t* context)

{
    DynObj_FindSymbol_2(context);
    Sys_ExecuteBytecode_2(*context);
    *context = 0;
    return Sys_ExecuteBytecode_2(context);
}
