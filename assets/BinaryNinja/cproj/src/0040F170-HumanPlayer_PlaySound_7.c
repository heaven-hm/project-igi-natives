#include "gi_platform.h"
#include "0040F170-HumanPlayer_PlaySound_7.h"
void* HumanPlayer_PlaySound_7(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_TakeDamage_7;
    return a1;
}
