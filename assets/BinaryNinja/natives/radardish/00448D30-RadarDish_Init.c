// Original IGI.EXE function: RadarDish_Init (VA 0x00448D30; static CFG gate PASS, CFG score 1.000).
#include "RadarDish_Init.h"
void* RadarDish_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("RadarDish", 0x180, MagicObj_GetTypeId(), 0);
    g_57c20c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_448b70);
    QTask_TriggerEvent(g_57c20c, 1, RadarDish_LoadParameters);
    QTask_TriggerEvent(g_57c20c, 2, RadarDish_Setup);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57c20c, data_3, sub_449180);
    int32_t data_4 = DynObj_RemoveSymbol_5();
    int32_t item_8_1 = data_4;
    data_4 = g_57c20c;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_449220);
    int32_t data_5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57c20c, data_5, sub_4efcd0);
    int32_t data_6 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c20c, data_6, sub_449260);
    int32_t data_7 = SoundSys_SetFrequency_5();
    int32_t item_8_4 = data_7;
    data_7 = g_57c20c;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_449270);
    return TaskType_Set("TASKTYPE_RADARDISH", *g_57c20c);
}
