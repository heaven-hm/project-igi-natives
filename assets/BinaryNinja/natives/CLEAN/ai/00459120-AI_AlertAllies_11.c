// IGI native provenance: AI_AlertAllies_11 - 0x00459120 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459120-AI_AlertAllies_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_11.h"
int32_t AI_AlertAllies_11(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_45c0c0;
    return result;
}
