// IGI native provenance: AI_SelectTarget_11 - 0x00459150 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459150-AI_SelectTarget_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_11.h"
int32_t AI_SelectTarget_11(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_UpdateSensors_11;
    return result;
}
