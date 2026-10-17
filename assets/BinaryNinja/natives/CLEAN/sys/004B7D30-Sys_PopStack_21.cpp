// IGI native provenance: Sys_PopStack_21 - 0x004B7D30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7D30-Sys_PopStack_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_21.h"
int32_t Sys_PopStack_21(int32_t* context)

{
    return Sys_DispatchOpcode_3(*context, g_a84a40, context);
}
