#include "gi_platform.h"
#include "0040FA60-HumanPlayer_PlaySound_8.h"
void* HumanPlayer_PlaySound_8(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x4e8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_UpdateAnimation_8;
    return a2;
}
