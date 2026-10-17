// IGI native provenance: AIFunction_GetAlarmControlID - 0x0044E430 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E430-AIFunction_GetAlarmControlID.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetAlarmControlID.h"
int32_t AIFunction_GetAlarmControlID(int32_t context)

// Sig: int AIFunction_GetAlarmControlID()
// Note: RETURNS the bound alarm-control id. Takes no args.
{
    int32_t data_1 = *(g_5bda58 + 0x3ac4);
    int32_t item_18 = data_1;
    char* item_8 = &g_567c74;
    double item_10 = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}
