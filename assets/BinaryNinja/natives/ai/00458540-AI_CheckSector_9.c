// IGI native provenance: AI_CheckSector_9 - 0x00458540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458540-AI_CheckSector_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector_9.h"
int32_t AI_CheckSector_9(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_458dd0;
    return result;
}
