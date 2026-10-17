// IGI native provenance: Sys_CloseFileStream_3 - 0x004B0F90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0F90-Sys_CloseFileStream_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_3.h"
int32_t Sys_CloseFileStream_3()

{
    int32_t result = *((g_942304 << 2) + &g_942308);

    if (result == 0xffffffff)
    {
        g_a94a64 = 0xffffffff;
        return 0xffffffff;
    }

    g_942304 += 1;
    Sys_FreeMemory_3(result);
    return result;
}
