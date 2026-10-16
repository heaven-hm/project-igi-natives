#include "gi_platform.h"
#include "0040E470-HumanPlayer_CheckCollision_6.h"
void* HumanPlayer_CheckCollision_6(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    Bones_PlayAnimation(a2 + 0x68, 0, (*(int32_t*)(uintptr_t)(FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8)) + 4)), 0, 0.200000003.0f);
    HumanPlayer_CheckCollision_9(a2, 0.0f);
    void* result = HumanPlayer_UpdateAnimation_4(a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_ApplyRecoil_6;
    return result;
}
