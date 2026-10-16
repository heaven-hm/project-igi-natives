#include "gi_platform.h"
#include "0048C850-CombatFollow_Install.h"
void* CombatFollow_Install(void* a1 )

{
    (*(int32_t*)(uintptr_t)(a1 + 0x18)) = Combat_Follow;
    return a1;
}
