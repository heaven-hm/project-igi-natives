// Original IGI.EXE function: FX_SmokeEmit_5 (VA 0x00484D40; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_5.h"
struct status_msg* FX_SmokeEmit_5(void* context, uint32_t param_2)

{
    int32_t kind;
    kind = g_540990;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[0x19] = param_2;
    return result;
}
