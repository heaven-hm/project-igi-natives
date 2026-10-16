#include "gi_platform.h"
#include "0048B980-FX_ExplosionSpawn_19.h"
int32_t FX_ExplosionSpawn_19(void* a1)

{
    void* valA2 = Table_GetAt((*(int32_t*)(uintptr_t)(a1 + 0x14)) + 0x4c4, 0);

    if (!valA2)
        return 0;

    int32_t result;
    Script_ParseEnumReal32_13(valA2, &result);
    return result;
}
