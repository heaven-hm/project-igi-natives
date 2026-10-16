#include "00484D40-FX_SmokeEmit_5.h"
/* 0x00484d40 FX_SmokeEmit_5 full linked: callers=1 callees=1 */
struct status_msg* sub_484d40(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_540990;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[0x19] = a2;
    return result;
}
