// IGI native provenance: AI_CheckSector_2 - 0x00451350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451350-AI_CheckSector_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector_2.h"
int32_t* AI_CheckSector_2(void* context)

{
    int32_t data_1 = **(*(context + 0x3aa8) + 0xc);

    if (!data_1)
        return 0;

    return FX_ExplosionSpawn_14(context + 0x15f8, data_1);
}
