// IGI native provenance: Sys_OpenFileStream_23 - 0x004B88C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B88C0-Sys_OpenFileStream_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_23.h"
void* Sys_OpenFileStream_23(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    return Q_TaskHashTableSet(context, param_2, param_3, param_4, 1, 1, 0);
}
