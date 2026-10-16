#include "0048AC60-FX_ExplosionSpawn_18.h"
/* 0x0048ac60 FX_ExplosionSpawn_18 full linked: callers=0 callees=1 */
int32_t sub_48ac60(void* a1, void* a2)

{
    sub_48aba0(a1, a2);
    *(a2 + 0x18) = sub_48ac90;
    *(a1 + 0x3db0) = 0;
    *(a1 + 0x3db4) = 0;
    return 0;
}
