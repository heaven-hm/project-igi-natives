// Original IGI.EXE function: Env_TriggerAlarm_8 (VA 0x00446450; static CFG gate PASS, CFG score 1.000).
#include "Env_TriggerAlarm_8.h"
int32_t Env_TriggerAlarm_8(int32_t* a1, int32_t a2)

{
    *a1 = a2 + 0x20;
    a1[1] = a2 + 0x70;
    return a2 + 0x70;
}
