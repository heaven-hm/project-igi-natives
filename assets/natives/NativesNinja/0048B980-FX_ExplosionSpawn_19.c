#include "0048B980-FX_ExplosionSpawn_19.h"
/* 0x0048b980 FX_ExplosionSpawn_19 full linked: callers=5 callees=2 */
int32_t sub_48b980(void* a1)

{
    void* eax_2 = Table_GetAt(*(a1 + 0x14) + 0x4c4, 0);

    if (!eax_2)
        return 0;

    int32_t result;
    sub_4f23d0(eax_2, &result);
    return result;
}
