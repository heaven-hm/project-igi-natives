#include "gi_platform.h"
#include "00470840-Binocular_Cleanup.h"
int32_t Binocular_Cleanup(void* a1)

{
    Binocular_Process(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x1b0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = 1;
    return ((int(*)())(uintptr_t)(*(((Weapon_ComputeAccuracy_5() + Script_SpawnNewTask_12() * 0x180) << 2) + &g_a96ae0)))(a1);
}
