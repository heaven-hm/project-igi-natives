// Original IGI.EXE function: Sys_ReadFileBlock_4 (VA 0x004B1690; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ReadFileBlock_4.h"
void Sys_ReadFileBlock_4(int32_t* a1)

{
    if (a1 == 0x943980)
    {
        g_943988 = 0;
        return;
    }

    int32_t objC = *a1;
    (*(objC * 0x8c + &g_9436bc))(objC, a1);
}
