// IGI native provenance: Sys_DispatchOpcode_16 - 0x004B6420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6420-Sys_DispatchOpcode_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_16.h"
int32_t* Sys_DispatchOpcode_16(char* context, int32_t param_2, int32_t* param_3)

{
    return Sys_PopStack_15(context, 0, param_3, param_2, 3, nullptr);
}
