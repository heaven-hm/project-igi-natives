// IGI native provenance: AI_SelectTarget_20 - 0x00463620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00463620-AI_SelectTarget_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_20.h"
void* AI_SelectTarget_20(void* context)

{
    *(context + 0x7b8) = 0;
    *(context + 0x7b9) = 1;
    return context;
}
