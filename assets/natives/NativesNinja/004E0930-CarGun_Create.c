#include "004E0930-CarGun_Create.h"
/* 0x004e0930 CarGun_Create full linked: callers=12 callees=1 */
struct status_msg* sub_4e0930(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_a5e364;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    return result;
}
