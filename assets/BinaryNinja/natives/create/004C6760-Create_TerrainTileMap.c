// IGI native provenance: Create_TerrainTileMap - 0x004C6760 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C6760-Create_TerrainTileMap.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Create_TerrainTileMap.h"
int32_t Create_TerrainTileMap(int32_t context, float param_2 )

// Sig: void Create_TerrainTileMap(...)
// Note: Creates the TERRAIN TILE MAP for a level during level load (113-byte
// function). Engine-internal: called by the terrain loader, not meant for
// gameplay scripts.
{
    int32_t item_2c = 0;
    float item_30 = param_2;
    int32_t i = 0;
    int32_t flagP = (Script_GetArg(item_30, item_2c) << 6) + 0xc30080;

    do
    {
        item_30 = param_2;
        *(i + flagP) = Script_GetArg(item_30, i + 1);
        i += 1;
    } while (i < 0x40);

    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
