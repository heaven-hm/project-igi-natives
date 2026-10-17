// Original IGI.EXE function: AIFunction_GetAlarmTriggerID (VA 0x0044E3F0; static CFG gate FAIL, CFG score 0.667).
#include "AIFunction_GetAlarmTriggerID.h"
int32_t AIFunction_GetAlarmTriggerID(int32_t a1)

// Sig: int AIFunction_GetAlarmTriggerID()
// Note: RETURNS the id of the alarm trigger bound to this AI (see
// AIFunction_SetAlarmTriggerID). Takes no args. Use in handlers to check which
// alarm applies.
{
    int32_t valA1 = *(g_5bda58 + 0x3ac0);
    int32_t v_18 = valA1;
    char* v_8 = &g_567c74;
    double v_10 = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
