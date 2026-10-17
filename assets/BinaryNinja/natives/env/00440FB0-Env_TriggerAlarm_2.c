// IGI native provenance: Env_TriggerAlarm_2 - 0x00440FB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440FB0-Env_TriggerAlarm_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_TriggerAlarm_2.h"
uint32_t Env_TriggerAlarm_2()

{
    DynObj_CreateMagicObject_4(g_57c170);
    return QTask_CloseEvent_2(g_57c174);
}
