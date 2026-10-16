#include "GO_IsBlood.h"
int32_t GO_IsBlood(int32_t a1, float a2 @ 0xc)

// Sig: int GO_IsBlood(int blood)
// Note: Toggles blood effects for the current profile. Param: blood = 1 on, 0
// off. Use in config scripts. Returns 1.
{
    char valA1 = Script_GetArg(a2, 0);
    int32_t tmpD = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    *(tmpD * 0x564 + &g_bc1e2c) = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
