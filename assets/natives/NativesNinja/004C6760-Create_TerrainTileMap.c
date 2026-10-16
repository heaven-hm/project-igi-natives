#include "004C6760-Create_TerrainTileMap.h"
/* 0x004c6760 Create_TerrainTileMap full linked: callers=0 callees=3 */
int32_t Create_TerrainTileMap(int32_t a1, float a2 @ 0xc)

// Sig: void Create_TerrainTileMap(...)
// Note: Creates the TERRAIN TILE MAP for a level during level load (113-byte
// function). Engine-internal: called by the terrain loader, not meant for
// gameplay scripts.
{
    int32_t var_2c = 0;
    float var_30 = a2;
    int32_t i = 0;
    int32_t ebp = (sub_4b8a20(var_30, var_2c) << 6) + 0xc30080;

    do
    {
        var_30 = a2;
        *(i + ebp) = sub_4b8a20(var_30, i + 1);
        i += 1;
    } while (i < 0x40);

    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
