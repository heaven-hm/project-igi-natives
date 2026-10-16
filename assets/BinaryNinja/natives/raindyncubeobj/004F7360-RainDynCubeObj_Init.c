#include "RainDynCubeObj_Init.h"
❓  int32_t RainDynCubeObj_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x4290);
    int32_t v_8 = 0;
    int16_t valA1 = TaskType_Register("RainDynCubeObj", 0x4290, g_54875c, 0);
    g_54e2cc = valA1;
    QTask_RemoveEventCallback(valA1, 0, RainDynCubeObj_LoadParameters);
    QTask_TriggerEvent(g_54e2cc, 1, RainDynCubeObj_Setup);
    QTask_TriggerEvent(g_54e2cc, 2, RainDynCubeObj_Process);
    QTask_RemoveEventCallback(g_54e2cc, 4, RainDynCubeObj_Update);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54e2cc, valA3, RainDynCubeObj_OnEvent);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54e2cc, valA4, sub_4f7620);
    QTask_RemoveEventCallback(g_54e2cc, 7, sub_4f71f0);
    g_a76ccc = Script_EvaluateCondition_7(0xf);
    int32_t valA7 = Script_ParseEnumReal32_4();
    void arg_2c20;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2c20, valA7, 7, 0);
    int32_t valA9 = Script_ParseEnumInt32_3();
    void arg_2c38;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2c38, valA9, 7, 0);
    int32_t valA11 = Script_ParseEnumInt32_3();
    void arg_2c40;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2c40, valA11, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_2();
    void arg_2c98;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2c98, valA13, 7, 0);
    int32_t valA15 = Script_EvaluateCondition_2();
    void arg_2c9c;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2c9c, valA15, 7, 0);
    int32_t valA17 = Script_EvaluateCondition_2();
    void arg_2ca0;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2ca0, valA17, 7, 0);
    int32_t valA19 = Script_EvaluateCondition_2();
    void arg_2c6c;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2c6c, valA19, 7, 0);
    int32_t valA21 = Script_EvaluateCondition_2();
    void arg_2c70;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2c70, valA21, 7, 0);
    int32_t valA23 = Script_EvaluateCondition_2();
    void arg_2ca4;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2ca4, valA23, 7, 0);
    int32_t valA25 = Script_ParseEnumInt32_4();
    void arg_2cb4;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2cb4, valA25, 7, 0);
    int32_t valA27 = Script_CallNativeHandler_3();
    void arg_2cb8;
    Script_UndefinedParameterTy(g_a76ccc, &__return_addr, &arg_2cb8, valA27, 7, 0);
    int32_t valA29 = Display_RestoreDevice_14("Line");
    g_a76c8c = valA29;
    Display_SetGammaRamp_14(valA29, RainDynCubeObj_Action);
    Sys_ResolveSymbol_13(0xa76c90);
    Sys_OpenFileStream_14(0xa76c90, Timer_Now());
    __builtin_memset(&g_a76ca4, 0, 0x20);
    g_a76c9c = 0;
    return 0;
}
