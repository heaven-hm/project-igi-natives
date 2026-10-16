#include "gi_platform.h"
#include "00408C30-HumanPlayer_CheckCollision.h"
int32_t HumanPlayer_CheckCollision(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    Render_TransformVertices_10(a2 + 0x68, 0.0f);
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 3);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_ApplyRecoil;
    return result;
}
