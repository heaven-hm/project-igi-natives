#include "Sys_CheckHeap_24.h"
int32_t Sys_CheckHeap_24(int32_t a1)

{
    if (a1 - 3 <= 0x11)
    {
        int32_t objC1 = 0;
        objC1 = *(a1 + (&jump_table_4ba364[1] + 1));

        switch (objC1)
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
