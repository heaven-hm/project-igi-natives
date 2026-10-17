// IGI native provenance: Sys_ExecuteBytecode_18 - 0x004B6F90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6F90-Sys_ExecuteBytecode_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_18.h"
int32_t Sys_ExecuteBytecode_18(int32_t context, float* param_2)

{
    int32_t* source_val = context;
    *param_2 = source_val[1];
    param_2[1] = source_val[2];
    param_2[2] = Sys_CheckHeap_21(source_val);
    int32_t result = Sys_AllocateMemory_22(source_val);
    param_2[3] = result;
    return result;
}
