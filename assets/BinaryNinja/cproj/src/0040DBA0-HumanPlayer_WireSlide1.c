#include "gi_platform.h"
#include "0040DBA0-HumanPlayer_WireSlide1.h"
struct status_msg* HumanPlayer_WireSlide1(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    HumanPlayer_CheckCollision_9(a2, 0.0f);
    AI_CombatTarget_20(a2);
    struct status_msg* result = SoundSys_SetMasterVolume_7(a2, "wire_slide_1");
    (*(int32_t*)(uintptr_t)(a2 + 0xdb4)) = result;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_CheckGround_6;
    return result;
}
