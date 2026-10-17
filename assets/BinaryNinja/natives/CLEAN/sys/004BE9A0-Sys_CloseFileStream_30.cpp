// IGI native provenance: Sys_CloseFileStream_30 - 0x004BE9A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BE9A0-Sys_CloseFileStream_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_30.h"
int32_t Sys_CloseFileStream_30(int32_t* context)

{
    Sys_PopStack_29(context, *(*context + context[5] + 1));
    int32_t result = context[5] + 5;
    context[5] = result;
    return result;
}
