// Original IGI.EXE function: Radio_Init (VA 0x0043AD80; static CFG gate PASS, CFG score 1.000).
#include "Radio_Init.h"
int32_t* Radio_Init()

{
    int32_t item_2f8 = 0;
    int16_t data_1 = TaskType_Register("Radio", 0x2e8, FX_TrailUpdate(), 0);
    g_53c2e0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_43af20);
    QTask_TriggerEvent(g_53c2e0, 1, Radio_LoadParameters);
    QTask_TriggerEvent(g_53c2e0, 2, sub_43b110);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c2e0, data_3, sub_43b160);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_2fc_1 = data_4;
    data_4 = g_53c2e0;
    QTask_RemoveEventCallback(data_4, item_2fc_1, sub_43b170);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c2e0, data_5, Radio_Setup);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c2e0, data_6, Radio_Process);
    int32_t data_7 = AI_CheckHearing_25();
    int32_t item_2fc_4 = data_7;
    data_7 = g_53c2e0;
    QTask_RemoveEventCallback(data_7, item_2fc_4, sub_443dc0);
    g_57bef8 = Script_FormatString_7(FX_ExplosionSpawn_2(), 6);
    int32_t dest_val = 0;
    void item_54;
    void* context_val = &item_54;
    void item_2e8;

    for (char* i = &g_57befc; i < 0x57bf38; )
    {
        int32_t item_2f8_1 = dest_val;
        Game_DataSymbolLoad(i, "Radio sound %d");
        int32_t data_10 = Script_EvaluateCondition_3();
        Script_UndefinedParameterTy(g_57bef8, &item_2e8, context_val, data_10, 7, 0);
        i = &i[0xf];
        dest_val += 1;
        context_val += 0x10;
    }

    int32_t data_11 = Script_EvaluateCondition_3();
    void item_14;
    Script_UndefinedParameterTy(g_57bef8, &item_2e8, &item_14, data_11, 7, 0);
    int32_t data_12 = Script_CallNativeHandler_3();
    void item_a4;
    return Script_UndefinedParameterTy(g_57bef8, &item_2e8, &item_a4, data_12, 7, 0);
}
