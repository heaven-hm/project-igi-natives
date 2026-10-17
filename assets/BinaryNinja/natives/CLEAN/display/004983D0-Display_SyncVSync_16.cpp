// IGI native provenance: Display_SyncVSync_16 - 0x004983D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004983D0-Display_SyncVSync_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_16.h"
int32_t Display_SyncVSync_16(void* context)

{
    if (*(context + 8) == g_bcaaa8)
    {
        g_bcaaa8 = 0;
        g_bcaaa4 = 0;
        g_bcaaa0 = 0;
    }

    int32_t result = Sys_ExecuteBytecode_2(*(context + 8));
    *(context + 8) = 0;
    return result;
}
