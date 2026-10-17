// Original IGI.EXE function: LightmapInfo_Init (VA 0x00526330; static CFG gate PASS, CFG score 1.000).
#include "LightmapInfo_Init.h"
int32_t LightmapInfo_Init()

{
    int32_t v_104 = 0;
    int16_t valA1 = TaskType_Register("LightmapInfo", 0xe0, QTask_OpenEvent_2(), 0);
    g_54f040 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_523450);
    QTask_TriggerEvent(g_54f040, 3, sub_5236c0);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54f040, valA3, LightmapInfo_LoadParameters);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54f040, valA4, sub_525370);
    g_a83b3c = Script_EvaluateCondition_7(0x15);
    int32_t valA6 = Script_EvaluateCondition_2();
    void v_e0;
    void v_54;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_54, valA6, 7, 0x54f050);
    int32_t valA7 = Script_ParseEnumString_3();
    void v_2c;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_2c, valA7, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    void v_3c;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_3c, valA8, 7, 0);
    int32_t valA9 = Script_ParseEnumString_3();
    void v_40;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_40, valA9, 7, 0);
    int32_t valA10 = Script_EvaluateCondition_2();
    void v_50;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_50, valA10, 7, 0);
    int32_t valA11 = Script_EvaluateCondition_2();
    void v_4c;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_4c, valA11, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_2();
    void v_10;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_10, valA12, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_3();
    void v_68;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_68, valA13, 3, 0);
    int32_t valA14 = Script_SpawnNewTask_2();
    void v_70;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_70, valA14, 6, 0);
    int32_t valA15 = Script_SpawnNewTask_2();
    void v_71;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_71, valA15, 6, 0);
    int32_t valA16 = Script_SpawnNewTask_2();
    void v_6f;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_6f, valA16, 6, 0);
    int32_t valA17 = Script_SpawnNewTask_2();
    void v_73;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_73, valA17, 6, 0);
    int32_t valA18 = Script_SpawnNewTask_2();
    void v_74;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_74, valA18, 6, 0);
    int32_t valA19 = Script_SpawnNewTask_2();
    void v_72;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_72, valA19, 6, 0);
    int32_t valA20 = Script_SpawnNewTask_2();
    void v_76;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_76, valA20, 6, 0);
    int32_t valA21 = Script_SpawnNewTask_2();
    void v_75;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_75, valA21, 6, 0);
    int32_t valA22 = Script_SpawnNewTask_2();
    void v_77;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_77, valA22, 6, 0);
    int32_t valA23 = Script_SpawnNewTask_2();
    void v_78;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_78, valA23, 6, 0);
    int32_t valA24 = Script_ParseEnumString_3();
    void v_38;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_38, valA24, 2, 0);
    int32_t valA25 = Script_ParseEnumString_3();
    void v_34;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_34, valA25, 2, 0);
    int32_t valA26 = Script_ParseEnumString_3();
    void v_30;
    Script_UndefinedParameterTy(g_a83b3c, &v_e0, &v_30, valA26, 2, 0);
    Sys_FreeMemory_2(&g_a83a00, 4, 0x3e8, 0);
    Sys_FreeMemory_2(&g_a83cf8, 4, 0x64, 0);
    Sys_ResolveSymbol_13(0xa83b30);
    int32_t v_fc = 0;

    for (int32_t* i = &g_a83c58; i < &g_a83cf8; )
    {
        Sys_CloseFileStream_12(i, 1.57079637f);
        int32_t v_108_3 = 0;
        Sys_CheckHeap_11(i, i, 0f, v_fc * 1.57079637f, 0f);
        i = &i[0xa];
        v_fc += 1;
    }

    g_a83a18 = QTask_UnableToAllocateEvent(0x181);
    g_a8397c = QTask_UnableToAllocateEvent(0x181);
    int32_t valA29 = QTask_UnableToAllocateEvent(0x181);
    g_a83b44 = valA29;
    valA29 = g_a83a18;
    int32_t objC1 = QTask_RemoveEventCallback(Light_SampleLightmap_5(), valA29, sub_525450);
    objC1 = g_a8397c;
    int32_t tmpD24 = QTask_RemoveEventCallback(Light_SampleLightmap_5(), objC1, LightmapInfo_Setup);
    tmpD24 = g_a83b44;
    QTask_RemoveEventCallback(Light_SampleLightmap_5(), tmpD24, LightmapInfo_Process);
    int32_t valA33 = DynObj_LookupHashItem_16();
    QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), valA33, LightmapInfo_Update);
    int32_t v_f8 = 0;
    int32_t v_f4 = 0;
    int32_t v_f0 = 0x435c0000;
    int32_t v_ec = 0x42f00000;
    Display_SyncVSync_13(0xa83980, 0x100);
    Display_CheckCapabilities_13(0xa83980, &v_f8);
    g_a83b28 = Mem_Alloc(0x40000, 4);
    int32_t i_1;

    for (i_1 = 0; i_1 < 0x40000; )
    {
        i_1 += 4;
        *(i_1 + g_a83b28 - 4) = 0xffffffff;
    }

    return i_1;
}
