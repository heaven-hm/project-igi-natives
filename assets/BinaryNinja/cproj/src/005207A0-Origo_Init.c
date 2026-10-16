#include "gi_platform.h"
#include "005207A0-Origo_Init.h"
int32_t* Origo_Init()

{
    int32_t v_134 = 0;
    int16_t valA1 = TaskType_Register("Origo", 0x130, DynObj_LookupHashItem_5(), 0);
    g_a83854 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_520730);
    QTask_RemoveEventCallback(g_a83854, 4, AnimSound_LoadParameters);
    QTask_RemoveEventCallback(g_a83854, 7, sub_520910);
    QTask_TriggerEvent(g_a83854, 2, sub_5209e0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_138 = valA3;
    valA3 = g_a83854;
    QTask_RemoveEventCallback(valA3, v_138, sub_520a00);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83854, valA4, sub_520a10);
    QTask_RemoveEventCallback(g_a83854, 0xa, 0);
    QTask_RemoveEventCallback(g_a83854, 0xb, 0);
    int32_t valA6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a83854, valA6, 0);
    QTask_RemoveEventCallback(g_a83854, 9, 0);
    QTask_RemoveEventCallback(g_a83854, 8, 0);
    QTask_RemoveEventCallback(g_a83854, 0xc, 0);
    int32_t valA8 = SoundSys_AttachLipsync_2();
    QTask_RemoveEventCallback(g_a83854, valA8, sub_52bfe0);
    g_a83850 = Script_EvaluateCondition_7(1);
    int32_t valA10 = Script_ParseEnumReal32_4();
    char v_130;
    char v_38;
    return Script_UndefinedParameterTy(g_a83850, &v_130, &v_38, valA10, 7, 0);
}
