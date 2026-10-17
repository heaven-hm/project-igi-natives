// Original IGI.EXE function: TerrainLightMap_Render (VA 0x004F8320; static CFG gate PASS, CFG score 1.000).
#include "TerrainLightMap_Render.h"

void* TerrainLightMap_Render(void* pThis)

{
    if (*(pThis + 0xe0))
        g_b97d24 -= 1;

    return pThis;
}
