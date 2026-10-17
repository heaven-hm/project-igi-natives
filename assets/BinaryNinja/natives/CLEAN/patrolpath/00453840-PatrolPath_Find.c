// IGI native provenance: PatrolPath_Find - 0x00453840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453840-PatrolPath_Find.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPath_Find.h"
void* const PatrolPath_Find(int32_t context)

{
    int32_t* i_1 = g_5bda70;

    for (int32_t* i = *i_1; i; i = *i)
    {
        void* const result = AI_CheckVisibility_5(i_1);

        if (*(result + 0x28) == context)
            return result;

        i_1 = i;
    }

    return nullptr;
}
