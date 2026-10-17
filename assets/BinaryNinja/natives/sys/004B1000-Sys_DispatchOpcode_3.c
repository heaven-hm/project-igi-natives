// IGI native provenance: Sys_DispatchOpcode_3 - 0x004B1000 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B1000-Sys_DispatchOpcode_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_3.h"
int32_t Sys_DispatchOpcode_3(int32_t context, int32_t param_2, int32_t param_3)

{
    return (*(((param_2 + context * 0x82) << 2) + &g_a950a4))(param_3);
}
