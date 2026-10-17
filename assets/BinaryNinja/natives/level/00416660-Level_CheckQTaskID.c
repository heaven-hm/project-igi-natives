// Original IGI.EXE function: Level_CheckQTaskID (VA 0x00416660; static CFG gate PASS, CFG score 1.000).
#include "Level_CheckQTaskID.h"
int32_t Level_CheckQTaskID()

{
    int32_t result = g_57bab4;
    int32_t source_val = 0;

    if (result > 0)
    {
        int32_t* dest_1 = &g_57b600;

        do
        {
            Struct_Clear36(dest_1);
            result = g_57bab4;
            source_val += 1;
            dest_1 = &dest_1[0xf];
        } while (source_val < result);
    }

    return result;
}
