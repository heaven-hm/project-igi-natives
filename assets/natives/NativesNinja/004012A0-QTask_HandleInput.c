#include "004012A0-QTask_HandleInput.h"
/* 0x004012a0 QTask_HandleInput full linked: callers=110 callees=2 */
struct status_msg* QTask_HandleInput(void* ctx, int32_t kind, int32_t flags)

{
    int32_t* result = QTask_LinkEventHandler(ctx, kind);

    if (ctx)
        sub_4af8f0(ctx + 8, result);

    int32_t ecx = 0;
    ecx = result[7];
    int32_t eax = *((ecx << 2) + &g_a96ae0);

    if (eax)
        eax(result, flags);

    return result;
}
