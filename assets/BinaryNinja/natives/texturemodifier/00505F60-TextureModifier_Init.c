// Original IGI.EXE function: TextureModifier_Init (VA 0x00505F60; static CFG gate PASS, CFG score 1.000).
#include "TextureModifier_Init.h"
int32_t* TextureModifier_Init()

{
    Sys_ResolveSymbol_13(0xa7acf8);
    Sys_OpenFileStream_14(0xa7acf8, 0x19111911);
    int32_t item_100 = 0;
    int16_t data_1 = TaskType_Register("TextureModifier", 0xf0, g_54875c, 0);
    g_a7a8f0 = data_1;
    QTask_RemoveEventCallback(data_1, 0xd, sub_505f20);
    QTask_RemoveEventCallback(g_a7a8f0, 0, sub_505d50);
    QTask_RemoveEventCallback(g_a7a8f0, 0x10, sub_505ed0);
    QTask_TriggerEvent(g_a7a8f0, 2, sub_506240);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a8f0, data_3, sub_506290);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a7a8f0, data_4, TextureModifier_LoadParameters);
    QTask_RemoveEventCallback(g_a7a8f0, 0xa, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xb, 0);
    int32_t data_6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a7a8f0, data_6, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xc, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xf, sub_505e40);
    int32_t data_8 = SoundSys_AttachLipsync_2();
    QTask_RemoveEventCallback(g_a7a8f0, data_8, sub_4f64e0);
    QTask_RemoveEventCallback(g_a7a8f0, 8, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 4, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 5, 0);
    g_a7a8ec = Script_EvaluateCondition_7(9);
    int32_t data_11 = Script_ParseEnumReal32_4();
    void item_f0;
    void item_80;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_80, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_38;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_38, data_12, 7, 0);
    int32_t data_13 = Script_ParseEnumString_3();
    void item_2c;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_2c, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void item_34;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_34, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumString_3();
    void item_18;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_18, data_15, 7, 0);
    int32_t data_16 = Script_ParseEnumInt32_4();
    void item_20;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_20, data_16, 7, 0);
    int32_t data_17 = Script_SpawnNewTask_2();
    void item_1f;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_1f, data_17, 6, 0);
    int32_t data_18 = Script_SpawnNewTask_2();
    void item_10;
    Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_10, data_18, 6, 0);
    int32_t data_19 = Script_ParseEnumInt32_4();
    void item_1b;
    int32_t* result = Script_UndefinedParameterTy(g_a7a8ec, &item_f0, &item_1b, data_19, 6, 0);
    g_b97df8 = 0;
    return result;
}
