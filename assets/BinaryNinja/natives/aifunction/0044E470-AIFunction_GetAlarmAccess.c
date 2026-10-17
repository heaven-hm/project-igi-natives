// Original IGI.EXE function: AIFunction_GetAlarmAccess (VA 0x0044E470; static CFG gate FAIL, CFG score 0.667).
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
