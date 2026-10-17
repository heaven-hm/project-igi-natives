// IGI native provenance: Sys_OpenFileStream_2 - 0x004B0B70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0B70-Sys_OpenFileStream_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_2.h"
int32_t Sys_OpenFileStream_2(int32_t* context)

{
    int32_t result = Sys_ExecuteBytecode_2(*context);
    *context = 0;
    return result;
}
