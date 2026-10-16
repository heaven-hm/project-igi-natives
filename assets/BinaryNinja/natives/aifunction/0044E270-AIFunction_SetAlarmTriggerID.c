#include "AIFunction_SetAlarmTriggerID.h"
int32_t AIFunction_SetAlarmTriggerID(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetAlarmTriggerID(int id)
// Note: Binds an ALARM trigger object to this AI (which alarm switch it
// responds to/runs to). Param: id = alarm trigger id from the level. Retail
// template: AIFunction_SetAlarmTriggerID(xx).
{
    int32_t valA1 = Script_GetArg(a2, 0);
    void* objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + 0x3ac0) = valA1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
