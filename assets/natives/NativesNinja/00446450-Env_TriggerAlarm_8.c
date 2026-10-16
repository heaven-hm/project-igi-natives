#include "00446450-Env_TriggerAlarm_8.h"
/* 0x00446450 Env_TriggerAlarm_8 full linked: callers=1 callees=0 */
int32_t sub_446450(int32_t* a1, int32_t a2)

{
    *a1 = a2 + 0x20;
    a1[1] = a2 + 0x70;
    return a2 + 0x70;
}
