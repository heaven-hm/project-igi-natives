// Original IGI.EXE function: HumanPlayer_WireSlide1 (VA 0x0040DBA0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_WireSlide1.h"
struct status_msg* HumanPlayer_WireSlide1(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    HumanPlayer_CheckCollision_9(param_2, 0.0f);
    AI_CombatTarget_20(param_2);
    struct status_msg* result = SoundSys_SetMasterVolume_7(param_2, "wire_slide_1");
    *(param_2 + 0xdb4) = result;
    *(context + 0x14) = HumanPlayer_CheckGround_6;
    return result;
}
