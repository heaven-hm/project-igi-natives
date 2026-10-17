// IGI native provenance: Env_TriggerAlarm_8 - 0x00446450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00446450-Env_TriggerAlarm_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_TriggerAlarm_8.h"
int32_t Env_TriggerAlarm_8(int32_t* context, int32_t param_2)

{
    *context = param_2 + 0x20;
    context[1] = param_2 + 0x70;
    return param_2 + 0x70;
}
