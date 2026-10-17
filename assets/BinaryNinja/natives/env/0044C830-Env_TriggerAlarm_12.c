// IGI native provenance: Env_TriggerAlarm_12 - 0x0044C830 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044C830-Env_TriggerAlarm_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_TriggerAlarm_12.h"
struct status_msg* Env_TriggerAlarm_12(void* context)

{
    int32_t kind = Qhash_Init(1);
    kind = g_57c734;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    Qhash_Reset();
    return result;
}
