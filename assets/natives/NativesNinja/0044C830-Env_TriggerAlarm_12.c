#include "0044C830-Env_TriggerAlarm_12.h"
/* 0x0044c830 Env_TriggerAlarm_12 full linked: callers=1 callees=3 */
struct status_msg* sub_44c830(void* a1)

{
    int32_t kind = Qhash_Init(1);
    kind = g_57c734;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
