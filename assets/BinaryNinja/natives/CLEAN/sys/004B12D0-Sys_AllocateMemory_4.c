// IGI native provenance: Sys_AllocateMemory_4 - 0x004B12D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B12D0-Sys_AllocateMemory_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_4.h"
int32_t* Sys_AllocateMemory_4()

{
    int32_t* i;

    for (i = &g_9423c0; i < 0x943640; i = &i[0x25])
        *i = 0;

    return i;
}
