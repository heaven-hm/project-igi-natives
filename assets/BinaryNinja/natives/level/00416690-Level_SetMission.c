// Original IGI.EXE function: Level_SetMission (VA 0x00416690; static CFG gate PASS, CFG score 1.000).
#include "Level_SetMission.h"
int32_t Level_SetMission()

{
    int32_t result = g_57bab8;
    int32_t srcS = 0;

    if (result > 0)
    {
        int32_t* dstD1 = &g_57b1c0;

        do
        {
            Sys_ReadFileBlock_17(dstD1);
            result = g_57bab8;
            srcS += 1;
            dstD1 = &dstD1[0xc];
        } while (srcS < result);
    }

    return result;
}
