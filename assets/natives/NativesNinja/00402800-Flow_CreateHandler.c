#include "00402800-Flow_CreateHandler.h"
/* 0x00402800 Flow_CreateHandler full linked: callers=1 callees=1 */
struct status_msg* Flow_CreateHandler(void* a1)

{
    int32_t kind;
    kind = g_567c7c;
    return QTask_HandleInput(a1, kind, 0);
}
