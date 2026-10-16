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
