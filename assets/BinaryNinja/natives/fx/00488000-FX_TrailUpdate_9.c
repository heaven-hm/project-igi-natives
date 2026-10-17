// Original IGI.EXE function: FX_TrailUpdate_9 (VA 0x00488000; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_9.h"
void* FX_TrailUpdate_9(void* context)

{
    void* source_val = context;
    void* result = *(source_val + 0x7c);

    if (!result)
        return result;

    Qhash_Init(1);
    FX_ExplosionSpawn_10(*(source_val + 0x7c), source_val);
    context = 1;
    QTask_InitContext_2(source_val, Script_ParseEnumReal32_8(), &context);
    return Qhash_Reset();
}
