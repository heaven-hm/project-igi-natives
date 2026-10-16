#include "gi_platform.h"
#include "00444B90-Env_TriggerAlarm_6.h"
void* Env_TriggerAlarm_6(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x128)) = 1;
    return a1;
}
