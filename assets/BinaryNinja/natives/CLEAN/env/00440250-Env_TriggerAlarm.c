// IGI native provenance: Env_TriggerAlarm - 0x00440250 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440250-Env_TriggerAlarm.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_TriggerAlarm.h"
int32_t Env_TriggerAlarm()

{
    QTask_CloseEvent_2(g_57c154);
    return DynObj_CreateMagicObject_4(g_57c150);
}
