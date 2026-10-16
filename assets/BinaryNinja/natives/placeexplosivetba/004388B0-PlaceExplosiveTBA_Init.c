#include "PlaceExplosiveTBA_Init.h"
int32_t* PlaceExplosiveTBA_Init()

{
    int32_t v_2b4 = 0;
    int16_t valA1 = TaskType_Register("PlaceExplosiveTBA", 0x2b0, Env_InitLadder_10(), 0);
    g_53c1dc = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4389a0);
    int32_t valA2 = Script_ParseEnumInt32_8();
    int32_t v_2b8 = valA2;
    valA2 = g_53c1dc;
    QTask_RemoveEventCallback(valA2, v_2b8, sub_438c00);
    int32_t valA3 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_53c1dc, valA3, PlaceExplosiveTBA_LoadParameters);
    int32_t valA4 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c1dc, valA4, sub_438bf0);
    g_57be8c = Script_FormatString_7(Env_TriggerAlarm_10(), 2);
    int32_t valA7 = Script_EvaluateCondition_2();
    void v_2b0;
    void v_8;
    Script_UndefinedParameterTy(g_57be8c, &v_2b0, &v_8, valA7, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    void v_4;
    return Script_UndefinedParameterTy(g_57be8c, &v_2b0, &v_4, valA8, 7, 0);
}
