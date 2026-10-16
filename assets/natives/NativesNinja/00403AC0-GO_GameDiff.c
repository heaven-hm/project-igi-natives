#include "00403AC0-GO_GameDiff.h"
/* 0x00403ac0 GO_GameDiff full linked: callers=0 callees=2 */
int32_t GO_GameDiff(int32_t a1, float a2 @ 0xc)

// Sig: int GO_GameDiff(int difficulty)
// Note: Sets game difficulty for the current profile. Param: difficulty = 0
// easy, 1 medium, 2 hard (retail order). Use in config scripts. Returns 1.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t edx = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    *(edx * 0x564 + &g_bc1e24) = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
