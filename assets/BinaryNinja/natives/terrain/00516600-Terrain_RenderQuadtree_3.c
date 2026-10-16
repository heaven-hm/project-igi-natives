#include "Terrain_RenderQuadtree_3.h"
int32_t* Terrain_RenderQuadtree_3()

{
    Display_CreateSurface_7(Terrain_SelectTerrainLOD_3);
    Display_OpenDevice_8(sub_5166c0);
    Display_CloseDevice_8(Terrain_UpdateWaterWaves_3);
    int32_t* i;

    for (i = &g_a7e080; i < 0xa7f85c; )
    {
        int32_t* objC1 = &i[1];
        *i = objC1;
        i[2] = i;
        i = &i[3];
        *objC1 = 0;
    }

    return i;
}
