#include "0043E8D0-GenericPhysicsObj_Init.h"
/* 0x0043e8d0 GenericPhysicsObj_Init full linked: callers=1 callees=27 */
void* GenericPhysicsObj_Init()

{
    int32_t var_724 = 0;
    int16_t eax_1 = TaskType_Register("GenericPhysicsObj", 0x720, sub_4fb5e0(), 0);
    g_53c4a8 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_43eaa0);
    QTask_TriggerEvent(g_53c4a8, 1, GenericPhysicsObj_LoadParameters);
    QTask_TriggerEvent(g_53c4a8, 2, GenericPhysicsMagicObj_Setup);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53c4a8, eax_3, sub_43ec20);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_728_1 = eax_4;
    eax_4 = g_53c4a8;
    QTask_RemoveEventCallback(eax_4, var_728_1, GenericPhysicsObj_Process);
    int32_t eax_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_53c4a8, eax_5, GenericPhysicsObj_Update_2);
    int32_t eax_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53c4a8, eax_6, GenericPhysicsMagicObj_Update);
    g_57c13c = sub_4f1950(0x14);
    int32_t eax_8 = sub_4f1010();
    void var_720;
    void var_5b8;
    sub_4f1a80(g_57c13c, &var_720, &var_5b8, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_6b0;
    sub_4f1a80(g_57c13c, &var_720, &var_6b0, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0f60();
    void var_5a0;
    sub_4f1a80(g_57c13c, &var_720, &var_5a0, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fd0();
    void var_5cc;
    sub_4f1a80(g_57c13c, &var_720, &var_5cc, eax_11, 7, 0);
    int32_t eax_12 = sub_4f1000();
    void var_48;
    sub_4f1a80(g_57c13c, &var_720, &var_48, eax_12, 7, 0);
    int32_t eax_13 = sub_4f1000();
    void var_47;
    sub_4f1a80(g_57c13c, &var_720, &var_47, eax_13, 7, 0);
    return TaskType_Set("TASKTYPE_GENERICPHYSICSOBJ", *g_53c4a8);
}
