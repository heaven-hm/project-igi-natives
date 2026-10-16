#include "gi_platform.h"
#include "00484D40-FX_SmokeEmit_5.h"
struct status_msg* FX_SmokeEmit_5(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_540990;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[0x19] = a2;
    return result;
}
