#include "0044E270-AIFunction_SetAlarmTriggerID.h"
/* 0x0044e270 AIFunction_SetAlarmTriggerID full linked: callers=0 callees=2 */
int32_t AIFunction_SetAlarmTriggerID(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetAlarmTriggerID(int id)
// Note: Binds an ALARM trigger object to this AI (which alarm switch it
// responds to/runs to). Param: id = alarm trigger id from the level. Retail
// template: AIFunction_SetAlarmTriggerID(xx).
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    ecx->pad[0x3ac0] = eax_1;
    ecx->pad[0x3ac1] = *(&eax_1 + 1);
    ecx->pad[0x3ac2] = *(&eax_1 + 2);
    ecx->pad[0x3ac3] = *(&eax_1 + 3);
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
