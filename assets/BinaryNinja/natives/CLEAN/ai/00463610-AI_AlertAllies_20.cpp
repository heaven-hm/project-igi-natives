// IGI native provenance: AI_AlertAllies_20 - 0x00463610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00463610-AI_AlertAllies_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_20.h"
void* AI_AlertAllies_20(void* context)

{
    *(context + 0x7b8) = 1;
    return context;
}
