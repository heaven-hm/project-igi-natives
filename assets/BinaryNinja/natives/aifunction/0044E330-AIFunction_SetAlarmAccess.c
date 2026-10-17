// IGI native provenance: AIFunction_SetAlarmAccess - 0x0044E330 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E330-AIFunction_SetAlarmAccess.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_SetAlarmAccess.h"
int32_t AIFunction_SetAlarmAccess(int32_t context, float param_2 )

// Sig: void AIFunction_SetAlarmAccess(int access)
// Note: Sets HOW the AI treats the alarm route. Param: access = AIALARMACCESS
// enum: BEFORECOMBAT=0 (run for the alarm first), AFTERCOMBAT=1 (fight first,
// raise alarm after). Retail template:
// AIFunction_SetAlarmAccess(AIALARMACCESS_BEFORECOMBAT).
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    void* entity_val = g_5bda58;
    int32_t item_18 = 1;
    *(entity_val + 0x3acc) = data_1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
