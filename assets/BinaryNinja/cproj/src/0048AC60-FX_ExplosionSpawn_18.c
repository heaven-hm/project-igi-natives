#include "gi_platform.h"
#include "0048AC60-FX_ExplosionSpawn_18.h"
int32_t FX_ExplosionSpawn_18(void* a1, void* a2)

{
    Patrol_CombatStart(a1, a2);
    (*(int32_t*)(uintptr_t)(a2 + 0x18)) = sub_48ac90;
    (*(int32_t*)(uintptr_t)(a1 + 0x3db0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3db4)) = 0;
    return 0;
}
