#include "FX_TrailUpdate_9.h"
void* FX_TrailUpdate_9(void* a1)

{
    void* srcS = a1;
    void* result = *(srcS + 0x7c);

    if (!result)
        return result;

    Qhash_Init(1);
    FX_ExplosionSpawn_10(*(srcS + 0x7c), srcS);
    a1 = 1;
    QTask_InitContext_2(srcS, Script_ParseEnumReal32_8(), &a1);
    return Qhash_Reset();
}
