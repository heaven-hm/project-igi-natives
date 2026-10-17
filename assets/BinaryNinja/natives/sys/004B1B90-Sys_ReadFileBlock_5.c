// IGI native provenance: Sys_ReadFileBlock_5 - 0x004B1B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1B90-Sys_ReadFileBlock_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_5.h"
int32_t Sys_ReadFileBlock_5(int32_t context, int32_t param_2)

{
    int32_t result = param_2(context);

    if (result)
        *(result * 0x8c + &g_943708) = 1;

    return result;
}
