// IGI native provenance: HumanPlayer_PlayFootstep_4 - 0x0040BDB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040BDB0-HumanPlayer_PlayFootstep_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlayFootstep_4.h"
float HumanPlayer_PlayFootstep_4(void* context, void* param_2) {
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    int32_t temp_1 = *(param_2 + 0x730);
    float result = *(param_2 + 0x520) + *(param_2 + 0x728);
    long double fpu_val_7_3 = *(param_2 + 0x524) + *(param_2 + 0x72c);
    int32_t item_4 = *(param_2 + 0x528);
    *(param_2 + 0x664) = result;
    int32_t item_4_1 = temp_1;
    *(param_2 + 0x668) = fpu_val_7_3;
    *(param_2 + 0x66c) = temp_1;
    *(context + 0x14) = HumanPlayer_PlaySound_4;
    return result;
}
