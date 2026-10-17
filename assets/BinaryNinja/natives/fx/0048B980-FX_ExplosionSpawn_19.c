// IGI native provenance: FX_ExplosionSpawn_19 - 0x0048B980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048B980-FX_ExplosionSpawn_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
