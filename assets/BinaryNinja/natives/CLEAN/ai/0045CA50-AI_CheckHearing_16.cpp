// IGI native provenance: AI_CheckHearing_16 - 0x0045CA50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045CA50-AI_CheckHearing_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_16.h"
int32_t AI_CheckHearing_16(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_45ca80;
    return result;
}
