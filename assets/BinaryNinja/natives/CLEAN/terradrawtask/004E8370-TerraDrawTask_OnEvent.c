// IGI native provenance: TerraDrawTask_OnEvent - 0x004E8370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8370-TerraDrawTask_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TerraDrawTask_OnEvent.h"
struct status_msg* TerraDrawTask_OnEvent(void* context, uint32_t param_2)

{
    int32_t kind;
    kind = g_54d9a0;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[8] = param_2;
    return result;
}
