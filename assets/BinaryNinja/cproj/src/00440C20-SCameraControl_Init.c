#include "gi_platform.h"
#include "00440C20-SCameraControl_Init.h"
int32_t* SCameraControl_Init()

{
    int32_t v_2fc = 0;
    int16_t valA1 = TaskType_Register("SCameraControl", 0x2f8, Env_UpdateCameraLens_3(), 0);
    g_57c174 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_440d30);
    QTask_TriggerEvent(g_57c174, 1, SCameraControl_LoadParameters);
    QTask_TriggerEvent(g_57c174, 2, sub_440de0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c174, valA3, sub_440e40);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_300_1 = valA4;
    valA4 = g_57c174;
    QTask_RemoveEventCallback(valA4, v_300_1, sub_440e50);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c174, valA5, SCameraControl_Setup);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c174, valA6, SCameraControl_Process);
    g_57c170 = Script_FormatString_7(Env_CheckAmbientArea_3(), 1);
    int32_t valA9 = Script_CallNativeHandler_3();
    char v_2f8;
    char v_54;
    return Script_UndefinedParameterTy(g_57c170, &v_2f8, &v_54, valA9, 7, 0);
}
