#include "gi_platform.h"
#include "004BA380-Sys_AllocateMemory_25.h"
int32_t Sys_AllocateMemory_25(int32_t a1)

{
    if (a1 - 3 <= 0x1a)
    {
        int32_t objC1 = 0;
        objC1 = (*(int32_t*)(uintptr_t)(a1 + (&jump_table_4ba3a4[1] + 1)));

        switch (objC1)
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
