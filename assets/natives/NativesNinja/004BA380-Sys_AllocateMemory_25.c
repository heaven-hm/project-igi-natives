#include "004BA380-Sys_AllocateMemory_25.h"
/* 0x004ba380 Sys_AllocateMemory_25 full linked: callers=1 callees=0 */
int32_t sub_4ba380(int32_t a1)

{
    if (a1 - 3 <= 0x1a)
    {
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + (&jump_table_4ba3a4[1] + 1));

        switch (ecx_1)
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
