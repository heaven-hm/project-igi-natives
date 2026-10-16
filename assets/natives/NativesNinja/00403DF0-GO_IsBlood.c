#include "00403DF0-GO_IsBlood.h"
/* 0x00403df0 GO_IsBlood full linked: callers=0 callees=2 */
int32_t GO_IsBlood(int32_t a1, float a2 @ 0xc)

// Sig: int GO_IsBlood(int blood)
// Note: Toggles blood effects for the current profile. Param: blood = 1 on, 0
// off. Use in config scripts. Returns 1.
{
    char eax_1 = sub_4b8a20(a2, 0);
    int32_t edx = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    *(edx * 0x564 + &g_bc1e2c) = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
