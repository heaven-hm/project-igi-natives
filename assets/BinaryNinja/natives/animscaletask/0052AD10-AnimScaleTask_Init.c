// Original IGI.EXE function: AnimScaleTask_Init (VA 0x0052AD10; static CFG gate PASS, CFG score 1.000).
#include "AnimScaleTask_Init.h"
❓  int32_t* AnimScaleTask_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x20168);
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("AnimScaleTask", 0x20168, Script_CallNativeHandler_15(), 0);
    g_54f68c = data_1;
    QTask_RemoveEventCallback(data_1, 0, AnimScaleTask_LoadParameters);
    QTask_TriggerEvent(g_54f68c, 1, AnimScaleTask_Setup);
    g_a84394 = Script_EvaluateCondition_7(0xa);
    int32_t data_4 = Script_ParseEnumReal32_4();
    void arg_20;
    Script_UndefinedParameterTy(g_a84394, &return_addr, &arg_20, data_4, 7, 0);
    int32_t data_6 = Script_SpawnNewTask_3();
    void arg_38;
    Script_UndefinedParameterTy(g_a84394, &return_addr, &arg_38, data_6, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void arg_2014c;
    Script_UndefinedParameterTy(g_a84394, &return_addr, &arg_2014c, data_8, 7, 0);
    int32_t data_10 = Script_SpawnNewTask_4();
    void arg_200f8;
    Script_UndefinedParameterTy(g_a84394, &return_addr, &arg_200f8, data_10, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_4();
    void arg_200f4;
    Script_UndefinedParameterTy(g_a84394, &return_addr, &arg_200f4, data_12, 7, 0);
    int32_t data_14 = Script_ExecuteLevelScript_15();
    return Script_UndefinedParameterTy(g_a84394, &return_addr, &return_addr, data_14, 7, 0);
}
