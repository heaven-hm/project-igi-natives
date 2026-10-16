#include "gi_platform.h"
#include "004894B0-FX_ExplosionSpawn_12.h"
int32_t FX_ExplosionSpawn_12()

{
    void* valA = g_bc2360;
    int32_t tmpD = 0;
    int32_t valA3 = -((*(int32_t*)(uintptr_t)(valA + 0x68))) - (*(int32_t*)(uintptr_t)(valA + 0x74)) * -30.0f;
    tmpD = valA3 <= 0;
    return valA3 & (tmpD - 1);
}
