// IGI native provenance: Sys_CheckHeap_23 - 0x004B8AD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8AD0-Sys_CheckHeap_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_23.h"
int32_t Sys_CheckHeap_23(void* context, int32_t param_2)

{
    if (!*(context + 4))
        return *(*(*(context + 8) + (param_2 << 2)) + 0x24);

    int32_t item_4 = param_2;
    void* item_8 = context;
    return 0;
}
