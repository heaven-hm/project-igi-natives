#include "gi_platform.h"
#include "0048BBD0-Combat_MobileC.h"
void* Combat_MobileC(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x18)) = CombatStand;
    (*(int32_t*)(uintptr_t)(a2 + 0x1c)) = Combat_MobileC;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e50)) = 0;
    return a1;
}
