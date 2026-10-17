// IGI native provenance: AIFunction_GetAlarmTriggerID - 0x0044E3F0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E3F0-AIFunction_GetAlarmTriggerID.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
