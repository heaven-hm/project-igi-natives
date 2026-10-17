// IGI native provenance: Sys_FreeMemory_3 - 0x004B0F30 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B0F30-Sys_FreeMemory_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_3.h"
int32_t Sys_FreeMemory_3(int32_t context)

{
    if (context != g_a94a64)
    {
        g_a94a64 = context;
        memcpy(0xa94e80, context * 0x208 + &g_a950a0, 0x208);
    }

    return context;
}
