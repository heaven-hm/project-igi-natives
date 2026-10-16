#include "gi_platform.h"
#include "0048C250-Combat_MobileA.h"
void* Combat_MobileA(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x3e50)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x18)) = CombatKneel;
    (*(int32_t*)(uintptr_t)(a2 + 0x1c)) = Combat_MobileA;
    return a2;
}
