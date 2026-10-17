// IGI native provenance: AI_CheckVisibility_29 - 0x0046C070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046C070-AI_CheckVisibility_29.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckVisibility_29.h"
int32_t AI_CheckVisibility_29()

{
    void* data_2 = g_5be2cc;

    if (!data_2)
        return 0;

    return *(data_2 + 0x130);
}
