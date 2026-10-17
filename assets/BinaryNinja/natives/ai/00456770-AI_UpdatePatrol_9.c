// IGI native provenance: AI_UpdatePatrol_9 - 0x00456770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00456770-AI_UpdatePatrol_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_9.h"
int32_t AI_UpdatePatrol_9(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 1;
    int32_t result =
        Bones_PlayAnimation(param_2 + 0x68, 0, *(FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8)) + 4), 0, 0.0f);
    *(context + 0x14) = sub_4561a0;
    return result;
}
