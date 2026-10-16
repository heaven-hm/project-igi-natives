#include "0044E9B0-AIFunction_GetAlarmTriggerDistance.h"
/* 0x0044e9b0 AIFunction_GetAlarmTriggerDistance full linked: callers=0 callees=10 */
int32_t AIFunction_GetAlarmTriggerDistance(int32_t a1)

// Sig: float AIFunction_GetAlarmTriggerDistance()
// Note: RETURNS the distance between this AI and its bound ALARM TRIGGER
// (Real). Takes no args. Use to decide running vs fighting for the alarm.
{
    struct ai_ctx* eax_10 = g_5bda58;
    int32_t eax;
    eax = eax_10->pad[0x3ac0];
    *(&eax + 1) = eax_10->pad[0x3ac1];
    *(&eax + 2) = eax_10->pad[0x3ac2];
    *(&eax + 3) = eax_10->pad[0x3ac3];
    int32_t var_18;

    if (eax == 0xffffffff)
    {
        var_18 = 0xffffffff;
        int32_t var_10_1 = 0;
        int32_t var_c = 0xbff00000;
        char* var_8 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    void* eax_2 = sub_4f1030(eax);
    char* var_30;

    if (!eax_2)
    {
        struct ai_ctx* ecx = g_5bda58;
        int32_t edx;
        edx = ecx->pad[0x3ac0];
        *(&edx + 1) = ecx->pad[0x3ac1];
        *(&edx + 2) = ecx->pad[0x3ac2];
        *(&edx + 3) = ecx->pad[0x3ac3];
        int32_t var_2c_1 = edx;
        var_30 = "AlarmTrigger ID #%d not defined";
        Warning_Show(var_30);
        var_18 = 0xffffffff;
        void* var_10_2 = eax_2;
        int32_t var_c_1 = 0xbff00000;
        char* var_8_1 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    char* eax_4 = sub_4c48c0();
    int16_t var_2c_2 = eax_4;
    eax_4 = *(eax_2 + 0x1c);
    var_30 = eax_4;

    if (TaskType_IsDerivedFrom(var_30, var_2c_2))
    {
        var_30 = &g_5bda58->pad[0x20];
        var_18 = sub_4b32b0(var_30, eax_2 + 0x20);
        int32_t var_10;
        var_10 = sub_4b32b0(&g_5bda58->pad[0x20], eax_2 + 0x20);
        char* var_8_3 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    var_18 = 0xffffffff;
    int32_t var_10_3 = 0;
    int32_t var_c_2 = 0xbff00000;
    char* var_8_2 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
