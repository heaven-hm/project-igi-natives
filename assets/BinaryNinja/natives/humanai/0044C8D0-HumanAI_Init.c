// Original IGI.EXE function: HumanAI_Init (VA 0x0044C8D0; static CFG gate PASS, CFG score 0.980).
#include "HumanAI_Init.h"
❓  void* HumanAI_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x3ed0);
    int32_t saved_target = 0;
    int16_t data_1 = TaskType_Register("HumanAI", 0x3ed0, QTask_OpenEvent_2(), 0);
    g_53c920 = data_1;
    QTask_RemoveEventCallback(data_1, 0, HumanAI_LoadParameters);
    QTask_TriggerEvent(g_53c920, 1, HumanAI_Setup);
    QTask_TriggerEvent(g_53c920, 2, HumanAI_Process);
    int32_t data_3 = AI_CheckHearing();
    QTask_RemoveEventCallback(g_53c920, data_3, HumanAI_EventOffer);
    int32_t data_4 = Script_ParseEnumInt32_8();
    int32_t item_14_1 = data_4;
    data_4 = g_53c920;
    QTask_RemoveEventCallback(data_4, item_14_1, sub_4505c0);
    int32_t data_5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53c920, data_5, HumanAI_OnEvent);
    int32_t data_6 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c920, data_6, HumanAI_Action);
    int32_t data_7 = Script_SpawnNewTask_6();
    int32_t item_14_4 = data_7;
    data_7 = g_53c920;
    QTask_TriggerEvent(data_7, item_14_4, HumanAI_Cleanup);
    QTask_RemoveEventCallback(g_53c920, 4, 0);
    g_58a9d4 = Script_EvaluateCondition_7(3);
    int32_t data_9 = Script_FormatString_3();
    void arg_3d15;
    Script_UndefinedParameterTy(g_58a9d4, &return_addr, &arg_3d15, data_9, 7, 0);
    int32_t data_10 = Script_ParseEnumString_3();
    void arg_3b68;
    Script_UndefinedParameterTy(g_58a9d4, &return_addr, &arg_3b68, data_10, 7, 0);
    int32_t data_11 = Script_ParseEnumReal32_2();
    void arg_3b70;
    Script_UndefinedParameterTy(g_58a9d4, &return_addr, &arg_3b70, data_11, 2, 0);
    AIAction_Patrol_2();
    AIEVENT_CREATE();
    g_58a9d8 = &g_58a9dc;
    g_58a9e0 = &g_58a9d8;
    g_58a9dc = 0;

    for (char* i = &g_57d840; i < &g_57e1c0; i = &i[0x130])
        *i = 0;

    g_58a9c8 = &g_58a9cc;
    g_58a9d0 = &g_58a9c8;
    g_58a9cc = 0;

    for (int32_t* i_1 = &g_57e1c8; i_1 < &g_58a9c8; i_1 = &i_1[0xa])
    {
        i_1[1] = 0;
        *i_1 = 0;
        Camera_SetFieldOfView_33(&g_58a9c8, i_1);
    }

    for (int32_t i_2 = 0; i_2 < 0x24; i_2 += 4)
        *(i_2 + &g_58a9f4) = Qvm_Load(*(i_2 + &g_53c928));

    g_57d768 = &g_57d76c;
    g_57d770 = &g_57d768;
    g_57d76c = 0;
    g_58a9e8 = &g_58a9ec;
    g_58a9f0 = &g_58a9e8;
    g_58a9ec = 0;

    for (int32_t* i_3 = &g_58aa28; i_3 < &g_5bda28; )
    {
        i_3[1] = 0;
        *i_3 = 0;
        Camera_SetFieldOfView_33(&g_58a9e8, i_3);
        i_3 = &i_3[0x198];
        memset(&i_3[8], 0, 0x640);
        i_3[-0x196] = 0xffffffff;
        i_3[-0x195] = 0xffffffff;
        i_3[-0x193] = 0;
        i_3[-0x192] = 0;
        i_3[-0x194] = 0;
    }

    g_5bda28 = &g_5bda2c;
    g_5bda30 = &g_5bda28;
    g_5bda2c = 0;
    g_57d758 = &g_57d75c;
    g_57d760 = &g_57d758;
    g_57d75c = 0;

    for (int32_t* i_4 = &g_57d778; i_4 < 0x57d838; i_4 = &i_4[3])
    {
        i_4[1] = 0;
        *i_4 = 0;
        Camera_SetFieldOfView_33(&g_57d758, i_4);
    }

    g_58aa18 = &g_58aa1c;
    g_58aa20 = &g_58aa18;
    g_58aa1c = 0;
    g_57c748 = &g_57c74c;
    g_57c750 = &g_57c748;
    g_57c74c = 0;
    g_57e1b8 = &g_57e1bc;
    g_57e1c0 = &g_57e1b8;
    g_57e1bc = 0;

    for (int32_t* i_5 = &g_57c758; i_5 < &g_57cd58; )
    {
        i_5[1] = 0;
        *i_5 = 0;
        Camera_SetFieldOfView_33(&g_57c748, i_5);
        int32_t** data_13 = &i_5[3];
        int32_t* entity_6 = &i_5[4];
        i_5 = &i_5[6];
        *data_13 = entity_6;
        i_5[-1] = data_13;
        *entity_6 = 0;
        i_5[-4] = 0;
    }

    void* result;

    for (int32_t* i_6 = &g_57cd58; i_6 < &g_57d758; i_6 = &i_6[5])
    {
        i_6[1] = 0;
        *i_6 = 0;
        result = Camera_SetFieldOfView_33(&g_57e1b8, i_6);
        i_6[3] = 0xffffffff;
        i_6[2] = 0xffffffff;
        i_6[4] = 0;
    }

    memset(&g_5bda38, 0, 0x20);
    return result;
}
