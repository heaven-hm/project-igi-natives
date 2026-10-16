#include "004E8370-TerraDrawTask_OnEvent.h"
/* 0x004e8370 TerraDrawTask_OnEvent full linked: callers=3 callees=1 */
struct status_msg* sub_4e8370(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_54d9a0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    return result;
}
