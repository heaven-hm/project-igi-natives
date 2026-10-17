// IGI native provenance: AI_SelectTarget_22 - 0x00464770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00464770-AI_SelectTarget_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_22.h"
void* AI_SelectTarget_22(void* context, float param_2, int32_t param_3, int32_t param_4, int32_t param_5)

{
    *(context + 0x1dc) = param_3;
    *(context + 0x1d4) = param_4;
    *(context + 0x1d0) = param_2;
    *(context + 0x1e0) = param_5;
    return context;
}
