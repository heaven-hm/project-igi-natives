// IGI native provenance: Sys_FreeMemory_27 - 0x004BBF40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BBF40-Sys_FreeMemory_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_27.h"
int32_t Sys_FreeMemory_27(int32_t context, int32_t* param_2)

{
    return Sys_CloseFileStream_4(param_2, context * 0x14 + &g_a43ee0, 0x13);
}
