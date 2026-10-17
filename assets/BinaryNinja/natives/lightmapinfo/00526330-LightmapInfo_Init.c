// Original IGI.EXE function: LightmapInfo_Init (VA 0x00526330; static CFG gate PASS, CFG score 1.000).
#include "LightmapInfo_Init.h"
int32_t LightmapInfo_Init()

{
    int32_t item_104 = 0;
    int16_t data_1 = TaskType_Register("LightmapInfo", 0xe0, QTask_OpenEvent_2(), 0);
    g_54f040 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_523450);
    QTask_TriggerEvent(g_54f040, 3, sub_5236c0);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54f040, data_3, LightmapInfo_LoadParameters);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54f040, data_4, sub_525370);
    g_a83b3c = Script_EvaluateCondition_7(0x15);
    int32_t data_6 = Script_EvaluateCondition_2();
    void item_e0;
    void item_54;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_54, data_6, 7, 0x54f050);
    int32_t data_7 = Script_ParseEnumString_3();
    void item_2c;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_2c, data_7, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_3c;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_3c, data_8, 7, 0);
    int32_t data_9 = Script_ParseEnumString_3();
    void item_40;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_40, data_9, 7, 0);
    int32_t data_10 = Script_EvaluateCondition_2();
    void item_50;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_50, data_10, 7, 0);
    int32_t data_11 = Script_EvaluateCondition_2();
    void item_4c;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_4c, data_11, 7, 0);
    int32_t data_12 = Script_CallNativeHandler_2();
    void item_10;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_10, data_12, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_3();
    void item_68;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_68, data_13, 3, 0);
    int32_t data_14 = Script_SpawnNewTask_2();
    void item_70;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_70, data_14, 6, 0);
    int32_t data_15 = Script_SpawnNewTask_2();
    void item_71;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_71, data_15, 6, 0);
    int32_t data_16 = Script_SpawnNewTask_2();
    void item_6f;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_6f, data_16, 6, 0);
    int32_t data_17 = Script_SpawnNewTask_2();
    void item_73;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_73, data_17, 6, 0);
    int32_t data_18 = Script_SpawnNewTask_2();
    void item_74;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_74, data_18, 6, 0);
    int32_t data_19 = Script_SpawnNewTask_2();
    void item_72;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_72, data_19, 6, 0);
    int32_t data_20 = Script_SpawnNewTask_2();
    void item_76;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_76, data_20, 6, 0);
    int32_t data_21 = Script_SpawnNewTask_2();
    void item_75;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_75, data_21, 6, 0);
    int32_t data_22 = Script_SpawnNewTask_2();
    void item_77;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_77, data_22, 6, 0);
    int32_t data_23 = Script_SpawnNewTask_2();
    void item_78;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_78, data_23, 6, 0);
    int32_t data_24 = Script_ParseEnumString_3();
    void item_38;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_38, data_24, 2, 0);
    int32_t data_25 = Script_ParseEnumString_3();
    void item_34;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_34, data_25, 2, 0);
    int32_t data_26 = Script_ParseEnumString_3();
    void item_30;
    Script_UndefinedParameterTy(g_a83b3c, &item_e0, &item_30, data_26, 2, 0);
    Sys_FreeMemory_2(&g_a83a00, 4, 0x3e8, 0);
    Sys_FreeMemory_2(&g_a83cf8, 4, 0x64, 0);
    Sys_ResolveSymbol_13(0xa83b30);
    int32_t item_fc = 0;

    for (int32_t* i = &g_a83c58; i < &g_a83cf8; )
    {
        Sys_CloseFileStream_12(i, 1.57079637f);
        int32_t item_108_3 = 0;
        Sys_CheckHeap_11(i, i, 0.0f, item_fc * 1.57079637f, 0.0f);
        i = &i[0xa];
        item_fc += 1;
    }

    g_a83a18 = QTask_UnableToAllocateEvent(0x181);
    g_a8397c = QTask_UnableToAllocateEvent(0x181);
    int32_t data_29 = QTask_UnableToAllocateEvent(0x181);
    g_a83b44 = data_29;
    data_29 = g_a83a18;
    int32_t entity_1 = QTask_RemoveEventCallback(Light_SampleLightmap_5(), data_29, sub_525450);
    entity_1 = g_a8397c;
    int32_t temp_24 = QTask_RemoveEventCallback(Light_SampleLightmap_5(), entity_1, LightmapInfo_Setup);
    temp_24 = g_a83b44;
    QTask_RemoveEventCallback(Light_SampleLightmap_5(), temp_24, LightmapInfo_Process);
    int32_t data_33 = DynObj_LookupHashItem_16();
    QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), data_33, LightmapInfo_Update);
    int32_t item_f8 = 0;
    int32_t item_f4 = 0;
    int32_t item_f0 = 0x435c0000;
    int32_t item_ec = 0x42f00000;
    Display_SyncVSync_13(0xa83980, 0x100);
    Display_CheckCapabilities_13(0xa83980, &item_f8);
    g_a83b28 = Mem_Alloc(0x40000, 4);
    int32_t i_1;

    for (i_1 = 0; i_1 < 0x40000; )
    {
        i_1 += 4;
        *(i_1 + g_a83b28 - 4) = 0xffffffff;
    }

    return i_1;
}
