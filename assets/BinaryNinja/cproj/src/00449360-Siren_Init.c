#include "gi_platform.h"
#include "00449360-Siren_Init.h"
int32_t* Siren_Init()

{
    int32_t v_2dc = 0;
    int16_t valA1 = TaskType_Register("Siren", 0x2d8, FX_TrailUpdate(), 0);
    g_57c214 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4492a0);
    QTask_TriggerEvent(g_57c214, 1, Siren_LoadParameters);
    QTask_TriggerEvent(g_57c214, 2, sub_449330);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c214, valA3, sub_449600);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_2e0_1 = valA4;
    valA4 = g_57c214;
    QTask_RemoveEventCallback(valA4, v_2e0_1, sub_449610);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c214, valA5, Siren_Setup);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c214, valA6, Siren_Process);
    int32_t valA7 = SoundSys_SetFrequency_5();
    int32_t v_2e0_4 = valA7;
    valA7 = g_57c214;
    QTask_RemoveEventCallback(valA7, v_2e0_4, sub_4497b0);
    g_57c21c = Script_FormatString_7(FX_ExplosionSpawn_2(), 3);
    int32_t valA10 = Script_FormatString_3();
    char v_2d8;
    char v_a0;
    Script_UndefinedParameterTy(g_57c21c, &v_2d8, &v_a0, valA10, 7, 0);
    int32_t valA12 = Script_FormatString_3();
    char v_80;
    Script_UndefinedParameterTy(g_57c21c, &v_2d8, &v_80, valA12, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    char v_60;
    return Script_UndefinedParameterTy(g_57c21c, &v_2d8, &v_60, valA14, 7, 0);
}
