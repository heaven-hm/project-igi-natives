// Original IGI.EXE function: HumanPlayer_PlayFootstep_4 (VA 0x0040BDB0; static CFG gate PASS, CFG score 1.000).
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
