// Original IGI.EXE function: QTask_HandleInput (VA 0x004012A0; static CFG gate PASS, CFG score 1.000).
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
