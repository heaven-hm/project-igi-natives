// IGI native provenance: Sys_ResolveSymbol_16 - 0x004B64B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B64B0-Sys_ResolveSymbol_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_16.h"
int32_t Sys_ResolveSymbol_16(int32_t* context)

{
    int32_t result = Is_ResourceLoaded(context, &context);

    if (result)
        result = Sys_FreeMemory_16(context);

    return result;
}
