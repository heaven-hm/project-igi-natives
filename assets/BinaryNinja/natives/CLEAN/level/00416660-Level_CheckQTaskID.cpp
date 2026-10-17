// IGI native provenance: Level_CheckQTaskID - 0x00416660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416660-Level_CheckQTaskID.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
