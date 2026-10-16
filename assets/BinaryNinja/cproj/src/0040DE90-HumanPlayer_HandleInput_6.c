#include "gi_platform.h"
#include "0040DE90-HumanPlayer_HandleInput_6.h"
void** HumanPlayer_HandleInput_6(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(a2, 0.0f);
    __builtin_memset(a2 + 0x664, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_ApplyPhysics_6;
    return result;
}
