// IGI native provenance: Sys_CloseFileStream_5 - 0x004B1BC0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B1BC0-Sys_CloseFileStream_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_5.h"
int32_t Sys_CloseFileStream_5(int32_t context)

{
    return (*(context * 0x8c + &g_9436b4))(context);
}
