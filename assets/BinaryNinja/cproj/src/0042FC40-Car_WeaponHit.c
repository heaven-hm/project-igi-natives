#include "gi_platform.h"
#include "0042FC40-Car_WeaponHit.h"
void* Car_WeaponHit(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x91c)) = 1;
    return a1;
}
