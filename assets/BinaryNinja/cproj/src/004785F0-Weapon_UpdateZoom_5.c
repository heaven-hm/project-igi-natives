#include "gi_platform.h"
#include "004785F0-Weapon_UpdateZoom_5.h"
void* Weapon_UpdateZoom_5(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x134)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x13c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = 0;
    __builtin_memset(a1 + 0x198, 0, 0x18);
    return a1;
}
