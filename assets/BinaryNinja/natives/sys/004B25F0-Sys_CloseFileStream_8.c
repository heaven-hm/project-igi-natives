// IGI native provenance: Sys_CloseFileStream_8 - 0x004B25F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B25F0-Sys_CloseFileStream_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_8.h"
int32_t Sys_CloseFileStream_8()

{
    int32_t result = *((g_546fa4 << 2) + &g_a94e84);

    if (result)
        result = result(0);

    return result;
}
