// IGI native provenance: AI_SelectTarget_28 - 0x0046B7D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B7D0-AI_SelectTarget_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_28.h"
void* AI_SelectTarget_28(void* context, float param_2, int32_t param_3)

{
    *(context + 0x78) = param_2;
    *(context + 0x7c) = param_3;
    *(context + 0x5c) = param_2;
    *(context + 0x60) = param_3;
    return context;
}
