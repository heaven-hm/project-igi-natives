// IGI native provenance: Terrain_RenderQuadtree_3 - 0x00516600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00516600-Terrain_RenderQuadtree_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderQuadtree_3.h"
int32_t* Terrain_RenderQuadtree_3()

{
    Display_CreateSurface_7(Terrain_SelectTerrainLOD_3);
    Display_OpenDevice_8(sub_5166c0);
    Display_CloseDevice_8(Terrain_UpdateWaterWaves_3);
    int32_t* i;

    for (i = &g_a7e080; i < 0xa7f85c; )
    {
        int32_t* entity_1 = &i[1];
        *i = entity_1;
        i[2] = i;
        i = &i[3];
        *entity_1 = 0;
    }

    return i;
}
