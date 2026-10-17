// Original IGI.EXE function: GO_Player (VA 0x004036B0; static CFG gate PASS, CFG score 0.889).
#include "GO_Player.h"
int32_t GO_Player(int32_t a1, float a2 @ 0xc)

// Sig: int GO_Player(char* name)
// Note: Adds a player profile named 'name' to the config while a .cfg/GO script
// block is being read; subsequent GO_* settings apply to this profile. Param:
// name = profile display name (string). Use inside config/profile scripts, must
// come before that profile's GO_* settings. Returns 1.
{
    int32_t objC1 = g_bc2380 + 1;
    g_bc2380 = objC1;
    *(objC1 * 0x564 + &g_bc2358) = 0;
    char* v_24 = 0x20;
    (&g_bc2384)[g_bc2380 * 0x159] = 1;
    int32_t valA8 = g_bc2380 * 0x45;
    int32_t v_2c = 0;
    float v_30 = a2;
    Sys_ResolveSymbol_23(v_30, v_2c, &(&g_bc2364)[valA8 * 5], v_24);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
