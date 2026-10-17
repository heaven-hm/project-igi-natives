// IGI native provenance: Sys_CloseFileStream_17 - 0x004B6CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6CE0-Sys_CloseFileStream_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_17.h"
int32_t Sys_CloseFileStream_17(void* context)

{
    int32_t data_val = 0;
    data_val = *(context + 0x14);
    return *(*(context + 8) + data_val * 0x24 + 0xc);
}
