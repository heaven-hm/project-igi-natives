// IGI native provenance: AI_SelectTarget_14 - 0x0045BBD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045BBD0-AI_SelectTarget_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_14.h"
int32_t AI_SelectTarget_14(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_458bf0;
    return result;
}
