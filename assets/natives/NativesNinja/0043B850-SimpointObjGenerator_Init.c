#include "0043B850-SimpointObjGenerator_Init.h"
/* 0x0043b850 SimpointObjGenerator_Init full linked: callers=1 callees=34 */
int32_t* SimpointObjGenerator_Init()

{
    int32_t var_15c = 0;
    int16_t eax_1 = TaskType_Register("SimpointObjGenerator", 0x158, sub_4c48c0(), 0);
    g_53c31c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, SimpointObjGenerator_LoadParameters);
    QTask_TriggerEvent(g_53c31c, 1, SimpointObjGenerator_Setup);
    QTask_TriggerEvent(g_53c31c, 2, sub_426860);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53c31c, eax_3, sub_43be50);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_160_1 = eax_4;
    eax_4 = g_53c31c;
    QTask_RemoveEventCallback(eax_4, var_160_1, SimpointObjGenerator_Process);
    g_57bf60 = sub_4f1950(0xd);
    g_57bf48 = 0;
    g_57bf4c = 0x3f800000;
    g_57bf68 = 0;
    g_57bf6c = 0x3f800000;
    g_57bf70 = 0;
    g_57bf74 = 0x447a0000;
    g_57bf58 = 0;
    g_57bf5c = 0x258;
    g_57bf50 = 0;
    g_57bf54 = 0x12c;
    int32_t eax_6 = sub_4f1010();
    void var_158;
    void var_138;
    sub_4f1a80(g_57bf60, &var_158, &var_138, eax_6, 7, 0);
    int32_t eax_8 = sub_4f0f70();
    void var_e8;
    sub_4f1a80(g_57bf60, &var_158, &var_e8, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fd0();
    void var_64;
    sub_4f1a80(g_57bf60, &var_158, &var_64, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fd0();
    void var_54;
    sub_4f1a80(g_57bf60, &var_158, &var_54, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fd0();
    void var_44;
    sub_4f1a80(g_57bf60, &var_158, &var_44, eax_14, 7, 0);
    int32_t eax_16 = sub_4f0fa0();
    void var_34;
    sub_4f1a80(g_57bf60, &var_158, &var_34, eax_16, 7, &g_57bf58);
    int32_t eax_18 = sub_4f0fa0();
    void var_30;
    sub_4f1a80(g_57bf60, &var_158, &var_30, eax_18, 7, &g_57bf50);
    int32_t eax_20 = sub_4f0f50();
    void var_2c;
    sub_4f1a80(g_57bf60, &var_158, &var_2c, eax_20, 7, &g_57bf48);
    int32_t eax_22 = sub_4f0f50();
    void var_28;
    sub_4f1a80(g_57bf60, &var_158, &var_28, eax_22, 7, &g_57bf68);
    int32_t eax_24 = sub_4f0f50();
    void var_24;
    sub_4f1a80(g_57bf60, &var_158, &var_24, eax_24, 7, &g_57bf70);
    int32_t eax_26 = sub_4f0f60();
    void var_1c;
    sub_4f1a80(g_57bf60, &var_158, &var_1c, eax_26, 7, 0);
    int32_t eax_28 = sub_4f0f60();
    void var_10;
    return sub_4f1a80(g_57bf60, &var_158, &var_10, eax_28, 7, 0);
}
