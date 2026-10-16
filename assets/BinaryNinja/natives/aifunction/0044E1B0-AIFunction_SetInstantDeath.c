#include "AIFunction_SetInstantDeath.h"
int32_t AIFunction_SetInstantDeath(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetInstantDeath(int onOff)
// Note: When on, any hit instantly kills this AI (no damage pooling). Param:
// onOff = 1 one-shot kills, 0 normal health. Use for scripted one-shot enemies.
{
    *(g_5bda58 + 0x3abd) = !Script_GetArg(a2, 0);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
