#include "0044E1B0-AIFunction_SetInstantDeath.h"
/* 0x0044e1b0 AIFunction_SetInstantDeath full linked: callers=0 callees=2 */
int32_t AIFunction_SetInstantDeath(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetInstantDeath(int onOff)
// Note: When on, any hit instantly kills this AI (no damage pooling). Param:
// onOff = 1 one-shot kills, 0 normal health. Use for scripted one-shot enemies.
{
    g_5bda58->pad[0x3abd] = !sub_4b8a20(a2, 0);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
