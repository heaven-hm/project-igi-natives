#include "0043CC70-Elevator_Init.h"
/* 0x0043cc70 Elevator_Init full linked: callers=1 callees=47 */
int32_t* Elevator_Init()

{
    int32_t var_658 = 0;
    int16_t eax_1 = TaskType_Register("Elevator", 0x648, sub_4c48c0(), 0);
    g_57c108 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, Elevator_LoadParameters);
    QTask_TriggerEvent(g_57c108, 1, Elevator_Setup);
    QTask_TriggerEvent(g_57c108, 2, sub_43dcf0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c108, eax_3, sub_43dda0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_65c_1 = eax_4;
    eax_4 = g_57c108;
    QTask_RemoveEventCallback(eax_4, var_65c_1, sub_43ddb0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_57c108, eax_5, Elevator_Process);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_57c108, eax_6, Elevator_Update);
    int32_t eax_7 = sub_4c5800();
    int32_t var_65c_4 = eax_7;
    eax_7 = g_57c108;
    QTask_RemoveEventCallback(eax_7, var_65c_4, Elevator_OnEvent);
    int32_t eax_8 = Level_SetMission_3();
    QTask_RemoveEventCallback(g_57c108, eax_8, Elevator_Action);
    g_57c0e8 = 0;
    g_57c0ec = 0x4b189680;
    g_57c0d0 = 0;
    g_57c0d4 = 0x461c4000;
    g_57c0d8 = 0;
    g_57c0dc = 0x3f800000;
    g_57c0e0 = sub_4f1950(0x19);
    int32_t eax_10 = sub_4f1010();
    void var_648;
    void var_558;
    sub_4f1a80(g_57c0e0, &var_648, &var_558, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f70();
    void var_528;
    sub_4f1a80(g_57c0e0, &var_648, &var_528, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fd0();
    void var_4d8;
    sub_4f1a80(g_57c0e0, &var_648, &var_4d8, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fa0();
    void var_4c8;
    sub_4f1a80(g_57c0e0, &var_648, &var_4c8, eax_13, 7, 0);
    int32_t eax_14 = sub_4f1000();
    void var_4bc;
    sub_4f1a80(g_57c0e0, &var_648, &var_4bc, eax_14, 7, 0);
    int32_t eax_15 = sub_4f1000();
    void var_4bb;
    sub_4f1a80(g_57c0e0, &var_648, &var_4bb, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0f50();
    void var_4c0;
    sub_4f1a80(g_57c0e0, &var_648, &var_4c0, eax_16, 7, &g_57c0e8);
    int32_t eax_17 = sub_4f0f50();
    void var_4b4;
    sub_4f1a80(g_57c0e0, &var_648, &var_4b4, eax_17, 7, &g_57c0d0);
    int32_t eax_18 = sub_4f0f50();
    void var_4b0;
    sub_4f1a80(g_57c0e0, &var_648, &var_4b0, eax_18, 7, &g_57c0d8);
    int32_t eax_19 = sub_4f0fc0();
    void var_114;
    sub_4f1a80(g_57c0e0, &var_648, &var_114, eax_19, 7, 0);
    int32_t eax_20 = sub_4f0fc0();
    void var_164;
    sub_4f1a80(g_57c0e0, &var_648, &var_164, eax_20, 7, 0);
    int32_t eax_21 = sub_4f0fc0();
    void var_c4;
    sub_4f1a80(g_57c0e0, &var_648, &var_c4, eax_21, 7, 0);
    int32_t edi = 0;
    void var_484;
    void* ebx = &var_484;

    for (char* i = &g_57bf90; i < &g_57c0d0; )
    {
        int32_t var_658_1 = edi;
        Game_DataSymbolLoad(i, "Wanted floor %d");
        int32_t eax_22 = sub_4f0fc0();
        sub_4f1a80(g_57c0e0, &var_648, ebx, eax_22, 7, 0);
        i = &i[0x20];
        edi += 1;
        ebx += 0x50;
    }

    void var_6f;
    void* esi = &var_6f;
    int32_t i_2 = 3;
    int32_t* result;
    int32_t i_1;

    do
    {
        int32_t eax_24 = sub_4f0fe0();
        result = sub_4f1a80(g_57c0e0, &var_648, esi, eax_24, 7, 0);
        esi += 0x20;
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    return result;
}
