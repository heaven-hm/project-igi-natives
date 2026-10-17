// IGI native provenance: Sys_ResolveSymbol_25 - 0x004BAD40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BAD40-Sys_ResolveSymbol_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_25.h"
int32_t Sys_ResolveSymbol_25()

{
    int32_t* data_val = g_a43e88;

    if (data_val)
    {
        DynObj_RegisterSymbol_2(data_val);
        g_a43e88 = 0;
    }

    int32_t* i_1 = g_a43ea0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        Sys_CheckHeap_25(i_1);
        i_1 = i;
    }

    int32_t result = g_a43e8c;

    if (!result)
        return result;

    int32_t saved_esi_2 = result;
    return Warning_Show("%d script symbol references not deallocated.");
}
