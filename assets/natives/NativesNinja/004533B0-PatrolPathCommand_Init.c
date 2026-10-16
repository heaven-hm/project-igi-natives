#include "004533B0-PatrolPathCommand_Init.h"
/* 0x004533b0 PatrolPathCommand_Init full linked: callers=1 callees=12 */
int32_t* sub_4533b0()

{
    int32_t var_2c = 0;
    int16_t eax_1 = TaskType_Register("PatrolPathCommand", 0x28, QTask_OpenEvent_2(), 0);
    g_53dfcc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_453470);
    int32_t eax_2 = sub_4f1a60();
    int32_t var_30 = eax_2;
    eax_2 = g_53dfcc;
    QTask_RemoveEventCallback(eax_2, var_30, sub_453480);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53dfcc, eax_3, sub_453490);
    g_5bda68 = sub_4f1950(2);
    int32_t eax_5 = sub_4f0fa0();
    void var_28;
    void var_8;
    sub_4f1a80(g_5bda68, &var_28, &var_8, eax_5, 7, 0);
    int32_t eax_6 = sub_4f0fa0();
    void var_4;
    return sub_4f1a80(g_5bda68, &var_28, &var_4, eax_6, 7, 0);
}
