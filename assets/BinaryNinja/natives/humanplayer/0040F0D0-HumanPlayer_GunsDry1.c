// Original IGI.EXE function: HumanPlayer_GunsDry1 (VA 0x0040F0D0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_GunsDry1.h"
struct status_msg* HumanPlayer_GunsDry1(void* context, void* param_2)

{
    HumanPlayer_CheckCollision_9(param_2, 1.40129846e-45.0f);
    struct status_msg* result = SoundSys_SetMasterVolume_7(*(param_2 + 0x4ec), "guns_dry_1");
    *(context + 0x14) = sub_40f100;
    return result;
}
