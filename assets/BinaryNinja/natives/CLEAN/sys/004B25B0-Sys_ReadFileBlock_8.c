// IGI native provenance: Sys_ReadFileBlock_8 - 0x004B25B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B25B0-Sys_ReadFileBlock_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_8.h"
int32_t Sys_ReadFileBlock_8(int32_t context, int32_t param_2)

{
    int32_t item_4 = param_2;
    int32_t result = *((g_546fa0 << 2) + &g_a94e84);
    int32_t item_8 = context;

    if (!result)
        return result;

    return result(&item_8);
}
