// IGI native provenance: HumanPlayer_PlayFootstep_3 - 0x0040AA00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040AA00-HumanPlayer_PlayFootstep_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlayFootstep_3.h"
int32_t HumanPlayer_PlayFootstep_3(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    *(context + 0x14) = sub_40aa30;
    return result;
}
