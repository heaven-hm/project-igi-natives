// IGI native provenance: CarGun_Create - 0x004E0930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E0930-CarGun_Create.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CarGun_Create.h"
struct status_msg* CarGun_Create(void* context, uint32_t param_2)

{
    int32_t kind;
    kind = g_a5e364;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[8] = param_2;
    return result;
}
