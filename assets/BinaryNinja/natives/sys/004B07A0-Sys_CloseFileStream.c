// IGI native provenance: Sys_CloseFileStream - 0x004B07A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B07A0-Sys_CloseFileStream.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream.h"
int32_t Sys_CloseFileStream(int32_t context, int32_t param_2, int32_t param_3)

{
    if (param_2 < 0)
        return 0xffffffff;

    if (!param_3)
        return *(context + param_2 * 0x14 + 0x10);

    return *(context + param_2 * 0x14 + 0xc);
}
