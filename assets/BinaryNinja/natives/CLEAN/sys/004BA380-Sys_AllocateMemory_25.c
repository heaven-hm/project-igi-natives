// IGI native provenance: Sys_AllocateMemory_25 - 0x004BA380 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BA380-Sys_AllocateMemory_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_25.h"
int32_t Sys_AllocateMemory_25(int32_t context)

{
    if (context - 3 <= 0x1a)
    {
        int32_t entity_1 = 0;
        entity_1 = *(context + (&jump_table_4ba3a4[1] + 1));

        switch (entity_1)
        {
            case 0:
            {
                return 0;
                break;
            }
        }
    }

    return 1;
}
