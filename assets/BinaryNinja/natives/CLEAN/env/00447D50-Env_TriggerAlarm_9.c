// IGI native provenance: Env_TriggerAlarm_9 - 0x00447D50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00447D50-Env_TriggerAlarm_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_TriggerAlarm_9.h"
void* Env_TriggerAlarm_9(void* context)

{
    void* result = context;
    result = *(result + 0x13c);
    return result;
}
