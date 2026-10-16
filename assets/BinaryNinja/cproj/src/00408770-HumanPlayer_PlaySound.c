#include "gi_platform.h"
#include "00408770-HumanPlayer_PlaySound.h"
int32_t HumanPlayer_PlaySound(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 1);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_4087b0;
    return result;
}
