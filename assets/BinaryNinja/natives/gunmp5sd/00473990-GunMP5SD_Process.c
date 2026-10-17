// Original IGI.EXE function: GunMP5SD_Process (VA 0x00473990; static CFG gate PASS, CFG score 1.000).
#include "GunMP5SD_Process.h"
int32_t GunMP5SD_Process(void* context)

{
    *(context + 0x1b0) = 0;
    return (*(((Weapon_ComputeAccuracy_5() + Script_SpawnNewTask_12() * 0x180) << 2) + &g_a96ae0))(context);
}
