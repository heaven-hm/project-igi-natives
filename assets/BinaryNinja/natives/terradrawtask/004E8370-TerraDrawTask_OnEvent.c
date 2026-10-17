// Original IGI.EXE function: TerraDrawTask_OnEvent (VA 0x004E8370; static CFG gate PASS, CFG score 1.000).
#include "TerraDrawTask_OnEvent.h"
struct status_msg* TerraDrawTask_OnEvent(void* context, uint32_t param_2)

{
    int32_t kind;
    kind = g_54d9a0;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[8] = param_2;
    return result;
}
