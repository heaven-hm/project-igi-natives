#include "gi_platform.h"
#include "004E8370-TerraDrawTask_OnEvent.h"
struct status_msg* TerraDrawTask_OnEvent(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_54d9a0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    return result;
}
