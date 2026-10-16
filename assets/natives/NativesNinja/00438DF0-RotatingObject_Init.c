#include "00438DF0-RotatingObject_Init.h"
/* 0x00438df0 RotatingObject_Init full linked: callers=1 callees=38 */
int32_t* RotatingObject_Init()

{
    int32_t var_204 = 0;
    int16_t eax_1 = TaskType_Register("RotatingObject", 0x200, sub_4c48c0(), 0);
    g_57be98 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_438c30);
    QTask_TriggerEvent(g_57be98, 1, RotatingObject_LoadParameters);
    QTask_TriggerEvent(g_57be98, 2, RotatingObject_Setup);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_57be98, eax_3, RotatingObject_Process);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_208_1 = eax_4;
    eax_4 = g_57be98;
    QTask_RemoveEventCallback(eax_4, var_208_1, sub_439750);
    int32_t eax_5 = sub_4e6610();
    QTask_RemoveEventCallback(g_57be98, eax_5, sub_439770);
    int32_t eax_6 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57be98, eax_6, sub_439790);
    g_57be90 = sub_4f1950(0xc);
    int32_t eax_8 = sub_4f1010();
    void var_200;
    void var_78;
    sub_4f1a80(g_57be90, &var_200, &var_78, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_a0;
    sub_4f1a80(g_57be90, &var_200, &var_a0, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fd0();
    void var_f0;
    sub_4f1a80(g_57be90, &var_200, &var_f0, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fd0();
    void var_110;
    sub_4f1a80(g_57be90, &var_200, &var_110, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0f30();
    void var_e0;
    sub_4f1a80(g_57be90, &var_200, &var_e0, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0f30();
    void var_dc;
    sub_4f1a80(g_57be90, &var_200, &var_dc, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0f30();
    void var_d8;
    sub_4f1a80(g_57be90, &var_200, &var_d8, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0f30();
    void var_d4;
    sub_4f1a80(g_57be90, &var_200, &var_d4, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0f30();
    void var_d0;
    sub_4f1a80(g_57be90, &var_200, &var_d0, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f30();
    void var_cc;
    sub_4f1a80(g_57be90, &var_200, &var_cc, eax_17, 7, 0);
    int32_t eax_18 = sub_4f1000();
    void var_c8;
    sub_4f1a80(g_57be90, &var_200, &var_c8, eax_18, 7, 0);
    int32_t eax_19 = sub_4f0fc0();
    void var_54;
    return sub_4f1a80(g_57be90, &var_200, &var_54, eax_19, 7, 0);
}
