#include "gi_platform.h"
#include "00505F60-TextureModifier_Init.h"
int32_t* TextureModifier_Init()

{
    Sys_ResolveSymbol_13(0xa7acf8);
    Sys_OpenFileStream_14(0xa7acf8, 0x19111911);
    int32_t v_100 = 0;
    int16_t valA1 = TaskType_Register("TextureModifier", 0xf0, g_54875c, 0);
    g_a7a8f0 = valA1;
    QTask_RemoveEventCallback(valA1, 0xd, sub_505f20);
    QTask_RemoveEventCallback(g_a7a8f0, 0, sub_505d50);
    QTask_RemoveEventCallback(g_a7a8f0, 0x10, sub_505ed0);
    QTask_TriggerEvent(g_a7a8f0, 2, sub_506240);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a8f0, valA3, sub_506290);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a7a8f0, valA4, TextureModifier_LoadParameters);
    QTask_RemoveEventCallback(g_a7a8f0, 0xa, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xb, 0);
    int32_t valA6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a7a8f0, valA6, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xc, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xf, sub_505e40);
    int32_t valA8 = SoundSys_AttachLipsync_2();
    QTask_RemoveEventCallback(g_a7a8f0, valA8, sub_4f64e0);
    QTask_RemoveEventCallback(g_a7a8f0, 8, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 4, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 5, 0);
    g_a7a8ec = Script_EvaluateCondition_7(9);
    int32_t valA11 = Script_ParseEnumReal32_4();
    char v_f0;
    char v_80;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_80, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumString_3();
    char v_38;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_38, valA12, 7, 0);
    int32_t valA13 = Script_ParseEnumString_3();
    char v_2c;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_2c, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumString_3();
    char v_34;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_34, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumString_3();
    char v_18;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_18, valA15, 7, 0);
    int32_t valA16 = Script_ParseEnumInt32_4();
    char v_20;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_20, valA16, 7, 0);
    int32_t valA17 = Script_SpawnNewTask_2();
    char v_1f;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_1f, valA17, 6, 0);
    int32_t valA18 = Script_SpawnNewTask_2();
    char v_10;
    Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_10, valA18, 6, 0);
    int32_t valA19 = Script_ParseEnumInt32_4();
    char v_1b;
    int32_t* result = Script_UndefinedParameterTy(g_a7a8ec, &v_f0, &v_1b, valA19, 6, 0);
    g_b97df8 = 0;
    return result;
}
