#include "0044C8D0-HumanAI_Init.h"
/* 0x0044c8d0 HumanAI_Init full linked: callers=1 callees=34 */
❓  void* sub_44c8d0()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x3ed0);
    int32_t __saved_edi = 0;
    int16_t eax_1 = TaskType_Register("HumanAI", 0x3ed0, QTask_OpenEvent_2(), 0);
    g_53c920 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_44f060);
    QTask_TriggerEvent(g_53c920, 1, sub_44f410);
    QTask_TriggerEvent(g_53c920, 2, sub_44ffc0);
    int32_t eax_3 = sub_450c80();
    QTask_RemoveEventCallback(g_53c920, eax_3, sub_450110);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_14_1 = eax_4;
    eax_4 = g_53c920;
    QTask_RemoveEventCallback(eax_4, var_14_1, sub_4505c0);
    int32_t eax_5 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53c920, eax_5, sub_4505d0);
    int32_t eax_6 = sub_4f1210();
    QTask_TriggerEvent(g_53c920, eax_6, sub_450770);
    int32_t eax_7 = sub_4f1220();
    int32_t var_14_4 = eax_7;
    eax_7 = g_53c920;
    QTask_TriggerEvent(eax_7, var_14_4, sub_4507d0);
    QTask_RemoveEventCallback(g_53c920, 4, 0);
    g_58a9d4 = sub_4f1950(3);
    int32_t eax_9 = sub_4f0fe0();
    void arg_3d15;
    sub_4f1a80(g_58a9d4, &__return_addr, &arg_3d15, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void arg_3b68;
    sub_4f1a80(g_58a9d4, &__return_addr, &arg_3b68, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f10();
    void arg_3b70;
    sub_4f1a80(g_58a9d4, &__return_addr, &arg_3b70, eax_11, 2, 0);
    AI_RegisterActions();
    sub_44eeb0();
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
        sub_4af8f0(&g_58a9c8, i_1);
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
        sub_4af8f0(&g_58a9e8, i_3);
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
        sub_4af8f0(&g_57d758, i_4);
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
        sub_4af8f0(&g_57c748, i_5);
        int32_t** eax_13 = &i_5[3];
        int32_t* ecx_6 = &i_5[4];
        i_5 = &i_5[6];
        *eax_13 = ecx_6;
        i_5[-1] = eax_13;
        *ecx_6 = 0;
        i_5[-4] = 0;
    }

    void* result;

    for (int32_t* i_6 = &g_57cd58; i_6 < &g_57d758; i_6 = &i_6[5])
    {
        i_6[1] = 0;
        *i_6 = 0;
        result = sub_4af8f0(&g_57e1b8, i_6);
        i_6[3] = 0xffffffff;
        i_6[2] = 0xffffffff;
        i_6[4] = 0;
    }

    __builtin_memset(&g_5bda38, 0, 0x20);
    return result;
}
