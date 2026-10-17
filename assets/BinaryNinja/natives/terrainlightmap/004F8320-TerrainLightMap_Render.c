// IGI native provenance: TerrainLightMap_Render - 0x004F8320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F8320-TerrainLightMap_Render.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TerrainLightMap_Render.h"

void* TerrainLightMap_Render(void* pThis)

{
    if (*(pThis + 0xe0))
        g_b97d24 -= 1;

    return pThis;
}
