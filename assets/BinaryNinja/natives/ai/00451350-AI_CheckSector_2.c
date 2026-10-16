#include "AI_CheckSector_2.h"
int32_t* AI_CheckSector_2(void* a1)

{
    int32_t valA1 = **(*(a1 + 0x3aa8) + 0xc);

    if (!valA1)
        return 0;

    return FX_ExplosionSpawn_14(a1 + 0x15f8, valA1);
}
