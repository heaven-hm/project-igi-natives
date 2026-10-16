#include "0044E210-AIFunction_SetDeathAnimation.h"
/* 0x0044e210 AIFunction_SetDeathAnimation full linked: callers=0 callees=2 */
int32_t AIFunction_SetDeathAnimation(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetDeathAnimation(int animId)
// Note: Overrides the death animation played when this AI dies. Param: animId =
// animation entry id. Use in AI init for custom deaths.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    ecx->pad[0x3ad0] = eax_1;
    ecx->pad[0x3ad1] = *(&eax_1 + 1);
    ecx->pad[0x3ad2] = *(&eax_1 + 2);
    ecx->pad[0x3ad3] = *(&eax_1 + 3);
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
