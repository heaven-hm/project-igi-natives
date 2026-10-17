// Original IGI.EXE function: HumanPlayer_GunsDry1 (VA 0x0040F0D0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_GunsDry1.h"
struct status_msg* HumanPlayer_GunsDry1(void* a1, void* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.40129846e-45f);
    struct status_msg* result = SoundSys_SetMasterVolume_7(*(a2 + 0x4ec), "guns_dry_1");
    *(a1 + 0x14) = sub_40f100;
    return result;
}
