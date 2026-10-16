#include "gi_platform.h"
#include "004B1690-Sys_ReadFileBlock_4.h"
void Sys_ReadFileBlock_4(int32_t* a1)

{
    if (a1 == 0x943980)
    {
        g_943988 = 0;
        return;
    }

    int32_t objC = *a1;
    ((int(*)())(uintptr_t)(*(objC * 0x8c + &g_9436bc)))(objC, a1);
}
