#include "QTask_HandleInput.h"
struct status_msg* QTask_HandleInput(void* ctx, int32_t kind, int32_t flags)

{
    int32_t* result = QTask_LinkEventHandler(ctx, kind);

    if (ctx)
        Camera_SetFieldOfView_33(ctx + 8, result);

    int32_t objC = 0;
    objC = result[7];
    int32_t valA = *((objC << 2) + &g_a96ae0);

    if (valA)
        valA(result, flags);

    return result;
}
