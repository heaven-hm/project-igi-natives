#include "0044E3F0-AIFunction_GetAlarmTriggerID.h"
/* 0x0044e3f0 AIFunction_GetAlarmTriggerID full linked: callers=0 callees=1 */
int32_t AIFunction_GetAlarmTriggerID(int32_t a1)

// Sig: int AIFunction_GetAlarmTriggerID()
// Note: RETURNS the id of the alarm trigger bound to this AI (see
// AIFunction_SetAlarmTriggerID). Takes no args. Use in handlers to check which
// alarm applies.
{
    struct ai_ctx* eax = g_5bda58;
    int32_t eax_1;
    eax_1 = eax->pad[0x3ac0];
    *(&eax_1 + 1) = eax->pad[0x3ac1];
    *(&eax_1 + 2) = eax->pad[0x3ac2];
    *(&eax_1 + 3) = eax->pad[0x3ac3];
    int32_t var_18 = eax_1;
    char* var_8 = &g_567c74;
    double var_10 = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
