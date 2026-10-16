#include "00465A10-HumanAttach_Init.h"
/* 0x00465a10 HumanAttach_Init full linked: callers=1 callees=12 */
int32_t sub_465a10()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("HumanAttach", 0x140, sub_504db0(), 0);
    g_5bdc48 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_465ac0);
    QTask_TriggerEvent(g_5bdc48, 1, sub_465ae0);
    int32_t eax_3 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_5bdc48, eax_3, sub_465b00);
    int32_t eax_4 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5bdc48, eax_4, sub_45f920);
    int32_t eax_5 = Level_CheckQTaskID_3();
    int32_t var_8_2 = eax_5;
    eax_5 = g_5bdc48;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_45f920);
    int32_t eax_6 = sub_489610();
    return QTask_RemoveEventCallback(g_5bdc48, eax_6, sub_465b80);
}
