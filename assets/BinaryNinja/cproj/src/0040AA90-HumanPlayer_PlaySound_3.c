#include "gi_platform.h"
#include "0040AA90-HumanPlayer_PlaySound_3.h"
int32_t HumanPlayer_PlaySound_3(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    int32_t result = Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40aac0;
    return result;
}
