// IGI native provenance: Sys_DispatchOpcode_18 - 0x004B7000 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7000-Sys_DispatchOpcode_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_18.h"
int32_t* Sys_DispatchOpcode_18(int32_t* context)

{
    int32_t* result = Mem_Alloc(0x18, 4);

    if (Sys_IlfFileCorruptS(result, context))
        return result;

    Sys_ExecuteBytecode_2(result);
    return 0;
}
