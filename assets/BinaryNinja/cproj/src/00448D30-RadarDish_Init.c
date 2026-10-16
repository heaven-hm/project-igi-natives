#include "gi_platform.h"
#include "00448D30-RadarDish_Init.h"
void* RadarDish_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("RadarDish", 0x180, MagicObj_GetTypeId(), 0);
    g_57c20c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_448b70);
    QTask_TriggerEvent(g_57c20c, 1, RadarDish_LoadParameters);
    QTask_TriggerEvent(g_57c20c, 2, RadarDish_Setup);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57c20c, valA3, sub_449180);
    int32_t valA4 = DynObj_RemoveSymbol_5();
    int32_t v_8_1 = valA4;
    valA4 = g_57c20c;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_449220);
    int32_t valA5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57c20c, valA5, sub_4efcd0);
    int32_t valA6 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c20c, valA6, sub_449260);
    int32_t valA7 = SoundSys_SetFrequency_5();
    int32_t v_8_4 = valA7;
    valA7 = g_57c20c;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_449270);
    return TaskType_Set("TASKTYPE_RADARDISH", *g_57c20c);
}
