#include "gi_platform.h"
#include "00402800-Flow_CreateHandler.h"
struct status_msg* Flow_CreateHandler(void* a1)

{
    int32_t kind;
    kind = g_567c7c;
    return QTask_HandleInput(a1, kind, 0);
}
