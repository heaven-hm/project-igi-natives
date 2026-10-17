// IGI native provenance: AIFunction_SetAlarmControlID - 0x0044E2D0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E2D0-AIFunction_SetAlarmControlID.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_SetAlarmControlID.h"
int32_t AIFunction_SetAlarmControlID(int32_t context, float param_2 )

// Sig: void AIFunction_SetAlarmControlID(int id)
// Note: Binds the ALARM CONTROL (the raised-alarm device) this AI uses. Param:
// id = alarm control id from the level. Retail template:
// AIFunction_SetAlarmControlID(xx).
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    void* entity_val = g_5bda58;
    int32_t item_18 = 1;
    *(entity_val + 0x3ac4) = data_1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
