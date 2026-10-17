// IGI native provenance: Sys_PushStack_22 - 0x004B8030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8030-Sys_PushStack_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_22.h"
void* Sys_PushStack_22(int32_t* context, int32_t param_2, int32_t param_3)

{
    return Q_TaskHashTableSet(context, Sys_PopStack_22, param_2, param_3, 0, 3, 1);
}
