// IGI native provenance: Sys_OpenFileStream_30 - 0x004BE850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BE850-Sys_OpenFileStream_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_30.h"
int32_t Sys_OpenFileStream_30(void* context)

{
    Sys_PushStack_29(context, 0xffffffff);
    int32_t result = *(context + 0x14) + 1;
    *(context + 0x14) = result;
    return result;
}
