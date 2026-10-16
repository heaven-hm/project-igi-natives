#include "004BA340-Sys_CheckHeap_24.h"
/* 0x004ba340 Sys_CheckHeap_24 full linked: callers=2 callees=0 */
int32_t sub_4ba340(int32_t a1)

{
    if (a1 - 3 <= 0x11)
    {
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + (&jump_table_4ba364[1] + 1));

        switch (ecx_1)
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
