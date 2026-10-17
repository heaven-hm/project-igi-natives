// Original IGI.EXE function: Binocular_Cleanup (VA 0x00470840; static CFG gate PASS, CFG score 1.000).
#include "Binocular_Cleanup.h"
int32_t Binocular_Cleanup(void* context)

{
    Binocular_Process(context);
    *(context + 0x1b0) = 0;
    *(context + 0x1b8) = 1;
    return (*(((Weapon_ComputeAccuracy_5() + Script_SpawnNewTask_12() * 0x180) << 2) + &g_a96ae0))(context);
}
