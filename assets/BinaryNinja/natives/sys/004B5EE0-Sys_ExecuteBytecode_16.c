// IGI native provenance: Sys_ExecuteBytecode_16 - 0x004B5EE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5EE0-Sys_ExecuteBytecode_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_16.h"
int32_t* Sys_ExecuteBytecode_16()

{
    int32_t* result;

    while (true)
    {
        result = g_943e38;

        if (!*result)
            break;

        Sys_FreeMemory_16(result);
    }

    return result;
}
