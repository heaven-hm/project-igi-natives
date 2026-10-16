#include "gi_platform.h"
#include "0044E9B0-AIFunction_GetAlarmTriggerDistance.h"
int32_t AIFunction_GetAlarmTriggerDistance(int32_t a1)

// Sig: float AIFunction_GetAlarmTriggerDistance()
// Note: RETURNS the distance between this AI and its bound ALARM TRIGGER
// (Real). Takes no args. Use to decide running vs fighting for the alarm.
{
    int32_t valA = *(g_5bda58 + 0x3ac0);
    int32_t v_18;

    if (valA == 0xffffffff)
    {
        v_18 = 0xffffffff;
        int32_t v_10_1 = 0;
        int32_t v_c = 0xbff00000;
        char* v_8 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    void* valA2 = Script_ExecuteLevelScript_4(valA);
    char* v_30;

    if (!valA2)
    {
        int32_t v_2c_1 = *(g_5bda58 + 0x3ac0);
        v_30 = "AlarmTrigger ID #%d not defined";
        Warning_Show(v_30);
        v_18 = 0xffffffff;
        void* v_10_2 = valA2;
        int32_t v_c_1 = 0xbff00000;
        char* v_8_1 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    char* valA4 = DynObj_LookupHashItem_5();
    int16_t v_2c_2 = valA4;
    valA4 = *(valA2 + 0x1c);
    v_30 = valA4;

    if (!TaskType_IsDerivedFrom(v_30, v_2c_2))
    {
        v_18 = 0xffffffff;
        int32_t v_10_3 = 0;
        int32_t v_c_2 = 0xbff00000;
        char* v_8_2 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    v_30 = g_5bda58 + 0x20;
    int80_t fp0 = Sys_DispatchOpcode_11(v_30, valA2 + 0x20);
    double* valA8 = g_5bda58 + 0x20;
    v_18 = fp0;
    int32_t v_10;
    v_10 = Sys_DispatchOpcode_11(valA8, valA2 + 0x20);
    char* v_8_3 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
