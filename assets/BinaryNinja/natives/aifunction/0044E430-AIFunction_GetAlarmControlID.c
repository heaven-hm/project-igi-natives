// Original IGI.EXE function: AIFunction_GetAlarmControlID (VA 0x0044E430; static CFG gate FAIL, CFG score 0.667).
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
