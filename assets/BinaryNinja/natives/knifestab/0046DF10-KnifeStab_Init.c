// Original IGI.EXE function: KnifeStab_Init (VA 0x0046DF10; static CFG gate PASS, CFG score 1.000).
#include "KnifeStab_Init.h"
void* KnifeStab_Init()

{
    int32_t item_4 = 0;
    g_53fe84 = TaskType_Register("KnifeStab", 0x20, Script_ExecuteLevelScript_16(), 0);
    int32_t data_2 = HumanPlayer_UpdateHealth_10();
    int32_t item_8 = data_2;
    data_2 = g_53fe84;
    QTask_RemoveEventCallback(data_2, item_8, sub_46df70);
    return TaskType_Set("TASKTYPE_KNIFESTAB", *g_53fe84);
}
