#include "FX_ExplosionSpawn_12.h"
int32_t FX_ExplosionSpawn_12()

{
    void* valA = g_bc2360;
    int32_t tmpD = 0;
    int32_t valA3 = -(*(valA + 0x68)) - *(valA + 0x74) * -30f;
    tmpD = valA3 <= 0;
    return valA3 & (tmpD - 1);
}
