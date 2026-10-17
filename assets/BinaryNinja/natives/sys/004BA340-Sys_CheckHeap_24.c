// Original IGI.EXE function: Sys_CheckHeap_24 (VA 0x004BA340; static CFG gate PASS, CFG score 1.000).
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
