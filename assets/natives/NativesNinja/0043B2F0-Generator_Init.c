#include "0043B2F0-Generator_Init.h"
/* 0x0043b2f0 Generator_Init full linked: callers=1 callees=25 */
int32_t* Generator_Init()

{
    int32_t var_2c4 = 0;
    int16_t eax_1 = TaskType_Register("Generator", 0x2c0, sub_481340(), 0);
    g_53c2fc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_43b490);
    QTask_TriggerEvent(g_53c2fc, 1, Generator_LoadParameters);
    QTask_TriggerEvent(g_53c2fc, 2, sub_43b650);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53c2fc, eax_3, sub_43b680);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_2c8_1 = eax_4;
    eax_4 = g_53c2fc;
    QTask_RemoveEventCallback(eax_4, var_2c8_1, sub_43b690);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_53c2fc, eax_5, Generator_Setup);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_53c2fc, eax_6, Generator_Process);
    g_57bf3c = sub_4f1980(sub_481350(), 5);
    int32_t eax_9 = sub_4f0fd0();
    void var_2c0;
    void var_30;
    sub_4f1a80(g_57bf3c, &var_2c0, &var_30, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fd0();
    void var_20;
    sub_4f1a80(g_57bf3c, &var_2c0, &var_20, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fc0();
    void var_80;
    sub_4f1a80(g_57bf3c, &var_2c0, &var_80, eax_11, 7, 0);
    int32_t eax_12 = sub_4f1000();
    void var_c;
    sub_4f1a80(g_57bf3c, &var_2c0, &var_c, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0f50();
    void var_10;
    return sub_4f1a80(g_57bf3c, &var_2c0, &var_10, eax_13, 7, 0);
}
