#include "gi_platform.h"
#include "00518EF0-Water_Init.h"
int32_t* Water_Init()

{
    Camera_UpdateTransform_5(0x4c48);
    g_a81020 = 0;

    for (int32_t* i = &g_a80430; i < 0xa81030; i = &i[0xc])
    {
        i[-0xa] = 0xffffffff;
        *i = 0;
        __builtin_memset(&i[-8], 0, 0x18);
    }

    int32_t v_10 = 0;
    int16_t valA1 = TaskType_Register("Water", 0x4c48, DynObj_LookupHashItem_5(), 0);
    g_a81014 = valA1;
    QTask_RemoveEventCallback(valA1, 0xf, sub_518b00);
    QTask_RemoveEventCallback(g_a81014, 0x10, sub_518b40);
    QTask_RemoveEventCallback(g_a81014, 0, sub_518b90);
    QTask_TriggerEvent(g_a81014, 1, sub_518c90);
    QTask_RemoveEventCallback(g_a81014, 4, sub_518a00);
    QTask_RemoveEventCallback(g_a81014, 5, sub_518ab0);
    QTask_RemoveEventCallback(g_a81014, 7, sub_519220);
    QTask_TriggerEvent(g_a81014, 2, sub_5191e0);
    int32_t valA5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a81014, valA5, sub_519210);
    int32_t valA6 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a81014, valA6, Water_LoadParameters);
    QTask_RemoveEventCallback(g_a81014, 0xa, Water_Setup);
    QTask_RemoveEventCallback(g_a81014, 0xb, sub_518e50);
    int32_t valA8 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a81014, valA8, 0);
    QTask_RemoveEventCallback(g_a81014, 9, 0);
    QTask_RemoveEventCallback(g_a81014, 0xc, 0);
    int32_t valA10 = SoundSys_PlaySoundSample_3();
    QTask_RemoveEventCallback(g_a81014, valA10, Water_Process);
    QTask_DispatchEvent_3(0x40000000);
    QTask_RegisterEventCallback_3(g_a81014, 0x40000000);
    g_a80304 = Script_EvaluateCondition_7(0x10);
    g_a80300 = Script_UnableToAllocatePara("WaterLevel", Script_EvaluateCondition_2());
    int32_t valA15 = Script_ParseEnumReal32_4();
    char v_8;
    char arg_4bc8;
    Script_UndefinedParameterTy(g_a80304, &v_8, &arg_4bc8, valA15, 7, 0);
    int32_t valA17 = Script_ParseEnumString_3();
    char arg_4c1c;
    Script_UndefinedParameterTy(g_a80304, &v_8, &arg_4c1c, valA17, 7, 0);
    char arg_4c10;
    Script_UndefinedParameterTy(g_a80304, &v_8, &arg_4c10, g_a80300, 7, 0);
    int32_t valA19 = Script_ParseEnumString_3();
    char arg_4c2c;
    Script_UndefinedParameterTy(g_a80304, &v_8, &arg_4c2c, valA19, 7, 0);
    int32_t valA20 = Script_ParseEnumString_3();
    char arg_4c20;
    Script_UndefinedParameterTy(g_a80304, &v_8, &arg_4c20, valA20, 7, 0);
    int32_t valA21 = Script_ParseEnumString_3();
    char arg_4c24;
    Script_UndefinedParameterTy(g_a80304, &v_8, &arg_4c24, valA21, 7, 0);
    int32_t valA22 = Script_ParseEnumString_3();
    char arg_4c28;
    return Script_UndefinedParameterTy(g_a80304, &v_8, &arg_4c28, valA22, 7, 0);
}
