// IGI native provenance: GO_Player - 0x004036B0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004036B0-GO_Player.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GO_Player.h"
int32_t GO_Player(int32_t context, float param_2 )

// Sig: int GO_Player(char* name)
// Note: Adds a player profile named 'name' to the config while a .cfg/GO script
// block is being read; subsequent GO_* settings apply to this profile. Param:
// name = profile display name (string). Use inside config/profile scripts, must
// come before that profile's GO_* settings. Returns 1.
{
    int32_t entity_1 = g_bc2380 + 1;
    g_bc2380 = entity_1;
    *(entity_1 * 0x564 + &g_bc2358) = 0;
    char* item_24 = 0x20;
    (&g_bc2384)[g_bc2380 * 0x159] = 1;
    int32_t data_8 = g_bc2380 * 0x45;
    int32_t item_2c = 0;
    float item_30 = param_2;
    Sys_ResolveSymbol_23(item_30, item_2c, &(&g_bc2364)[data_8 * 5], item_24);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
