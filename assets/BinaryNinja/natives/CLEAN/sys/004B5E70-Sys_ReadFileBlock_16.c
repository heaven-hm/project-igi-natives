// IGI native provenance: Sys_ReadFileBlock_16 - 0x004B5E70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5E70-Sys_ReadFileBlock_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_16.h"
int32_t Sys_ReadFileBlock_16()

{
    g_943e38 = &g_943e3c;
    g_943e40 = &g_943e38;
    g_943e3c = 0;
    int32_t result = Sys_FreeMemory_2(&g_943e20, 0x244, 0x2710, 0);
    g_943b90 = 0;
    return result;
}
