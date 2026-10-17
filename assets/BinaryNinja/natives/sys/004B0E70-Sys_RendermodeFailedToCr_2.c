// IGI native provenance: Sys_RendermodeFailedToCr_2 - 0x004B0E70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0E70-Sys_RendermodeFailedToCr_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_RendermodeFailedToCr_2.h"
int32_t Sys_RendermodeFailedToCr_2(int32_t context)

{
    int32_t result = 0;

    for (char* i = &g_a94a84; i < &g_a94e84; )
    {
        if (!*i)
        {
            *((result << 3) + &g_a94a80) = context;
            *((result << 3) + &g_a94a84) = 1;
            return result;
        }

        i = &i[8];
        result += 1;
    }

    int32_t item_4 = context;
    Error_Show("RenderMode: Failed to create new method '%s'");

    while (true)
        /* nop */
}
