// Original IGI.EXE function: Level_CheckQTaskID (VA 0x00416660; static CFG gate PASS, CFG score 1.000).
#include "Level_CheckQTaskID.h"
int32_t Level_CheckQTaskID()

{
    int32_t result = g_57bab4;
    int32_t srcS = 0;

    if (result > 0)
    {
        int32_t* dstD1 = &g_57b600;

        do
        {
            Struct_Clear36(dstD1);
            result = g_57bab4;
            srcS += 1;
            dstD1 = &dstD1[0xf];
        } while (srcS < result);
    }

    return result;
}
