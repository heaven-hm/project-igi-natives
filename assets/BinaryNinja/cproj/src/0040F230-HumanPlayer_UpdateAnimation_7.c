#include "gi_platform.h"
#include "0040F230-HumanPlayer_UpdateAnimation_7.h"
void* HumanPlayer_UpdateAnimation_7(void* a1, void* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.26116862e-44.0f);
    void* result = AI_SelectTarget_22((*(int32_t*)(uintptr_t)(a2 + 0x4ec)), -0.610865235.0f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    (*(int32_t*)(uintptr_t)(a2 + 0x4d0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_CheckCollision_7;
    return result;
}
