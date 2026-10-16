#include "00485330-StatusMessage_Init.h"
/* 0x00485330 StatusMessage_Init full linked: callers=1 callees=32 */
int32_t* sub_485330()

{
    int32_t var_1e4 = 0;
    int16_t eax_1 = TaskType_Register("StatusMessage", 0x1e0, sub_5034d0(), 0);
    g_status_word = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_485570);
    QTask_TriggerEvent(g_status_word, 1, sub_4855f0);
    QTask_TriggerEvent(g_status_word, 2, sub_4856d0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_status_word, eax_3, sub_485740);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_1e8_1 = eax_4;
    eax_4 = g_status_word;
    QTask_RemoveEventCallback(eax_4, var_1e8_1, StatusMessage_Enqueue);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_status_word, eax_5, sub_485770);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_status_word, eax_6, sub_485870);
    g_5c8a34 = 0x42c80000;
    g_5c8a30 = 0;
    g_5c8a38 = sub_4f1950(9);
    int32_t eax_8 = sub_4f1010();
    void var_1e0;
    void var_1c0;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_1c0, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_1a8;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_1a8, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fc0();
    void var_180;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_180, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fc0();
    void var_130;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_130, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0ff0();
    void var_12c;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_12c, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fd0();
    void var_2c;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_2c, eax_13, 7, 0);
    int32_t eax_14 = sub_4f1000();
    void var_1c;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_1c, eax_14, 7, 0);
    int32_t eax_15 = sub_4f1000();
    void var_1a;
    sub_4f1a80(g_5c8a38, &var_1e0, &var_1a, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0f50();
    void var_8;
    return sub_4f1a80(g_5c8a38, &var_1e0, &var_8, eax_16, 7, &g_5c8a30);
}
