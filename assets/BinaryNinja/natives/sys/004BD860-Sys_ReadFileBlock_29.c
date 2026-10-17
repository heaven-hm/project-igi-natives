// IGI native provenance: Sys_ReadFileBlock_29 - 0x004BD860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BD860-Sys_ReadFileBlock_29.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_29.h"
int32_t Sys_ReadFileBlock_29(void* context)

{
    Sys_UnknownDataType_3(context, nullptr, nullptr, nullptr);
    int32_t result = *(context + 0x14) + 1;
    *(context + 0x14) = result;
    return result;
}
