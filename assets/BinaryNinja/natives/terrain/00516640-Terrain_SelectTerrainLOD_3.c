// IGI native provenance: Terrain_SelectTerrainLOD_3 - 0x00516640 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00516640-Terrain_SelectTerrainLOD_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SelectTerrainLOD_3.h"
int32_t Terrain_SelectTerrainLOD_3()

{
    int32_t item_10 = 0;
    item_10 = 0x10;
    int32_t item_c = 0;
    int32_t item_c_1 = 0x10000;
    int32_t item_8 = 0;
    int32_t item_4 = 0;

    if (!g_bcad74)
        int32_t item_c_2 = 0x10800;

    int32_t* data_1 = g_5ca110;
    int32_t item_8_1 = 0x1c4;
    int32_t item_4_1 = 0x8000;
    (*(*data_1 + 0x14))(data_1, &item_10, &g_a7f890, 0);
    return Sys_FreeMemory_2(&g_a7f878, 0x2ef4, 0x80, 0);
}
