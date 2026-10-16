#include "gi_platform.h"
#include "0052AD10-AnimScaleTask_Init.h"
  int32_t* AnimScaleTask_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x20168);
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("AnimScaleTask", 0x20168, Script_CallNativeHandler_15(), 0);
    g_54f68c = valA1;
    QTask_RemoveEventCallback(valA1, 0, AnimScaleTask_LoadParameters);
    QTask_TriggerEvent(g_54f68c, 1, AnimScaleTask_Setup);
    g_a84394 = Script_EvaluateCondition_7(0xa);
    int32_t valA4 = Script_ParseEnumReal32_4();
    char arg_20;
    Script_UndefinedParameterTy(g_a84394, &__return_addr, &arg_20, valA4, 7, 0);
    int32_t valA6 = Script_SpawnNewTask_3();
    char arg_38;
    Script_UndefinedParameterTy(g_a84394, &__return_addr, &arg_38, valA6, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    char arg_2014c;
    Script_UndefinedParameterTy(g_a84394, &__return_addr, &arg_2014c, valA8, 7, 0);
    int32_t valA10 = Script_SpawnNewTask_4();
    char arg_200f8;
    Script_UndefinedParameterTy(g_a84394, &__return_addr, &arg_200f8, valA10, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_4();
    char arg_200f4;
    Script_UndefinedParameterTy(g_a84394, &__return_addr, &arg_200f4, valA12, 7, 0);
    int32_t valA14 = Script_ExecuteLevelScript_15();
    return Script_UndefinedParameterTy(g_a84394, &__return_addr, &__return_addr, valA14, 7, 0);
}
