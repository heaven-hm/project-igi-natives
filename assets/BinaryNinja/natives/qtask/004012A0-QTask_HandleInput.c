// IGI native provenance: QTask_HandleInput - 0x004012A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004012A0-QTask_HandleInput.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_HandleInput.h"
struct status_msg* QTask_HandleInput(void* ctx, int32_t kind, int32_t flags)

{
    int32_t* result = QTask_LinkEventHandler(ctx, kind);

    if (ctx)
        Camera_SetFieldOfView_33(ctx + 8, result);

    int32_t entity_val = 0;
    entity_val = result[7];
    int32_t data_val = *((entity_val << 2) + &g_a96ae0);

    if (data_val)
        data_val(result, flags);

    return result;
}
