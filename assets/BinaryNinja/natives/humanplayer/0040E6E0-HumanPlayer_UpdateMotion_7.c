// Original IGI.EXE function: HumanPlayer_UpdateMotion_7 (VA 0x0040E6E0; static CFG gate PASS, CFG score 0.889).
#include "HumanPlayer_UpdateMotion_7.h"
int32_t* HumanPlayer_UpdateMotion_7(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    memset(param_2 + 0x664, 0, 0x18);
    int32_t* result = AI_UpdateSensors_19(param_2);
    *(context + 0x14) = HumanPlayer_CheckGround_7;
    return result;
}
