// Original IGI.EXE function: Env_TriggerAlarm_8 (VA 0x00446450; static CFG gate PASS, CFG score 1.000).
#include "Env_TriggerAlarm_8.h"
int32_t Env_TriggerAlarm_8(int32_t* context, int32_t param_2)

{
    *context = param_2 + 0x20;
    context[1] = param_2 + 0x70;
    return param_2 + 0x70;
}
