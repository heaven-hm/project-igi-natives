// IGI native provenance: AIFunction_GetAlarmTriggerDistance - 0x0044E9B0 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044E9B0-AIFunction_GetAlarmTriggerDistance.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetAlarmTriggerDistance.h"
int32_t AIFunction_GetAlarmTriggerDistance(int32_t context)

// Sig: float AIFunction_GetAlarmTriggerDistance()
// Note: RETURNS the distance between this AI and its bound ALARM TRIGGER
// (Real). Takes no args. Use to decide running vs fighting for the alarm.
{
    int32_t data_val = *(g_5bda58 + 0x3ac0);
    int32_t item_18;

    if (data_val == 0xffffffff)
    {
        item_18 = 0xffffffff;
        int32_t item_10_1 = 0;
        int32_t item_c = 0xbff00000;
        char* item_8 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    void* data_2 = Script_ExecuteLevelScript_4(data_val);
    char* item_30;

    if (!data_2)
    {
        int32_t item_2c_1 = *(g_5bda58 + 0x3ac0);
        item_30 = "AlarmTrigger ID #%d not defined";
        Warning_Show(item_30);
        item_18 = 0xffffffff;
        void* item_10_2 = data_2;
        int32_t item_c_1 = 0xbff00000;
        char* item_8_1 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    char* data_4 = DynObj_LookupHashItem_5();
    int16_t item_2c_2 = data_4;
    data_4 = *(data_2 + 0x1c);
    item_30 = data_4;

    if (!TaskType_IsDerivedFrom(item_30, item_2c_2))
    {
        item_18 = 0xffffffff;
        int32_t item_10_3 = 0;
        int32_t item_c_2 = 0xbff00000;
        char* item_8_2 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    item_30 = g_5bda58 + 0x20;
    long double fp0 = Sys_DispatchOpcode_11(item_30, data_2 + 0x20);
    double* data_8 = g_5bda58 + 0x20;
    item_18 = fp0;
    int32_t item_10;
    item_10 = Sys_DispatchOpcode_11(data_8, data_2 + 0x20);
    char* item_8_3 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
