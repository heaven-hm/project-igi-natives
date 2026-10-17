// IGI native provenance: Sys_CloseFileStream_21 - 0x004B7C20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7C20-Sys_CloseFileStream_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_21.h"
int32_t Sys_CloseFileStream_21(void* context)

{
    return Sys_ExecuteBytecode_17(*(context + 8)) * *(context + 6);
}
