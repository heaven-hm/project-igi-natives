// Original IGI.EXE function: PlaceExplosiveTBA_Init (VA 0x004388B0; static CFG gate PASS, CFG score 1.000).
#include "PlaceExplosiveTBA_Init.h"
int32_t* PlaceExplosiveTBA_Init()

{
    int32_t item_2b4 = 0;
    int16_t data_1 = TaskType_Register("PlaceExplosiveTBA", 0x2b0, Env_InitLadder_10(), 0);
    g_53c1dc = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4389a0);
    int32_t data_2 = Script_ParseEnumInt32_8();
    int32_t item_2b8 = data_2;
    data_2 = g_53c1dc;
    QTask_RemoveEventCallback(data_2, item_2b8, sub_438c00);
    int32_t data_3 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_53c1dc, data_3, PlaceExplosiveTBA_LoadParameters);
    int32_t data_4 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c1dc, data_4, sub_438bf0);
    g_57be8c = Script_FormatString_7(Env_TriggerAlarm_10(), 2);
    int32_t data_7 = Script_EvaluateCondition_2();
    void item_2b0;
    void item_8;
    Script_UndefinedParameterTy(g_57be8c, &item_2b0, &item_8, data_7, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_4;
    return Script_UndefinedParameterTy(g_57be8c, &item_2b0, &item_4, data_8, 7, 0);
}
