// IGI native provenance: Sys_RendermodeFailedToCr - 0x004B0E00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0E00-Sys_RendermodeFailedToCr.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_RendermodeFailedToCr.h"
int32_t Sys_RendermodeFailedToCr(int32_t context)

{
    int32_t result = 0;

    for (char* i = &g_a952a4; i < 0xa962e4; )
    {
        if (!*i)
        {
            int32_t entity_3 = result * 0x208;
            *(entity_3 + &g_a950a0) = context;
            *(entity_3 + &g_a952a4) = 1;
            return result;
        }

        i = &i[0x208];
        result += 1;
    }

    int32_t item_4 = context;
    Error_Show("RenderMode: Failed to create new rendermode '%s'");

    while (true)
        /* nop */
}
