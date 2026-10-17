// IGI native provenance: Sys_ExecuteBytecode_19 - 0x004B73F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B73F0-Sys_ExecuteBytecode_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_19.h"
int32_t* Sys_ExecuteBytecode_19(int32_t context)

{
    int32_t* result = Mem_Alloc((context << 2) + 0x14, 4);
    result[3] = context;
    result[1] = 0xffffffff;
    result[2] = 0;
    *result = 0xabcdabcd;
    result[4] = 0xdcbadcba;
    return result;
}
