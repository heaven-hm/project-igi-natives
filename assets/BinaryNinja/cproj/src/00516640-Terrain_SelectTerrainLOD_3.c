#include "gi_platform.h"
#include "00516640-Terrain_SelectTerrainLOD_3.h"
int32_t Terrain_SelectTerrainLOD_3()

{
    int32_t v_10 = 0;
    v_10 = 0x10;
    int32_t v_c = 0;
    int32_t v_c_1 = 0x10000;
    int32_t v_8 = 0;
    int32_t v_4 = 0;

    if (!g_bcad74)
        int32_t v_c_2 = 0x10800;

    int32_t* valA1 = g_5ca110;
    int32_t v_8_1 = 0x1c4;
    int32_t v_4_1 = 0x8000;
    ((int(*)())(uintptr_t)(*(*valA1 + 0x14)))(valA1, &v_10, &g_a7f890, 0);
    return Sys_FreeMemory_2(&g_a7f878, 0x2ef4, 0x80, 0);
}
