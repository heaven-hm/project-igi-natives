#include "gi_platform.h"
#include "004707D0-Binocular_Setup.h"
int32_t Binocular_Setup(void* a1)

{
    Binocular_Process(a1);
    Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x1c0)));
    return ((int(*)())(uintptr_t)(*((Weapon_ComputeAccuracy_5() << 2) + &g_a976e0)))(a1);
}
