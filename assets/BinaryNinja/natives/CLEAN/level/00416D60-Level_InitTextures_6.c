// IGI native provenance: Level_InitTextures_6 - 0x00416D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416D60-Level_InitTextures_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_InitTextures_6.h"
int32_t Level_InitTextures_6(char context)

{
    *(g_57babc + 0xe0) = context;
    return context;
}
