// Original IGI.EXE function: Env_TriggerAlarm_6 (VA 0x00444B90; static CFG gate PASS, CFG score 1.000).
#include "Env_TriggerAlarm_6.h"
void* Env_TriggerAlarm_6(void* context)

{
    *(context + 0x128) = 1;
    return context;
}
