#include "gi_platform.h"
#include "0040F930-HumanPlayer_HandleInput_8.h"
void* HumanPlayer_HandleInput_8(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x4d1)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_ApplyPhysics_8;
    return a2;
}
