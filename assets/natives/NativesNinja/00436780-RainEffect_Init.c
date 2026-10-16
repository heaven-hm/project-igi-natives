#include "00436780-RainEffect_Init.h"
/* 0x00436780 RainEffect_Init full linked: callers=1 callees=25 */
char* RainEffect_Init()

{
    g_57bd98 = 0x40a00000;
    g_57bd9c = 0x43160000;
    g_57bd90 = 0;
    int32_t var_8c = 0;
    g_57bd94 = 0x3f800000;
    int16_t eax_1 = TaskType_Register("RainEffect", 0x88, QTask_OpenEvent_2(), 0);
    g_57bd84 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_436950);
    QTask_TriggerEvent(g_57bd84, 2, sub_4369e0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57bd84, eax_3, sub_436a40);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_57bd84, eax_4, RainEffect_LoadParameters);
    QTask_TriggerEvent(g_57bd84, 1, RainEffect_Setup);
    int32_t eax_6 = sub_4f1210();
    QTask_TriggerEvent(g_57bd84, eax_6, sub_4d3710);
    int32_t eax_7 = sub_4f1220();
    QTask_TriggerEvent(g_57bd84, eax_7, sub_4d3710);
    g_57bd88 = sub_4f1950(5);
    int32_t eax_9 = sub_4f1000();
    void var_88;
    void var_64;
    sub_4f1a80(g_57bd88, &var_88, &var_64, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0f50();
    void var_60;
    sub_4f1a80(g_57bd88, &var_88, &var_60, eax_10, 7, &g_57bd98);
    int32_t eax_11 = sub_4f0f50();
    void var_5c;
    sub_4f1a80(g_57bd88, &var_88, &var_5c, eax_11, 7, &g_57bd98);
    int32_t eax_12 = sub_4f0fc0();
    void var_50;
    sub_4f1a80(g_57bd88, &var_88, &var_50, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0f50();
    void var_58;
    sub_4f1a80(g_57bd88, &var_88, &var_58, eax_13, 7, &g_57bd90);
    char* result = Level_LoadLevel_5("snow.tex");
    g_57bd80 = result;
    return result;
}
