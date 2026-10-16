#include "gi_platform.h"
#include "00473990-GunMP5SD_Process.h"
int32_t GunMP5SD_Process(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x1b0)) = 0;
    return ((int(*)())(uintptr_t)(*(((Weapon_ComputeAccuracy_5() + Script_SpawnNewTask_12() * 0x180) << 2) + &g_a96ae0)))(a1);
}
