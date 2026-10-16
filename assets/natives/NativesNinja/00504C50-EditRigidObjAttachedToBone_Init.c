#include "00504C50-EditRigidObjAttachedToBone_Init.h"
/* 0x00504c50 EditRigidObjAttachedToBone_Init full linked: callers=1 callees=18 */
int32_t* sub_504c50()

{
    int32_t var_13c = 0;
    int16_t eax_1 = TaskType_Register("EditRigidObjAttachedToBone", 0x138, sub_4c48c0(), 0);
    g_ba8084 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_504ad0);
    QTask_TriggerEvent(g_ba8084, 2, sub_51b940);
    QTask_TriggerEvent(g_ba8084, 1, sub_4c1780);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_ba8084, eax_3, sub_504bb0);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_140_1 = eax_4;
    eax_4 = g_ba8084;
    QTask_RemoveEventCallback(eax_4, var_140_1, sub_504c40);
    g_ba8080 = sub_4f1950(4);
    int32_t eax_6 = sub_4f0f60();
    void var_138;
    void var_48;
    sub_4f1a80(g_ba8080, &var_138, &var_48, eax_6, 7, 0);
    int32_t eax_8 = sub_4f0f70();
    void var_3c;
    sub_4f1a80(g_ba8080, &var_138, &var_3c, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void var_14;
    sub_4f1a80(g_ba8080, &var_138, &var_14, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fd0();
    void var_10;
    return sub_4f1a80(g_ba8080, &var_138, &var_10, eax_12, 7, 0);
}
