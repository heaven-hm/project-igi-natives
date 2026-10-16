#include "GlobalLight_Init.h"
int32_t* GlobalLight_Init()

{
    int32_t v_1e4 = 0;
    g_a8408c = TaskType_Register("GlobalLight", 0x1b8, QTask_OpenEvent_2(), 0);
    int32_t v_1e4_1 = 0;
    g_a84374 = TaskType_Register("GlobalLightKeyframe", 0x1a4, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a8408c, 0, sub_5280e0);
    QTask_TriggerEvent(g_a8408c, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a8408c, 2, sub_528160);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_1e8 = valA4;
    valA4 = g_a8408c;
    QTask_RemoveEventCallback(valA4, v_1e8, sub_528170);
    int32_t valA5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a8408c, valA5, GlobalLight_Setup);
    QTask_RemoveEventCallback(g_a84374, 0, sub_528260);
    QTask_TriggerEvent(g_a84374, 2, sub_528400);
    int32_t valA7 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a84374, valA7, sub_5283f0);
    int32_t valA8 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a84374, valA8, GlobalLight_Process);
    g_a84088 = Script_EvaluateCondition_7(6);
    int32_t valA10 = Script_EvaluateCondition_2();
    void v_1b8;
    void v_170;
    Script_UndefinedParameterTy(g_a84088, &v_1b8, &v_170, valA10, 7, 0);
    int32_t valA11 = Script_CallNativeHandler_2();
    void v_20;
    Script_UndefinedParameterTy(g_a84088, &v_1b8, &v_20, valA11, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_2();
    void v_14;
    Script_UndefinedParameterTy(g_a84088, &v_1b8, &v_14, valA12, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_2();
    void v_8;
    Script_UndefinedParameterTy(g_a84088, &v_1b8, &v_8, valA13, 7, 0x534ca0);
    int32_t valA14 = Script_SpawnNewTask_2();
    void v_3;
    Script_UndefinedParameterTy(g_a84088, &v_1b8, &v_3, valA14, 6, 0);
    int32_t valA15 = Script_SpawnNewTask_2();
    void v_4;
    Script_UndefinedParameterTy(g_a84088, &v_1b8, &v_4, valA15, 6, 0);
    g_a83f44 = Script_EvaluateCondition_7(0x28);
    int32_t valA17 = Script_SpawnNewTask_2();
    Script_UndefinedParameterTy(g_a83f44, 0xa84130, 0xa842d0, valA17, 7, 0);

    for (int32_t i = 0; i < 5; i += 1)
    {
        int32_t v_1d8;

        if (i)
        {
            int32_t i_1 = i;
            Game_DataSymbolLoad(&v_1d8, "object category %d");
        }
        else
        {
            v_1d8 = g_54f170[0];
            int32_t v_1d4_1 = g_54f170[4][0];
        }

        int32_t srcS2 = i << 5;
        int32_t* v_1e4_2 = &v_1d8;
        Game_DataSymbolLoad(srcS2 + 0xa83e00, "Ambient color %s");
        int32_t* v_1f0_6 = &v_1d8;
        Game_DataSymbolLoad(srcS2 + 0xa842d4, "Fog color %s");
        int32_t* v_1fc_1 = &v_1d8;
        Game_DataSymbolLoad(srcS2 + 0xa83fe8, "Fog density %s");
        int32_t* v_208_1 = &v_1d8;
        Game_DataSymbolLoad(srcS2 + 0xa83ea4, "Scale R %s");
        int32_t* v_214_1 = &v_1d8;
        Game_DataSymbolLoad(srcS2 + 0xa83f48, "Scale G %s");
        int32_t* v_220_1 = &v_1d8;
        Game_DataSymbolLoad(srcS2 + 0xa84090, "Scale B %s");
        int32_t* v_1e4_3 = &v_1d8;
        Game_DataSymbolLoad(srcS2 + 0xa83d60, "Link setting %s");
        int32_t srcS6 = i * 0x44;
        int32_t valA21 = Script_CallNativeHandler_2();
        Script_UndefinedParameterTy(g_a83f44, 0xa84130, srcS6 + 0xa8417c, valA21, 7, 0);
        int32_t valA23 = Script_CallNativeHandler_2();
        Script_UndefinedParameterTy(g_a83f44, 0xa84130, srcS6 + 0xa84188, valA23, 7, 0);
        int32_t valA25 = Script_EvaluateCondition_2();
        Script_UndefinedParameterTy(g_a83f44, 0xa84130, srcS6 + 0xa84194, valA25, 7, 0);
        int32_t valA26 = Script_ParseEnumString_3();
        Script_UndefinedParameterTy(g_a83f44, 0xa84130, srcS6 + 0xa841bc, valA26, 7, 0);
    }

    int32_t valA28 = Script_CallNativeHandler_2();
    Script_UndefinedParameterTy(g_a83f44, 0xa84130, 0xa84150, valA28, 7, 0);
    int32_t valA29 = Script_CallNativeHandler_2();
    Script_UndefinedParameterTy(g_a83f44, 0xa84130, 0xa8415c, valA29, 7, 0);
    int32_t valA31 = Script_CallNativeHandler_2();
    Script_UndefinedParameterTy(g_a83f44, 0xa84130, 0xa84168, valA31, 7, 0);
    int32_t valA32 = Script_EvaluateCondition_2();
    Script_UndefinedParameterTy(g_a83f44, 0xa84130, 0xa84174, valA32, 7, 0);
    return SoundSys_InitSoundSys_13(AIGraph_LoadParameters);
}
