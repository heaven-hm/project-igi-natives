// IGI native provenance: AI_SelectTarget_2 - 0x00451320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451320-AI_SelectTarget_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_2.h"
void* AI_SelectTarget_2(void* context)

{
    *(context + 0x1514) -= 1;
    return context;
}
