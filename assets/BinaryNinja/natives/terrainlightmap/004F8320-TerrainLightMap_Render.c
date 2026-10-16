#include "TerrainLightMap_Render.h"

void* TerrainLightMap_Render(void* pThis)

{
    if (*(pThis + 0xe0))
        g_b97d24 -= 1;

    return pThis;
}
