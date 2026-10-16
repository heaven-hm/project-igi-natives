#include "Binocular_Setup.h"
int32_t Binocular_Setup(void* a1)

{
    Binocular_Process(a1);
    Qtask_UpdateList(*(a1 + 0x1c0));
    return (*((Weapon_ComputeAccuracy_5() << 2) + &g_a976e0))(a1);
}
