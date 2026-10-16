#include "00516640-Terrain_SelectTerrainLOD_3.h"
/* 0x00516640 Terrain_SelectTerrainLOD_3 full linked: callers=0 callees=1 */
int32_t sub_516640()

{
    int32_t var_10 = 0;
    var_10 = 0x10;
    int32_t var_c = 0;
    int32_t var_c_1 = 0x10000;
    int32_t var_8 = 0;
    int32_t var_4 = 0;

    if (!g_bcad74)
        int32_t var_c_2 = 0x10800;

    int32_t* eax_1 = g_5ca110;
    int32_t var_8_1 = 0x1c4;
    int32_t var_4_1 = 0x8000;
    (*(*eax_1 + 0x14))(eax_1, &var_10, &g_a7f890, 0);
    return sub_4b0b00(&g_a7f878, 0x2ef4, 0x80, 0);
}
