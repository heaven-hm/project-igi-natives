#include "004397C0-AlarmLight_Init.h"
/* 0x004397c0 AlarmLight_Init full linked: callers=1 callees=37 */
char* AlarmLight_Init()

{
    int32_t var_204 = 0;
    int16_t eax_1 = TaskType_Register("AlarmLight", 0x1f8, sub_4e0830(), 0);
    g_57bea2 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_43a0e0);
    QTask_TriggerEvent(g_57bea2, 1, AlarmLight_LoadParameters);
    QTask_TriggerEvent(g_57bea2, 2, AlarmLight_Setup);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57bea2, eax_3, sub_43a440);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_208_1 = eax_4;
    eax_4 = g_57bea2;
    QTask_RemoveEventCallback(eax_4, var_208_1, AlarmLight_Parsed);
    int32_t eax_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bea2, eax_5, sub_43a5e0);
    int32_t eax_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bea2, eax_6, AlarmLight_Update);
    int32_t eax_7 = sub_4f1210();
    int32_t var_208_4 = eax_7;
    eax_7 = g_57bea2;
    QTask_TriggerEvent(eax_7, var_208_4, AlarmLight_OnEvent);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_57bea2, eax_8, AlarmLight_Action);
    int32_t edx_2 = 0;
    edx_2 = g_57bea2;
    TaskType_Set("TASKTYPE_ALARMLIGHT", edx_2);
    g_57be9c = sub_4f1950(8);
    int32_t eax_10 = sub_4f1010();
    void var_1f8;
    void var_108;
    sub_4f1a80(g_57be9c, &var_1f8, &var_108, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f70();
    void var_f0;
    sub_4f1a80(g_57be9c, &var_1f8, &var_f0, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fc0();
    void var_54;
    sub_4f1a80(g_57be9c, &var_1f8, &var_54, eax_12, 7, 0);
    void var_c8;
    void* esi = &var_c8;
    int32_t i_2 = 3;
    int32_t i;

    do
    {
        int32_t eax_13 = sub_4f0fd0();
        sub_4f1a80(g_57be9c, &var_1f8, esi, eax_13, 7, 0);
        esi += 0x10;
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    void var_98;
    void* esi_1 = &var_98;
    int32_t i_3 = 2;
    int32_t i_1;

    do
    {
        int32_t eax_14 = sub_4f0fd0();
        sub_4f1a80(g_57be9c, &var_1f8, esi_1, eax_14, 7, 0);
        esi_1 += 0x20;
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    int32_t var_204_1 = 0;
    int16_t eax_17 = TaskType_Register("AlarmLightReflector", 0x140, MagicObj_GetTypeId(), 0);
    g_57bea0 = eax_17;
    QTask_RemoveEventCallback(eax_17, 0, AlarmLight_Cleanup);
    QTask_TriggerEvent(g_57bea0, 1, AlarmLight_Cleanup_2);
    QTask_TriggerEvent(g_57bea0, 2, sub_426860);
    QTask_RemoveEventCallback(g_57bea0, 4, AlarmLight_Cleanup_3);
    TaskType_Set("TASKTYPE_ALARMLIGHTREFLECTOR", *g_57bea0);
    char* result = Level_LoadObjects_6("alarmlight.spr");
    g_57bea4 = result;
    return result;
}
