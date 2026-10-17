// Original IGI.EXE function: Env_TriggerAlarm_6 (VA 0x00444B90; static CFG gate PASS, CFG score 1.000).
#include "Env_TriggerAlarm_6.h"
void* Env_TriggerAlarm_6(void* a1)

{
    *(a1 + 0x128) = 1;
    return a1;
}
