// IGI native provenance: AI_AlertAllies_5 - 0x004540D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004540D0-AI_AlertAllies_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_5.h"
int32_t AI_AlertAllies_5(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_SelectTarget_5;
    return result;
}
