#include "gi_platform.h"
#include "0040D8E0-HumanPlayer_ApplyRecoil_5.h"
void** HumanPlayer_ApplyRecoil_5(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(a2, 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = Ladder_GetOnTop;
    return result;
}
