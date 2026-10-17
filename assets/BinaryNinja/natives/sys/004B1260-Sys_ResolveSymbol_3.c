// IGI native provenance: Sys_ResolveSymbol_3 - 0x004B1260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1260-Sys_ResolveSymbol_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_3.h"
int32_t Sys_ResolveSymbol_3()

{
    int32_t* i_1 = g_943970;

    for (int32_t* i = *i_1; i; i = *i)
    {
        Sys_CheckHeap_25(i_1);
        i_1 = i;
    }

    return Physics_Local_2();
}
