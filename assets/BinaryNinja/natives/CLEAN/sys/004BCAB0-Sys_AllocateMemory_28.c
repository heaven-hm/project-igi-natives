// IGI native provenance: Sys_AllocateMemory_28 - 0x004BCAB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BCAB0-Sys_AllocateMemory_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_28.h"
int32_t Sys_AllocateMemory_28(int32_t context, int32_t param_2, int32_t param_3, float param_4, int32_t param_5)

{
    int32_t result = param_3;
    result = 0;
    Sys_UnknownDataType_2(&result, 4, param_4, param_5, 1);
    return result;
}
