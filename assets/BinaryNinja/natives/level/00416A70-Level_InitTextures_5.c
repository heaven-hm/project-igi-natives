// IGI native provenance: Level_InitTextures_5 - 0x00416A70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416A70-Level_InitTextures_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_InitTextures_5.h"
int32_t Level_InitTextures_5(int32_t context)

{
    int32_t* entity_1 = *(g_57babc + (context << 2) + 0xc0);

    if (!entity_1)
        return 0;

    return *entity_1;
}
