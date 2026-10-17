// IGI native provenance: FX_TrailUpdate_9 - 0x00488000 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488000-FX_TrailUpdate_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
