// Original IGI.EXE function: Water_Init (VA 0x00518EF0; static CFG gate PASS, CFG score 0.992).
#include "Water_Init.h"
int32_t* Water_Init()

{
    Camera_UpdateTransform_5(0x4c48);
    g_a81020 = 0;

    for (int32_t* i = &g_a80430; i < 0xa81030; i = &i[0xc])
    {
        i[-0xa] = 0xffffffff;
        *i = 0;
        memset(&i[-8], 0, 0x18);
    }

    int32_t item_10 = 0;
    int16_t data_1 = TaskType_Register("Water", 0x4c48, DynObj_LookupHashItem_5(), 0);
    g_a81014 = data_1;
    QTask_RemoveEventCallback(data_1, 0xf, sub_518b00);
    QTask_RemoveEventCallback(g_a81014, 0x10, sub_518b40);
    QTask_RemoveEventCallback(g_a81014, 0, sub_518b90);
    QTask_TriggerEvent(g_a81014, 1, sub_518c90);
    QTask_RemoveEventCallback(g_a81014, 4, sub_518a00);
    QTask_RemoveEventCallback(g_a81014, 5, sub_518ab0);
    QTask_RemoveEventCallback(g_a81014, 7, sub_519220);
    QTask_TriggerEvent(g_a81014, 2, sub_5191e0);
    int32_t data_5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a81014, data_5, sub_519210);
    int32_t data_6 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a81014, data_6, Water_LoadParameters);
    QTask_RemoveEventCallback(g_a81014, 0xa, Water_Setup);
    QTask_RemoveEventCallback(g_a81014, 0xb, sub_518e50);
    int32_t data_8 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a81014, data_8, 0);
    QTask_RemoveEventCallback(g_a81014, 9, 0);
    QTask_RemoveEventCallback(g_a81014, 0xc, 0);
    int32_t data_10 = SoundSys_PlaySoundSample_3();
    QTask_RemoveEventCallback(g_a81014, data_10, Water_Process);
    QTask_DispatchEvent_3(0x40000000);
    QTask_RegisterEventCallback_3(g_a81014, 0x40000000);
    g_a80304 = Script_EvaluateCondition_7(0x10);
    g_a80300 = Script_UnableToAllocatePara("WaterLevel", Script_EvaluateCondition_2());
    int32_t data_15 = Script_ParseEnumReal32_4();
    void item_8;
    void arg_4bc8;
    Script_UndefinedParameterTy(g_a80304, &item_8, &arg_4bc8, data_15, 7, 0);
    int32_t data_17 = Script_ParseEnumString_3();
    void arg_4c1c;
    Script_UndefinedParameterTy(g_a80304, &item_8, &arg_4c1c, data_17, 7, 0);
    void arg_4c10;
    Script_UndefinedParameterTy(g_a80304, &item_8, &arg_4c10, g_a80300, 7, 0);
    int32_t data_19 = Script_ParseEnumString_3();
    void arg_4c2c;
    Script_UndefinedParameterTy(g_a80304, &item_8, &arg_4c2c, data_19, 7, 0);
    int32_t data_20 = Script_ParseEnumString_3();
    void arg_4c20;
    Script_UndefinedParameterTy(g_a80304, &item_8, &arg_4c20, data_20, 7, 0);
    int32_t data_21 = Script_ParseEnumString_3();
    void arg_4c24;
    Script_UndefinedParameterTy(g_a80304, &item_8, &arg_4c24, data_21, 7, 0);
    int32_t data_22 = Script_ParseEnumString_3();
    void arg_4c28;
    return Script_UndefinedParameterTy(g_a80304, &item_8, &arg_4c28, data_22, 7, 0);
}
