// IGI native provenance: Sys_ResolveSymbol_6 - 0x004B1DC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1DC0-Sys_ResolveSymbol_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_6.h"
int32_t Sys_ResolveSymbol_6(int32_t context, int32_t param_2)

{
    int32_t result = context * 0x23;
    *((result << 2) + &g_9436f0) = param_2;
    return result;
}
