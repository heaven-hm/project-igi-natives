#include "0044E390-AIFunction_SetGunnerID.h"
/* 0x0044e390 AIFunction_SetGunnerID full linked: callers=0 callees=2 */
int32_t AIFunction_SetGunnerID(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetGunnerID(int gunnerId)
// Note: Assigns which mounted-gunner slot this AI mans. Param: gunnerId =
// gunner position id. Use in AI init for turret/mounted-gun NPCs.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    ecx->pad[0x3ac8] = eax_1;
    ecx->pad[0x3ac9] = *(&eax_1 + 1);
    ecx->pad[0x3aca] = *(&eax_1 + 2);
    ecx->pad[0x3acb] = *(&eax_1 + 3);
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
