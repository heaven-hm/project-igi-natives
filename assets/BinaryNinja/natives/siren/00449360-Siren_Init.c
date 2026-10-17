// Original IGI.EXE function: Siren_Init (VA 0x00449360; static CFG gate PASS, CFG score 1.000).
#include "Siren_Init.h"
int32_t* Siren_Init()

{
    int32_t item_2dc = 0;
    int16_t data_1 = TaskType_Register("Siren", 0x2d8, FX_TrailUpdate(), 0);
    g_57c214 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4492a0);
    QTask_TriggerEvent(g_57c214, 1, Siren_LoadParameters);
    QTask_TriggerEvent(g_57c214, 2, sub_449330);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c214, data_3, sub_449600);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_2e0_1 = data_4;
    data_4 = g_57c214;
    QTask_RemoveEventCallback(data_4, item_2e0_1, sub_449610);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c214, data_5, Siren_Setup);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c214, data_6, Siren_Process);
    int32_t data_7 = SoundSys_SetFrequency_5();
    int32_t item_2e0_4 = data_7;
    data_7 = g_57c214;
    QTask_RemoveEventCallback(data_7, item_2e0_4, sub_4497b0);
    g_57c21c = Script_FormatString_7(FX_ExplosionSpawn_2(), 3);
    int32_t data_10 = Script_FormatString_3();
    void item_2d8;
    void item_a0;
    Script_UndefinedParameterTy(g_57c21c, &item_2d8, &item_a0, data_10, 7, 0);
    int32_t data_12 = Script_FormatString_3();
    void item_80;
    Script_UndefinedParameterTy(g_57c21c, &item_2d8, &item_80, data_12, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_60;
    return Script_UndefinedParameterTy(g_57c21c, &item_2d8, &item_60, data_14, 7, 0);
}
