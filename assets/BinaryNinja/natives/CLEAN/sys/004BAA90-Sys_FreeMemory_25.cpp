// IGI native provenance: Sys_FreeMemory_25 - 0x004BAA90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BAA90-Sys_FreeMemory_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_25.h"
int32_t* Sys_FreeMemory_25(int32_t context)

{
    int32_t* i_1 = g_a43e90;
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[2] == context)
            i_1[2] = 0;

        i_1 = i;
    }

    return i;
}
