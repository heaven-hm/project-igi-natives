#include "004894B0-FX_ExplosionSpawn_12.h"
/* 0x004894b0 FX_ExplosionSpawn_12 full linked: callers=2 callees=0 */
int32_t sub_4894b0()

{
    void* eax = g_bc2360;
    int32_t edx = 0;
    int32_t eax_3 = -(*(eax + 0x68)) - *(eax + 0x74) * -30f;
    edx = eax_3 <= 0;
    return eax_3 & (edx - 1);
}
