// Original IGI.EXE function: AIFunction_GetAlarmControlStatus (VA 0x0044E4F0; static CFG gate PASS, CFG score 0.857).
#include "AIFunction_GetAlarmControlStatus.h"
int32_t AIFunction_GetAlarmControlStatus(int32_t context)

// Sig: int AIFunction_GetAlarmControlStatus()
// Note: RETURNS the status/state of the bound alarm control (raised/used state
// as tracked by the engine). Takes no args.
{
    int32_t data_val = *(g_5bda58 + 0x3ac4);
    int32_t item_18;

    if (data_val == 0xffffffff)
    {
        item_18 = 0;
        int32_t item_10_1 = 0;
        int32_t item_c = 0;
        char* item_8 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    int32_t data_2 = Script_ExecuteLevelScript_4(data_val);

    if (data_2)
    {
        item_18 = Env_ActivateEntity(data_2);
        int32_t item_10;
        item_10 = Env_ActivateEntity(data_2);
        char* item_8_2 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    int32_t item_28_1 = *(g_5bda58 + 0x3ac4);
    Warning_Show("AlarmControl ID #%d not defined");
    item_18 = data_2;
    int32_t item_10_2 = data_2;
    int32_t item_c_1 = data_2;
    char* item_8_1 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
