#include "gi_platform.h"
#include "0044C8D0-HumanAI_Init.h"
  void* HumanAI_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x3ed0);
    int32_t saved_dst = 0;
    int16_t valA1 = TaskType_Register("HumanAI", 0x3ed0, QTask_OpenEvent_2(), 0);
    g_53c920 = valA1;
    QTask_RemoveEventCallback(valA1, 0, HumanAI_LoadParameters);
    QTask_TriggerEvent(g_53c920, 1, HumanAI_Setup);
    QTask_TriggerEvent(g_53c920, 2, HumanAI_Process);
    int32_t valA3 = AI_CheckHearing();
    QTask_RemoveEventCallback(g_53c920, valA3, HumanAI_EventOffer);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_14_1 = valA4;
    valA4 = g_53c920;
    QTask_RemoveEventCallback(valA4, v_14_1, sub_4505c0);
    int32_t valA5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53c920, valA5, HumanAI_OnEvent);
    int32_t valA6 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c920, valA6, HumanAI_Action);
    int32_t valA7 = Script_SpawnNewTask_6();
    int32_t v_14_4 = valA7;
    valA7 = g_53c920;
    QTask_TriggerEvent(valA7, v_14_4, HumanAI_Cleanup);
    QTask_RemoveEventCallback(g_53c920, 4, 0);
    g_58a9d4 = Script_EvaluateCondition_7(3);
    int32_t valA9 = Script_FormatString_3();
    char arg_3d15;
    Script_UndefinedParameterTy(g_58a9d4, &__return_addr, &arg_3d15, valA9, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    char arg_3b68;
    Script_UndefinedParameterTy(g_58a9d4, &__return_addr, &arg_3b68, valA10, 7, 0);
    int32_t valA11 = Script_ParseEnumReal32_2();
    char arg_3b70;
    Script_UndefinedParameterTy(g_58a9d4, &__return_addr, &arg_3b70, valA11, 2, 0);
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
        __builtin_memset(&i_3[8], 0, 0x640);
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
        int32_t** valA13 = &i_5[3];
        int32_t* objC6 = &i_5[4];
        i_5 = &i_5[6];
        *valA13 = objC6;
        i_5[-1] = valA13;
        *objC6 = 0;
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

    __builtin_memset(&g_5bda38, 0, 0x20);
    return result;
}
