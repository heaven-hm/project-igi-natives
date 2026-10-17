// IGI native provenance: AIFunction_SetAlarmTriggerID - 0x0044E270 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E270-AIFunction_SetAlarmTriggerID.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_SetAlarmTriggerID.h"
int32_t AIFunction_SetAlarmTriggerID(int32_t context, float param_2 )

// Sig: void AIFunction_SetAlarmTriggerID(int id)
// Note: Binds an ALARM trigger object to this AI (which alarm switch it
// responds to/runs to). Param: id = alarm trigger id from the level. Retail
// template: AIFunction_SetAlarmTriggerID(xx).
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    void* entity_val = g_5bda58;
    int32_t item_18 = 1;
    *(entity_val + 0x3ac0) = data_1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
