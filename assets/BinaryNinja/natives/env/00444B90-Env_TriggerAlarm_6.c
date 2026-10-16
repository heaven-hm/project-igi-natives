#include "Env_TriggerAlarm_6.h"
void* Env_TriggerAlarm_6(void* a1)

{
    *(a1 + 0x128) = 1;
    return a1;
}
