// IGI native provenance: Sys_CloseFileStream_16 - 0x004B5EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5EC0-Sys_CloseFileStream_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_16.h"
int32_t Sys_CloseFileStream_16()

{
    Sys_ExecuteBytecode_16();
    return Sys_OpenFileStream_2(&g_943e20);
}
