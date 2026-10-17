// Original IGI.EXE function: FX_ExplosionSpawn_19 (VA 0x0048B980; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_19.h"
int32_t FX_ExplosionSpawn_19(void* context)

{
    void* data_2 = Table_GetAt(*(context + 0x14) + 0x4c4, 0);

    if (!data_2)
        return 0;

    int32_t result;
    Script_ParseEnumReal32_13(data_2, &result);
    return result;
}
