// IGI native provenance: Sys_ResolveSymbol_20 - 0x004B7710 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7710-Sys_ResolveSymbol_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_20.h"
void* Sys_ResolveSymbol_20(void* context, int32_t param_2, int32_t param_3)

{
    void* result = context;
    result = *(*(result + 4) * param_3 + result + param_2 + 0x10);
    return result;
}
