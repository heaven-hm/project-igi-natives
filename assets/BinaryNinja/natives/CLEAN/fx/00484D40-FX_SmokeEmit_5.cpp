// IGI native provenance: FX_SmokeEmit_5 - 0x00484D40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00484D40-FX_SmokeEmit_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit_5.h"
struct status_msg* FX_SmokeEmit_5(void* context, uint32_t param_2)

{
    int32_t kind;
    kind = g_540990;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[0x19] = param_2;
    return result;
}
