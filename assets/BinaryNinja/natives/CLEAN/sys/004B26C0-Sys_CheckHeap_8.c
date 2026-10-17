// IGI native provenance: Sys_CheckHeap_8 - 0x004B26C0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B26C0-Sys_CheckHeap_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_8.h"
int32_t Sys_CheckHeap_8()

{
    int32_t result = Sys_FreeMemory_9();

    if (*((result << 2) + &g_a94e84))
        result = (*((Sys_FreeMemory_9() << 2) + &g_a94e84))(0);

    return result;
}
