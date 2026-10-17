// IGI native provenance: AIFunction_GetAlarmAccess - 0x0044E470 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E470-AIFunction_GetAlarmAccess.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetAlarmAccess.h"
int32_t AIFunction_GetAlarmAccess(int32_t context)

// Sig: int AIFunction_GetAlarmAccess()
// Note: RETURNS the current AIALARMACCESS mode: BEFORECOMBAT=0, AFTERCOMBAT=1.
// Takes no args.
{
    int32_t data_1 = *(g_5bda58 + 0x3acc);
    int32_t item_18 = data_1;
    char* item_8 = &g_567c74;
    double item_10 = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}
