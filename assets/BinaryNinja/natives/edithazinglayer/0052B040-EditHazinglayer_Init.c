#include "EditHazinglayer_Init.h"
int32_t* EditHazinglayer_Init()

{
    int32_t v_8c = 0;
    int16_t valA1 = TaskType_Register("EditHazinglayer", 0x88, EditorRigidObj_OnEvent(), 0);
    g_a84398 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_52afe0);
    QTask_RemoveEventCallback(g_a84398, 7, 0);
    QTask_TriggerEvent(g_a84398, 2, sub_52b1c0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a84398, valA3, sub_52b2f0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_90_1 = valA4;
    valA4 = g_a84398;
    QTask_RemoveEventCallback(valA4, v_90_1, EditHazinglayer_LoadParameters);
    int32_t valA5 = SoundSys_AttachLipsync_2();
    QTask_RemoveEventCallback(g_a84398, valA5, sub_52bfe0);
    g_a8439c = Script_EvaluateCondition_7(5);
    int32_t valA7 = Script_ParseEnumReal32_4();
    void v_88;
    void v_60;
    Script_UndefinedParameterTy(g_a8439c, &v_88, &v_60, valA7, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    void v_18;
    Script_UndefinedParameterTy(g_a8439c, &v_88, &v_18, valA8, 7, 0);
    int32_t valA9 = Script_EvaluateCondition_2();
    void v_14;
    Script_UndefinedParameterTy(g_a8439c, &v_88, &v_14, valA9, 7, 0);
    int32_t valA10 = Script_ParseEnumInt32_3();
    void v_10;
    Script_UndefinedParameterTy(g_a8439c, &v_88, &v_10, valA10, 7, 0);
    int32_t valA11 = Script_ParseEnumInt32_3();
    void v_8;
    return Script_UndefinedParameterTy(g_a8439c, &v_88, &v_8, valA11, 7, 0);
}
