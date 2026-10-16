#include "gi_platform.h"
#include "00446450-Env_TriggerAlarm_8.h"
int32_t Env_TriggerAlarm_8(int32_t* a1, int32_t a2)

{
    *a1 = a2 + 0x20;
    a1[1] = a2 + 0x70;
    return a2 + 0x70;
}
