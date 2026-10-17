// IGI native provenance: AI_UpdatePatrol_11 - 0x00458BC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458BC0-AI_UpdatePatrol_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_11.h"
int32_t AI_UpdatePatrol_11(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_458bf0;
    return result;
}
