#include "gi_platform.h"
#include "0040AB20-HumanPlayer_TakeDamage_3.h"
int32_t HumanPlayer_TakeDamage_3(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 1;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 4);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40ab60;
    return result;
}
