// IGI native provenance: Env_TriggerAlarm_6 - 0x00444B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00444B90-Env_TriggerAlarm_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_TriggerAlarm_6.h"
void* Env_TriggerAlarm_6(void* context)

{
    *(context + 0x128) = 1;
    return context;
}
