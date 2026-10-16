#include "004036B0-GO_Player.h"
/* 0x004036b0 GO_Player full linked: callers=0 callees=3 */
int32_t GO_Player(int32_t a1, float a2 @ 0xc)

// Sig: int GO_Player(char* name)
// Note: Adds a player profile named 'name' to the config while a .cfg/GO script
// block is being read; subsequent GO_* settings apply to this profile. Param:
// name = profile display name (string). Use inside config/profile scripts, must
// come before that profile's GO_* settings. Returns 1.
{
    int32_t ecx_1 = g_bc2380 + 1;
    g_bc2380 = ecx_1;
    *(ecx_1 * 0x564 + &g_bc2358) = 0;
    char* var_24 = 0x20;
    (&g_bc2384)[g_bc2380 * 0x159] = 1;
    int32_t eax_8 = g_bc2380 * 0x45;
    int32_t var_2c = 0;
    float var_30 = a2;
    sub_4b8a80(var_30, var_2c, &(&g_bc2364)[eax_8 * 5], var_24);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
