// Original IGI.EXE function: Binocular_Setup (VA 0x004707D0; static CFG gate PASS, CFG score 1.000).
#include "Binocular_Setup.h"
int32_t Binocular_Setup(void* context)

{
    Binocular_Process(context);
    Qtask_UpdateList(*(context + 0x1c0));
    return (*((Weapon_ComputeAccuracy_5() << 2) + &g_a976e0))(context);
}
