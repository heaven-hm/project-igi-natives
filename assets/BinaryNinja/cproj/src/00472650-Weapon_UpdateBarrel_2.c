#include "gi_platform.h"
#include "00472650-Weapon_UpdateBarrel_2.h"
int32_t* Weapon_UpdateBarrel_2(void* a1, int32_t* a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = *a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x80)) = a2[1];
    (*(int32_t*)(uintptr_t)(a1 + 0x84)) = a2[2];
    return a1 + 0x7c;
}
