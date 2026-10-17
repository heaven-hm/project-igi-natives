// IGI native provenance: Sys_CheckHeap_24 - 0x004BA340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BA340-Sys_CheckHeap_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_24.h"
int32_t Sys_CheckHeap_24(int32_t context)

{
    if (context - 3 <= 0x11)
    {
        int32_t entity_1 = 0;
        entity_1 = *(context + (&jump_table_4ba364[1] + 1));

        switch (entity_1)
        {
            case 0:
            {
                return 1;
                break;
            }
        }
    }

    return 0;
}
