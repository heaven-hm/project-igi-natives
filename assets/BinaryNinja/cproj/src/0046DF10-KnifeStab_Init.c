#include "gi_platform.h"
#include "0046DF10-KnifeStab_Init.h"
void* KnifeStab_Init()

{
    int32_t v_4 = 0;
    g_53fe84 = TaskType_Register("KnifeStab", 0x20, Script_ExecuteLevelScript_16(), 0);
    int32_t valA2 = HumanPlayer_UpdateHealth_10();
    int32_t v_8 = valA2;
    valA2 = g_53fe84;
    QTask_RemoveEventCallback(valA2, v_8, sub_46df70);
    return TaskType_Set("TASKTYPE_KNIFESTAB", *g_53fe84);
}
