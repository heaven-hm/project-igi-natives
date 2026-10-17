// Original IGI.EXE function: Env_TriggerAlarm (VA 0x00440250; static CFG gate PASS, CFG score 1.000).
#include "Env_TriggerAlarm.h"
int32_t Env_TriggerAlarm()

{
    QTask_CloseEvent_2(g_57c154);
    return DynObj_CreateMagicObject_4(g_57c150);
}
