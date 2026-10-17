// IGI native provenance: AI_CheckSector_4 - 0x004532D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004532D0-AI_CheckSector_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector_4.h"
int32_t* AI_CheckSector_4(int32_t context)

{
    int32_t* i_1 = g_5bda28;
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[2] == context)
        {
            i = 1;
            return i;
        }

        i_1 = i;
    }

    i = 0;
    return i;
}
