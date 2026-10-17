// IGI native provenance: Script_UnableToAllocatePara_2 - 0x004F1B20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1B20-Script_UnableToAllocatePara_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_UnableToAllocatePara_2.h"
int32_t Script_UnableToAllocatePara_2()

{
    for (int32_t i = 0; i < 0x10; i += 1)
    {
        if (!*(i + &g_a758c8))
        {
            *(i + &g_a758c8) = 1;
            return i;
        }
    }

    Error_Show("Unable to allocate parameter event");

    while (true)
        /* nop */
}
