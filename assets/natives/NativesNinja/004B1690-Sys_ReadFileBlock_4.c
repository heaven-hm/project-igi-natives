#include "004B1690-Sys_ReadFileBlock_4.h"
/* 0x004b1690 Sys_ReadFileBlock_4 full linked: callers=19 callees=0 */
void sub_4b1690(int32_t* a1)

{
    if (a1 == 0x943980)
    {
        g_943988 = 0;
        return;
    }

    int32_t ecx = *a1;
    (*(ecx * 0x8c + &g_9436bc))(ecx, a1);
}
