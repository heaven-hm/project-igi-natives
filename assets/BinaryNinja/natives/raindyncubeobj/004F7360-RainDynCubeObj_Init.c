// Original IGI.EXE function: RainDynCubeObj_Init (VA 0x004F7360; static CFG gate PASS, CFG score 0.992).
#include "RainDynCubeObj_Init.h"
❓  int32_t RainDynCubeObj_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x4290);
    int32_t item_8 = 0;
    int16_t data_1 = TaskType_Register("RainDynCubeObj", 0x4290, g_54875c, 0);
    g_54e2cc = data_1;
    QTask_RemoveEventCallback(data_1, 0, RainDynCubeObj_LoadParameters);
    QTask_TriggerEvent(g_54e2cc, 1, RainDynCubeObj_Setup);
    QTask_TriggerEvent(g_54e2cc, 2, RainDynCubeObj_Process);
    QTask_RemoveEventCallback(g_54e2cc, 4, RainDynCubeObj_Update);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54e2cc, data_3, RainDynCubeObj_OnEvent);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54e2cc, data_4, sub_4f7620);
    QTask_RemoveEventCallback(g_54e2cc, 7, sub_4f71f0);
    g_a76ccc = Script_EvaluateCondition_7(0xf);
    int32_t data_7 = Script_ParseEnumReal32_4();
    void arg_2c20;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2c20, data_7, 7, 0);
    int32_t data_9 = Script_ParseEnumInt32_3();
    void arg_2c38;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2c38, data_9, 7, 0);
    int32_t data_11 = Script_ParseEnumInt32_3();
    void arg_2c40;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2c40, data_11, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_2();
    void arg_2c98;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2c98, data_13, 7, 0);
    int32_t data_15 = Script_EvaluateCondition_2();
    void arg_2c9c;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2c9c, data_15, 7, 0);
    int32_t data_17 = Script_EvaluateCondition_2();
    void arg_2ca0;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2ca0, data_17, 7, 0);
    int32_t data_19 = Script_EvaluateCondition_2();
    void arg_2c6c;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2c6c, data_19, 7, 0);
    int32_t data_21 = Script_EvaluateCondition_2();
    void arg_2c70;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2c70, data_21, 7, 0);
    int32_t data_23 = Script_EvaluateCondition_2();
    void arg_2ca4;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2ca4, data_23, 7, 0);
    int32_t data_25 = Script_ParseEnumInt32_4();
    void arg_2cb4;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2cb4, data_25, 7, 0);
    int32_t data_27 = Script_CallNativeHandler_3();
    void arg_2cb8;
    Script_UndefinedParameterTy(g_a76ccc, &return_addr, &arg_2cb8, data_27, 7, 0);
    int32_t data_29 = Display_RestoreDevice_14("Line");
    g_a76c8c = data_29;
    Display_SetGammaRamp_14(data_29, RainDynCubeObj_Action);
    Sys_ResolveSymbol_13(0xa76c90);
    Sys_OpenFileStream_14(0xa76c90, Timer_Now());
    memset(&g_a76ca4, 0, 0x20);
    g_a76c9c = 0;
    return 0;
}
