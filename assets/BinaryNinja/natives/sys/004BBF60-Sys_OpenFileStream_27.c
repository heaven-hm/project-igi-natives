// IGI native provenance: Sys_OpenFileStream_27 - 0x004BBF60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BBF60-Sys_OpenFileStream_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_27.h"
int32_t Sys_OpenFileStream_27(int32_t* context)

{
    return Sys_CloseFileStream_4(context, 0x546db4, 1);
}
