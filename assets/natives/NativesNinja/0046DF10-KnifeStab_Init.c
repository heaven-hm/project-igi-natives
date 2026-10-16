#include "0046DF10-KnifeStab_Init.h"
/* 0x0046df10 KnifeStab_Init full linked: callers=1 callees=5 */
void* sub_46df10()

{
    int32_t var_4 = 0;
    g_53fe84 = TaskType_Register("KnifeStab", 0x20, sub_4f45f0(), 0);
    int32_t eax_2 = HumanPlayer_UpdateHealth_10();
    int32_t var_8 = eax_2;
    eax_2 = g_53fe84;
    QTask_RemoveEventCallback(eax_2, var_8, sub_46df70);
    return TaskType_Set("TASKTYPE_KNIFESTAB", *g_53fe84);
}
