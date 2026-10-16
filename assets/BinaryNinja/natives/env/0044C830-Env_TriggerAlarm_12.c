#include "Env_TriggerAlarm_12.h"
struct status_msg* Env_TriggerAlarm_12(void* a1)

{
    int32_t kind = Qhash_Init(1);
    kind = g_57c734;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
