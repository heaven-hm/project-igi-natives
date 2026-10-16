#include "HumanPlayer_WireSlide1.h"
struct status_msg* HumanPlayer_WireSlide1(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    HumanPlayer_CheckCollision_9(a2, 0f);
    AI_CombatTarget_20(a2);
    struct status_msg* result = SoundSys_SetMasterVolume_7(a2, "wire_slide_1");
    *(a2 + 0xdb4) = result;
    *(a1 + 0x14) = HumanPlayer_CheckGround_6;
    return result;
}
