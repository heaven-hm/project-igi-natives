#include "gi_platform.h"
#include "004C6760-Create_TerrainTileMap.h"
int32_t Create_TerrainTileMap(int32_t a1, float a2 )

// Sig: void Create_TerrainTileMap(...)
// Note: Creates the TERRAIN TILE MAP for a level during level load (113-byte
// function). Engine-internal: called by the terrain loader, not meant for
// gameplay scripts.
{
    int32_t v_2c = 0;
    float v_30 = a2;
    int32_t i = 0;
    int32_t flagP = (Script_GetArg(v_30, v_2c) << 6) + 0xc30080;

    do
    {
        v_30 = a2;
        *(i + flagP) = Script_GetArg(v_30, i + 1);
        i += 1;
    } while (i < 0x40);

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
