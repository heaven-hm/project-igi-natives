// Original IGI.EXE function: AIFunction_GetAlarmTriggerID (VA 0x0044E3F0; static CFG gate FAIL, CFG score 0.667).
#include "AIFunction_GetAlarmTriggerID.h"
int32_t AIFunction_GetAlarmTriggerID(int32_t context)

// Sig: int AIFunction_GetAlarmTriggerID()
// Note: RETURNS the id of the alarm trigger bound to this AI (see
// AIFunction_SetAlarmTriggerID). Takes no args. Use in handlers to check which
// alarm applies.
{
    int32_t data_1 = *(g_5bda58 + 0x3ac0);
    int32_t item_18 = data_1;
    char* item_8 = &g_567c74;
    double item_10 = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}
