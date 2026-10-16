#include "gi_platform.h"
#include "004712E0-Weapon_UpdateZoom.h"
void* Weapon_UpdateZoom(void* a1, int32_t a2, int32_t a3)

{
    __builtin_memset(a1, 0, 0x14);
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 8)) = a3;
    return a1;
}
