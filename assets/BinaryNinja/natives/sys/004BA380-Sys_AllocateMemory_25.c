// Original IGI.EXE function: Sys_AllocateMemory_25 (VA 0x004BA380; static CFG gate PASS, CFG score 1.000).
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
