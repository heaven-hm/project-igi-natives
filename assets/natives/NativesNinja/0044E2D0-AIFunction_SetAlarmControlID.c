#include "0044E2D0-AIFunction_SetAlarmControlID.h"
/* 0x0044e2d0 AIFunction_SetAlarmControlID full linked: callers=0 callees=2 */
int32_t AIFunction_SetAlarmControlID(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetAlarmControlID(int id)
// Note: Binds the ALARM CONTROL (the raised-alarm device) this AI uses. Param:
// id = alarm control id from the level. Retail template:
// AIFunction_SetAlarmControlID(xx).
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    ecx->pad[0x3ac4] = eax_1;
    ecx->pad[0x3ac5] = *(&eax_1 + 1);
    ecx->pad[0x3ac6] = *(&eax_1 + 2);
    ecx->pad[0x3ac7] = *(&eax_1 + 3);
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
